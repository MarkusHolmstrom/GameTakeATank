// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TakeATank/Level/TATGoalZone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTATGoalZone() {}
// Cross Module References
	TAKEATANK_API UClass* Z_Construct_UClass_ATATGoalZone_NoRegister();
	TAKEATANK_API UClass* Z_Construct_UClass_ATATGoalZone();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TakeATank();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(ATATGoalZone::execAddTankToZone)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_number);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTankToZone(Z_Param_number);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATATGoalZone::execOnOverlapBegin)
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
	void ATATGoalZone::StaticRegisterNativesATATGoalZone()
	{
		UClass* Class = ATATGoalZone::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddTankToZone", &ATATGoalZone::execAddTankToZone },
			{ "OnOverlapBegin", &ATATGoalZone::execOnOverlapBegin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATATGoalZone_AddTankToZone_Statics
	{
		struct TATGoalZone_eventAddTankToZone_Parms
		{
			int32 number;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_number;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ATATGoalZone_AddTankToZone_Statics::NewProp_number = { "number", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TATGoalZone_eventAddTankToZone_Parms, number), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATATGoalZone_AddTankToZone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATATGoalZone_AddTankToZone_Statics::NewProp_number,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATATGoalZone_AddTankToZone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Level/TATGoalZone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATATGoalZone_AddTankToZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATATGoalZone, nullptr, "AddTankToZone", nullptr, nullptr, sizeof(TATGoalZone_eventAddTankToZone_Parms), Z_Construct_UFunction_ATATGoalZone_AddTankToZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATATGoalZone_AddTankToZone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATATGoalZone_AddTankToZone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATATGoalZone_AddTankToZone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATATGoalZone_AddTankToZone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATATGoalZone_AddTankToZone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATATGoalZone_OnOverlapBegin_Statics
	{
		struct TATGoalZone_eventOnOverlapBegin_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATATGoalZone_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATATGoalZone_OnOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TATGoalZone_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATATGoalZone_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATATGoalZone_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATATGoalZone_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TATGoalZone_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATATGoalZone_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATATGoalZone_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TATGoalZone_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATATGoalZone_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATATGoalZone_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATATGoalZone_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TATGoalZone_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATATGoalZone_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((TATGoalZone_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATATGoalZone_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TATGoalZone_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_ATATGoalZone_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATATGoalZone_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATATGoalZone_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TATGoalZone_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ATATGoalZone_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATATGoalZone_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATATGoalZone_OnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATATGoalZone_OnOverlapBegin_Statics::NewProp_OverlappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATATGoalZone_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATATGoalZone_OnOverlapBegin_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATATGoalZone_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATATGoalZone_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATATGoalZone_OnOverlapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATATGoalZone_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Level/TATGoalZone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATATGoalZone_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATATGoalZone, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(TATGoalZone_eventOnOverlapBegin_Parms), Z_Construct_UFunction_ATATGoalZone_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATATGoalZone_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATATGoalZone_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATATGoalZone_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATATGoalZone_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATATGoalZone_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATATGoalZone_NoRegister()
	{
		return ATATGoalZone::StaticClass();
	}
	struct Z_Construct_UClass_ATATGoalZone_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoalZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GoalZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TankTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TankTag;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TankPositions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TankPositions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TankPositions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxNumberOfTanks_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxNumberOfTanks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfTanks_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumberOfTanks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TankProp_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TankProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTankInserted_MetaData[];
#endif
		static void NewProp_bTankInserted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTankInserted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATATGoalZone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TakeATank,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATATGoalZone_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATATGoalZone_AddTankToZone, "AddTankToZone" }, // 4008719941
		{ &Z_Construct_UFunction_ATATGoalZone_OnOverlapBegin, "OnOverlapBegin" }, // 675107961
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATATGoalZone_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Level/TATGoalZone.h" },
		{ "ModuleRelativePath", "Level/TATGoalZone.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATATGoalZone_Statics::NewProp_GoalZone_MetaData[] = {
		{ "Category", "TATGoalZone" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Level/TATGoalZone.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATATGoalZone_Statics::NewProp_GoalZone = { "GoalZone", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATATGoalZone, GoalZone), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATATGoalZone_Statics::NewProp_GoalZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATATGoalZone_Statics::NewProp_GoalZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATATGoalZone_Statics::NewProp_TankTag_MetaData[] = {
		{ "Category", "TATGoalZone" },
		{ "ModuleRelativePath", "Level/TATGoalZone.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ATATGoalZone_Statics::NewProp_TankTag = { "TankTag", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATATGoalZone, TankTag), METADATA_PARAMS(Z_Construct_UClass_ATATGoalZone_Statics::NewProp_TankTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATATGoalZone_Statics::NewProp_TankTag_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATATGoalZone_Statics::NewProp_TankPositions_Inner = { "TankPositions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATATGoalZone_Statics::NewProp_TankPositions_MetaData[] = {
		{ "Category", "TATGoalZone" },
		{ "ModuleRelativePath", "Level/TATGoalZone.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATATGoalZone_Statics::NewProp_TankPositions = { "TankPositions", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATATGoalZone, TankPositions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATATGoalZone_Statics::NewProp_TankPositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATATGoalZone_Statics::NewProp_TankPositions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATATGoalZone_Statics::NewProp_MaxNumberOfTanks_MetaData[] = {
		{ "Category", "TATGoalZone" },
		{ "ModuleRelativePath", "Level/TATGoalZone.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATATGoalZone_Statics::NewProp_MaxNumberOfTanks = { "MaxNumberOfTanks", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATATGoalZone, MaxNumberOfTanks), METADATA_PARAMS(Z_Construct_UClass_ATATGoalZone_Statics::NewProp_MaxNumberOfTanks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATATGoalZone_Statics::NewProp_MaxNumberOfTanks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATATGoalZone_Statics::NewProp_NumberOfTanks_MetaData[] = {
		{ "Category", "TATGoalZone" },
		{ "ModuleRelativePath", "Level/TATGoalZone.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATATGoalZone_Statics::NewProp_NumberOfTanks = { "NumberOfTanks", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATATGoalZone, NumberOfTanks), METADATA_PARAMS(Z_Construct_UClass_ATATGoalZone_Statics::NewProp_NumberOfTanks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATATGoalZone_Statics::NewProp_NumberOfTanks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATATGoalZone_Statics::NewProp_TankProp_MetaData[] = {
		{ "Category", "Prop" },
		{ "ModuleRelativePath", "Level/TATGoalZone.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATATGoalZone_Statics::NewProp_TankProp = { "TankProp", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATATGoalZone, TankProp), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATATGoalZone_Statics::NewProp_TankProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATATGoalZone_Statics::NewProp_TankProp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATATGoalZone_Statics::NewProp_bTankInserted_MetaData[] = {
		{ "Category", "TATGoalZone" },
		{ "ModuleRelativePath", "Level/TATGoalZone.h" },
	};
#endif
	void Z_Construct_UClass_ATATGoalZone_Statics::NewProp_bTankInserted_SetBit(void* Obj)
	{
		((ATATGoalZone*)Obj)->bTankInserted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATATGoalZone_Statics::NewProp_bTankInserted = { "bTankInserted", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATATGoalZone), &Z_Construct_UClass_ATATGoalZone_Statics::NewProp_bTankInserted_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATATGoalZone_Statics::NewProp_bTankInserted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATATGoalZone_Statics::NewProp_bTankInserted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATATGoalZone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATATGoalZone_Statics::NewProp_GoalZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATATGoalZone_Statics::NewProp_TankTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATATGoalZone_Statics::NewProp_TankPositions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATATGoalZone_Statics::NewProp_TankPositions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATATGoalZone_Statics::NewProp_MaxNumberOfTanks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATATGoalZone_Statics::NewProp_NumberOfTanks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATATGoalZone_Statics::NewProp_TankProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATATGoalZone_Statics::NewProp_bTankInserted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATATGoalZone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATATGoalZone>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATATGoalZone_Statics::ClassParams = {
		&ATATGoalZone::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATATGoalZone_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATATGoalZone_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATATGoalZone_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATATGoalZone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATATGoalZone()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATATGoalZone_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATATGoalZone, 3139030935);
	template<> TAKEATANK_API UClass* StaticClass<ATATGoalZone>()
	{
		return ATATGoalZone::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATATGoalZone(Z_Construct_UClass_ATATGoalZone, &ATATGoalZone::StaticClass, TEXT("/Script/TakeATank"), TEXT("ATATGoalZone"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATATGoalZone);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
