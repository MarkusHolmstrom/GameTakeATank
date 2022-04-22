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
#ifdef TAKEATANK_TATGoalZone_generated_h
#error "TATGoalZone.generated.h already included, missing '#pragma once' in TATGoalZone.h"
#endif
#define TAKEATANK_TATGoalZone_generated_h

#define TakeATank_Source_TakeATank_Level_TATGoalZone_h_16_SPARSE_DATA
#define TakeATank_Source_TakeATank_Level_TATGoalZone_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddTankToZone); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define TakeATank_Source_TakeATank_Level_TATGoalZone_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddTankToZone); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define TakeATank_Source_TakeATank_Level_TATGoalZone_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATATGoalZone(); \
	friend struct Z_Construct_UClass_ATATGoalZone_Statics; \
public: \
	DECLARE_CLASS(ATATGoalZone, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TakeATank"), NO_API) \
	DECLARE_SERIALIZER(ATATGoalZone)


#define TakeATank_Source_TakeATank_Level_TATGoalZone_h_16_INCLASS \
private: \
	static void StaticRegisterNativesATATGoalZone(); \
	friend struct Z_Construct_UClass_ATATGoalZone_Statics; \
public: \
	DECLARE_CLASS(ATATGoalZone, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TakeATank"), NO_API) \
	DECLARE_SERIALIZER(ATATGoalZone)


#define TakeATank_Source_TakeATank_Level_TATGoalZone_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATATGoalZone(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATATGoalZone) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATATGoalZone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATATGoalZone); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATATGoalZone(ATATGoalZone&&); \
	NO_API ATATGoalZone(const ATATGoalZone&); \
public:


#define TakeATank_Source_TakeATank_Level_TATGoalZone_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATATGoalZone(ATATGoalZone&&); \
	NO_API ATATGoalZone(const ATATGoalZone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATATGoalZone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATATGoalZone); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATATGoalZone)


#define TakeATank_Source_TakeATank_Level_TATGoalZone_h_16_PRIVATE_PROPERTY_OFFSET
#define TakeATank_Source_TakeATank_Level_TATGoalZone_h_13_PROLOG
#define TakeATank_Source_TakeATank_Level_TATGoalZone_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TakeATank_Source_TakeATank_Level_TATGoalZone_h_16_PRIVATE_PROPERTY_OFFSET \
	TakeATank_Source_TakeATank_Level_TATGoalZone_h_16_SPARSE_DATA \
	TakeATank_Source_TakeATank_Level_TATGoalZone_h_16_RPC_WRAPPERS \
	TakeATank_Source_TakeATank_Level_TATGoalZone_h_16_INCLASS \
	TakeATank_Source_TakeATank_Level_TATGoalZone_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TakeATank_Source_TakeATank_Level_TATGoalZone_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TakeATank_Source_TakeATank_Level_TATGoalZone_h_16_PRIVATE_PROPERTY_OFFSET \
	TakeATank_Source_TakeATank_Level_TATGoalZone_h_16_SPARSE_DATA \
	TakeATank_Source_TakeATank_Level_TATGoalZone_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	TakeATank_Source_TakeATank_Level_TATGoalZone_h_16_INCLASS_NO_PURE_DECLS \
	TakeATank_Source_TakeATank_Level_TATGoalZone_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TAKEATANK_API UClass* StaticClass<class ATATGoalZone>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TakeATank_Source_TakeATank_Level_TATGoalZone_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
