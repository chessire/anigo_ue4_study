#pragma once


#include "Blueprint/UserWidget.h"
#include "Components/ProgressBar.h"
#include "Delegates/IDelegateInstance.h" //--
#include "HudMain.generated.h"

UCLASS()
class UHudMain : public UUserWidget
{
	GENERATED_BODY()
public:
	void Init();
	void Destroy();

private:
	bool Tick(float dt);

private:
	UPROPERTY(meta = (BindWidgetOptional, OverrideNativeName = "Timer"))
	UProgressBar* _timer;

	FDelegateHandle _tick_handle; //--
};