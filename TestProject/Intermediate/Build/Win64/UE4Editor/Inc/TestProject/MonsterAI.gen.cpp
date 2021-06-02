// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject/InGame/MonsterAI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonsterAI() {}
// Cross Module References
	TESTPROJECT_API UClass* Z_Construct_UClass_AMonsterAI_NoRegister();
	TESTPROJECT_API UClass* Z_Construct_UClass_AMonsterAI();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_TestProject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void AMonsterAI::StaticRegisterNativesAMonsterAI()
	{
	}
	UClass* Z_Construct_UClass_AMonsterAI_NoRegister()
	{
		return AMonsterAI::StaticClass();
	}
	struct Z_Construct_UClass_AMonsterAI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__waypoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__waypoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__waypoints;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMonsterAI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterAI_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "InGame/MonsterAI.h" },
		{ "ModuleRelativePath", "InGame/MonsterAI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMonsterAI_Statics::NewProp__waypoints_Inner = { "_waypoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterAI_Statics::NewProp__waypoints_MetaData[] = {
		{ "ModuleRelativePath", "InGame/MonsterAI.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMonsterAI_Statics::NewProp__waypoints = { "_waypoints", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterAI, _waypoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMonsterAI_Statics::NewProp__waypoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterAI_Statics::NewProp__waypoints_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMonsterAI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterAI_Statics::NewProp__waypoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterAI_Statics::NewProp__waypoints,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMonsterAI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMonsterAI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMonsterAI_Statics::ClassParams = {
		&AMonsterAI::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMonsterAI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterAI_Statics::PropPointers),
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMonsterAI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterAI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMonsterAI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMonsterAI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMonsterAI, 2795525010);
	template<> TESTPROJECT_API UClass* StaticClass<AMonsterAI>()
	{
		return AMonsterAI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMonsterAI(Z_Construct_UClass_AMonsterAI, &AMonsterAI::StaticClass, TEXT("/Script/TestProject"), TEXT("AMonsterAI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMonsterAI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
