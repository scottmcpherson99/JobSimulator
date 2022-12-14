// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef JOBSIMULATOR_HeadsUpDisplay_generated_h
#error "HeadsUpDisplay.generated.h already included, missing '#pragma once' in HeadsUpDisplay.h"
#endif
#define JOBSIMULATOR_HeadsUpDisplay_generated_h

#define JobSimulator_Source_JobSimulator_HeadsUpDisplay_h_15_SPARSE_DATA
#define JobSimulator_Source_JobSimulator_HeadsUpDisplay_h_15_RPC_WRAPPERS
#define JobSimulator_Source_JobSimulator_HeadsUpDisplay_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define JobSimulator_Source_JobSimulator_HeadsUpDisplay_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHeadsUpDisplay(); \
	friend struct Z_Construct_UClass_UHeadsUpDisplay_Statics; \
public: \
	DECLARE_CLASS(UHeadsUpDisplay, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/JobSimulator"), NO_API) \
	DECLARE_SERIALIZER(UHeadsUpDisplay)


#define JobSimulator_Source_JobSimulator_HeadsUpDisplay_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUHeadsUpDisplay(); \
	friend struct Z_Construct_UClass_UHeadsUpDisplay_Statics; \
public: \
	DECLARE_CLASS(UHeadsUpDisplay, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/JobSimulator"), NO_API) \
	DECLARE_SERIALIZER(UHeadsUpDisplay)


#define JobSimulator_Source_JobSimulator_HeadsUpDisplay_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHeadsUpDisplay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHeadsUpDisplay) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHeadsUpDisplay); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHeadsUpDisplay); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHeadsUpDisplay(UHeadsUpDisplay&&); \
	NO_API UHeadsUpDisplay(const UHeadsUpDisplay&); \
public:


#define JobSimulator_Source_JobSimulator_HeadsUpDisplay_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHeadsUpDisplay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHeadsUpDisplay(UHeadsUpDisplay&&); \
	NO_API UHeadsUpDisplay(const UHeadsUpDisplay&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHeadsUpDisplay); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHeadsUpDisplay); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHeadsUpDisplay)


#define JobSimulator_Source_JobSimulator_HeadsUpDisplay_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProductHolding() { return STRUCT_OFFSET(UHeadsUpDisplay, ProductHolding); } \
	FORCEINLINE static uint32 __PPO__DesiredProduct() { return STRUCT_OFFSET(UHeadsUpDisplay, DesiredProduct); } \
	FORCEINLINE static uint32 __PPO__ParcelsLeft() { return STRUCT_OFFSET(UHeadsUpDisplay, ParcelsLeft); } \
	FORCEINLINE static uint32 __PPO__TimeLeft() { return STRUCT_OFFSET(UHeadsUpDisplay, TimeLeft); } \
	FORCEINLINE static uint32 __PPO__InteractMessage() { return STRUCT_OFFSET(UHeadsUpDisplay, InteractMessage); }


#define JobSimulator_Source_JobSimulator_HeadsUpDisplay_h_12_PROLOG
#define JobSimulator_Source_JobSimulator_HeadsUpDisplay_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JobSimulator_Source_JobSimulator_HeadsUpDisplay_h_15_PRIVATE_PROPERTY_OFFSET \
	JobSimulator_Source_JobSimulator_HeadsUpDisplay_h_15_SPARSE_DATA \
	JobSimulator_Source_JobSimulator_HeadsUpDisplay_h_15_RPC_WRAPPERS \
	JobSimulator_Source_JobSimulator_HeadsUpDisplay_h_15_INCLASS \
	JobSimulator_Source_JobSimulator_HeadsUpDisplay_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define JobSimulator_Source_JobSimulator_HeadsUpDisplay_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JobSimulator_Source_JobSimulator_HeadsUpDisplay_h_15_PRIVATE_PROPERTY_OFFSET \
	JobSimulator_Source_JobSimulator_HeadsUpDisplay_h_15_SPARSE_DATA \
	JobSimulator_Source_JobSimulator_HeadsUpDisplay_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	JobSimulator_Source_JobSimulator_HeadsUpDisplay_h_15_INCLASS_NO_PURE_DECLS \
	JobSimulator_Source_JobSimulator_HeadsUpDisplay_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JOBSIMULATOR_API UClass* StaticClass<class UHeadsUpDisplay>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID JobSimulator_Source_JobSimulator_HeadsUpDisplay_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
