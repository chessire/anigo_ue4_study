// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestProjectHUD.h"
#include "TestProjectGameInstance.h"
#include "TestProjectAssetManager.h"
#include "Tables/WidgetTable.h"
#include "UObject/ConstructorHelpers.h"

ATestProjectHUD::ATestProjectHUD()
{
}

// #todo
void ATestProjectHUD::BeginPlay()
{
	if (UTestProjectGameInstance* gameInst = Cast<UTestProjectGameInstance>(GetGameInstance()))
	{
		const FWidgetTableRow* widgetTableRow = gameInst->GetWidget(TEXT("HUD_Main"));
		FSoftClassPath classPath(widgetTableRow->widget.ToSoftObjectPath().ToString() + TEXT("_C"));

		UClass* widgetClass = nullptr;
		if (UClass* preloadedWidgetClass = classPath.ResolveClass())
		{
			_hudMain = CreateWidget<UHudMain>(GetWorld(), preloadedWidgetClass);
			_hudMain->AddToViewport(widgetTableRow->zOrder);

			_hudMain->Init(); //--
		}
		else if (UTestProjectAssetManager* assetManager = gameInst->GetAssetManager())
		{
			assetManager->LoadAsync(classPath, FStreamableClassDelegate::CreateLambda([this, widgetTableRow](UClass* loadedClass)
				{
					_hudMain = CreateWidget<UHudMain>(GetWorld(), loadedClass);
					_hudMain->AddToViewport(widgetTableRow->zOrder);

					_hudMain->Init(); //--
				}));
		}
	}
}

//--
void ATestProjectHUD::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	_hudMain->Destroy();
}
//--