// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject/UI/HudMain.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHudMain() {}
// Cross Module References
	TESTPROJECT_API UClass* Z_Construct_UClass_UHudMain_NoRegister();
	TESTPROJECT_API UClass* Z_Construct_UClass_UHudMain();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_TestProject();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
// End Cross Module References
	void UHudMain::StaticRegisterNativesUHudMain()
	{
	}
	UClass* Z_Construct_UClass_UHudMain_NoRegister()
	{
		return UHudMain::StaticClass();
	}
	struct Z_Construct_UClass_UHudMain_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__timer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__timer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHudMain_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudMain_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/HudMain.h" },
		{ "ModuleRelativePath", "UI/HudMain.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudMain_Statics::NewProp__timer_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/HudMain.h" },
		{ "OverrideNativeName", "Timer" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHudMain_Statics::NewProp__timer = { "Timer", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHudMain, _timer), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHudMain_Statics::NewProp__timer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHudMain_Statics::NewProp__timer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHudMain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudMain_Statics::NewProp__timer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHudMain_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHudMain>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHudMain_Statics::ClassParams = {
		&UHudMain::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHudMain_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHudMain_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHudMain_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHudMain_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHudMain()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHudMain_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHudMain, 4207385424);
	template<> TESTPROJECT_API UClass* StaticClass<UHudMain>()
	{
		return UHudMain::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHudMain(Z_Construct_UClass_UHudMain, &UHudMain::StaticClass, TEXT("/Script/TestProject"), TEXT("UHudMain"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHudMain);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
