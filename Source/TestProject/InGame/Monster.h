#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Components/SphereComponent.h"
#include "Monster.generated.h"

UCLASS()
class AMonster : public ACharacter
{
	GENERATED_BODY()

public:
	AMonster();

	virtual void BeginPlay() override;

	virtual void Tick(float dt) override;

	UFUNCTION()
	void FindPlayer(UPrimitiveComponent* myComp, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool fromSweep, const FHitResult & sweepResult);

	float GetHpPercent() { return _currentHp * _invMaxHp; }

	void Hit(uint32 damage);

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	int64 _id = 0;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	USphereComponent* _playerChecker = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UWidgetComponent* _hpWidgetComp = nullptr;

	UPROPERTY(VisibleAnywhere)
	class UMonsterHpBar* _hpWidget = nullptr;

	UPROPERTY()
	class AMonsterAI* _monsterAI = nullptr;

	UPROPERTY()
	int64 _currentHp = 0;

	UPROPERTY()
	float _invMaxHp = 0.f;

	UPROPERTY()
	int64 _armor = 0;
};
