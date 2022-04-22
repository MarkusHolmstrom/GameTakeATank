// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TakeATank/Tractor/TractorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTractorComponent() {}
// Cross Module References
	TAKEATANK_API UClass* Z_Construct_UClass_UTractorComponent_NoRegister();
	TAKEATANK_API UClass* Z_Construct_UClass_UTractorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TakeATank();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTractorComponent::execCheckIfTractorTipped)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckIfTractorTipped(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	void UTractorComponent::StaticRegisterNativesUTractorComponent()
	{
		UClass* Class = UTractorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckIfTractorTipped", &UTractorComponent::execCheckIfTractorTipped },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTractorComponent_CheckIfTractorTipped_Statics
	{
		struct TractorComponent_eventCheckIfTractorTipped_Parms
		{
			float DeltaTime;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTractorComponent_CheckIfTractorTipped_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TractorComponent_eventCheckIfTractorTipped_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTractorComponent_CheckIfTractorTipped_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TractorComponent_eventCheckIfTractorTipped_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTractorComponent_CheckIfTractorTipped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TractorComponent_eventCheckIfTractorTipped_Parms), &Z_Construct_UFunction_UTractorComponent_CheckIfTractorTipped_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTractorComponent_CheckIfTractorTipped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTractorComponent_CheckIfTractorTipped_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTractorComponent_CheckIfTractorTipped_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTractorComponent_CheckIfTractorTipped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Tractor/TractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTractorComponent_CheckIfTractorTipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTractorComponent, nullptr, "CheckIfTractorTipped", nullptr, nullptr, sizeof(TractorComponent_eventCheckIfTractorTipped_Parms), Z_Construct_UFunction_UTractorComponent_CheckIfTractorTipped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTractorComponent_CheckIfTractorTipped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTractorComponent_CheckIfTractorTipped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTractorComponent_CheckIfTractorTipped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTractorComponent_CheckIfTractorTipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTractorComponent_CheckIfTractorTipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTractorComponent_NoRegister()
	{
		return UTractorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTractorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tractor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Tractor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinZPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinZPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxXAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxXAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CheckTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Timer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTractorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TakeATank,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTractorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTractorComponent_CheckIfTractorTipped, "CheckIfTractorTipped" }, // 1427843786
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTractorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Tractor" },
		{ "IncludePath", "Tractor/TractorComponent.h" },
		{ "ModuleRelativePath", "Tractor/TractorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTractorComponent_Statics::NewProp_Tractor_MetaData[] = {
		{ "Category", "TractorComponent" },
		{ "ModuleRelativePath", "Tractor/TractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTractorComponent_Statics::NewProp_Tractor = { "Tractor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTractorComponent, Tractor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTractorComponent_Statics::NewProp_Tractor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTractorComponent_Statics::NewProp_Tractor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTractorComponent_Statics::NewProp_MinZPosition_MetaData[] = {
		{ "Category", "TractorComponent" },
		{ "ModuleRelativePath", "Tractor/TractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTractorComponent_Statics::NewProp_MinZPosition = { "MinZPosition", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTractorComponent, MinZPosition), METADATA_PARAMS(Z_Construct_UClass_UTractorComponent_Statics::NewProp_MinZPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTractorComponent_Statics::NewProp_MinZPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTractorComponent_Statics::NewProp_MaxXAngle_MetaData[] = {
		{ "Category", "TractorComponent" },
		{ "ModuleRelativePath", "Tractor/TractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTractorComponent_Statics::NewProp_MaxXAngle = { "MaxXAngle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTractorComponent, MaxXAngle), METADATA_PARAMS(Z_Construct_UClass_UTractorComponent_Statics::NewProp_MaxXAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTractorComponent_Statics::NewProp_MaxXAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTractorComponent_Statics::NewProp_CheckTimer_MetaData[] = {
		{ "Category", "TractorComponent" },
		{ "Comment", "// Needed to check the tractors angles not every frame\n" },
		{ "ModuleRelativePath", "Tractor/TractorComponent.h" },
		{ "ToolTip", "Needed to check the tractors angles not every frame" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTractorComponent_Statics::NewProp_CheckTimer = { "CheckTimer", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTractorComponent, CheckTimer), METADATA_PARAMS(Z_Construct_UClass_UTractorComponent_Statics::NewProp_CheckTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTractorComponent_Statics::NewProp_CheckTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTractorComponent_Statics::NewProp_Timer_MetaData[] = {
		{ "Category", "TractorComponent" },
		{ "ModuleRelativePath", "Tractor/TractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTractorComponent_Statics::NewProp_Timer = { "Timer", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTractorComponent, Timer), METADATA_PARAMS(Z_Construct_UClass_UTractorComponent_Statics::NewProp_Timer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTractorComponent_Statics::NewProp_Timer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTractorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTractorComponent_Statics::NewProp_Tractor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTractorComponent_Statics::NewProp_MinZPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTractorComponent_Statics::NewProp_MaxXAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTractorComponent_Statics::NewProp_CheckTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTractorComponent_Statics::NewProp_Timer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTractorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTractorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTractorComponent_Statics::ClassParams = {
		&UTractorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTractorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTractorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTractorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTractorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTractorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTractorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTractorComponent, 2991569506);
	template<> TAKEATANK_API UClass* StaticClass<UTractorComponent>()
	{
		return UTractorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTractorComponent(Z_Construct_UClass_UTractorComponent, &UTractorComponent::StaticClass, TEXT("/Script/TakeATank"), TEXT("UTractorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTractorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
