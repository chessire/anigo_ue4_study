#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "Engine/TargetPoint.h"
#include "Engine/EngineTypes.h"
#include "TaskMoveToPatrolPos.generated.h"

UCLASS()
class UTaskMoveToPatrolPos : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UTaskMoveToPatrolPos();

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& owner, uint8* nodeMemory) override;
	
	virtual void TickTask(UBehaviorTreeComponent& owner, uint8* nodeMemory, float dt) override;
};