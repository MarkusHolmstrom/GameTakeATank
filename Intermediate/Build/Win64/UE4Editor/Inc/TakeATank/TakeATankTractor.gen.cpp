// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TakeATank/Tractor/TakeATankTractor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTakeATankTractor() {}
// Cross Module References
	TAKEATANK_API UClass* Z_Construct_UClass_ATakeATankTractor_NoRegister();
	TAKEATANK_API UClass* Z_Construct_UClass_ATakeATankTractor();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_TakeATank();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxCollision;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATakeATankTractor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_TakeATank,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATakeATankTractor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//class UPowerUp;\n" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Tractor/TakeATankTractor.h" },
		{ "ModuleRelativePath", "Tractor/TakeATankTractor.h" },
		{ "ToolTip", "class UPowerUp;" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATakeATankTractor_Statics::NewProp_BoxCollision_MetaData[] = {
		{ "Category", "TakeATankTractor" },
		{ "Comment", "//UPROPERTY(EditAnywhere)\n//\x09""ATankCamera* Cam;\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Tractor/TakeATankTractor.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere)\n       ATankCamera* Cam;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATakeATankTractor_Statics::NewProp_BoxCollision = { "BoxCollision", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATakeATankTractor, BoxCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATakeATankTractor_Statics::NewProp_BoxCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATakeATankTractor_Statics::NewProp_BoxCollision_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATakeATankTractor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATakeATankTractor_Statics::NewProp_BoxCollision,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATakeATankTractor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATakeATankTractor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATakeATankTractor_Statics::ClassParams = {
		&ATakeATankTractor::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATakeATankTractor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATakeATankTractor_Statics::PropPointers),
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
	IMPLEMENT_CLASS(ATakeATankTractor, 657653995);
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
