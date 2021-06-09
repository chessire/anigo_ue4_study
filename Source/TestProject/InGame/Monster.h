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

	UFUNCTION()
	void FindPlayer(UPrimitiveComponent* myComp, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool fromSweep, const FHitResult & sweepResult);


private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	USphereComponent* _playerChecker = nullptr;
};
