// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTPROJECT_TestProjectHUD_generated_h
#error "TestProjectHUD.generated.h already included, missing '#pragma once' in TestProjectHUD.h"
#endif
#define TESTPROJECT_TestProjectHUD_generated_h

#define TestProject_Source_TestProject_System_TestProjectHUD_h_13_SPARSE_DATA
#define TestProject_Source_TestProject_System_TestProjectHUD_h_13_RPC_WRAPPERS
#define TestProject_Source_TestProject_System_TestProjectHUD_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define TestProject_Source_TestProject_System_TestProjectHUD_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestProjectHUD(); \
	friend struct Z_Construct_UClass_ATestProjectHUD_Statics; \
public: \
	DECLARE_CLASS(ATestProjectHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(ATestProjectHUD)


#define TestProject_Source_TestProject_System_TestProjectHUD_h_13_INCLASS \
private: \
	static void StaticRegisterNativesATestProjectHUD(); \
	friend struct Z_Construct_UClass_ATestProjectHUD_Statics; \
public: \
	DECLARE_CLASS(ATestProjectHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(ATestProjectHUD)


#define TestProject_Source_TestProject_System_TestProjectHUD_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATestProjectHUD(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestProjectHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestProjectHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestProjectHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestProjectHUD(ATestProjectHUD&&); \
	NO_API ATestProjectHUD(const ATestProjectHUD&); \
public:


#define TestProject_Source_TestProject_System_TestProjectHUD_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestProjectHUD(ATestProjectHUD&&); \
	NO_API ATestProjectHUD(const ATestProjectHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestProjectHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestProjectHUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestProjectHUD)


#define TestProject_Source_TestProject_System_TestProjectHUD_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___hudMain() { return STRUCT_OFFSET(ATestProjectHUD, _hudMain); }


#define TestProject_Source_TestProject_System_TestProjectHUD_h_10_PROLOG
#define TestProject_Source_TestProject_System_TestProjectHUD_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProject_Source_TestProject_System_TestProjectHUD_h_13_PRIVATE_PROPERTY_OFFSET \
	TestProject_Source_TestProject_System_TestProjectHUD_h_13_SPARSE_DATA \
	TestProject_Source_TestProject_System_TestProjectHUD_h_13_RPC_WRAPPERS \
	TestProject_Source_TestProject_System_TestProjectHUD_h_13_INCLASS \
	TestProject_Source_TestProject_System_TestProjectHUD_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestProject_Source_TestProject_System_TestProjectHUD_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProject_Source_TestProject_System_TestProjectHUD_h_13_PRIVATE_PROPERTY_OFFSET \
	TestProject_Source_TestProject_System_TestProjectHUD_h_13_SPARSE_DATA \
	TestProject_Source_TestProject_System_TestProjectHUD_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	TestProject_Source_TestProject_System_TestProjectHUD_h_13_INCLASS_NO_PURE_DECLS \
	TestProject_Source_TestProject_System_TestProjectHUD_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTPROJECT_API UClass* StaticClass<class ATestProjectHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestProject_Source_TestProject_System_TestProjectHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
