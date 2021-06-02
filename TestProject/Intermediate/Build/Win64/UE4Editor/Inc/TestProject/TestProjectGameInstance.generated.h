// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTPROJECT_TestProjectGameInstance_generated_h
#error "TestProjectGameInstance.generated.h already included, missing '#pragma once' in TestProjectGameInstance.h"
#endif
#define TESTPROJECT_TestProjectGameInstance_generated_h

#define TestProject_Source_TestProject_System_TestProjectGameInstance_h_14_SPARSE_DATA
#define TestProject_Source_TestProject_System_TestProjectGameInstance_h_14_RPC_WRAPPERS
#define TestProject_Source_TestProject_System_TestProjectGameInstance_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define TestProject_Source_TestProject_System_TestProjectGameInstance_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTestProjectGameInstance(); \
	friend struct Z_Construct_UClass_UTestProjectGameInstance_Statics; \
public: \
	DECLARE_CLASS(UTestProjectGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(UTestProjectGameInstance)


#define TestProject_Source_TestProject_System_TestProjectGameInstance_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUTestProjectGameInstance(); \
	friend struct Z_Construct_UClass_UTestProjectGameInstance_Statics; \
public: \
	DECLARE_CLASS(UTestProjectGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(UTestProjectGameInstance)


#define TestProject_Source_TestProject_System_TestProjectGameInstance_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTestProjectGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestProjectGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTestProjectGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestProjectGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTestProjectGameInstance(UTestProjectGameInstance&&); \
	NO_API UTestProjectGameInstance(const UTestProjectGameInstance&); \
public:


#define TestProject_Source_TestProject_System_TestProjectGameInstance_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTestProjectGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTestProjectGameInstance(UTestProjectGameInstance&&); \
	NO_API UTestProjectGameInstance(const UTestProjectGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTestProjectGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestProjectGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestProjectGameInstance)


#define TestProject_Source_TestProject_System_TestProjectGameInstance_h_14_PRIVATE_PROPERTY_OFFSET
#define TestProject_Source_TestProject_System_TestProjectGameInstance_h_11_PROLOG
#define TestProject_Source_TestProject_System_TestProjectGameInstance_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProject_Source_TestProject_System_TestProjectGameInstance_h_14_PRIVATE_PROPERTY_OFFSET \
	TestProject_Source_TestProject_System_TestProjectGameInstance_h_14_SPARSE_DATA \
	TestProject_Source_TestProject_System_TestProjectGameInstance_h_14_RPC_WRAPPERS \
	TestProject_Source_TestProject_System_TestProjectGameInstance_h_14_INCLASS \
	TestProject_Source_TestProject_System_TestProjectGameInstance_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestProject_Source_TestProject_System_TestProjectGameInstance_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProject_Source_TestProject_System_TestProjectGameInstance_h_14_PRIVATE_PROPERTY_OFFSET \
	TestProject_Source_TestProject_System_TestProjectGameInstance_h_14_SPARSE_DATA \
	TestProject_Source_TestProject_System_TestProjectGameInstance_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	TestProject_Source_TestProject_System_TestProjectGameInstance_h_14_INCLASS_NO_PURE_DECLS \
	TestProject_Source_TestProject_System_TestProjectGameInstance_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTPROJECT_API UClass* StaticClass<class UTestProjectGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestProject_Source_TestProject_System_TestProjectGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
