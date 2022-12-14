// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JobSimulator/Product_Boot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProduct_Boot() {}
// Cross Module References
	JOBSIMULATOR_API UClass* Z_Construct_UClass_AProduct_Boot_NoRegister();
	JOBSIMULATOR_API UClass* Z_Construct_UClass_AProduct_Boot();
	JOBSIMULATOR_API UClass* Z_Construct_UClass_AProductBase();
	UPackage* Z_Construct_UPackage__Script_JobSimulator();
// End Cross Module References
	void AProduct_Boot::StaticRegisterNativesAProduct_Boot()
	{
	}
	UClass* Z_Construct_UClass_AProduct_Boot_NoRegister()
	{
		return AProduct_Boot::StaticClass();
	}
	struct Z_Construct_UClass_AProduct_Boot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProduct_Boot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AProductBase,
		(UObject* (*)())Z_Construct_UPackage__Script_JobSimulator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProduct_Boot_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Product_Boot.h" },
		{ "ModuleRelativePath", "Product_Boot.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProduct_Boot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProduct_Boot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProduct_Boot_Statics::ClassParams = {
		&AProduct_Boot::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AProduct_Boot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProduct_Boot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProduct_Boot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProduct_Boot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProduct_Boot, 3617497338);
	template<> JOBSIMULATOR_API UClass* StaticClass<AProduct_Boot>()
	{
		return AProduct_Boot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProduct_Boot(Z_Construct_UClass_AProduct_Boot, &AProduct_Boot::StaticClass, TEXT("/Script/JobSimulator"), TEXT("AProduct_Boot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProduct_Boot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
