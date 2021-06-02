#pragma once

#include "Engine/GameInstance.h"
#include "WidgetBlueprint.h"
#include "TestProjectGameInstance.generated.h"

struct FWidgetTableRow;

class UTestProjectAssetManager;

UCLASS()
class UTestProjectGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	virtual void Init() override;

	// #todo
	UTestProjectAssetManager* GetAssetManager() { return _assetManager; }
	const FWidgetTableRow* GetWidget(FName key) const { return _widgetDataTable[key]; }

private:
	void InitDataTables();

private:
	// #todo
	TMap<FName, FWidgetTableRow*> _widgetDataTable;
	UTestProjectAssetManager* _assetManager;
};
