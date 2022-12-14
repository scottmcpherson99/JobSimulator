// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JobSimulator/Product_Chair.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProduct_Chair() {}
// Cross Module References
	JOBSIMULATOR_API UClass* Z_Construct_UClass_AProduct_Chair_NoRegister();
	JOBSIMULATOR_API UClass* Z_Construct_UClass_AProduct_Chair();
	JOBSIMULATOR_API UClass* Z_Construct_UClass_AProductBase();
	UPackage* Z_Construct_UPackage__Script_JobSimulator();
// End Cross Module References
	void AProduct_Chair::StaticRegisterNativesAProduct_Chair()
	{
	}
	UClass* Z_Construct_UClass_AProduct_Chair_NoRegister()
	{
		return AProduct_Chair::StaticClass();
	}
	struct Z_Construct_UClass_AProduct_Chair_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProduct_Chair_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AProductBase,
		(UObject* (*)())Z_Construct_UPackage__Script_JobSimulator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProduct_Chair_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Product_Chair.h" },
		{ "ModuleRelativePath", "Product_Chair.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProduct_Chair_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProduct_Chair>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProduct_Chair_Statics::ClassParams = {
		&AProduct_Chair::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AProduct_Chair_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProduct_Chair_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProduct_Chair()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProduct_Chair_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProduct_Chair, 1359309642);
	template<> JOBSIMULATOR_API UClass* StaticClass<AProduct_Chair>()
	{
		return AProduct_Chair::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProduct_Chair(Z_Construct_UClass_AProduct_Chair, &AProduct_Chair::StaticClass, TEXT("/Script/JobSimulator"), TEXT("AProduct_Chair"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProduct_Chair);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
