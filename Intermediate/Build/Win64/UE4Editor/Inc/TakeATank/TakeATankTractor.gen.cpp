// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TakeATank/TakeATankTractor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTakeATankTractor() {}
// Cross Module References
	TAKEATANK_API UClass* Z_Construct_UClass_ATakeATankTractor_NoRegister();
	TAKEATANK_API UClass* Z_Construct_UClass_ATakeATankTractor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TakeATank();
// End Cross Module References
	void ATakeATankTractor::StaticRegisterNativesATakeATankTractor()
	{
	}
	UClass* Z_Construct_UClass_ATakeATankTractor_NoRegister()
	{
		return ATakeATankTractor::StaticClass();
	}
	struct Z_Construct_UClass_ATakeATankTractor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATakeATankTractor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TakeATank,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATakeATankTractor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TakeATankTractor.h" },
		{ "ModuleRelativePath", "TakeATankTractor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATakeATankTractor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATakeATankTractor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATakeATankTractor_Statics::ClassParams = {
		&ATakeATankTractor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATakeATankTractor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATakeATankTractor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATakeATankTractor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATakeATankTractor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATakeATankTractor, 674354860);
	template<> TAKEATANK_API UClass* StaticClass<ATakeATankTractor>()
	{
		return ATakeATankTractor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATakeATankTractor(Z_Construct_UClass_ATakeATankTractor, &ATakeATankTractor::StaticClass, TEXT("/Script/TakeATank"), TEXT("ATakeATankTractor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATakeATankTractor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
