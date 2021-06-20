#include "MonsterHpBar.h"

void UMonsterHpBar::NativeTick(const FGeometry& myGeometry, float dt)
{
	_hpBar->SetPercent(_monster->GetHpPercent());
}