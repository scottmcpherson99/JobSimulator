// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JobSimulator/Product_Picture.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProduct_Picture() {}
// Cross Module References
	JOBSIMULATOR_API UClass* Z_Construct_UClass_AProduct_Picture_NoRegister();
	JOBSIMULATOR_API UClass* Z_Construct_UClass_AProduct_Picture();
	JOBSIMULATOR_API UClass* Z_Construct_UClass_AProductBase();
	UPackage* Z_Construct_UPackage__Script_JobSimulator();
// End Cross Module References
	void AProduct_Picture::StaticRegisterNativesAProduct_Picture()
	{
	}
	UClass* Z_Construct_UClass_AProduct_Picture_NoRegister()
	{
		return AProduct_Picture::StaticClass();
	}
	struct Z_Construct_UClass_AProduct_Picture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProduct_Picture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AProductBase,
		(UObject* (*)())Z_Construct_UPackage__Script_JobSimulator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProduct_Picture_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Product_Picture.h" },
		{ "ModuleRelativePath", "Product_Picture.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProduct_Picture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProduct_Picture>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProduct_Picture_Statics::ClassParams = {
		&AProduct_Picture::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AProduct_Picture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProduct_Picture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProduct_Picture()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProduct_Picture_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProduct_Picture, 2577866803);
	template<> JOBSIMULATOR_API UClass* StaticClass<AProduct_Picture>()
	{
		return AProduct_Picture::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProduct_Picture(Z_Construct_UClass_AProduct_Picture, &AProduct_Picture::StaticClass, TEXT("/Script/JobSimulator"), TEXT("AProduct_Picture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProduct_Picture);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
