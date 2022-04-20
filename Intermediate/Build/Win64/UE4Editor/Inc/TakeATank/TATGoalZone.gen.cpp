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
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void ATATGoalZone::StaticRegisterNativesATATGoalZone()
	{
	}
	UClass* Z_Construct_UClass_ATATGoalZone_NoRegister()
	{
		return ATATGoalZone::StaticClass();
	}
	struct Z_Construct_UClass_ATATGoalZone_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoalZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GoalZone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATATGoalZone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TakeATank,
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
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATATGoalZone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATATGoalZone_Statics::NewProp_GoalZone,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATATGoalZone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATATGoalZone>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATATGoalZone_Statics::ClassParams = {
		&ATATGoalZone::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATATGoalZone_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
	IMPLEMENT_CLASS(ATATGoalZone, 3138491125);
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
