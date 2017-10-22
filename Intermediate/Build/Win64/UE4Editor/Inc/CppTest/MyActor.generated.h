// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CPPTEST_MyActor_generated_h
#error "MyActor.generated.h already included, missing '#pragma once' in MyActor.h"
#endif
#define CPPTEST_MyActor_generated_h

#define CppTest_Source_CppTest_MyActor_h_12_RPC_WRAPPERS \
	virtual void CalledFromCpp_Implementation(); \
 \
	DECLARE_FUNCTION(execCalledFromCpp) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CalledFromCpp_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateValues) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CalculateValues(); \
		P_NATIVE_END; \
	}


#define CppTest_Source_CppTest_MyActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void CalledFromCpp_Implementation(); \
 \
	DECLARE_FUNCTION(execCalledFromCpp) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CalledFromCpp_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateValues) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CalculateValues(); \
		P_NATIVE_END; \
	}


#define CppTest_Source_CppTest_MyActor_h_12_EVENT_PARMS
#define CppTest_Source_CppTest_MyActor_h_12_CALLBACK_WRAPPERS
#define CppTest_Source_CppTest_MyActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyActor(); \
	friend CPPTEST_API class UClass* Z_Construct_UClass_AMyActor(); \
public: \
	DECLARE_CLASS(AMyActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CppTest"), NO_API) \
	DECLARE_SERIALIZER(AMyActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CppTest_Source_CppTest_MyActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMyActor(); \
	friend CPPTEST_API class UClass* Z_Construct_UClass_AMyActor(); \
public: \
	DECLARE_CLASS(AMyActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CppTest"), NO_API) \
	DECLARE_SERIALIZER(AMyActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CppTest_Source_CppTest_MyActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyActor(AMyActor&&); \
	NO_API AMyActor(const AMyActor&); \
public:


#define CppTest_Source_CppTest_MyActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyActor(AMyActor&&); \
	NO_API AMyActor(const AMyActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyActor)


#define CppTest_Source_CppTest_MyActor_h_12_PRIVATE_PROPERTY_OFFSET
#define CppTest_Source_CppTest_MyActor_h_9_PROLOG \
	CppTest_Source_CppTest_MyActor_h_12_EVENT_PARMS


#define CppTest_Source_CppTest_MyActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CppTest_Source_CppTest_MyActor_h_12_PRIVATE_PROPERTY_OFFSET \
	CppTest_Source_CppTest_MyActor_h_12_RPC_WRAPPERS \
	CppTest_Source_CppTest_MyActor_h_12_CALLBACK_WRAPPERS \
	CppTest_Source_CppTest_MyActor_h_12_INCLASS \
	CppTest_Source_CppTest_MyActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CppTest_Source_CppTest_MyActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CppTest_Source_CppTest_MyActor_h_12_PRIVATE_PROPERTY_OFFSET \
	CppTest_Source_CppTest_MyActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	CppTest_Source_CppTest_MyActor_h_12_CALLBACK_WRAPPERS \
	CppTest_Source_CppTest_MyActor_h_12_INCLASS_NO_PURE_DECLS \
	CppTest_Source_CppTest_MyActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CppTest_Source_CppTest_MyActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
