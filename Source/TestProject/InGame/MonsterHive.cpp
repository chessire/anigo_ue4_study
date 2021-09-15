#include "MonsterHive.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/ArrowComponent.h"
#include "Components/BillboardComponent.h"
#include "Engine/Texture2D.h"
#include "AttackWave.h"

AMonsterHive::AMonsterHive(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	USceneComponent* SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));

	RootComponent = SceneComponent;

#if WITH_EDITORONLY_DATA
	SpriteComponent = CreateEditorOnlyDefaultSubobject<UBillboardComponent>(TEXT("Sprite"));

	if (!IsRunningCommandlet())
	{
		// Structure to hold one-time initialization
		struct FConstructorStatics
		{
			ConstructorHelpers::FObjectFinderOptional<UTexture2D> TargetIconSpawnObject;
			ConstructorHelpers::FObjectFinderOptional<UTexture2D> TargetIconObject;
			FName ID_MonsterHive;
			FText NAME_MonsterHive;
			FConstructorStatics()
				: TargetIconSpawnObject(TEXT("/Engine/EditorMaterials/TargetIconSpawn"))
				, TargetIconObject(TEXT("/Engine/EditorMaterials/TargetIcon"))
				, ID_MonsterHive(TEXT("MonsterHive"))
				, NAME_MonsterHive(NSLOCTEXT("SpriteCategory", "MonsterHive", "Monster Hive"))
			{
			}
		};
		static FConstructorStatics ConstructorStatics;

		if (SpriteComponent)
		{
			SpriteComponent->Sprite = ConstructorStatics.TargetIconObject.Get();
			SpriteComponent->SetRelativeScale3D_Direct(FVector(0.35f, 0.35f, 0.35f));
			SpriteComponent->SpriteInfo.Category = ConstructorStatics.ID_MonsterHive;
			SpriteComponent->SpriteInfo.DisplayName = ConstructorStatics.NAME_MonsterHive;
			SpriteComponent->bIsScreenSizeScaled = true;

			SpriteComponent->SetupAttachment(SceneComponent);
		}
	}
#endif // WITH_EDITORONLY_DATA

	SetHidden(true);
	SetCanBeDamaged(false);
}

#if WITH_EDITORONLY_DATA
/** Returns SpriteComponent subobject **/
UBillboardComponent* AMonsterHive::GetSpriteComponent() const { return SpriteComponent; }
#endif

void AMonsterHive::BeginPlay()
{
	Super::BeginPlay();
	NextWave();
}

void AMonsterHive::NextWave()
{
	if (_attackWaves.Num() <= _waveCount)
		return;

	_attackWaves[_waveCount++]->ProgressAttackWave(GetActorLocation(),
		FNextWaveDelegate::CreateUObject(this, &AMonsterHive::NextWave));
}
