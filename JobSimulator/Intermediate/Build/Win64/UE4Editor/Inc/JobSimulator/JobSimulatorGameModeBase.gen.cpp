// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JobSimulator/JobSimulatorGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJobSimulatorGameModeBase() {}
// Cross Module References
	JOBSIMULATOR_API UClass* Z_Construct_UClass_AJobSimulatorGameModeBase_NoRegister();
	JOBSIMULATOR_API UClass* Z_Construct_UClass_AJobSimulatorGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_JobSimulator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void AJobSimulatorGameModeBase::StaticRegisterNativesAJobSimulatorGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AJobSimulatorGameModeBase_NoRegister()
	{
		return AJobSimulatorGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AJobSimulatorGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadsUpDisplayWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HeadsUpDisplayWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJobSimulatorGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_JobSimulator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJobSimulatorGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "JobSimulatorGameModeBase.h" },
		{ "ModuleRelativePath", "JobSimulatorGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJobSimulatorGameModeBase_Statics::NewProp_HeadsUpDisplayWidget_MetaData[] = {
		{ "Category", "Widget" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////////////\n// <Widgets>\n//widget class to use for our hud screen\n" },
		{ "ModuleRelativePath", "JobSimulatorGameModeBase.h" },
		{ "ToolTip", "<Widgets>\nwidget class to use for our hud screen" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AJobSimulatorGameModeBase_Statics::NewProp_HeadsUpDisplayWidget = { "HeadsUpDisplayWidget", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJobSimulatorGameModeBase, HeadsUpDisplayWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AJobSimulatorGameModeBase_Statics::NewProp_HeadsUpDisplayWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJobSimulatorGameModeBase_Statics::NewProp_HeadsUpDisplayWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AJobSimulatorGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJobSimulatorGameModeBase_Statics::NewProp_HeadsUpDisplayWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJobSimulatorGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJobSimulatorGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AJobSimulatorGameModeBase_Statics::ClassParams = {
		&AJobSimulatorGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AJobSimulatorGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AJobSimulatorGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AJobSimulatorGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AJobSimulatorGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJobSimulatorGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AJobSimulatorGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AJobSimulatorGameModeBase, 2936200134);
	template<> JOBSIMULATOR_API UClass* StaticClass<AJobSimulatorGameModeBase>()
	{
		return AJobSimulatorGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AJobSimulatorGameModeBase(Z_Construct_UClass_AJobSimulatorGameModeBase, &AJobSimulatorGameModeBase::StaticClass, TEXT("/Script/JobSimulator"), TEXT("AJobSimulatorGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJobSimulatorGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
