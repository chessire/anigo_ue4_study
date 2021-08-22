#include "MonsterAI.h"
#include "MonsterDefine.h"
#include "Kismet/GameplayStatics.h"
#include "Math/UnrealMathUtility.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "TimerManager.h"
#include "Tables/MonsterTable.h"

AMonsterAI::AMonsterAI()
	: Super()
{
}

void AMonsterAI::BeginPlay()
{
	Super::BeginPlay();

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATargetPoint::StaticClass(), _waypoints);
}

void AMonsterAI::Initialize(const FMonsterTableRow* monsterData)
{
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
	if (_waypoints.Num() == 0)
		return nullptr;

	int index = FMath::RandRange(0, _waypoints.Num() - 1);
	UE_LOG(LogTemp, Warning, TEXT("RandomWaypoint : %d"), index);
	return Cast<ATargetPoint>(_waypoints[index]);
}
