// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TakeATank/Enemy/TATEnemyBullet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTATEnemyBullet() {}
// Cross Module References
	TAKEATANK_API UClass* Z_Construct_UClass_ATATEnemyBullet_NoRegister();
	TAKEATANK_API UClass* Z_Construct_UClass_ATATEnemyBullet();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TakeATank();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void ATATEnemyBullet::StaticRegisterNativesATATEnemyBullet()
	{
	}
	UClass* Z_Construct_UClass_ATATEnemyBullet_NoRegister()
	{
		return ATATEnemyBullet::StaticClass();
	}
	struct Z_Construct_UClass_ATATEnemyBullet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Collision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Collision;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATATEnemyBullet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TakeATank,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATATEnemyBullet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Enemy/TATEnemyBullet.h" },
		{ "ModuleRelativePath", "Enemy/TATEnemyBullet.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATATEnemyBullet_Statics::NewProp_Collision_MetaData[] = {
		{ "Category", "TATEnemyBullet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy/TATEnemyBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATATEnemyBullet_Statics::NewProp_Collision = { "Collision", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATATEnemyBullet, Collision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATATEnemyBullet_Statics::NewProp_Collision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATATEnemyBullet_Statics::NewProp_Collision_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATATEnemyBullet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATATEnemyBullet_Statics::NewProp_Collision,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATATEnemyBullet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATATEnemyBullet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATATEnemyBullet_Statics::ClassParams = {
		&ATATEnemyBullet::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATATEnemyBullet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATATEnemyBullet_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATATEnemyBullet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATATEnemyBullet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATATEnemyBullet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATATEnemyBullet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATATEnemyBullet, 246048036);
	template<> TAKEATANK_API UClass* StaticClass<ATATEnemyBullet>()
	{
		return ATATEnemyBullet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATATEnemyBullet(Z_Construct_UClass_ATATEnemyBullet, &ATATEnemyBullet::StaticClass, TEXT("/Script/TakeATank"), TEXT("ATATEnemyBullet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATATEnemyBullet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
