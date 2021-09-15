#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Engine/TargetPoint.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BehaviorTree.h"
#include "MonsterAI.generated.h"

struct FMonsterTableRow;

UCLASS()
class AMonsterAI : public AAIController
{
	GENERATED_BODY()

public:
	AMonsterAI();

	void Initialize(class AMonster* owner, const FMonsterTableRow* monsterData);
	void NextMove();
	void FindPlayer(AActor* player);

private:
	ATargetPoint* GetRandomWaypoint();

private:
	class AMonster* _owner;
	UBlackboardData* _blackboard;
	UBehaviorTree* _behaviorTree;
};
