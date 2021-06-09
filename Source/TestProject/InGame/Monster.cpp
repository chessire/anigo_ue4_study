#include "Monster.h"
#include "Components/CapsuleComponent.h"
#include "MonsterAI.h"
#include "TestProjectCharacter.h"

AMonster::AMonster()
	: Super()
{
	_playerChecker = CreateDefaultSubobject<USphereComponent>(TEXT("PlayerChecker"));
	_playerChecker->InitSphereRadius(300.f);
	_playerChecker->BodyInstance.SetCollisionProfileName("PlayerChecker");
	_playerChecker->SetupAttachment(GetCapsuleComponent());
	_playerChecker->SetCollisionObjectType(ECC_GameTraceChannel3);

	AIControllerClass = AMonsterAI::StaticClass();
}

void AMonster::BeginPlay()
{
	Super::BeginPlay();

	_playerChecker->OnComponentBeginOverlap.AddDynamic(this, &AMonster::FindPlayer);
}

void AMonster::FindPlayer(UPrimitiveComponent* myComp, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool fromSweep, const FHitResult & sweepResult)
{
	auto character = Cast<ATestProjectCharacter>(otherActor);
	auto monsterAI = Cast<AMonsterAI>(Controller);

	if (nullptr == character || nullptr == monsterAI)
		return;

	monsterAI->FindPlayer(character);
}