// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject/System/TestProjectHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestProjectHUD() {}
// Cross Module References
	TESTPROJECT_API UClass* Z_Construct_UClass_ATestProjectHUD_NoRegister();
	TESTPROJECT_API UClass* Z_Construct_UClass_ATestProjectHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_TestProject();
	TESTPROJECT_API UClass* Z_Construct_UClass_UHudMain_NoRegister();
// End Cross Module References
	void ATestProjectHUD::StaticRegisterNativesATestProjectHUD()
	{
	}
	UClass* Z_Construct_UClass_ATestProjectHUD_NoRegister()
	{
		return ATestProjectHUD::StaticClass();
	}
	struct Z_Construct_UClass_ATestProjectHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hudMain_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__hudMain;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestProjectHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestProjectHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "System/TestProjectHUD.h" },
		{ "ModuleRelativePath", "System/TestProjectHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestProjectHUD_Statics::NewProp__hudMain_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "System/TestProjectHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestProjectHUD_Statics::NewProp__hudMain = { "_hudMain", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestProjectHUD, _hudMain), Z_Construct_UClass_UHudMain_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATestProjectHUD_Statics::NewProp__hudMain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestProjectHUD_Statics::NewProp__hudMain_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATestProjectHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestProjectHUD_Statics::NewProp__hudMain,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestProjectHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestProjectHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATestProjectHUD_Statics::ClassParams = {
		&ATestProjectHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATestProjectHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATestProjectHUD_Statics::PropPointers),
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATestProjectHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATestProjectHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestProjectHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATestProjectHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATestProjectHUD, 1487354168);
	template<> TESTPROJECT_API UClass* StaticClass<ATestProjectHUD>()
	{
		return ATestProjectHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATestProjectHUD(Z_Construct_UClass_ATestProjectHUD, &ATestProjectHUD::StaticClass, TEXT("/Script/TestProject"), TEXT("ATestProjectHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestProjectHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
