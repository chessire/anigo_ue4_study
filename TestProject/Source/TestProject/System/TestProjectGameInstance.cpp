#include "TestProjectGameInstance.h"
#include "TestProjectAssetManager.h"
#include "Tables/WidgetTable.h"

void UTestProjectGameInstance::Init()
{
	Super::Init();

	// #todo
	_assetManager = NewObject<UTestProjectAssetManager>();

	InitDataTables();
}

void UTestProjectGameInstance::InitDataTables()
{
	// initailize widget table
	UDataTable* widgetTable = LoadObject<UDataTable>(nullptr, TEXT("DataTable'/Game/FirstPerson/Tables/WidgetTable.WidgetTable'"));

	TArray<FName> RowNames = widgetTable->GetRowNames();

	for (int i = 0; i < RowNames.Num(); ++i)
	{
		FWidgetTableRow* widgetTableRow = widgetTable->FindRow<FWidgetTableRow>(RowNames[i], RowNames[i].ToString());
		_widgetDataTable.Add(RowNames[i], widgetTableRow);
	}
}
