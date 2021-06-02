#include "HudMain.h"
#include "Containers/Ticker.h" //-- 

void UHudMain::Init()
{
	_tick_handle = FTicker::GetCoreTicker().AddTicker(FTickerDelegate::CreateUObject(this, &UHudMain::Tick));
}

void UHudMain::Destroy()
{
	if (_tick_handle.IsValid())
	{
		FTicker::GetCoreTicker().RemoveTicker(_tick_handle);
		_tick_handle.Reset();
	}
}

bool UHudMain::Tick(float dt)
{
	float percent = _timer->Percent - dt * 0.1f;

	if (percent < 0.f)
	{
		percent = 0.f;
		// game over logic
	}
	_timer->SetPercent(percent);

	return true;
}