#pragma once

#include "Blueprint/UserWidget.h"
#include "Engine/DataTable.h"
#include "WidgetBlueprint.h"
#include "WidgetTable.generated.h"

USTRUCT(BlueprintType)
struct FWidgetTableRow : public FTableRowBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widget")
	TSoftObjectPtr<UWidgetBlueprint> widget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widget")
	int zOrder;
};
