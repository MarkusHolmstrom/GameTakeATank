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
struct FHitResult;
#ifdef TAKEATANK_TakeATankEnemyTank_generated_h
#error "TakeATankEnemyTank.generated.h already included, missing '#pragma once' in TakeATankEnemyTank.h"
#endif
#define TAKEATANK_TakeATankEnemyTank_generated_h

#define TakeATank_Source_TakeATank_Enemy_TakeATankEnemyTank_h_19_SPARSE_DATA
#define TakeATank_Source_TakeATank_Enemy_TakeATankEnemyTank_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTowedByTractor); \
	DECLARE_FUNCTION(execOnOverlapTowBegin); \
	DECLARE_FUNCTION(execRotateChangeDirection); \
	DECLARE_FUNCTION(execRotateTowardsTractor); \
	DECLARE_FUNCTION(execSpawnBullet); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define TakeATank_Source_TakeATank_Enemy_TakeATankEnemyTank_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTowedByTractor); \
	DECLARE_FUNCTION(execOnOverlapTowBegin); \
	DECLARE_FUNCTION(execRotateChangeDirection); \
	DECLARE_FUNCTION(execRotateTowardsTractor); \
	DECLARE_FUNCTION(execSpawnBullet); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define TakeATank_Source_TakeATank_Enemy_TakeATankEnemyTank_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATakeATankEnemyTank(); \
	friend struct Z_Construct_UClass_ATakeATankEnemyTank_Statics; \
public: \
	DECLARE_CLASS(ATakeATankEnemyTank, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TakeATank"), NO_API) \
	DECLARE_SERIALIZER(ATakeATankEnemyTank)


#define TakeATank_Source_TakeATank_Enemy_TakeATankEnemyTank_h_19_INCLASS \
private: \
	static void StaticRegisterNativesATakeATankEnemyTank(); \
	friend struct Z_Construct_UClass_ATakeATankEnemyTank_Statics; \
public: \
	DECLARE_CLASS(ATakeATankEnemyTank, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TakeATank"), NO_API) \
	DECLARE_SERIALIZER(ATakeATankEnemyTank)


#define TakeATank_Source_TakeATank_Enemy_TakeATankEnemyTank_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATakeATankEnemyTank(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATakeATankEnemyTank) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATakeATankEnemyTank); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATakeATankEnemyTank); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATakeATankEnemyTank(ATakeATankEnemyTank&&); \
	NO_API ATakeATankEnemyTank(const ATakeATankEnemyTank&); \
public:


#define TakeATank_Source_TakeATank_Enemy_TakeATankEnemyTank_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATakeATankEnemyTank(ATakeATankEnemyTank&&); \
	NO_API ATakeATankEnemyTank(const ATakeATankEnemyTank&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATakeATankEnemyTank); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATakeATankEnemyTank); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATakeATankEnemyTank)


#define TakeATank_Source_TakeATank_Enemy_TakeATankEnemyTank_h_19_PRIVATE_PROPERTY_OFFSET
#define TakeATank_Source_TakeATank_Enemy_TakeATankEnemyTank_h_16_PROLOG
#define TakeATank_Source_TakeATank_Enemy_TakeATankEnemyTank_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TakeATank_Source_TakeATank_Enemy_TakeATankEnemyTank_h_19_PRIVATE_PROPERTY_OFFSET \
	TakeATank_Source_TakeATank_Enemy_TakeATankEnemyTank_h_19_SPARSE_DATA \
	TakeATank_Source_TakeATank_Enemy_TakeATankEnemyTank_h_19_RPC_WRAPPERS \
	TakeATank_Source_TakeATank_Enemy_TakeATankEnemyTank_h_19_INCLASS \
	TakeATank_Source_TakeATank_Enemy_TakeATankEnemyTank_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TakeATank_Source_TakeATank_Enemy_TakeATankEnemyTank_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TakeATank_Source_TakeATank_Enemy_TakeATankEnemyTank_h_19_PRIVATE_PROPERTY_OFFSET \
	TakeATank_Source_TakeATank_Enemy_TakeATankEnemyTank_h_19_SPARSE_DATA \
	TakeATank_Source_TakeATank_Enemy_TakeATankEnemyTank_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	TakeATank_Source_TakeATank_Enemy_TakeATankEnemyTank_h_19_INCLASS_NO_PURE_DECLS \
	TakeATank_Source_TakeATank_Enemy_TakeATankEnemyTank_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TAKEATANK_API UClass* StaticClass<class ATakeATankEnemyTank>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TakeATank_Source_TakeATank_Enemy_TakeATankEnemyTank_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
