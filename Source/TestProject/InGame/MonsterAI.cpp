#include "MonsterAI.h"
#include "MonsterDefine.h"
#include "Kismet/GameplayStatics.h"
#include "Math/UnrealMathUtility.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "TimerManager.h"
#include "Tables/MonsterTable.h"
#include "Monster.h"

AMonsterAI::AMonsterAI()
	: Super()
{
}

void AMonsterAI::Initialize(class AMonster* owner, const FMonsterTableRow* monsterData)
{
	_owner = owner;
	_blackboard = monsterData->blackboard;
	_behaviorTree = monsterData->behaviorTree;

	if (UseBlackboard(_blackboard, Blackboard) == false || RunBehaviorTree(_behaviorTree) == false)
	{
		UE_LOG(LogTemp, Warning, TEXT("BehaviorTree cannot run."));
	}
}

void AMonsterAI::NextMove()
{
	MoveToActor(GetRandomWaypoint());
}

void AMonsterAI::FindPlayer(AActor* player)
{
	GetBlackboardComponent()->SetValueAsObject(Monster::TargetKey, player);
}

ATargetPoint* AMonsterAI::GetRandomWaypoint()
{
	const TArray<class ATargetPoint*>& waypoints = _owner->GetWaypoints();
	if (waypoints.Num() == 0)
		return nullptr;

	int index = FMath::RandRange(0, waypoints.Num() - 1);
	UE_LOG(LogTemp, Warning, TEXT("RandomWaypoint : %d"), index);
	return Cast<ATargetPoint>(waypoints[index]);
}
