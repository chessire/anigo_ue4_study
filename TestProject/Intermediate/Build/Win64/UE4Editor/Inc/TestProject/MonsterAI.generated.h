// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTPROJECT_MonsterAI_generated_h
#error "MonsterAI.generated.h already included, missing '#pragma once' in MonsterAI.h"
#endif
#define TESTPROJECT_MonsterAI_generated_h

#define TestProject_Source_TestProject_InGame_MonsterAI_h_12_SPARSE_DATA
#define TestProject_Source_TestProject_InGame_MonsterAI_h_12_RPC_WRAPPERS
#define TestProject_Source_TestProject_InGame_MonsterAI_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define TestProject_Source_TestProject_InGame_MonsterAI_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMonsterAI(); \
	friend struct Z_Construct_UClass_AMonsterAI_Statics; \
public: \
	DECLARE_CLASS(AMonsterAI, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(AMonsterAI)


#define TestProject_Source_TestProject_InGame_MonsterAI_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMonsterAI(); \
	friend struct Z_Construct_UClass_AMonsterAI_Statics; \
public: \
	DECLARE_CLASS(AMonsterAI, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(AMonsterAI)


#define TestProject_Source_TestProject_InGame_MonsterAI_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMonsterAI(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMonsterAI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMonsterAI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMonsterAI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMonsterAI(AMonsterAI&&); \
	NO_API AMonsterAI(const AMonsterAI&); \
public:


#define TestProject_Source_TestProject_InGame_MonsterAI_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMonsterAI(AMonsterAI&&); \
	NO_API AMonsterAI(const AMonsterAI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMonsterAI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMonsterAI); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMonsterAI)


#define TestProject_Source_TestProject_InGame_MonsterAI_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___waypoints() { return STRUCT_OFFSET(AMonsterAI, _waypoints); }


#define TestProject_Source_TestProject_InGame_MonsterAI_h_9_PROLOG
#define TestProject_Source_TestProject_InGame_MonsterAI_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProject_Source_TestProject_InGame_MonsterAI_h_12_PRIVATE_PROPERTY_OFFSET \
	TestProject_Source_TestProject_InGame_MonsterAI_h_12_SPARSE_DATA \
	TestProject_Source_TestProject_InGame_MonsterAI_h_12_RPC_WRAPPERS \
	TestProject_Source_TestProject_InGame_MonsterAI_h_12_INCLASS \
	TestProject_Source_TestProject_InGame_MonsterAI_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestProject_Source_TestProject_InGame_MonsterAI_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProject_Source_TestProject_InGame_MonsterAI_h_12_PRIVATE_PROPERTY_OFFSET \
	TestProject_Source_TestProject_InGame_MonsterAI_h_12_SPARSE_DATA \
	TestProject_Source_TestProject_InGame_MonsterAI_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TestProject_Source_TestProject_InGame_MonsterAI_h_12_INCLASS_NO_PURE_DECLS \
	TestProject_Source_TestProject_InGame_MonsterAI_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTPROJECT_API UClass* StaticClass<class AMonsterAI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestProject_Source_TestProject_InGame_MonsterAI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
