// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject/System/TestProjectGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestProjectGameInstance() {}
// Cross Module References
	TESTPROJECT_API UClass* Z_Construct_UClass_UTestProjectGameInstance_NoRegister();
	TESTPROJECT_API UClass* Z_Construct_UClass_UTestProjectGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_TestProject();
// End Cross Module References
	void UTestProjectGameInstance::StaticRegisterNativesUTestProjectGameInstance()
	{
	}
	UClass* Z_Construct_UClass_UTestProjectGameInstance_NoRegister()
	{
		return UTestProjectGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UTestProjectGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestProjectGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestProjectGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "System/TestProjectGameInstance.h" },
		{ "ModuleRelativePath", "System/TestProjectGameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestProjectGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestProjectGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTestProjectGameInstance_Statics::ClassParams = {
		&UTestProjectGameInstance::StaticClass,
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
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UTestProjectGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestProjectGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestProjectGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTestProjectGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTestProjectGameInstance, 2185138628);
	template<> TESTPROJECT_API UClass* StaticClass<UTestProjectGameInstance>()
	{
		return UTestProjectGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTestProjectGameInstance(Z_Construct_UClass_UTestProjectGameInstance, &UTestProjectGameInstance::StaticClass, TEXT("/Script/TestProject"), TEXT("UTestProjectGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestProjectGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
