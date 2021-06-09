#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Engine/TargetPoint.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BehaviorTree.h"
#include "MonsterAI.generated.h"

UCLASS()
class AMonsterAI : public AAIController
{
	GENERATED_BODY()

public:
	AMonsterAI();

	virtual void BeginPlay() override;
	virtual void OnPossess(APawn* pawn) override;

	void NextMove();
	void FindPlayer(AActor* player);

private:
	ATargetPoint* GetRandomWaypoint();

private:
	UPROPERTY()
		TArray<AActor*> _waypoints;

	UBlackboardData* _blackboard;
	UBehaviorTree* _behaviorTree;
};