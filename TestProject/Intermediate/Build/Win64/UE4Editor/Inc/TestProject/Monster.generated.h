// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTPROJECT_Monster_generated_h
#error "Monster.generated.h already included, missing '#pragma once' in Monster.h"
#endif
#define TESTPROJECT_Monster_generated_h

#define TestProject_Source_TestProject_InGame_Monster_h_10_SPARSE_DATA
#define TestProject_Source_TestProject_InGame_Monster_h_10_RPC_WRAPPERS
#define TestProject_Source_TestProject_InGame_Monster_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define TestProject_Source_TestProject_InGame_Monster_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMonster(); \
	friend struct Z_Construct_UClass_AMonster_Statics; \
public: \
	DECLARE_CLASS(AMonster, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(AMonster)


#define TestProject_Source_TestProject_InGame_Monster_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAMonster(); \
	friend struct Z_Construct_UClass_AMonster_Statics; \
public: \
	DECLARE_CLASS(AMonster, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(AMonster)


#define TestProject_Source_TestProject_InGame_Monster_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMonster(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMonster) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMonster); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMonster); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMonster(AMonster&&); \
	NO_API AMonster(const AMonster&); \
public:


#define TestProject_Source_TestProject_InGame_Monster_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMonster(AMonster&&); \
	NO_API AMonster(const AMonster&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMonster); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMonster); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMonster)


#define TestProject_Source_TestProject_InGame_Monster_h_10_PRIVATE_PROPERTY_OFFSET
#define TestProject_Source_TestProject_InGame_Monster_h_7_PROLOG
#define TestProject_Source_TestProject_InGame_Monster_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProject_Source_TestProject_InGame_Monster_h_10_PRIVATE_PROPERTY_OFFSET \
	TestProject_Source_TestProject_InGame_Monster_h_10_SPARSE_DATA \
	TestProject_Source_TestProject_InGame_Monster_h_10_RPC_WRAPPERS \
	TestProject_Source_TestProject_InGame_Monster_h_10_INCLASS \
	TestProject_Source_TestProject_InGame_Monster_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestProject_Source_TestProject_InGame_Monster_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProject_Source_TestProject_InGame_Monster_h_10_PRIVATE_PROPERTY_OFFSET \
	TestProject_Source_TestProject_InGame_Monster_h_10_SPARSE_DATA \
	TestProject_Source_TestProject_InGame_Monster_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	TestProject_Source_TestProject_InGame_Monster_h_10_INCLASS_NO_PURE_DECLS \
	TestProject_Source_TestProject_InGame_Monster_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTPROJECT_API UClass* StaticClass<class AMonster>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestProject_Source_TestProject_InGame_Monster_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
