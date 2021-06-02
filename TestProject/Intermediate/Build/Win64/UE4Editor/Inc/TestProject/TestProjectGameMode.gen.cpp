// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject/System/TestProjectGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestProjectGameMode() {}
// Cross Module References
	TESTPROJECT_API UEnum* Z_Construct_UEnum_TestProject_ETest_enum();
	UPackage* Z_Construct_UPackage__Script_TestProject();
	TESTPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTest();
	TESTPROJECT_API UClass* Z_Construct_UClass_ATestProjectGameMode_NoRegister();
	TESTPROJECT_API UClass* Z_Construct_UClass_ATestProjectGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
// End Cross Module References
	static UEnum* ETest_enum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TestProject_ETest_enum, Z_Construct_UPackage__Script_TestProject(), TEXT("ETest_enum"));
		}
		return Singleton;
	}
	template<> TESTPROJECT_API UEnum* StaticEnum<ETest_enum>()
	{
		return ETest_enum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETest_enum(ETest_enum_StaticEnum, TEXT("/Script/TestProject"), TEXT("ETest_enum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TestProject_ETest_enum_Hash() { return 1494952888U; }
	UEnum* Z_Construct_UEnum_TestProject_ETest_enum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TestProject();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETest_enum"), 0, Get_Z_Construct_UEnum_TestProject_ETest_enum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "COUNT", (int64)COUNT },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "COUNT.Name", "COUNT" },
				{ "ModuleRelativePath", "System/TestProjectGameMode.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TestProject,
				nullptr,
				"ETest_enum",
				"ETest_enum",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FTest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TESTPROJECT_API uint32 Get_Z_Construct_UScriptStruct_FTest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTest, Z_Construct_UPackage__Script_TestProject(), TEXT("Test"), sizeof(FTest), Get_Z_Construct_UScriptStruct_FTest_Hash());
	}
	return Singleton;
}
template<> TESTPROJECT_API UScriptStruct* StaticStruct<FTest>()
{
	return FTest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTest(FTest::StaticStruct, TEXT("/Script/TestProject"), TEXT("Test"), false, nullptr, nullptr);
static struct FScriptStruct_TestProject_StaticRegisterNativesFTest
{
	FScriptStruct_TestProject_StaticRegisterNativesFTest()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Test")),new UScriptStruct::TCppStructOps<FTest>);
	}
} ScriptStruct_TestProject_StaticRegisterNativesFTest;
	struct Z_Construct_UScriptStruct_FTest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTest_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "System/TestProjectGameMode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTest>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
		nullptr,
		&NewStructOps,
		"Test",
		sizeof(FTest),
		alignof(FTest),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TestProject();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Test"), sizeof(FTest), Get_Z_Construct_UScriptStruct_FTest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTest_Hash() { return 1721797857U; }
	void ATestProjectGameMode::StaticRegisterNativesATestProjectGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATestProjectGameMode_NoRegister()
	{
		return ATestProjectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATestProjectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestProjectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestProjectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "System/TestProjectGameMode.h" },
		{ "ModuleRelativePath", "System/TestProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestProjectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestProjectGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATestProjectGameMode_Statics::ClassParams = {
		&ATestProjectGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATestProjectGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATestProjectGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestProjectGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATestProjectGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATestProjectGameMode, 3032954891);
	template<> TESTPROJECT_API UClass* StaticClass<ATestProjectGameMode>()
	{
		return ATestProjectGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATestProjectGameMode(Z_Construct_UClass_ATestProjectGameMode, &ATestProjectGameMode::StaticClass, TEXT("/Script/TestProject"), TEXT("ATestProjectGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestProjectGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
