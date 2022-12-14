// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JobSimulator/Product_Bag.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProduct_Bag() {}
// Cross Module References
	JOBSIMULATOR_API UClass* Z_Construct_UClass_AProduct_Bag_NoRegister();
	JOBSIMULATOR_API UClass* Z_Construct_UClass_AProduct_Bag();
	JOBSIMULATOR_API UClass* Z_Construct_UClass_AProductBase();
	UPackage* Z_Construct_UPackage__Script_JobSimulator();
// End Cross Module References
	void AProduct_Bag::StaticRegisterNativesAProduct_Bag()
	{
	}
	UClass* Z_Construct_UClass_AProduct_Bag_NoRegister()
	{
		return AProduct_Bag::StaticClass();
	}
	struct Z_Construct_UClass_AProduct_Bag_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProduct_Bag_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AProductBase,
		(UObject* (*)())Z_Construct_UPackage__Script_JobSimulator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProduct_Bag_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Product_Bag.h" },
		{ "ModuleRelativePath", "Product_Bag.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProduct_Bag_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProduct_Bag>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProduct_Bag_Statics::ClassParams = {
		&AProduct_Bag::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AProduct_Bag_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProduct_Bag_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProduct_Bag()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProduct_Bag_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProduct_Bag, 4009504652);
	template<> JOBSIMULATOR_API UClass* StaticClass<AProduct_Bag>()
	{
		return AProduct_Bag::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProduct_Bag(Z_Construct_UClass_AProduct_Bag, &AProduct_Bag::StaticClass, TEXT("/Script/JobSimulator"), TEXT("AProduct_Bag"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProduct_Bag);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
