// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TestProjectGameMode.generated.h"

USTRUCT()
struct FTest
{
	GENERATED_BODY()
};

UENUM()
enum ETest_enum
{
	COUNT,
};

UCLASS()
class ATestProjectGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ATestProjectGameMode();
};



