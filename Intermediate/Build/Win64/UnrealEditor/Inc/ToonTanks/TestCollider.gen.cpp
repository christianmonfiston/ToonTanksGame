// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToonTanks/Public/TestCollider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestCollider() {}
// Cross Module References
	TOONTANKS_API UClass* Z_Construct_UClass_ATestCollider_NoRegister();
	TOONTANKS_API UClass* Z_Construct_UClass_ATestCollider();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ToonTanks();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATestCollider::execOnComponentBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnComponentBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void ATestCollider::StaticRegisterNativesATestCollider()
	{
		UClass* Class = ATestCollider::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnComponentBeginOverlap", &ATestCollider::execOnComponentBeginOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATestCollider_OnComponentBeginOverlap_Statics
	{
		struct TestCollider_eventOnComponentBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestCollider_OnComponentBeginOverlap_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATestCollider_OnComponentBeginOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestCollider_eventOnComponentBeginOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATestCollider_OnComponentBeginOverlap_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestCollider_OnComponentBeginOverlap_Statics::NewProp_OverlappedComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATestCollider_OnComponentBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestCollider_eventOnComponentBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestCollider_OnComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATestCollider_OnComponentBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestCollider_eventOnComponentBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATestCollider_OnComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestCollider_OnComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATestCollider_OnComponentBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestCollider_eventOnComponentBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATestCollider_OnComponentBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((TestCollider_eventOnComponentBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATestCollider_OnComponentBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TestCollider_eventOnComponentBeginOverlap_Parms), &Z_Construct_UFunction_ATestCollider_OnComponentBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestCollider_OnComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATestCollider_OnComponentBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestCollider_eventOnComponentBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ATestCollider_OnComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestCollider_OnComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATestCollider_OnComponentBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestCollider_OnComponentBeginOverlap_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestCollider_OnComponentBeginOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestCollider_OnComponentBeginOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestCollider_OnComponentBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestCollider_OnComponentBeginOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestCollider_OnComponentBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestCollider_OnComponentBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TestCollider.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestCollider_OnComponentBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestCollider, nullptr, "OnComponentBeginOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATestCollider_OnComponentBeginOverlap_Statics::TestCollider_eventOnComponentBeginOverlap_Parms), Z_Construct_UFunction_ATestCollider_OnComponentBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestCollider_OnComponentBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATestCollider_OnComponentBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestCollider_OnComponentBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATestCollider_OnComponentBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestCollider_OnComponentBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestCollider);
	UClass* Z_Construct_UClass_ATestCollider_NoRegister()
	{
		return ATestCollider::StaticClass();
	}
	struct Z_Construct_UClass_ATestCollider_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCollider;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestCollider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ToonTanks,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATestCollider_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATestCollider_OnComponentBeginOverlap, "OnComponentBeginOverlap" }, // 142838034
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestCollider_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TestCollider.h" },
		{ "ModuleRelativePath", "Public/TestCollider.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestCollider_Statics::NewProp_BoxCollider_MetaData[] = {
		{ "Category", "TestCollider" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TestCollider.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestCollider_Statics::NewProp_BoxCollider = { "BoxCollider", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestCollider, BoxCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATestCollider_Statics::NewProp_BoxCollider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestCollider_Statics::NewProp_BoxCollider_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestCollider_Statics::NewProp_BoxMesh_MetaData[] = {
		{ "Category", "TestCollider" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TestCollider.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestCollider_Statics::NewProp_BoxMesh = { "BoxMesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestCollider, BoxMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATestCollider_Statics::NewProp_BoxMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestCollider_Statics::NewProp_BoxMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATestCollider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestCollider_Statics::NewProp_BoxCollider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestCollider_Statics::NewProp_BoxMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestCollider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestCollider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestCollider_Statics::ClassParams = {
		&ATestCollider::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATestCollider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATestCollider_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATestCollider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATestCollider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestCollider()
	{
		if (!Z_Registration_Info_UClass_ATestCollider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestCollider.OuterSingleton, Z_Construct_UClass_ATestCollider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATestCollider.OuterSingleton;
	}
	template<> TOONTANKS_API UClass* StaticClass<ATestCollider>()
	{
		return ATestCollider::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestCollider);
	struct Z_CompiledInDeferFile_FID_ToonTanks_Source_ToonTanks_Public_TestCollider_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ToonTanks_Source_ToonTanks_Public_TestCollider_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATestCollider, ATestCollider::StaticClass, TEXT("ATestCollider"), &Z_Registration_Info_UClass_ATestCollider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestCollider), 3069703804U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ToonTanks_Source_ToonTanks_Public_TestCollider_h_2385038747(TEXT("/Script/ToonTanks"),
		Z_CompiledInDeferFile_FID_ToonTanks_Source_ToonTanks_Public_TestCollider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ToonTanks_Source_ToonTanks_Public_TestCollider_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
