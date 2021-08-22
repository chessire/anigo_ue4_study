#pragma once

#include "Engine/GameInstance.h"
#include "WidgetBlueprint.h"
#include "TestProjectGameInstance.generated.h"

struct FWidgetTableRow;
struct FMonsterTableRow;

class UTestProjectAssetManager;

UCLASS()
class UTestProjectGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	virtual void Init() override;

	UTestProjectAssetManager* GetAssetManager() { return _assetManager; }
	const FWidgetTableRow* GetWidget(FName key) const { return _widgetDataTable[key]; }
	const FMonsterTableRow* GetMonsterData(int64 key) const { return _monsterDataTable[key]; }

private:
	void InitDataTables();

private:
	TMap<FName, FWidgetTableRow*> _widgetDataTable;
	TMap<int64, FMonsterTableRow*> _monsterDataTable;
	UTestProjectAssetManager* _assetManager;
};
