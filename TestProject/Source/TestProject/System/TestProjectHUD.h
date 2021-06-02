// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "UI/HudMain.h"
#include "TestProjectHUD.generated.h"

UCLASS()
class ATestProjectHUD : public AHUD
{
	GENERATED_BODY()

public:
	ATestProjectHUD();

	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

private:
	UPROPERTY()
	UHudMain* _hudMain;
};

