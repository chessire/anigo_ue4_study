#pragma once

#include "Engine/AssetManager.h"
#include "TestProjectAssetManager.generated.h"

DECLARE_DELEGATE_OneParam(FStreamableClassDelegate, UClass*)

UCLASS()
class UTestProjectAssetManager : public UAssetManager
{
	GENERATED_BODY()

public:
	UClass* LoadSync(FSoftObjectPath path);
	void LoadAsync(FSoftObjectPath path, FStreamableClassDelegate callback);
};
