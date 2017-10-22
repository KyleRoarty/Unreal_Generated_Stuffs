// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef CPPTEST_GenActor_generated_h
#error "GenActor.generated.h already included, missing '#pragma once' in GenActor.h"
#endif
#define CPPTEST_GenActor_generated_h

#define CppTest_Source_CppTest_GenActor_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnComponentHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnComponentHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
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


#define CppTest_Source_CppTest_GenActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnComponentHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnComponentHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
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


#define CppTest_Source_CppTest_GenActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGenActor(); \
	friend CPPTEST_API class UClass* Z_Construct_UClass_AGenActor(); \
public: \
	DECLARE_CLASS(AGenActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CppTest"), NO_API) \
	DECLARE_SERIALIZER(AGenActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CppTest_Source_CppTest_GenActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGenActor(); \
	friend CPPTEST_API class UClass* Z_Construct_UClass_AGenActor(); \
public: \
	DECLARE_CLASS(AGenActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CppTest"), NO_API) \
	DECLARE_SERIALIZER(AGenActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CppTest_Source_CppTest_GenActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGenActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGenActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGenActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGenActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGenActor(AGenActor&&); \
	NO_API AGenActor(const AGenActor&); \
public:


#define CppTest_Source_CppTest_GenActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGenActor(AGenActor&&); \
	NO_API AGenActor(const AGenActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGenActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGenActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGenActor)


#define CppTest_Source_CppTest_GenActor_h_12_PRIVATE_PROPERTY_OFFSET
#define CppTest_Source_CppTest_GenActor_h_9_PROLOG
#define CppTest_Source_CppTest_GenActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CppTest_Source_CppTest_GenActor_h_12_PRIVATE_PROPERTY_OFFSET \
	CppTest_Source_CppTest_GenActor_h_12_RPC_WRAPPERS \
	CppTest_Source_CppTest_GenActor_h_12_INCLASS \
	CppTest_Source_CppTest_GenActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CppTest_Source_CppTest_GenActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CppTest_Source_CppTest_GenActor_h_12_PRIVATE_PROPERTY_OFFSET \
	CppTest_Source_CppTest_GenActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	CppTest_Source_CppTest_GenActor_h_12_INCLASS_NO_PURE_DECLS \
	CppTest_Source_CppTest_GenActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CppTest_Source_CppTest_GenActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
