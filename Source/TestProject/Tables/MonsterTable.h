#pragma once

#include "Engine/DataTable.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTree.h"
#include "MonsterTable.generated.h"

USTRUCT(BlueprintType)
struct FMonsterTableRow : public FTableRowBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Monster")
	int64 id = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Monster")
	int64 hp = 100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Monster")
	float damage = 10.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Monster")
	int64 armor = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Monster")
	float speed = 300.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Monster")
	float detect_range = 300.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Monster")
	TSoftObjectPtr<UBlueprint> monster = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Monster")
	UBlackboardData* blackboard = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Monster")
	UBehaviorTree* behaviorTree = nullptr;
};
