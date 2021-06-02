// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject/Tables/WidgetTable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetTable() {}
// Cross Module References
	TESTPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetTableRow();
	UPackage* Z_Construct_UPackage__Script_TestProject();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetBlueprint_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FWidgetTableRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FWidgetTableRow cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FWidgetTableRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TESTPROJECT_API uint32 Get_Z_Construct_UScriptStruct_FWidgetTableRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetTableRow, Z_Construct_UPackage__Script_TestProject(), TEXT("WidgetTableRow"), sizeof(FWidgetTableRow), Get_Z_Construct_UScriptStruct_FWidgetTableRow_Hash());
	}
	return Singleton;
}
template<> TESTPROJECT_API UScriptStruct* StaticStruct<FWidgetTableRow>()
{
	return FWidgetTableRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWidgetTableRow(FWidgetTableRow::StaticStruct, TEXT("/Script/TestProject"), TEXT("WidgetTableRow"), false, nullptr, nullptr);
static struct FScriptStruct_TestProject_StaticRegisterNativesFWidgetTableRow
{
	FScriptStruct_TestProject_StaticRegisterNativesFWidgetTableRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WidgetTableRow")),new UScriptStruct::TCppStructOps<FWidgetTableRow>);
	}
} ScriptStruct_TestProject_StaticRegisterNativesFWidgetTableRow;
	struct Z_Construct_UScriptStruct_FWidgetTableRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_widget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_zOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_zOrder;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetTableRow_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Tables/WidgetTable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWidgetTableRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetTableRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetTableRow_Statics::NewProp_widget_MetaData[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Tables/WidgetTable.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FWidgetTableRow_Statics::NewProp_widget = { "widget", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWidgetTableRow, widget), Z_Construct_UClass_UWidgetBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetTableRow_Statics::NewProp_widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetTableRow_Statics::NewProp_widget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetTableRow_Statics::NewProp_zOrder_MetaData[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Tables/WidgetTable.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FWidgetTableRow_Statics::NewProp_zOrder = { "zOrder", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWidgetTableRow, zOrder), METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetTableRow_Statics::NewProp_zOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetTableRow_Statics::NewProp_zOrder_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWidgetTableRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetTableRow_Statics::NewProp_widget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetTableRow_Statics::NewProp_zOrder,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetTableRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"WidgetTableRow",
		sizeof(FWidgetTableRow),
		alignof(FWidgetTableRow),
		Z_Construct_UScriptStruct_FWidgetTableRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetTableRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetTableRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetTableRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWidgetTableRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWidgetTableRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TestProject();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WidgetTableRow"), sizeof(FWidgetTableRow), Get_Z_Construct_UScriptStruct_FWidgetTableRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWidgetTableRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWidgetTableRow_Hash() { return 625648359U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
