// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef JOBSIMULATOR_EndGameHUD_generated_h
#error "EndGameHUD.generated.h already included, missing '#pragma once' in EndGameHUD.h"
#endif
#define JOBSIMULATOR_EndGameHUD_generated_h

#define JobSimulator_Source_JobSimulator_EndGameHUD_h_15_SPARSE_DATA
#define JobSimulator_Source_JobSimulator_EndGameHUD_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnQuitClicked); \
	DECLARE_FUNCTION(execOnRetryClicked);


#define JobSimulator_Source_JobSimulator_EndGameHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnQuitClicked); \
	DECLARE_FUNCTION(execOnRetryClicked);


#define JobSimulator_Source_JobSimulator_EndGameHUD_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEndGameHUD(); \
	friend struct Z_Construct_UClass_UEndGameHUD_Statics; \
public: \
	DECLARE_CLASS(UEndGameHUD, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/JobSimulator"), NO_API) \
	DECLARE_SERIALIZER(UEndGameHUD)


#define JobSimulator_Source_JobSimulator_EndGameHUD_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUEndGameHUD(); \
	friend struct Z_Construct_UClass_UEndGameHUD_Statics; \
public: \
	DECLARE_CLASS(UEndGameHUD, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/JobSimulator"), NO_API) \
	DECLARE_SERIALIZER(UEndGameHUD)


#define JobSimulator_Source_JobSimulator_EndGameHUD_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEndGameHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEndGameHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEndGameHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEndGameHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEndGameHUD(UEndGameHUD&&); \
	NO_API UEndGameHUD(const UEndGameHUD&); \
public:


#define JobSimulator_Source_JobSimulator_EndGameHUD_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEndGameHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEndGameHUD(UEndGameHUD&&); \
	NO_API UEndGameHUD(const UEndGameHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEndGameHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEndGameHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEndGameHUD)


#define JobSimulator_Source_JobSimulator_EndGameHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RetryButton() { return STRUCT_OFFSET(UEndGameHUD, RetryButton); } \
	FORCEINLINE static uint32 __PPO__QuitButton() { return STRUCT_OFFSET(UEndGameHUD, QuitButton); } \
	FORCEINLINE static uint32 __PPO__GameOutcome() { return STRUCT_OFFSET(UEndGameHUD, GameOutcome); }


#define JobSimulator_Source_JobSimulator_EndGameHUD_h_12_PROLOG
#define JobSimulator_Source_JobSimulator_EndGameHUD_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JobSimulator_Source_JobSimulator_EndGameHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	JobSimulator_Source_JobSimulator_EndGameHUD_h_15_SPARSE_DATA \
	JobSimulator_Source_JobSimulator_EndGameHUD_h_15_RPC_WRAPPERS \
	JobSimulator_Source_JobSimulator_EndGameHUD_h_15_INCLASS \
	JobSimulator_Source_JobSimulator_EndGameHUD_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define JobSimulator_Source_JobSimulator_EndGameHUD_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JobSimulator_Source_JobSimulator_EndGameHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	JobSimulator_Source_JobSimulator_EndGameHUD_h_15_SPARSE_DATA \
	JobSimulator_Source_JobSimulator_EndGameHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	JobSimulator_Source_JobSimulator_EndGameHUD_h_15_INCLASS_NO_PURE_DECLS \
	JobSimulator_Source_JobSimulator_EndGameHUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JOBSIMULATOR_API UClass* StaticClass<class UEndGameHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID JobSimulator_Source_JobSimulator_EndGameHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
