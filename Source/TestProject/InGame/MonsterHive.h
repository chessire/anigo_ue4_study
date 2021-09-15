#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "GameFramework/Actor.h"
#include "MonsterHive.generated.h"

UCLASS()
class AMonsterHive : public AActor
{
	GENERATED_UCLASS_BODY()

#if WITH_EDITORONLY_DATA
private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Display, meta = (AllowPrivateAccess = "true"))
		class UBillboardComponent* SpriteComponent;

public:
	/** Returns SpriteComponent subobject **/
	class UBillboardComponent* GetSpriteComponent() const;
#endif

public:
	virtual void BeginPlay() override;

	void NextWave();

private:
	UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	TArray<class UAttackWave*> _attackWaves;

	UPROPERTY()
	int32 _waveCount = 0;
};
