// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTPROJECT_TestProjectCharacter_generated_h
#error "TestProjectCharacter.generated.h already included, missing '#pragma once' in TestProjectCharacter.h"
#endif
#define TESTPROJECT_TestProjectCharacter_generated_h

#define TestProject_Source_TestProject_InGame_TestProjectCharacter_h_20_SPARSE_DATA
#define TestProject_Source_TestProject_InGame_TestProjectCharacter_h_20_RPC_WRAPPERS
#define TestProject_Source_TestProject_InGame_TestProjectCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define TestProject_Source_TestProject_InGame_TestProjectCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestProjectCharacter(); \
	friend struct Z_Construct_UClass_ATestProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(ATestProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(ATestProjectCharacter)


#define TestProject_Source_TestProject_InGame_TestProjectCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesATestProjectCharacter(); \
	friend struct Z_Construct_UClass_ATestProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(ATestProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(ATestProjectCharacter)


#define TestProject_Source_TestProject_InGame_TestProjectCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATestProjectCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestProjectCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestProjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestProjectCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestProjectCharacter(ATestProjectCharacter&&); \
	NO_API ATestProjectCharacter(const ATestProjectCharacter&); \
public:


#define TestProject_Source_TestProject_InGame_TestProjectCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestProjectCharacter(ATestProjectCharacter&&); \
	NO_API ATestProjectCharacter(const ATestProjectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestProjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestProjectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestProjectCharacter)


#define TestProject_Source_TestProject_InGame_TestProjectCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(ATestProjectCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(ATestProjectCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(ATestProjectCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(ATestProjectCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(ATestProjectCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(ATestProjectCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(ATestProjectCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(ATestProjectCharacter, L_MotionController); }


#define TestProject_Source_TestProject_InGame_TestProjectCharacter_h_17_PROLOG
#define TestProject_Source_TestProject_InGame_TestProjectCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProject_Source_TestProject_InGame_TestProjectCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	TestProject_Source_TestProject_InGame_TestProjectCharacter_h_20_SPARSE_DATA \
	TestProject_Source_TestProject_InGame_TestProjectCharacter_h_20_RPC_WRAPPERS \
	TestProject_Source_TestProject_InGame_TestProjectCharacter_h_20_INCLASS \
	TestProject_Source_TestProject_InGame_TestProjectCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestProject_Source_TestProject_InGame_TestProjectCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProject_Source_TestProject_InGame_TestProjectCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	TestProject_Source_TestProject_InGame_TestProjectCharacter_h_20_SPARSE_DATA \
	TestProject_Source_TestProject_InGame_TestProjectCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	TestProject_Source_TestProject_InGame_TestProjectCharacter_h_20_INCLASS_NO_PURE_DECLS \
	TestProject_Source_TestProject_InGame_TestProjectCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTPROJECT_API UClass* StaticClass<class ATestProjectCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestProject_Source_TestProject_InGame_TestProjectCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
