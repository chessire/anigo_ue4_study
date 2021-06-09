#include "MonsterAI.h"
#include "Kismet/GameplayStatics.h"
#include "Math/UnrealMathUtility.h"
#include "TimerManager.h"

AMonsterAI::AMonsterAI()
	: Super()
{
}

void AMonsterAI::BeginPlay()
{
	Super::BeginPlay();

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATargetPoint::StaticClass(), _waypoints);

	GoToRandomWaypoint();
}

ATargetPoint* AMonsterAI::GetRandomWaypoint()
{
	if (_waypoints.Num() == 0)
		return nullptr;

	int index = FMath::RandRange(0, _waypoints.Num() - 1);
	UE_LOG(LogTemp, Warning, TEXT("RandomWaypoint : %d"), index);
	return Cast<ATargetPoint>(_waypoints[index]);
}

void AMonsterAI::OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result)
{
	Super::OnMoveCompleted(RequestID, Result);

	GetWorldTimerManager().SetTimer(_timerHandle, this, &AMonsterAI::GoToRandomWaypoint, 1.0f, false);
}

void AMonsterAI::GoToRandomWaypoint()
{
	MoveToActor(GetRandomWaypoint());
}
