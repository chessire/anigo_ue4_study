#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AttackWave.generated.h"

DECLARE_DELEGATE(FNextWaveDelegate)

UCLASS(BlueprintType, EditInlineNew, DefaultToInstanced)
class UAttackWave : public UObject
{
	GENERATED_BODY()
public:
	UAttackWave();

	void ProgressAttackWave(FVector location, FNextWaveDelegate nextWaveDelegate);

	UFUNCTION()
		void GenerateMonster();

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Display, meta = (AllowPrivateAccess = "true"))
		float _time = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Display, meta = (AllowPrivateAccess = "true"))
		int64 _monsterID = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Display, meta = (AllowPrivateAccess = "true"))
		TArray<class ATargetPoint*> _waypoints;

	UPROPERTY()
		FVector _location;

	UPROPERTY()
		FTimerHandle _handle;

	FNextWaveDelegate _nextWaveDelegate;
};