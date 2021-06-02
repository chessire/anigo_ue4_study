// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef TESTPROJECT_TestProjectProjectile_generated_h
#error "TestProjectProjectile.generated.h already included, missing '#pragma once' in TestProjectProjectile.h"
#endif
#define TESTPROJECT_TestProjectProjectile_generated_h

#define TestProject_Source_TestProject_InGame_TestProjectProjectile_h_15_SPARSE_DATA
#define TestProject_Source_TestProject_InGame_TestProjectProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define TestProject_Source_TestProject_InGame_TestProjectProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define TestProject_Source_TestProject_InGame_TestProjectProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestProjectProjectile(); \
	friend struct Z_Construct_UClass_ATestProjectProjectile_Statics; \
public: \
	DECLARE_CLASS(ATestProjectProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(ATestProjectProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define TestProject_Source_TestProject_InGame_TestProjectProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATestProjectProjectile(); \
	friend struct Z_Construct_UClass_ATestProjectProjectile_Statics; \
public: \
	DECLARE_CLASS(ATestProjectProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(ATestProjectProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define TestProject_Source_TestProject_InGame_TestProjectProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATestProjectProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestProjectProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestProjectProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestProjectProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestProjectProjectile(ATestProjectProjectile&&); \
	NO_API ATestProjectProjectile(const ATestProjectProjectile&); \
public:


#define TestProject_Source_TestProject_InGame_TestProjectProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestProjectProjectile(ATestProjectProjectile&&); \
	NO_API ATestProjectProjectile(const ATestProjectProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestProjectProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestProjectProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestProjectProjectile)


#define TestProject_Source_TestProject_InGame_TestProjectProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ATestProjectProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ATestProjectProjectile, ProjectileMovement); }


#define TestProject_Source_TestProject_InGame_TestProjectProjectile_h_12_PROLOG
#define TestProject_Source_TestProject_InGame_TestProjectProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProject_Source_TestProject_InGame_TestProjectProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	TestProject_Source_TestProject_InGame_TestProjectProjectile_h_15_SPARSE_DATA \
	TestProject_Source_TestProject_InGame_TestProjectProjectile_h_15_RPC_WRAPPERS \
	TestProject_Source_TestProject_InGame_TestProjectProjectile_h_15_INCLASS \
	TestProject_Source_TestProject_InGame_TestProjectProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestProject_Source_TestProject_InGame_TestProjectProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProject_Source_TestProject_InGame_TestProjectProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	TestProject_Source_TestProject_InGame_TestProjectProjectile_h_15_SPARSE_DATA \
	TestProject_Source_TestProject_InGame_TestProjectProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TestProject_Source_TestProject_InGame_TestProjectProjectile_h_15_INCLASS_NO_PURE_DECLS \
	TestProject_Source_TestProject_InGame_TestProjectProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTPROJECT_API UClass* StaticClass<class ATestProjectProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestProject_Source_TestProject_InGame_TestProjectProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
