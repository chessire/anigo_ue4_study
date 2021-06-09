#include "TaskMoveToPatrolPos.h"
#include "AIController.h"
#include "Math/UnrealMathUtility.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "MonsterAI.h"
#include "MonsterDefine.h"

UTaskMoveToPatrolPos::UTaskMoveToPatrolPos()
	: Super()
{
	NodeName = TEXT("FindPatrolPos");
	bNotifyTick = true;
}

EBTNodeResult::Type	UTaskMoveToPatrolPos::ExecuteTask(UBehaviorTreeComponent& owner, uint8* nodeMemory)
{
	EBTNodeResult::Type Result = Super::ExecuteTask(owner, nodeMemory);
	if (EBTNodeResult::Failed == Result ||
		EBTNodeResult::Aborted == Result)
		return Result;

	auto monsterAI = Cast<AMonsterAI>(owner.GetAIOwner());
	if (nullptr == monsterAI)
		return EBTNodeResult::Failed;

	monsterAI->NextMove();

	return EBTNodeResult::InProgress;
}

void UTaskMoveToPatrolPos::TickTask(UBehaviorTreeComponent& owner, uint8* nodeMemory, float dt)
{
	auto monsterAI = Cast<AMonsterAI>(owner.GetAIOwner());
	if (nullptr == monsterAI)
		return;

	if (EPathFollowingStatus::Moving != monsterAI->GetMoveStatus())
		FinishLatentTask(owner, EBTNodeResult::Succeeded);
}
