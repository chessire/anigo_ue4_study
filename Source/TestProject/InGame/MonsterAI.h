#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Engine/TargetPoint.h"
#include "Engine/EngineTypes.h"
#include "MonsterAI.generated.h"

UCLASS()
class AMonsterAI : public AAIController
{
	GENERATED_BODY()

public:
	AMonsterAI();

	virtual void BeginPlay() override;

	ATargetPoint* GetRandomWaypoint();
	void GoToRandomWaypoint();

	void OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result) override;

private:
	UPROPERTY()
		TArray<AActor*> _waypoints;

	FTimerHandle _timerHandle;
};