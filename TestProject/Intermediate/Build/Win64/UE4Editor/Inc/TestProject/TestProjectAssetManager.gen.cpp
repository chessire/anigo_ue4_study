// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject/System/TestProjectAssetManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestProjectAssetManager() {}
// Cross Module References
	TESTPROJECT_API UClass* Z_Construct_UClass_UTestProjectAssetManager_NoRegister();
	TESTPROJECT_API UClass* Z_Construct_UClass_UTestProjectAssetManager();
	ENGINE_API UClass* Z_Construct_UClass_UAssetManager();
	UPackage* Z_Construct_UPackage__Script_TestProject();
// End Cross Module References
	void UTestProjectAssetManager::StaticRegisterNativesUTestProjectAssetManager()
	{
	}
	UClass* Z_Construct_UClass_UTestProjectAssetManager_NoRegister()
	{
		return UTestProjectAssetManager::StaticClass();
	}
	struct Z_Construct_UClass_UTestProjectAssetManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestProjectAssetManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetManager,
		(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestProjectAssetManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "System/TestProjectAssetManager.h" },
		{ "ModuleRelativePath", "System/TestProjectAssetManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestProjectAssetManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestProjectAssetManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTestProjectAssetManager_Statics::ClassParams = {
		&UTestProjectAssetManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTestProjectAssetManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestProjectAssetManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestProjectAssetManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTestProjectAssetManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTestProjectAssetManager, 3052866257);
	template<> TESTPROJECT_API UClass* StaticClass<UTestProjectAssetManager>()
	{
		return UTestProjectAssetManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTestProjectAssetManager(Z_Construct_UClass_UTestProjectAssetManager, &UTestProjectAssetManager::StaticClass, TEXT("/Script/TestProject"), TEXT("UTestProjectAssetManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestProjectAssetManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
