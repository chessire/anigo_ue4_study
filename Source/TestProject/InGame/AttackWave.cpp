#include "AttackWave.h"
#include "Kismet/GameplayStatics.h"
#include "Monster.h"
#include "System/TestProjectGameInstance.h"
#include "Tables/MonsterTable.h"
#include "System/TestProjectAssetManager.h"

UAttackWave::UAttackWave()
{
}

void UAttackWave::ProgressAttackWave(FVector location, FNextWaveDelegate nextWaveDelegate)
{
	_location = location;
	_nextWaveDelegate = nextWaveDelegate;

	GetWorld()->GetTimerManager().SetTimer(_handle, this, &UAttackWave::GenerateMonster, _time);
}

void UAttackWave::GenerateMonster()
{
	if (UTestProjectGameInstance* gameInst = Cast<UTestProjectGameInstance>(UGameplayStatics::GetGameInstance(this)))
	{
		const FMonsterTableRow* monsterRow = gameInst->GetMonsterData(_monsterID);

		FSoftObjectPath resolvedPath(monsterRow->monster.ToSoftObjectPath().ToString() + TEXT("_C"));
		gameInst->GetAssetManager()->LoadAsync(resolvedPath, FStreamableClassDelegate::CreateLambda(
			[this](UClass* loadedClass) {
				FRotator rotator = FRotator::ZeroRotator;
				AMonster* monster = GetWorld()->SpawnActor<AMonster>(loadedClass, _location, rotator);
				monster->SpawnDefaultController();

				monster->Initialize(_monsterID, _waypoints);
			}));

		_nextWaveDelegate.Execute();
	}
}
