#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Monster.generated.h"

UCLASS()
class AMonster : public ACharacter
{
	GENERATED_BODY()

public:
	AMonster();

	virtual void BeginPlay() override;

private:

};