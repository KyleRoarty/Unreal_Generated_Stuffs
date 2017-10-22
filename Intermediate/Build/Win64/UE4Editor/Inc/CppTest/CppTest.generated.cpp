// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "CppTest.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1CppTest() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API class UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UCurveLinearColor_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	ENGINE_API class UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PROCEDURALMESHCOMPONENT_API class UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();

	CPPTEST_API class UClass* Z_Construct_UClass_ACppTestGameModeBase_NoRegister();
	CPPTEST_API class UClass* Z_Construct_UClass_ACppTestGameModeBase();
	CPPTEST_API class UFunction* Z_Construct_UFunction_ACubeActor_GetColorFromIndex();
	CPPTEST_API class UFunction* Z_Construct_UFunction_ACubeActor_LinearColor();
	CPPTEST_API class UFunction* Z_Construct_UFunction_ACubeActor_OnComponentBeginOverlap();
	CPPTEST_API class UFunction* Z_Construct_UFunction_ACubeActor_PlayFromStart_Wrapper();
	CPPTEST_API class UClass* Z_Construct_UClass_ACubeActor_NoRegister();
	CPPTEST_API class UClass* Z_Construct_UClass_ACubeActor();
	CPPTEST_API class UFunction* Z_Construct_UFunction_AGenActor_OnComponentBeginOverlap();
	CPPTEST_API class UFunction* Z_Construct_UFunction_AGenActor_OnComponentHit();
	CPPTEST_API class UFunction* Z_Construct_UFunction_AGenActor_OnOverlapEnd();
	CPPTEST_API class UClass* Z_Construct_UClass_AGenActor_NoRegister();
	CPPTEST_API class UClass* Z_Construct_UClass_AGenActor();
	CPPTEST_API class UFunction* Z_Construct_UFunction_AMyActor_CalculateValues();
	CPPTEST_API class UFunction* Z_Construct_UFunction_AMyActor_CalledFromCpp();
	CPPTEST_API class UClass* Z_Construct_UClass_AMyActor_NoRegister();
	CPPTEST_API class UClass* Z_Construct_UClass_AMyActor();
	CPPTEST_API class UPackage* Z_Construct_UPackage__Script_CppTest();
	void ACppTestGameModeBase::StaticRegisterNativesACppTestGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ACppTestGameModeBase_NoRegister()
	{
		return ACppTestGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ACppTestGameModeBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_CppTest();
			OuterClass = ACppTestGameModeBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900288;


				static TCppClassTypeInfo<TCppClassTypeTraits<ACppTestGameModeBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("CppTestGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("CppTestGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACppTestGameModeBase, 182672406);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACppTestGameModeBase(Z_Construct_UClass_ACppTestGameModeBase, &ACppTestGameModeBase::StaticClass, TEXT("/Script/CppTest"), TEXT("ACppTestGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACppTestGameModeBase);
	void ACubeActor::StaticRegisterNativesACubeActor()
	{
		UClass* Class = ACubeActor::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetColorFromIndex", (Native)&ACubeActor::execGetColorFromIndex },
			{ "LinearColor", (Native)&ACubeActor::execLinearColor },
			{ "OnComponentBeginOverlap", (Native)&ACubeActor::execOnComponentBeginOverlap },
			{ "PlayFromStart_Wrapper", (Native)&ACubeActor::execPlayFromStart_Wrapper },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 4);
	}
	UFunction* Z_Construct_UFunction_ACubeActor_GetColorFromIndex()
	{
		struct CubeActor_eventGetColorFromIndex_Parms
		{
			FLinearColor color;
			int32 index;
			float ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_ACubeActor();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetColorFromIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00820401, 65535, sizeof(CubeActor_eventGetColorFromIndex_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, CubeActor_eventGetColorFromIndex_Parms), 0x0010000000000580);
			UProperty* NewProp_index = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("index"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(index, CubeActor_eventGetColorFromIndex_Parms), 0x0010000000000080);
			UProperty* NewProp_color = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("color"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(color, CubeActor_eventGetColorFromIndex_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FLinearColor());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("CubeActor.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ACubeActor_LinearColor()
	{
		UObject* Outer=Z_Construct_UClass_ACubeActor();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LinearColor"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("CubeActor.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ACubeActor_OnComponentBeginOverlap()
	{
		struct CubeActor_eventOnComponentBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
		UObject* Outer=Z_Construct_UClass_ACubeActor();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnComponentBeginOverlap"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00420401, 65535, sizeof(CubeActor_eventOnComponentBeginOverlap_Parms));
			UProperty* NewProp_SweepResult = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SweepResult"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SweepResult, CubeActor_eventOnComponentBeginOverlap_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bFromSweep, CubeActor_eventOnComponentBeginOverlap_Parms, bool);
			UProperty* NewProp_bFromSweep = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bFromSweep"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bFromSweep, CubeActor_eventOnComponentBeginOverlap_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bFromSweep, CubeActor_eventOnComponentBeginOverlap_Parms), sizeof(bool), true);
			UProperty* NewProp_OtherBodyIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherBodyIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(OtherBodyIndex, CubeActor_eventOnComponentBeginOverlap_Parms), 0x0010000000000080);
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, CubeActor_eventOnComponentBeginOverlap_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, CubeActor_eventOnComponentBeginOverlap_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_OverlappedComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OverlappedComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OverlappedComp, CubeActor_eventOnComponentBeginOverlap_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("CubeActor.h"));
			MetaData->SetValue(NewProp_SweepResult, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_OverlappedComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ACubeActor_PlayFromStart_Wrapper()
	{
		struct CubeActor_eventPlayFromStart_Wrapper_Parms
		{
			FLinearColor curr;
			FLinearColor next;
			UCurveLinearColor* lerp;
			float len;
		};
		UObject* Outer=Z_Construct_UClass_ACubeActor();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PlayFromStart_Wrapper"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00840401, 65535, sizeof(CubeActor_eventPlayFromStart_Wrapper_Parms));
			UProperty* NewProp_len = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("len"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(len, CubeActor_eventPlayFromStart_Wrapper_Parms), 0x0010000000000080);
			UProperty* NewProp_lerp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("lerp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(lerp, CubeActor_eventPlayFromStart_Wrapper_Parms), 0x0010000000000080, Z_Construct_UClass_UCurveLinearColor_NoRegister());
			UProperty* NewProp_next = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("next"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(next, CubeActor_eventPlayFromStart_Wrapper_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FLinearColor());
			UProperty* NewProp_curr = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("curr"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(curr, CubeActor_eventPlayFromStart_Wrapper_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FLinearColor());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("CubeActor.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACubeActor_NoRegister()
	{
		return ACubeActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ACubeActor()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_CppTest();
			OuterClass = ACubeActor::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_ACubeActor_GetColorFromIndex());
				OuterClass->LinkChild(Z_Construct_UFunction_ACubeActor_LinearColor());
				OuterClass->LinkChild(Z_Construct_UFunction_ACubeActor_OnComponentBeginOverlap());
				OuterClass->LinkChild(Z_Construct_UFunction_ACubeActor_PlayFromStart_Wrapper());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_MyTexture = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MyTexture"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MyTexture, ACubeActor), 0x0010000000000000, Z_Construct_UClass_UTexture_NoRegister());
				UProperty* NewProp_MyMID = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MyMID"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MyMID, ACubeActor), 0x0010000000002000, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister());
				UProperty* NewProp_MyMaterial = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MyMaterial"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MyMaterial, ACubeActor), 0x0010000000000000, Z_Construct_UClass_UMaterial_NoRegister());
				UProperty* NewProp_MyMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MyMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MyMesh, ACubeActor), 0x0010000000080008, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				UProperty* NewProp_MyBox = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MyBox"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MyBox, ACubeActor), 0x0010000000080008, Z_Construct_UClass_UBoxComponent_NoRegister());
				UProperty* NewProp_MyTimeline = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MyTimeline"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MyTimeline, ACubeActor), 0x0010000000080008, Z_Construct_UClass_UTimelineComponent_NoRegister());
				UProperty* NewProp_ColorChange = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ColorChange"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ColorChange, ACubeActor), 0x0010000000000000, Z_Construct_UClass_UCurveLinearColor_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ACubeActor_GetColorFromIndex(), "GetColorFromIndex"); // 928175162
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ACubeActor_LinearColor(), "LinearColor"); // 1504651936
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ACubeActor_OnComponentBeginOverlap(), "OnComponentBeginOverlap"); // 3189884882
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ACubeActor_PlayFromStart_Wrapper(), "PlayFromStart_Wrapper"); // 1687593109
				static TCppClassTypeInfo<TCppClassTypeTraits<ACubeActor> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("CubeActor.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("CubeActor.h"));
				MetaData->SetValue(NewProp_MyTexture, TEXT("ModuleRelativePath"), TEXT("CubeActor.h"));
				MetaData->SetValue(NewProp_MyMID, TEXT("ModuleRelativePath"), TEXT("CubeActor.h"));
				MetaData->SetValue(NewProp_MyMaterial, TEXT("ModuleRelativePath"), TEXT("CubeActor.h"));
				MetaData->SetValue(NewProp_MyMesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_MyMesh, TEXT("ModuleRelativePath"), TEXT("CubeActor.h"));
				MetaData->SetValue(NewProp_MyBox, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_MyBox, TEXT("ModuleRelativePath"), TEXT("CubeActor.h"));
				MetaData->SetValue(NewProp_MyTimeline, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_MyTimeline, TEXT("ModuleRelativePath"), TEXT("CubeActor.h"));
				MetaData->SetValue(NewProp_ColorChange, TEXT("ModuleRelativePath"), TEXT("CubeActor.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACubeActor, 3875176046);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACubeActor(Z_Construct_UClass_ACubeActor, &ACubeActor::StaticClass, TEXT("/Script/CppTest"), TEXT("ACubeActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACubeActor);
	void AGenActor::StaticRegisterNativesAGenActor()
	{
		UClass* Class = AGenActor::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "OnComponentBeginOverlap", (Native)&AGenActor::execOnComponentBeginOverlap },
			{ "OnComponentHit", (Native)&AGenActor::execOnComponentHit },
			{ "OnOverlapEnd", (Native)&AGenActor::execOnOverlapEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 3);
	}
	UFunction* Z_Construct_UFunction_AGenActor_OnComponentBeginOverlap()
	{
		struct GenActor_eventOnComponentBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
		UObject* Outer=Z_Construct_UClass_AGenActor();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnComponentBeginOverlap"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00420401, 65535, sizeof(GenActor_eventOnComponentBeginOverlap_Parms));
			UProperty* NewProp_SweepResult = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SweepResult"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SweepResult, GenActor_eventOnComponentBeginOverlap_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bFromSweep, GenActor_eventOnComponentBeginOverlap_Parms, bool);
			UProperty* NewProp_bFromSweep = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bFromSweep"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bFromSweep, GenActor_eventOnComponentBeginOverlap_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bFromSweep, GenActor_eventOnComponentBeginOverlap_Parms), sizeof(bool), true);
			UProperty* NewProp_OtherBodyIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherBodyIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(OtherBodyIndex, GenActor_eventOnComponentBeginOverlap_Parms), 0x0010000000000080);
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, GenActor_eventOnComponentBeginOverlap_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, GenActor_eventOnComponentBeginOverlap_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_OverlappedComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OverlappedComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OverlappedComp, GenActor_eventOnComponentBeginOverlap_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("GenActor.h"));
			MetaData->SetValue(NewProp_SweepResult, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_OverlappedComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGenActor_OnComponentHit()
	{
		struct GenActor_eventOnComponentHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			FVector NormalImpulse;
			FHitResult Hit;
		};
		UObject* Outer=Z_Construct_UClass_AGenActor();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnComponentHit"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00C20401, 65535, sizeof(GenActor_eventOnComponentHit_Parms));
			UProperty* NewProp_Hit = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Hit"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Hit, GenActor_eventOnComponentHit_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			UProperty* NewProp_NormalImpulse = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NormalImpulse"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(NormalImpulse, GenActor_eventOnComponentHit_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_OtherComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComponent, GenActor_eventOnComponentHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, GenActor_eventOnComponentHit_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_HitComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HitComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(HitComponent, GenActor_eventOnComponentHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("GenActor.h"));
			MetaData->SetValue(NewProp_Hit, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_OtherComponent, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_HitComponent, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGenActor_OnOverlapEnd()
	{
		struct GenActor_eventOnOverlapEnd_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
		UObject* Outer=Z_Construct_UClass_AGenActor();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnOverlapEnd"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535, sizeof(GenActor_eventOnOverlapEnd_Parms));
			UProperty* NewProp_OtherBodyIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherBodyIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(OtherBodyIndex, GenActor_eventOnOverlapEnd_Parms), 0x0010000000000080);
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, GenActor_eventOnOverlapEnd_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, GenActor_eventOnOverlapEnd_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_OverlappedComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OverlappedComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OverlappedComp, GenActor_eventOnOverlapEnd_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("GenActor.h"));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_OverlappedComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGenActor_NoRegister()
	{
		return AGenActor::StaticClass();
	}
	UClass* Z_Construct_UClass_AGenActor()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_CppTest();
			OuterClass = AGenActor::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_AGenActor_OnComponentBeginOverlap());
				OuterClass->LinkChild(Z_Construct_UFunction_AGenActor_OnComponentHit());
				OuterClass->LinkChild(Z_Construct_UFunction_AGenActor_OnOverlapEnd());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_actor_rvec = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("actor_rvec"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(actor_rvec, AGenActor), 0x0010000000000000, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_actor_point = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("actor_point"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(actor_point, AGenActor), 0x0010000000000000, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_int_point = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("int_point"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(int_point, AGenActor), 0x0010000000000000, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_MyMaterial = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MyMaterial"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MyMaterial, AGenActor), 0x0010000000000001, Z_Construct_UClass_UMaterial_NoRegister());
				UProperty* NewProp_mesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("mesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(mesh, AGenActor), 0x00100000000a0009, Z_Construct_UClass_UProceduralMeshComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AGenActor_OnComponentBeginOverlap(), "OnComponentBeginOverlap"); // 3862953554
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AGenActor_OnComponentHit(), "OnComponentHit"); // 541677552
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AGenActor_OnOverlapEnd(), "OnOverlapEnd"); // 451335811
				static TCppClassTypeInfo<TCppClassTypeTraits<AGenActor> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("GenActor.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("GenActor.h"));
				MetaData->SetValue(NewProp_actor_rvec, TEXT("ModuleRelativePath"), TEXT("GenActor.h"));
				MetaData->SetValue(NewProp_actor_point, TEXT("ModuleRelativePath"), TEXT("GenActor.h"));
				MetaData->SetValue(NewProp_int_point, TEXT("ModuleRelativePath"), TEXT("GenActor.h"));
				MetaData->SetValue(NewProp_MyMaterial, TEXT("Category"), TEXT("GenActor"));
				MetaData->SetValue(NewProp_MyMaterial, TEXT("ModuleRelativePath"), TEXT("GenActor.h"));
				MetaData->SetValue(NewProp_mesh, TEXT("Category"), TEXT("GenActor"));
				MetaData->SetValue(NewProp_mesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_mesh, TEXT("ModuleRelativePath"), TEXT("GenActor.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGenActor, 1521476049);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGenActor(Z_Construct_UClass_AGenActor, &AGenActor::StaticClass, TEXT("/Script/CppTest"), TEXT("AGenActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGenActor);
	static FName NAME_AMyActor_CalledFromCpp = FName(TEXT("CalledFromCpp"));
	void AMyActor::CalledFromCpp()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMyActor_CalledFromCpp),NULL);
	}
	void AMyActor::StaticRegisterNativesAMyActor()
	{
		UClass* Class = AMyActor::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "CalculateValues", (Native)&AMyActor::execCalculateValues },
			{ "CalledFromCpp", (Native)&AMyActor::execCalledFromCpp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 2);
	}
	UFunction* Z_Construct_UFunction_AMyActor_CalculateValues()
	{
		UObject* Outer=Z_Construct_UClass_AMyActor();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CalculateValues"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Damage"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("MyActor.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMyActor_CalledFromCpp()
	{
		UObject* Outer=Z_Construct_UClass_AMyActor();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CalledFromCpp"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x08020C00, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Damage"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("MyActor.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyActor_NoRegister()
	{
		return AMyActor::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyActor()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_CppTest();
			OuterClass = AMyActor::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_AMyActor_CalculateValues());
				OuterClass->LinkChild(Z_Construct_UFunction_AMyActor_CalledFromCpp());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_damagePerSecond = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("damagePerSecond"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(damagePerSecond, AMyActor), 0x0010000000022015);
				UProperty* NewProp_damageTimeInSeconds = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("damageTimeInSeconds"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(damageTimeInSeconds, AMyActor), 0x0010000000000005);
				UProperty* NewProp_totalDamage = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("totalDamage"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(totalDamage, AMyActor), 0x0010000000000005);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AMyActor_CalculateValues(), "CalculateValues"); // 519795342
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AMyActor_CalledFromCpp(), "CalledFromCpp"); // 4159232880
				static TCppClassTypeInfo<TCppClassTypeTraits<AMyActor> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MyActor.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MyActor.h"));
				MetaData->SetValue(NewProp_damagePerSecond, TEXT("Category"), TEXT("Damage"));
				MetaData->SetValue(NewProp_damagePerSecond, TEXT("ModuleRelativePath"), TEXT("MyActor.h"));
				MetaData->SetValue(NewProp_damageTimeInSeconds, TEXT("Category"), TEXT("Damage"));
				MetaData->SetValue(NewProp_damageTimeInSeconds, TEXT("ModuleRelativePath"), TEXT("MyActor.h"));
				MetaData->SetValue(NewProp_totalDamage, TEXT("Category"), TEXT("Damage"));
				MetaData->SetValue(NewProp_totalDamage, TEXT("ModuleRelativePath"), TEXT("MyActor.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyActor, 3199105052);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyActor(Z_Construct_UClass_AMyActor, &AMyActor::StaticClass, TEXT("/Script/CppTest"), TEXT("AMyActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActor);
	UPackage* Z_Construct_UPackage__Script_CppTest()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/CppTest")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x36913201;
			Guid.B = 0x910617D0;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
