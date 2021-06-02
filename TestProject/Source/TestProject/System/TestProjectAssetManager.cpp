#include "TestProjectAssetManager.h"


// #todo
UClass* UTestProjectAssetManager::LoadSync(FSoftObjectPath path)
{
	return Cast<UClass>(StreamableManager.LoadSynchronous(path));
}

void UTestProjectAssetManager::LoadAsync(FSoftObjectPath path, FStreamableClassDelegate callback)
{
	StreamableManager.RequestAsyncLoad(path, [this, path, callback]()
	{
		TSoftObjectPtr<UClass> targetClass(path);
		if (targetClass == nullptr)
			return;

		callback.ExecuteIfBound(targetClass.Get());
	});
}