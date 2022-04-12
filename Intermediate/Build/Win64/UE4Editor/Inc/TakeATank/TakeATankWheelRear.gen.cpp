// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TakeATank/TakeATankWheelRear.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTakeATankWheelRear() {}
// Cross Module References
	TAKEATANK_API UClass* Z_Construct_UClass_UTakeATankWheelRear_NoRegister();
	TAKEATANK_API UClass* Z_Construct_UClass_UTakeATankWheelRear();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_TakeATank();
// End Cross Module References
	void UTakeATankWheelRear::StaticRegisterNativesUTakeATankWheelRear()
	{
	}
	UClass* Z_Construct_UClass_UTakeATankWheelRear_NoRegister()
	{
		return UTakeATankWheelRear::StaticClass();
	}
	struct Z_Construct_UClass_UTakeATankWheelRear_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTakeATankWheelRear_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVehicleWheel,
		(UObject* (*)())Z_Construct_UPackage__Script_TakeATank,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeATankWheelRear_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TakeATankWheelRear.h" },
		{ "ModuleRelativePath", "TakeATankWheelRear.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTakeATankWheelRear_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTakeATankWheelRear>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTakeATankWheelRear_Statics::ClassParams = {
		&UTakeATankWheelRear::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTakeATankWheelRear_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeATankWheelRear_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTakeATankWheelRear()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTakeATankWheelRear_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTakeATankWheelRear, 3612183146);
	template<> TAKEATANK_API UClass* StaticClass<UTakeATankWheelRear>()
	{
		return UTakeATankWheelRear::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTakeATankWheelRear(Z_Construct_UClass_UTakeATankWheelRear, &UTakeATankWheelRear::StaticClass, TEXT("/Script/TakeATank"), TEXT("UTakeATankWheelRear"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTakeATankWheelRear);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
