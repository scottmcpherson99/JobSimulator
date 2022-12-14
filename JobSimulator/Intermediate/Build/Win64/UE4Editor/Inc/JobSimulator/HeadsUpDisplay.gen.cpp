// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JobSimulator/HeadsUpDisplay.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeadsUpDisplay() {}
// Cross Module References
	JOBSIMULATOR_API UClass* Z_Construct_UClass_UHeadsUpDisplay_NoRegister();
	JOBSIMULATOR_API UClass* Z_Construct_UClass_UHeadsUpDisplay();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_JobSimulator();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void UHeadsUpDisplay::StaticRegisterNativesUHeadsUpDisplay()
	{
	}
	UClass* Z_Construct_UClass_UHeadsUpDisplay_NoRegister()
	{
		return UHeadsUpDisplay::StaticClass();
	}
	struct Z_Construct_UClass_UHeadsUpDisplay_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductHolding_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProductHolding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredProduct_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DesiredProduct;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParcelsLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParcelsLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TimeLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeadsUpDisplay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_JobSimulator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeadsUpDisplay_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HeadsUpDisplay.h" },
		{ "ModuleRelativePath", "HeadsUpDisplay.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeadsUpDisplay_Statics::NewProp_ProductHolding_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "HeadsUpDisplay" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////////////\n// <Components>\n//text to show the product the player is holding\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HeadsUpDisplay.h" },
		{ "ToolTip", "<Components>\ntext to show the product the player is holding" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHeadsUpDisplay_Statics::NewProp_ProductHolding = { "ProductHolding", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeadsUpDisplay, ProductHolding), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHeadsUpDisplay_Statics::NewProp_ProductHolding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeadsUpDisplay_Statics::NewProp_ProductHolding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeadsUpDisplay_Statics::NewProp_DesiredProduct_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "HeadsUpDisplay" },
		{ "Comment", "//text to show the desired product\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HeadsUpDisplay.h" },
		{ "ToolTip", "text to show the desired product" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHeadsUpDisplay_Statics::NewProp_DesiredProduct = { "DesiredProduct", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeadsUpDisplay, DesiredProduct), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHeadsUpDisplay_Statics::NewProp_DesiredProduct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeadsUpDisplay_Statics::NewProp_DesiredProduct_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeadsUpDisplay_Statics::NewProp_ParcelsLeft_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "HeadsUpDisplay" },
		{ "Comment", "//text to show the number of parcels left\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HeadsUpDisplay.h" },
		{ "ToolTip", "text to show the number of parcels left" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHeadsUpDisplay_Statics::NewProp_ParcelsLeft = { "ParcelsLeft", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeadsUpDisplay, ParcelsLeft), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHeadsUpDisplay_Statics::NewProp_ParcelsLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeadsUpDisplay_Statics::NewProp_ParcelsLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeadsUpDisplay_Statics::NewProp_TimeLeft_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "HeadsUpDisplay" },
		{ "Comment", "//text to show the time left in the game\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HeadsUpDisplay.h" },
		{ "ToolTip", "text to show the time left in the game" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHeadsUpDisplay_Statics::NewProp_TimeLeft = { "TimeLeft", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeadsUpDisplay, TimeLeft), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHeadsUpDisplay_Statics::NewProp_TimeLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeadsUpDisplay_Statics::NewProp_TimeLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeadsUpDisplay_Statics::NewProp_InteractMessage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "HeadsUpDisplay" },
		{ "Comment", "//text to show if the player can interact with an object\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HeadsUpDisplay.h" },
		{ "ToolTip", "text to show if the player can interact with an object" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHeadsUpDisplay_Statics::NewProp_InteractMessage = { "InteractMessage", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeadsUpDisplay, InteractMessage), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHeadsUpDisplay_Statics::NewProp_InteractMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeadsUpDisplay_Statics::NewProp_InteractMessage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHeadsUpDisplay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeadsUpDisplay_Statics::NewProp_ProductHolding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeadsUpDisplay_Statics::NewProp_DesiredProduct,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeadsUpDisplay_Statics::NewProp_ParcelsLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeadsUpDisplay_Statics::NewProp_TimeLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeadsUpDisplay_Statics::NewProp_InteractMessage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeadsUpDisplay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeadsUpDisplay>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHeadsUpDisplay_Statics::ClassParams = {
		&UHeadsUpDisplay::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHeadsUpDisplay_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHeadsUpDisplay_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHeadsUpDisplay_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHeadsUpDisplay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHeadsUpDisplay()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHeadsUpDisplay_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHeadsUpDisplay, 4278838256);
	template<> JOBSIMULATOR_API UClass* StaticClass<UHeadsUpDisplay>()
	{
		return UHeadsUpDisplay::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHeadsUpDisplay(Z_Construct_UClass_UHeadsUpDisplay, &UHeadsUpDisplay::StaticClass, TEXT("/Script/JobSimulator"), TEXT("UHeadsUpDisplay"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeadsUpDisplay);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
