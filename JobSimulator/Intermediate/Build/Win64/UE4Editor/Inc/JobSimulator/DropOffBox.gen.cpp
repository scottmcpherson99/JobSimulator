// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JobSimulator/DropOffBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDropOffBox() {}
// Cross Module References
	JOBSIMULATOR_API UClass* Z_Construct_UClass_ADropOffBox_NoRegister();
	JOBSIMULATOR_API UClass* Z_Construct_UClass_ADropOffBox();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_JobSimulator();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ADropOffBox::execOnComponentEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnComponentEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADropOffBox::execOnTriggerBoxOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTriggerBoxOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void ADropOffBox::StaticRegisterNativesADropOffBox()
	{
		UClass* Class = ADropOffBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnComponentEndOverlap", &ADropOffBox::execOnComponentEndOverlap },
			{ "OnTriggerBoxOverlap", &ADropOffBox::execOnTriggerBoxOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADropOffBox_OnComponentEndOverlap_Statics
	{
		struct DropOffBox_eventOnComponentEndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADropOffBox_OnComponentEndOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADropOffBox_OnComponentEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DropOffBox_eventOnComponentEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADropOffBox_OnComponentEndOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADropOffBox_OnComponentEndOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADropOffBox_OnComponentEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DropOffBox_eventOnComponentEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADropOffBox_OnComponentEndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADropOffBox_OnComponentEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DropOffBox_eventOnComponentEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADropOffBox_OnComponentEndOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADropOffBox_OnComponentEndOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADropOffBox_OnComponentEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DropOffBox_eventOnComponentEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADropOffBox_OnComponentEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADropOffBox_OnComponentEndOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADropOffBox_OnComponentEndOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADropOffBox_OnComponentEndOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADropOffBox_OnComponentEndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADropOffBox_OnComponentEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//checks to see if any actors have exited the collision box\n" },
		{ "ModuleRelativePath", "DropOffBox.h" },
		{ "ToolTip", "checks to see if any actors have exited the collision box" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADropOffBox_OnComponentEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADropOffBox, nullptr, "OnComponentEndOverlap", nullptr, nullptr, sizeof(DropOffBox_eventOnComponentEndOverlap_Parms), Z_Construct_UFunction_ADropOffBox_OnComponentEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADropOffBox_OnComponentEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADropOffBox_OnComponentEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADropOffBox_OnComponentEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADropOffBox_OnComponentEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADropOffBox_OnComponentEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADropOffBox_OnTriggerBoxOverlap_Statics
	{
		struct DropOffBox_eventOnTriggerBoxOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADropOffBox_OnTriggerBoxOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADropOffBox_OnTriggerBoxOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DropOffBox_eventOnTriggerBoxOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADropOffBox_OnTriggerBoxOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADropOffBox_OnTriggerBoxOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADropOffBox_OnTriggerBoxOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DropOffBox_eventOnTriggerBoxOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADropOffBox_OnTriggerBoxOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADropOffBox_OnTriggerBoxOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DropOffBox_eventOnTriggerBoxOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADropOffBox_OnTriggerBoxOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADropOffBox_OnTriggerBoxOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADropOffBox_OnTriggerBoxOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DropOffBox_eventOnTriggerBoxOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADropOffBox_OnTriggerBoxOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((DropOffBox_eventOnTriggerBoxOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADropOffBox_OnTriggerBoxOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DropOffBox_eventOnTriggerBoxOverlap_Parms), &Z_Construct_UFunction_ADropOffBox_OnTriggerBoxOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADropOffBox_OnTriggerBoxOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADropOffBox_OnTriggerBoxOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DropOffBox_eventOnTriggerBoxOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ADropOffBox_OnTriggerBoxOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADropOffBox_OnTriggerBoxOverlap_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADropOffBox_OnTriggerBoxOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADropOffBox_OnTriggerBoxOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADropOffBox_OnTriggerBoxOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADropOffBox_OnTriggerBoxOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADropOffBox_OnTriggerBoxOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADropOffBox_OnTriggerBoxOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADropOffBox_OnTriggerBoxOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADropOffBox_OnTriggerBoxOverlap_Statics::Function_MetaDataParams[] = {
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////////////\n// <Collision>\n//checks to see if any actors have overlapped the collision box\n" },
		{ "ModuleRelativePath", "DropOffBox.h" },
		{ "ToolTip", "<Collision>\nchecks to see if any actors have overlapped the collision box" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADropOffBox_OnTriggerBoxOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADropOffBox, nullptr, "OnTriggerBoxOverlap", nullptr, nullptr, sizeof(DropOffBox_eventOnTriggerBoxOverlap_Parms), Z_Construct_UFunction_ADropOffBox_OnTriggerBoxOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADropOffBox_OnTriggerBoxOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADropOffBox_OnTriggerBoxOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADropOffBox_OnTriggerBoxOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADropOffBox_OnTriggerBoxOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADropOffBox_OnTriggerBoxOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADropOffBox_NoRegister()
	{
		return ADropOffBox::StaticClass();
	}
	struct Z_Construct_UClass_ADropOffBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_productMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_productMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggerBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADropOffBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_JobSimulator,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADropOffBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADropOffBox_OnComponentEndOverlap, "OnComponentEndOverlap" }, // 3485300679
		{ &Z_Construct_UFunction_ADropOffBox_OnTriggerBoxOverlap, "OnTriggerBoxOverlap" }, // 1780070761
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADropOffBox_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DropOffBox.h" },
		{ "ModuleRelativePath", "DropOffBox.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADropOffBox_Statics::NewProp_productMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "//the platform Mesh\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DropOffBox.h" },
		{ "ToolTip", "the platform Mesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADropOffBox_Statics::NewProp_productMesh = { "productMesh", nullptr, (EPropertyFlags)0x002008000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADropOffBox, productMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADropOffBox_Statics::NewProp_productMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADropOffBox_Statics::NewProp_productMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADropOffBox_Statics::NewProp_TriggerBox_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "// TriggerBox component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DropOffBox.h" },
		{ "ToolTip", "TriggerBox component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADropOffBox_Statics::NewProp_TriggerBox = { "TriggerBox", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADropOffBox, TriggerBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADropOffBox_Statics::NewProp_TriggerBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADropOffBox_Statics::NewProp_TriggerBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADropOffBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADropOffBox_Statics::NewProp_productMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADropOffBox_Statics::NewProp_TriggerBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADropOffBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADropOffBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADropOffBox_Statics::ClassParams = {
		&ADropOffBox::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADropOffBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADropOffBox_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADropOffBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADropOffBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADropOffBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADropOffBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADropOffBox, 1950309979);
	template<> JOBSIMULATOR_API UClass* StaticClass<ADropOffBox>()
	{
		return ADropOffBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADropOffBox(Z_Construct_UClass_ADropOffBox, &ADropOffBox::StaticClass, TEXT("/Script/JobSimulator"), TEXT("ADropOffBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADropOffBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
