// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
class UCurveLinearColor;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef CPPTEST_CubeActor_generated_h
#error "CubeActor.generated.h already included, missing '#pragma once' in CubeActor.h"
#endif
#define CPPTEST_CubeActor_generated_h

#define CppTest_Source_CppTest_CubeActor_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPlayFromStart_Wrapper) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_curr); \
		P_GET_STRUCT(FLinearColor,Z_Param_next); \
		P_GET_OBJECT(UCurveLinearColor,Z_Param_lerp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_len); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PlayFromStart_Wrapper(Z_Param_curr,Z_Param_next,Z_Param_lerp,Z_Param_len); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetColorFromIndex) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_color); \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetColorFromIndex(Z_Param_color,Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->LinearColor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnComponentBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnComponentBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define CppTest_Source_CppTest_CubeActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPlayFromStart_Wrapper) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_curr); \
		P_GET_STRUCT(FLinearColor,Z_Param_next); \
		P_GET_OBJECT(UCurveLinearColor,Z_Param_lerp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_len); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PlayFromStart_Wrapper(Z_Param_curr,Z_Param_next,Z_Param_lerp,Z_Param_len); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetColorFromIndex) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_color); \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetColorFromIndex(Z_Param_color,Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->LinearColor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnComponentBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnComponentBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define CppTest_Source_CppTest_CubeActor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACubeActor(); \
	friend CPPTEST_API class UClass* Z_Construct_UClass_ACubeActor(); \
public: \
	DECLARE_CLASS(ACubeActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CppTest"), NO_API) \
	DECLARE_SERIALIZER(ACubeActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CppTest_Source_CppTest_CubeActor_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACubeActor(); \
	friend CPPTEST_API class UClass* Z_Construct_UClass_ACubeActor(); \
public: \
	DECLARE_CLASS(ACubeActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CppTest"), NO_API) \
	DECLARE_SERIALIZER(ACubeActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CppTest_Source_CppTest_CubeActor_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACubeActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACubeActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACubeActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACubeActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACubeActor(ACubeActor&&); \
	NO_API ACubeActor(const ACubeActor&); \
public:


#define CppTest_Source_CppTest_CubeActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACubeActor(ACubeActor&&); \
	NO_API ACubeActor(const ACubeActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACubeActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACubeActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACubeActor)


#define CppTest_Source_CppTest_CubeActor_h_15_PRIVATE_PROPERTY_OFFSET
#define CppTest_Source_CppTest_CubeActor_h_12_PROLOG
#define CppTest_Source_CppTest_CubeActor_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CppTest_Source_CppTest_CubeActor_h_15_PRIVATE_PROPERTY_OFFSET \
	CppTest_Source_CppTest_CubeActor_h_15_RPC_WRAPPERS \
	CppTest_Source_CppTest_CubeActor_h_15_INCLASS \
	CppTest_Source_CppTest_CubeActor_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CppTest_Source_CppTest_CubeActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CppTest_Source_CppTest_CubeActor_h_15_PRIVATE_PROPERTY_OFFSET \
	CppTest_Source_CppTest_CubeActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CppTest_Source_CppTest_CubeActor_h_15_INCLASS_NO_PURE_DECLS \
	CppTest_Source_CppTest_CubeActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CppTest_Source_CppTest_CubeActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
