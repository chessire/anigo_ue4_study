#include "TestProjectGameInstance.h"
#include "TestProjectAssetManager.h"
#include "Tables/WidgetTable.h"
#include "Tables/MonsterTable.h"

void UTestProjectGameInstance::Init()
{
	Super::Init();

	_assetManager = NewObject<UTestProjectAssetManager>();

	InitDataTables();
}

void UTestProjectGameInstance::InitDataTables()
{
	// initailize widget table
	UDataTable* widgetTable = LoadObject<UDataTable>(nullptr, TEXT("DataTable'/Game/FirstPerson/Tables/WidgetTable.WidgetTable'"));

	TArray<FName> widgetRowNames = widgetTable->GetRowNames();

	for (int i = 0; i < widgetRowNames.Num(); ++i)
	{
		FWidgetTableRow* widgetTableRow = widgetTable->FindRow<FWidgetTableRow>(widgetRowNames[i], widgetRowNames[i].ToString());
		_widgetDataTable.Add(widgetRowNames[i], widgetTableRow);
	}

	UDataTable* monsterTable = LoadObject<UDataTable>(nullptr, TEXT("DataTable'/Game/FirstPerson/Tables/MonsterTable.MonsterTable'"));

	TArray<FName> monsterRowNames = monsterTable->GetRowNames();

	for (int i = 0; i < monsterRowNames.Num(); ++i)
	{
		FMonsterTableRow* monsterTableRow = monsterTable->FindRow<FMonsterTableRow>(monsterRowNames[i], monsterRowNames[i].ToString());
		_monsterDataTable.Add(monsterTableRow->id, monsterTableRow);
	}
}
