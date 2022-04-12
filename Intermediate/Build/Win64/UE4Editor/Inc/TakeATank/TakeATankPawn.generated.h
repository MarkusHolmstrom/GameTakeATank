// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TAKEATANK_TakeATankPawn_generated_h
#error "TakeATankPawn.generated.h already included, missing '#pragma once' in TakeATankPawn.h"
#endif
#define TAKEATANK_TakeATankPawn_generated_h

#define TakeATank_Source_TakeATank_TakeATankPawn_h_21_SPARSE_DATA
#define TakeATank_Source_TakeATank_TakeATankPawn_h_21_RPC_WRAPPERS
#define TakeATank_Source_TakeATank_TakeATankPawn_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define TakeATank_Source_TakeATank_TakeATankPawn_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATakeATankPawn(); \
	friend struct Z_Construct_UClass_ATakeATankPawn_Statics; \
public: \
	DECLARE_CLASS(ATakeATankPawn, AWheeledVehicle, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TakeATank"), NO_API) \
	DECLARE_SERIALIZER(ATakeATankPawn)


#define TakeATank_Source_TakeATank_TakeATankPawn_h_21_INCLASS \
private: \
	static void StaticRegisterNativesATakeATankPawn(); \
	friend struct Z_Construct_UClass_ATakeATankPawn_Statics; \
public: \
	DECLARE_CLASS(ATakeATankPawn, AWheeledVehicle, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TakeATank"), NO_API) \
	DECLARE_SERIALIZER(ATakeATankPawn)


#define TakeATank_Source_TakeATank_TakeATankPawn_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATakeATankPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATakeATankPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATakeATankPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATakeATankPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATakeATankPawn(ATakeATankPawn&&); \
	NO_API ATakeATankPawn(const ATakeATankPawn&); \
public:


#define TakeATank_Source_TakeATank_TakeATankPawn_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATakeATankPawn(ATakeATankPawn&&); \
	NO_API ATakeATankPawn(const ATakeATankPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATakeATankPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATakeATankPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATakeATankPawn)


#define TakeATank_Source_TakeATank_TakeATankPawn_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(ATakeATankPawn, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(ATakeATankPawn, Camera); } \
	FORCEINLINE static uint32 __PPO__InternalCameraBase() { return STRUCT_OFFSET(ATakeATankPawn, InternalCameraBase); } \
	FORCEINLINE static uint32 __PPO__InternalCamera() { return STRUCT_OFFSET(ATakeATankPawn, InternalCamera); } \
	FORCEINLINE static uint32 __PPO__InCarSpeed() { return STRUCT_OFFSET(ATakeATankPawn, InCarSpeed); } \
	FORCEINLINE static uint32 __PPO__InCarGear() { return STRUCT_OFFSET(ATakeATankPawn, InCarGear); } \
	FORCEINLINE static uint32 __PPO__EngineSoundComponent() { return STRUCT_OFFSET(ATakeATankPawn, EngineSoundComponent); }


#define TakeATank_Source_TakeATank_TakeATankPawn_h_18_PROLOG
#define TakeATank_Source_TakeATank_TakeATankPawn_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TakeATank_Source_TakeATank_TakeATankPawn_h_21_PRIVATE_PROPERTY_OFFSET \
	TakeATank_Source_TakeATank_TakeATankPawn_h_21_SPARSE_DATA \
	TakeATank_Source_TakeATank_TakeATankPawn_h_21_RPC_WRAPPERS \
	TakeATank_Source_TakeATank_TakeATankPawn_h_21_INCLASS \
	TakeATank_Source_TakeATank_TakeATankPawn_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TakeATank_Source_TakeATank_TakeATankPawn_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TakeATank_Source_TakeATank_TakeATankPawn_h_21_PRIVATE_PROPERTY_OFFSET \
	TakeATank_Source_TakeATank_TakeATankPawn_h_21_SPARSE_DATA \
	TakeATank_Source_TakeATank_TakeATankPawn_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	TakeATank_Source_TakeATank_TakeATankPawn_h_21_INCLASS_NO_PURE_DECLS \
	TakeATank_Source_TakeATank_TakeATankPawn_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TAKEATANK_API UClass* StaticClass<class ATakeATankPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TakeATank_Source_TakeATank_TakeATankPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
