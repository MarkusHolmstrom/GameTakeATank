// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TakeATank/Enemy/TakeATankEnemyTank.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTakeATankEnemyTank() {}
// Cross Module References
	TAKEATANK_API UClass* Z_Construct_UClass_ATakeATankEnemyTank_NoRegister();
	TAKEATANK_API UClass* Z_Construct_UClass_ATakeATankEnemyTank();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TakeATank();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TAKEATANK_API UClass* Z_Construct_UClass_ATATEnemyBullet_NoRegister();
	TAKEATANK_API UClass* Z_Construct_UClass_UTractorComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATakeATankEnemyTank::execTowedByTractor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TowedByTractor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATakeATankEnemyTank::execOnOverlapTowBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapTowBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATakeATankEnemyTank::execRotateChangeDirection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RotateChangeDirection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATakeATankEnemyTank::execRotateTowardsTractor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RotateTowardsTractor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATakeATankEnemyTank::execSpawnBullet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnBullet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATakeATankEnemyTank::execOnOverlapEnd)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATakeATankEnemyTank::execOnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void ATakeATankEnemyTank::StaticRegisterNativesATakeATankEnemyTank()
	{
		UClass* Class = ATakeATankEnemyTank::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapBegin", &ATakeATankEnemyTank::execOnOverlapBegin },
			{ "OnOverlapEnd", &ATakeATankEnemyTank::execOnOverlapEnd },
			{ "OnOverlapTowBegin", &ATakeATankEnemyTank::execOnOverlapTowBegin },
			{ "RotateChangeDirection", &ATakeATankEnemyTank::execRotateChangeDirection },
			{ "RotateTowardsTractor", &ATakeATankEnemyTank::execRotateTowardsTractor },
			{ "SpawnBullet", &ATakeATankEnemyTank::execSpawnBullet },
			{ "TowedByTractor", &ATakeATankEnemyTank::execTowedByTractor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapBegin_Statics
	{
		struct TakeATankEnemyTank_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TakeATankEnemyTank_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TakeATankEnemyTank_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TakeATankEnemyTank_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TakeATankEnemyTank_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((TakeATankEnemyTank_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TakeATankEnemyTank_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TakeATankEnemyTank_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapBegin_Statics::NewProp_OverlappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapBegin_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy/TakeATankEnemyTank.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATakeATankEnemyTank, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(TakeATankEnemyTank_eventOnOverlapBegin_Parms), Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapEnd_Statics
	{
		struct TakeATankEnemyTank_eventOnOverlapEnd_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapEnd_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapEnd_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TakeATankEnemyTank_eventOnOverlapEnd_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapEnd_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapEnd_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TakeATankEnemyTank_eventOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TakeATankEnemyTank_eventOnOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TakeATankEnemyTank_eventOnOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapEnd_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapEnd_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapEnd_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapEnd_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy/TakeATankEnemyTank.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATakeATankEnemyTank, nullptr, "OnOverlapEnd", nullptr, nullptr, sizeof(TakeATankEnemyTank_eventOnOverlapEnd_Parms), Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapTowBegin_Statics
	{
		struct TakeATankEnemyTank_eventOnOverlapTowBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapTowBegin_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapTowBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TakeATankEnemyTank_eventOnOverlapTowBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapTowBegin_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapTowBegin_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapTowBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TakeATankEnemyTank_eventOnOverlapTowBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapTowBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapTowBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TakeATankEnemyTank_eventOnOverlapTowBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapTowBegin_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapTowBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapTowBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TakeATankEnemyTank_eventOnOverlapTowBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapTowBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((TakeATankEnemyTank_eventOnOverlapTowBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapTowBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TakeATankEnemyTank_eventOnOverlapTowBegin_Parms), &Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapTowBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapTowBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapTowBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TakeATankEnemyTank_eventOnOverlapTowBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapTowBegin_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapTowBegin_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapTowBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapTowBegin_Statics::NewProp_OverlappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapTowBegin_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapTowBegin_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapTowBegin_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapTowBegin_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapTowBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapTowBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy/TakeATankEnemyTank.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapTowBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATakeATankEnemyTank, nullptr, "OnOverlapTowBegin", nullptr, nullptr, sizeof(TakeATankEnemyTank_eventOnOverlapTowBegin_Parms), Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapTowBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapTowBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapTowBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapTowBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapTowBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapTowBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATakeATankEnemyTank_RotateChangeDirection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATakeATankEnemyTank_RotateChangeDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy/TakeATankEnemyTank.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATakeATankEnemyTank_RotateChangeDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATakeATankEnemyTank, nullptr, "RotateChangeDirection", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATakeATankEnemyTank_RotateChangeDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATakeATankEnemyTank_RotateChangeDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATakeATankEnemyTank_RotateChangeDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATakeATankEnemyTank_RotateChangeDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATakeATankEnemyTank_RotateTowardsTractor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATakeATankEnemyTank_RotateTowardsTractor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy/TakeATankEnemyTank.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATakeATankEnemyTank_RotateTowardsTractor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATakeATankEnemyTank, nullptr, "RotateTowardsTractor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATakeATankEnemyTank_RotateTowardsTractor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATakeATankEnemyTank_RotateTowardsTractor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATakeATankEnemyTank_RotateTowardsTractor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATakeATankEnemyTank_RotateTowardsTractor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATakeATankEnemyTank_SpawnBullet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATakeATankEnemyTank_SpawnBullet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy/TakeATankEnemyTank.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATakeATankEnemyTank_SpawnBullet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATakeATankEnemyTank, nullptr, "SpawnBullet", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATakeATankEnemyTank_SpawnBullet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATakeATankEnemyTank_SpawnBullet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATakeATankEnemyTank_SpawnBullet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATakeATankEnemyTank_SpawnBullet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATakeATankEnemyTank_TowedByTractor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATakeATankEnemyTank_TowedByTractor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy/TakeATankEnemyTank.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATakeATankEnemyTank_TowedByTractor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATakeATankEnemyTank, nullptr, "TowedByTractor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATakeATankEnemyTank_TowedByTractor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATakeATankEnemyTank_TowedByTractor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATakeATankEnemyTank_TowedByTractor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATakeATankEnemyTank_TowedByTractor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATakeATankEnemyTank_NoRegister()
	{
		return ATakeATankEnemyTank::StaticClass();
	}
	struct Z_Construct_UClass_ATakeATankEnemyTank_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereCollisionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SphereCollisionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TowingCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TowingCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TowingCollisionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TowingCollisionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyBulletClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EnemyBulletClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TractorTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TractorTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bChasing_MetaData[];
#endif
		static void NewProp_bChasing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bChasing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReloadTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Timer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChangeDirectionTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChangeDirectionTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tractor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Tractor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TowingDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TowingDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TractorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TractorComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTowed_MetaData[];
#endif
		static void NewProp_bTowed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTowed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActive_MetaData[];
#endif
		static void NewProp_bActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATakeATankEnemyTank_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TakeATank,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATakeATankEnemyTank_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapBegin, "OnOverlapBegin" }, // 2493670619
		{ &Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapEnd, "OnOverlapEnd" }, // 1214055638
		{ &Z_Construct_UFunction_ATakeATankEnemyTank_OnOverlapTowBegin, "OnOverlapTowBegin" }, // 2009316976
		{ &Z_Construct_UFunction_ATakeATankEnemyTank_RotateChangeDirection, "RotateChangeDirection" }, // 1630618402
		{ &Z_Construct_UFunction_ATakeATankEnemyTank_RotateTowardsTractor, "RotateTowardsTractor" }, // 1843185405
		{ &Z_Construct_UFunction_ATakeATankEnemyTank_SpawnBullet, "SpawnBullet" }, // 85517912
		{ &Z_Construct_UFunction_ATakeATankEnemyTank_TowedByTractor, "TowedByTractor" }, // 3843239383
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATakeATankEnemyTank_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Enemy/TakeATankEnemyTank.h" },
		{ "ModuleRelativePath", "Enemy/TakeATankEnemyTank.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_BoxCollision_MetaData[] = {
		{ "Category", "TakeATankEnemyTank" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy/TakeATankEnemyTank.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_BoxCollision = { "BoxCollision", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATakeATankEnemyTank, BoxCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_BoxCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_BoxCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_SphereCollision_MetaData[] = {
		{ "Category", "TakeATankEnemyTank" },
		{ "Comment", "// Collision to detect when player is close enough\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy/TakeATankEnemyTank.h" },
		{ "ToolTip", "Collision to detect when player is close enough" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_SphereCollision = { "SphereCollision", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATakeATankEnemyTank, SphereCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_SphereCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_SphereCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_SphereCollisionName_MetaData[] = {
		{ "Category", "TakeATankEnemyTank" },
		{ "ModuleRelativePath", "Enemy/TakeATankEnemyTank.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_SphereCollisionName = { "SphereCollisionName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATakeATankEnemyTank, SphereCollisionName), METADATA_PARAMS(Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_SphereCollisionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_SphereCollisionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_TowingCollision_MetaData[] = {
		{ "Category", "TakeATankEnemyTank" },
		{ "Comment", "// Detect if tratcor is behind tank and this tank can be towed\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy/TakeATankEnemyTank.h" },
		{ "ToolTip", "Detect if tratcor is behind tank and this tank can be towed" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_TowingCollision = { "TowingCollision", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATakeATankEnemyTank, TowingCollision), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_TowingCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_TowingCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_TowingCollisionName_MetaData[] = {
		{ "Category", "TakeATankEnemyTank" },
		{ "ModuleRelativePath", "Enemy/TakeATankEnemyTank.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_TowingCollisionName = { "TowingCollisionName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATakeATankEnemyTank, TowingCollisionName), METADATA_PARAMS(Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_TowingCollisionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_TowingCollisionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_EnemyBulletClass_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "Enemy/TakeATankEnemyTank.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_EnemyBulletClass = { "EnemyBulletClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATakeATankEnemyTank, EnemyBulletClass), Z_Construct_UClass_ATATEnemyBullet_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_EnemyBulletClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_EnemyBulletClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_TractorTag_MetaData[] = {
		{ "Category", "TakeATankEnemyTank" },
		{ "ModuleRelativePath", "Enemy/TakeATankEnemyTank.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_TractorTag = { "TractorTag", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATakeATankEnemyTank, TractorTag), METADATA_PARAMS(Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_TractorTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_TractorTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_bChasing_MetaData[] = {
		{ "Category", "TakeATankEnemyTank" },
		{ "ModuleRelativePath", "Enemy/TakeATankEnemyTank.h" },
	};
#endif
	void Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_bChasing_SetBit(void* Obj)
	{
		((ATakeATankEnemyTank*)Obj)->bChasing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_bChasing = { "bChasing", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATakeATankEnemyTank), &Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_bChasing_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_bChasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_bChasing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_ReloadTimer_MetaData[] = {
		{ "Category", "TakeATankEnemyTank" },
		{ "ModuleRelativePath", "Enemy/TakeATankEnemyTank.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_ReloadTimer = { "ReloadTimer", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATakeATankEnemyTank, ReloadTimer), METADATA_PARAMS(Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_ReloadTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_ReloadTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_Timer_MetaData[] = {
		{ "Category", "TakeATankEnemyTank" },
		{ "ModuleRelativePath", "Enemy/TakeATankEnemyTank.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_Timer = { "Timer", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATakeATankEnemyTank, Timer), METADATA_PARAMS(Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_Timer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_Timer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "TakeATankEnemyTank" },
		{ "ModuleRelativePath", "Enemy/TakeATankEnemyTank.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATakeATankEnemyTank, Speed), METADATA_PARAMS(Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_ChangeDirectionTimer_MetaData[] = {
		{ "Category", "TakeATankEnemyTank" },
		{ "ModuleRelativePath", "Enemy/TakeATankEnemyTank.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_ChangeDirectionTimer = { "ChangeDirectionTimer", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATakeATankEnemyTank, ChangeDirectionTimer), METADATA_PARAMS(Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_ChangeDirectionTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_ChangeDirectionTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_Tractor_MetaData[] = {
		{ "Category", "TakeATankEnemyTank" },
		{ "ModuleRelativePath", "Enemy/TakeATankEnemyTank.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_Tractor = { "Tractor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATakeATankEnemyTank, Tractor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_Tractor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_Tractor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_TowingDistance_MetaData[] = {
		{ "Category", "TakeATankEnemyTank" },
		{ "ModuleRelativePath", "Enemy/TakeATankEnemyTank.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_TowingDistance = { "TowingDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATakeATankEnemyTank, TowingDistance), METADATA_PARAMS(Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_TowingDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_TowingDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_TractorComponent_MetaData[] = {
		{ "Category", "TakeATankEnemyTank" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy/TakeATankEnemyTank.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_TractorComponent = { "TractorComponent", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATakeATankEnemyTank, TractorComponent), Z_Construct_UClass_UTractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_TractorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_TractorComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_bTowed_MetaData[] = {
		{ "Category", "TakeATankEnemyTank" },
		{ "ModuleRelativePath", "Enemy/TakeATankEnemyTank.h" },
	};
#endif
	void Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_bTowed_SetBit(void* Obj)
	{
		((ATakeATankEnemyTank*)Obj)->bTowed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_bTowed = { "bTowed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATakeATankEnemyTank), &Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_bTowed_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_bTowed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_bTowed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_bActive_MetaData[] = {
		{ "Category", "TakeATankEnemyTank" },
		{ "ModuleRelativePath", "Enemy/TakeATankEnemyTank.h" },
	};
#endif
	void Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_bActive_SetBit(void* Obj)
	{
		((ATakeATankEnemyTank*)Obj)->bActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATakeATankEnemyTank), &Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_bActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_bActive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATakeATankEnemyTank_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_BoxCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_SphereCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_SphereCollisionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_TowingCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_TowingCollisionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_EnemyBulletClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_TractorTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_bChasing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_ReloadTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_Timer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_ChangeDirectionTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_Tractor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_TowingDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_TractorComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_bTowed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATakeATankEnemyTank_Statics::NewProp_bActive,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATakeATankEnemyTank_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATakeATankEnemyTank>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATakeATankEnemyTank_Statics::ClassParams = {
		&ATakeATankEnemyTank::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATakeATankEnemyTank_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATakeATankEnemyTank_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATakeATankEnemyTank_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATakeATankEnemyTank_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATakeATankEnemyTank()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATakeATankEnemyTank_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATakeATankEnemyTank, 3957253165);
	template<> TAKEATANK_API UClass* StaticClass<ATakeATankEnemyTank>()
	{
		return ATakeATankEnemyTank::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATakeATankEnemyTank(Z_Construct_UClass_ATakeATankEnemyTank, &ATakeATankEnemyTank::StaticClass, TEXT("/Script/TakeATank"), TEXT("ATakeATankEnemyTank"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATakeATankEnemyTank);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
