// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TakeATank/TakeATankGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTakeATankGameMode() {}
// Cross Module References
	TAKEATANK_API UClass* Z_Construct_UClass_ATakeATankGameMode_NoRegister();
	TAKEATANK_API UClass* Z_Construct_UClass_ATakeATankGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TakeATank();
// End Cross Module References
	void ATakeATankGameMode::StaticRegisterNativesATakeATankGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATakeATankGameMode_NoRegister()
	{
		return ATakeATankGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATakeATankGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATakeATankGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TakeATank,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATakeATankGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TakeATankGameMode.h" },
		{ "ModuleRelativePath", "TakeATankGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATakeATankGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATakeATankGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATakeATankGameMode_Statics::ClassParams = {
		&ATakeATankGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATakeATankGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATakeATankGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATakeATankGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATakeATankGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATakeATankGameMode, 2307165869);
	template<> TAKEATANK_API UClass* StaticClass<ATakeATankGameMode>()
	{
		return ATakeATankGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATakeATankGameMode(Z_Construct_UClass_ATakeATankGameMode, &ATakeATankGameMode::StaticClass, TEXT("/Script/TakeATank"), TEXT("ATakeATankGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATakeATankGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
