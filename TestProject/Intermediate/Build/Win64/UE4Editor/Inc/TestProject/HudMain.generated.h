// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTPROJECT_HudMain_generated_h
#error "HudMain.generated.h already included, missing '#pragma once' in HudMain.h"
#endif
#define TESTPROJECT_HudMain_generated_h

#define TestProject_Source_TestProject_UI_HudMain_h_12_SPARSE_DATA
#define TestProject_Source_TestProject_UI_HudMain_h_12_RPC_WRAPPERS
#define TestProject_Source_TestProject_UI_HudMain_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define TestProject_Source_TestProject_UI_HudMain_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHudMain(); \
	friend struct Z_Construct_UClass_UHudMain_Statics; \
public: \
	DECLARE_CLASS(UHudMain, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(UHudMain)


#define TestProject_Source_TestProject_UI_HudMain_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUHudMain(); \
	friend struct Z_Construct_UClass_UHudMain_Statics; \
public: \
	DECLARE_CLASS(UHudMain, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(UHudMain)


#define TestProject_Source_TestProject_UI_HudMain_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHudMain(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHudMain) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHudMain); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHudMain); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHudMain(UHudMain&&); \
	NO_API UHudMain(const UHudMain&); \
public:


#define TestProject_Source_TestProject_UI_HudMain_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHudMain(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHudMain(UHudMain&&); \
	NO_API UHudMain(const UHudMain&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHudMain); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHudMain); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHudMain)


#define TestProject_Source_TestProject_UI_HudMain_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___timer() { return STRUCT_OFFSET(UHudMain, _timer); }


#define TestProject_Source_TestProject_UI_HudMain_h_9_PROLOG
#define TestProject_Source_TestProject_UI_HudMain_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProject_Source_TestProject_UI_HudMain_h_12_PRIVATE_PROPERTY_OFFSET \
	TestProject_Source_TestProject_UI_HudMain_h_12_SPARSE_DATA \
	TestProject_Source_TestProject_UI_HudMain_h_12_RPC_WRAPPERS \
	TestProject_Source_TestProject_UI_HudMain_h_12_INCLASS \
	TestProject_Source_TestProject_UI_HudMain_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestProject_Source_TestProject_UI_HudMain_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProject_Source_TestProject_UI_HudMain_h_12_PRIVATE_PROPERTY_OFFSET \
	TestProject_Source_TestProject_UI_HudMain_h_12_SPARSE_DATA \
	TestProject_Source_TestProject_UI_HudMain_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TestProject_Source_TestProject_UI_HudMain_h_12_INCLASS_NO_PURE_DECLS \
	TestProject_Source_TestProject_UI_HudMain_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTPROJECT_API UClass* StaticClass<class UHudMain>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestProject_Source_TestProject_UI_HudMain_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
