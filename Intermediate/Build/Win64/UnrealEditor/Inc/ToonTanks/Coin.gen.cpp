// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToonTanks/Public/Coin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoin() {}
// Cross Module References
	TOONTANKS_API UClass* Z_Construct_UClass_ACoin_NoRegister();
	TOONTANKS_API UClass* Z_Construct_UClass_ACoin();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ToonTanks();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACoin::execDebugMessage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugMessage();
		P_NATIVE_END;
	}
	void ACoin::StaticRegisterNativesACoin()
	{
		UClass* Class = ACoin::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DebugMessage", &ACoin::execDebugMessage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACoin_DebugMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoin_DebugMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Coin.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoin_DebugMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoin, nullptr, "DebugMessage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACoin_DebugMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoin_DebugMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACoin_DebugMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACoin_DebugMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACoin);
	UClass* Z_Construct_UClass_ACoin_NoRegister()
	{
		return ACoin::StaticClass();
	}
	struct Z_Construct_UClass_ACoin_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CoinMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CoinMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACoin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ToonTanks,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACoin_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACoin_DebugMessage, "DebugMessage" }, // 2567985176
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoin_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Coin.h" },
		{ "ModuleRelativePath", "Public/Coin.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoin_Statics::NewProp_CoinMesh_MetaData[] = {
		{ "Category", "Coin" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Coin.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoin_Statics::NewProp_CoinMesh = { "CoinMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoin, CoinMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACoin_Statics::NewProp_CoinMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoin_Statics::NewProp_CoinMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoin_Statics::NewProp_BoxComponent_MetaData[] = {
		{ "Category", "Coin" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Coin.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoin_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoin, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACoin_Statics::NewProp_BoxComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoin_Statics::NewProp_BoxComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACoin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoin_Statics::NewProp_CoinMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoin_Statics::NewProp_BoxComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACoin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACoin>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACoin_Statics::ClassParams = {
		&ACoin::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACoin_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACoin_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACoin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACoin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACoin()
	{
		if (!Z_Registration_Info_UClass_ACoin.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACoin.OuterSingleton, Z_Construct_UClass_ACoin_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACoin.OuterSingleton;
	}
	template<> TOONTANKS_API UClass* StaticClass<ACoin>()
	{
		return ACoin::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACoin);
	struct Z_CompiledInDeferFile_FID_ToonTanks_Source_ToonTanks_Public_Coin_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ToonTanks_Source_ToonTanks_Public_Coin_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACoin, ACoin::StaticClass, TEXT("ACoin"), &Z_Registration_Info_UClass_ACoin, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACoin), 730686000U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ToonTanks_Source_ToonTanks_Public_Coin_h_4275121805(TEXT("/Script/ToonTanks"),
		Z_CompiledInDeferFile_FID_ToonTanks_Source_ToonTanks_Public_Coin_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ToonTanks_Source_ToonTanks_Public_Coin_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
