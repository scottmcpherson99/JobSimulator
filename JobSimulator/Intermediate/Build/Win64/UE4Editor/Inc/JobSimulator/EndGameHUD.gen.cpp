// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JobSimulator/EndGameHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEndGameHUD() {}
// Cross Module References
	JOBSIMULATOR_API UClass* Z_Construct_UClass_UEndGameHUD_NoRegister();
	JOBSIMULATOR_API UClass* Z_Construct_UClass_UEndGameHUD();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_JobSimulator();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEndGameHUD::execOnQuitClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuitClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEndGameHUD::execOnRetryClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRetryClicked();
		P_NATIVE_END;
	}
	void UEndGameHUD::StaticRegisterNativesUEndGameHUD()
	{
		UClass* Class = UEndGameHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnQuitClicked", &UEndGameHUD::execOnQuitClicked },
			{ "OnRetryClicked", &UEndGameHUD::execOnRetryClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEndGameHUD_OnQuitClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEndGameHUD_OnQuitClicked_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//exit the application\n" },
		{ "ModuleRelativePath", "EndGameHUD.h" },
		{ "ToolTip", "exit the application" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEndGameHUD_OnQuitClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEndGameHUD, nullptr, "OnQuitClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEndGameHUD_OnQuitClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameHUD_OnQuitClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEndGameHUD_OnQuitClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEndGameHUD_OnQuitClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEndGameHUD_OnRetryClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEndGameHUD_OnRetryClicked_Statics::Function_MetaDataParams[] = {
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////////////\n// <ButtonFunctions>\n//restart the level\n" },
		{ "ModuleRelativePath", "EndGameHUD.h" },
		{ "ToolTip", "<ButtonFunctions>\nrestart the level" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEndGameHUD_OnRetryClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEndGameHUD, nullptr, "OnRetryClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEndGameHUD_OnRetryClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameHUD_OnRetryClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEndGameHUD_OnRetryClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEndGameHUD_OnRetryClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEndGameHUD_NoRegister()
	{
		return UEndGameHUD::StaticClass();
	}
	struct Z_Construct_UClass_UEndGameHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RetryButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RetryButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuitButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuitButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameOutcome_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameOutcome;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEndGameHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_JobSimulator,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEndGameHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEndGameHUD_OnQuitClicked, "OnQuitClicked" }, // 1143429508
		{ &Z_Construct_UFunction_UEndGameHUD_OnRetryClicked, "OnRetryClicked" }, // 4058382396
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEndGameHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EndGameHUD.h" },
		{ "ModuleRelativePath", "EndGameHUD.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEndGameHUD_Statics::NewProp_RetryButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "EndGameHUD" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////////////\n// <Components>\n//button that will restart the level\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EndGameHUD.h" },
		{ "ToolTip", "<Components>\nbutton that will restart the level" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEndGameHUD_Statics::NewProp_RetryButton = { "RetryButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEndGameHUD, RetryButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEndGameHUD_Statics::NewProp_RetryButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEndGameHUD_Statics::NewProp_RetryButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEndGameHUD_Statics::NewProp_QuitButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "EndGameHUD" },
		{ "Comment", "//button that will exit the application\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EndGameHUD.h" },
		{ "ToolTip", "button that will exit the application" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEndGameHUD_Statics::NewProp_QuitButton = { "QuitButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEndGameHUD, QuitButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEndGameHUD_Statics::NewProp_QuitButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEndGameHUD_Statics::NewProp_QuitButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEndGameHUD_Statics::NewProp_GameOutcome_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "EndGameHUD" },
		{ "Comment", "// text to let the player know the outcome of the game\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EndGameHUD.h" },
		{ "ToolTip", "text to let the player know the outcome of the game" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEndGameHUD_Statics::NewProp_GameOutcome = { "GameOutcome", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEndGameHUD, GameOutcome), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEndGameHUD_Statics::NewProp_GameOutcome_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEndGameHUD_Statics::NewProp_GameOutcome_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEndGameHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEndGameHUD_Statics::NewProp_RetryButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEndGameHUD_Statics::NewProp_QuitButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEndGameHUD_Statics::NewProp_GameOutcome,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEndGameHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEndGameHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEndGameHUD_Statics::ClassParams = {
		&UEndGameHUD::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEndGameHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEndGameHUD_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEndGameHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEndGameHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEndGameHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEndGameHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEndGameHUD, 1691959227);
	template<> JOBSIMULATOR_API UClass* StaticClass<UEndGameHUD>()
	{
		return UEndGameHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEndGameHUD(Z_Construct_UClass_UEndGameHUD, &UEndGameHUD::StaticClass, TEXT("/Script/JobSimulator"), TEXT("UEndGameHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEndGameHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
