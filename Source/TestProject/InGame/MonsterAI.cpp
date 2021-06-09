#include "MonsterAI.h"
#include "MonsterDefine.h"
#include "Kismet/GameplayStatics.h"
#include "Math/UnrealMathUtility.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "TimerManager.h"

AMonsterAI::AMonsterAI()
	: Super()
{
	static ConstructorHelpers::FObjectFinder<UBlackboardData> blackboard(TEXT("BlackboardData'/Game/FirstPerson/AI/BB_Monster00.BB_Monster00'"));
	if (blackboard.Succeeded())
	{
		_blackboard = blackboard.Object;
	}

	static ConstructorHelpers::FObjectFinder<UBehaviorTree> behaviorTree(TEXT("BehaviorTree'/Game/FirstPerson/AI/BT_Monster00.BT_Monster00'"));
	if (behaviorTree.Succeeded())
	{
		_behaviorTree = behaviorTree.Object;
	}
}

void AMonsterAI::BeginPlay()
{
	Super::BeginPlay();

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATargetPoint::StaticClass(), _waypoints);
}

void AMonsterAI::OnPossess(APawn* pawn)
{
	Super::OnPossess(pawn);

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
