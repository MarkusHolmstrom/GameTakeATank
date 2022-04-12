// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TakeATank/Camera/TakeATankCamera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTakeATankCamera() {}
// Cross Module References
	TAKEATANK_API UClass* Z_Construct_UClass_ATakeATankCamera_NoRegister();
	TAKEATANK_API UClass* Z_Construct_UClass_ATakeATankCamera();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TakeATank();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ATakeATankCamera::StaticRegisterNativesATakeATankCamera()
	{
	}
	UClass* Z_Construct_UClass_ATakeATankCamera_NoRegister()
	{
		return ATakeATankCamera::StaticClass();
	}
	struct Z_Construct_UClass_ATakeATankCamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FollowSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATakeATankCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TakeATank,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATakeATankCamera_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Camera/TakeATankCamera.h" },
		{ "ModuleRelativePath", "Camera/TakeATankCamera.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATakeATankCamera_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "TakeATankCamera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Camera/TakeATankCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATakeATankCamera_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATakeATankCamera, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATakeATankCamera_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATakeATankCamera_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATakeATankCamera_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "TakeATankCamera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Camera/TakeATankCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATakeATankCamera_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATakeATankCamera, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATakeATankCamera_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATakeATankCamera_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATakeATankCamera_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "TakeATankCamera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Camera/TakeATankCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATakeATankCamera_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATakeATankCamera, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATakeATankCamera_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATakeATankCamera_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATakeATankCamera_Statics::NewProp_FollowSpeed_MetaData[] = {
		{ "Category", "TakeATankCamera" },
		{ "ModuleRelativePath", "Camera/TakeATankCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATakeATankCamera_Statics::NewProp_FollowSpeed = { "FollowSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATakeATankCamera, FollowSpeed), METADATA_PARAMS(Z_Construct_UClass_ATakeATankCamera_Statics::NewProp_FollowSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATakeATankCamera_Statics::NewProp_FollowSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATakeATankCamera_Statics::NewProp_FollowActor_MetaData[] = {
		{ "Category", "TakeATankCamera" },
		{ "ModuleRelativePath", "Camera/TakeATankCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATakeATankCamera_Statics::NewProp_FollowActor = { "FollowActor", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATakeATankCamera, FollowActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATakeATankCamera_Statics::NewProp_FollowActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATakeATankCamera_Statics::NewProp_FollowActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATakeATankCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATakeATankCamera_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATakeATankCamera_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATakeATankCamera_Statics::NewProp_SpringArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATakeATankCamera_Statics::NewProp_FollowSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATakeATankCamera_Statics::NewProp_FollowActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATakeATankCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATakeATankCamera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATakeATankCamera_Statics::ClassParams = {
		&ATakeATankCamera::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATakeATankCamera_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATakeATankCamera_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATakeATankCamera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATakeATankCamera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATakeATankCamera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATakeATankCamera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATakeATankCamera, 2648515999);
	template<> TAKEATANK_API UClass* StaticClass<ATakeATankCamera>()
	{
		return ATakeATankCamera::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATakeATankCamera(Z_Construct_UClass_ATakeATankCamera, &ATakeATankCamera::StaticClass, TEXT("/Script/TakeATank"), TEXT("ATakeATankCamera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATakeATankCamera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
