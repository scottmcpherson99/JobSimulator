// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JobSimulator/Product_Lamp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProduct_Lamp() {}
// Cross Module References
	JOBSIMULATOR_API UClass* Z_Construct_UClass_AProduct_Lamp_NoRegister();
	JOBSIMULATOR_API UClass* Z_Construct_UClass_AProduct_Lamp();
	JOBSIMULATOR_API UClass* Z_Construct_UClass_AProductBase();
	UPackage* Z_Construct_UPackage__Script_JobSimulator();
// End Cross Module References
	void AProduct_Lamp::StaticRegisterNativesAProduct_Lamp()
	{
	}
	UClass* Z_Construct_UClass_AProduct_Lamp_NoRegister()
	{
		return AProduct_Lamp::StaticClass();
	}
	struct Z_Construct_UClass_AProduct_Lamp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProduct_Lamp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AProductBase,
		(UObject* (*)())Z_Construct_UPackage__Script_JobSimulator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProduct_Lamp_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Product_Lamp.h" },
		{ "ModuleRelativePath", "Product_Lamp.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProduct_Lamp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProduct_Lamp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProduct_Lamp_Statics::ClassParams = {
		&AProduct_Lamp::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AProduct_Lamp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProduct_Lamp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProduct_Lamp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProduct_Lamp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProduct_Lamp, 2216061325);
	template<> JOBSIMULATOR_API UClass* StaticClass<AProduct_Lamp>()
	{
		return AProduct_Lamp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProduct_Lamp(Z_Construct_UClass_AProduct_Lamp, &AProduct_Lamp::StaticClass, TEXT("/Script/JobSimulator"), TEXT("AProduct_Lamp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProduct_Lamp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
