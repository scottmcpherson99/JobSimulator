// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef JOBSIMULATOR_DropOffBox_generated_h
#error "DropOffBox.generated.h already included, missing '#pragma once' in DropOffBox.h"
#endif
#define JOBSIMULATOR_DropOffBox_generated_h

#define JobSimulator_Source_JobSimulator_DropOffBox_h_12_SPARSE_DATA
#define JobSimulator_Source_JobSimulator_DropOffBox_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnComponentEndOverlap); \
	DECLARE_FUNCTION(execOnTriggerBoxOverlap);


#define JobSimulator_Source_JobSimulator_DropOffBox_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnComponentEndOverlap); \
	DECLARE_FUNCTION(execOnTriggerBoxOverlap);


#define JobSimulator_Source_JobSimulator_DropOffBox_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADropOffBox(); \
	friend struct Z_Construct_UClass_ADropOffBox_Statics; \
public: \
	DECLARE_CLASS(ADropOffBox, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JobSimulator"), NO_API) \
	DECLARE_SERIALIZER(ADropOffBox)


#define JobSimulator_Source_JobSimulator_DropOffBox_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADropOffBox(); \
	friend struct Z_Construct_UClass_ADropOffBox_Statics; \
public: \
	DECLARE_CLASS(ADropOffBox, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JobSimulator"), NO_API) \
	DECLARE_SERIALIZER(ADropOffBox)


#define JobSimulator_Source_JobSimulator_DropOffBox_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADropOffBox(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADropOffBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADropOffBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADropOffBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADropOffBox(ADropOffBox&&); \
	NO_API ADropOffBox(const ADropOffBox&); \
public:


#define JobSimulator_Source_JobSimulator_DropOffBox_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADropOffBox(ADropOffBox&&); \
	NO_API ADropOffBox(const ADropOffBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADropOffBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADropOffBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADropOffBox)


#define JobSimulator_Source_JobSimulator_DropOffBox_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__productMesh() { return STRUCT_OFFSET(ADropOffBox, productMesh); } \
	FORCEINLINE static uint32 __PPO__TriggerBox() { return STRUCT_OFFSET(ADropOffBox, TriggerBox); }


#define JobSimulator_Source_JobSimulator_DropOffBox_h_9_PROLOG
#define JobSimulator_Source_JobSimulator_DropOffBox_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JobSimulator_Source_JobSimulator_DropOffBox_h_12_PRIVATE_PROPERTY_OFFSET \
	JobSimulator_Source_JobSimulator_DropOffBox_h_12_SPARSE_DATA \
	JobSimulator_Source_JobSimulator_DropOffBox_h_12_RPC_WRAPPERS \
	JobSimulator_Source_JobSimulator_DropOffBox_h_12_INCLASS \
	JobSimulator_Source_JobSimulator_DropOffBox_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define JobSimulator_Source_JobSimulator_DropOffBox_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JobSimulator_Source_JobSimulator_DropOffBox_h_12_PRIVATE_PROPERTY_OFFSET \
	JobSimulator_Source_JobSimulator_DropOffBox_h_12_SPARSE_DATA \
	JobSimulator_Source_JobSimulator_DropOffBox_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	JobSimulator_Source_JobSimulator_DropOffBox_h_12_INCLASS_NO_PURE_DECLS \
	JobSimulator_Source_JobSimulator_DropOffBox_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JOBSIMULATOR_API UClass* StaticClass<class ADropOffBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID JobSimulator_Source_JobSimulator_DropOffBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
