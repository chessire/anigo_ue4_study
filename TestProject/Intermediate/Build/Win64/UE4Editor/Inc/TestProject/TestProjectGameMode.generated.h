// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTPROJECT_TestProjectGameMode_generated_h
#error "TestProjectGameMode.generated.h already included, missing '#pragma once' in TestProjectGameMode.h"
#endif
#define TESTPROJECT_TestProjectGameMode_generated_h

#define TestProject_Source_TestProject_System_TestProjectGameMode_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTest_Statics; \
	TESTPROJECT_API static class UScriptStruct* StaticStruct();


template<> TESTPROJECT_API UScriptStruct* StaticStruct<struct FTest>();

#define TestProject_Source_TestProject_System_TestProjectGameMode_h_24_SPARSE_DATA
#define TestProject_Source_TestProject_System_TestProjectGameMode_h_24_RPC_WRAPPERS
#define TestProject_Source_TestProject_System_TestProjectGameMode_h_24_RPC_WRAPPERS_NO_PURE_DECLS
#define TestProject_Source_TestProject_System_TestProjectGameMode_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestProjectGameMode(); \
	friend struct Z_Construct_UClass_ATestProjectGameMode_Statics; \
public: \
	DECLARE_CLASS(ATestProjectGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(ATestProjectGameMode)


#define TestProject_Source_TestProject_System_TestProjectGameMode_h_24_INCLASS \
private: \
	static void StaticRegisterNativesATestProjectGameMode(); \
	friend struct Z_Construct_UClass_ATestProjectGameMode_Statics; \
public: \
	DECLARE_CLASS(ATestProjectGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(ATestProjectGameMode)


#define TestProject_Source_TestProject_System_TestProjectGameMode_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATestProjectGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestProjectGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestProjectGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestProjectGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestProjectGameMode(ATestProjectGameMode&&); \
	NO_API ATestProjectGameMode(const ATestProjectGameMode&); \
public:


#define TestProject_Source_TestProject_System_TestProjectGameMode_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestProjectGameMode(ATestProjectGameMode&&); \
	NO_API ATestProjectGameMode(const ATestProjectGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestProjectGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestProjectGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestProjectGameMode)


#define TestProject_Source_TestProject_System_TestProjectGameMode_h_24_PRIVATE_PROPERTY_OFFSET
#define TestProject_Source_TestProject_System_TestProjectGameMode_h_21_PROLOG
#define TestProject_Source_TestProject_System_TestProjectGameMode_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProject_Source_TestProject_System_TestProjectGameMode_h_24_PRIVATE_PROPERTY_OFFSET \
	TestProject_Source_TestProject_System_TestProjectGameMode_h_24_SPARSE_DATA \
	TestProject_Source_TestProject_System_TestProjectGameMode_h_24_RPC_WRAPPERS \
	TestProject_Source_TestProject_System_TestProjectGameMode_h_24_INCLASS \
	TestProject_Source_TestProject_System_TestProjectGameMode_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestProject_Source_TestProject_System_TestProjectGameMode_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProject_Source_TestProject_System_TestProjectGameMode_h_24_PRIVATE_PROPERTY_OFFSET \
	TestProject_Source_TestProject_System_TestProjectGameMode_h_24_SPARSE_DATA \
	TestProject_Source_TestProject_System_TestProjectGameMode_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	TestProject_Source_TestProject_System_TestProjectGameMode_h_24_INCLASS_NO_PURE_DECLS \
	TestProject_Source_TestProject_System_TestProjectGameMode_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTPROJECT_API UClass* StaticClass<class ATestProjectGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestProject_Source_TestProject_System_TestProjectGameMode_h


#define FOREACH_ENUM_ETEST_ENUM(op) \
	op(COUNT) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
