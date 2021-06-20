#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/ProgressBar.h"
#include "InGame/Monster.h"
#include "MonsterHpBar.generated.h"

class AMonster;

UCLASS()
class UMonsterHpBar : public UUserWidget
{
	GENERATED_BODY()
public:
	void SetOwner(AMonster* monster) { _monster = monster; }

protected:
	virtual void NativeTick(const FGeometry& myGeometry, float dt) override;

	UPROPERTY(meta = (BindWidgetOptional, OverrideNativeName = "HpBar"))
	UProgressBar* _hpBar;

	TWeakObjectPtr<AMonster> _monster;

};