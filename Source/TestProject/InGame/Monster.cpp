#include "Monster.h"
#include "MonsterAI.h"
#include "UI/MonsterHpBar.h"
#include "System/TestProjectGameInstance.h"
#include "System/TestProjectAssetManager.h"
#include "Tables/WidgetTable.h"
#include "TestProjectCharacter.h"
#include "Components/WidgetComponent.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"

#pragma optimize("", off)

AMonster::AMonster()
	: Super()
{
	_playerChecker = CreateDefaultSubobject<USphereComponent>(TEXT("PlayerChecker"));
	_playerChecker->InitSphereRadius(300.f);
	_playerChecker->BodyInstance.SetCollisionProfileName("PlayerChecker");
	_playerChecker->SetupAttachment(GetCapsuleComponent());
	_playerChecker->SetCollisionObjectType(ECC_GameTraceChannel3);

	_hpWidgetComp = CreateDefaultSubobject<UWidgetComponent>(TEXT("HpBar"));
	_hpWidgetComp->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

	PrimaryActorTick.bCanEverTick = true;

	AIControllerClass = AMonsterAI::StaticClass();

}

void AMonster::BeginPlay()
{
	Super::BeginPlay();

	if (UTestProjectGameInstance* gameInst = Cast<UTestProjectGameInstance>(GetGameInstance()))
	{
		if (UTestProjectAssetManager* assetMgr = Cast<UTestProjectAssetManager>(gameInst->GetAssetManager()))
		{
			const FWidgetTableRow* widgetTableRow = gameInst->GetWidget(TEXT("Monster_HP"));
			FSoftClassPath classPath(widgetTableRow->widget.ToSoftObjectPath().ToString() + TEXT("_C"));
			_hpWidgetComp->SetWidgetClass(assetMgr->LoadSync(classPath));

			_hpWidgetComp->InitWidget();
			_hpWidget = Cast<UMonsterHpBar>(_hpWidgetComp->GetUserWidgetObject());
			_hpWidget->SetOwner(this);
		}
	}

	_playerChecker->OnComponentBeginOverlap.AddDynamic(this, &AMonster::FindPlayer);

	uint32 maxHP = 100;
	_currentHp = maxHP;
	_invMaxHp = 1.f / maxHP;
}

void AMonster::Tick(float dt)
{
	if (APlayerController* playerController = GetGameInstance()->GetFirstLocalPlayerController())
	{
		FRotator rotWidget = UKismetMathLibrary::FindLookAtRotation(
			_hpWidgetComp->GetComponentLocation(),
			playerController->PlayerCameraManager->GetCameraLocation());
		_hpWidgetComp->SetWorldRotation(rotWidget);
	}
}

void AMonster::FindPlayer(UPrimitiveComponent* myComp, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool fromSweep, const FHitResult & sweepResult)
{
	auto character = Cast<ATestProjectCharacter>(otherActor);
	auto monsterAI = Cast<AMonsterAI>(Controller);

	if (nullptr == character || nullptr == monsterAI)
		return;

	monsterAI->FindPlayer(character);
}

void AMonster::Hit(uint32 damage)
{
	_currentHp -= damage;
	if (_currentHp <= 0)
	{
		Destroy();
	}
}