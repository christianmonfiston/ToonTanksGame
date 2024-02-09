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
#ifdef TOONTANKS_Coin_generated_h
#error "Coin.generated.h already included, missing '#pragma once' in Coin.h"
#endif
#define TOONTANKS_Coin_generated_h

#define FID_ToonTanks_Source_ToonTanks_Public_Coin_h_33_SPARSE_DATA
#define FID_ToonTanks_Source_ToonTanks_Public_Coin_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnCoin); \
	DECLARE_FUNCTION(execOnBoxBeginOverlap); \
	DECLARE_FUNCTION(execOnHit); \
	DECLARE_FUNCTION(execRotateCoin); \
	DECLARE_FUNCTION(execDebugMessage);


#define FID_ToonTanks_Source_ToonTanks_Public_Coin_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnCoin); \
	DECLARE_FUNCTION(execOnBoxBeginOverlap); \
	DECLARE_FUNCTION(execOnHit); \
	DECLARE_FUNCTION(execRotateCoin); \
	DECLARE_FUNCTION(execDebugMessage);


#define FID_ToonTanks_Source_ToonTanks_Public_Coin_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACoin(); \
	friend struct Z_Construct_UClass_ACoin_Statics; \
public: \
	DECLARE_CLASS(ACoin, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTanks"), NO_API) \
	DECLARE_SERIALIZER(ACoin)


#define FID_ToonTanks_Source_ToonTanks_Public_Coin_h_33_INCLASS \
private: \
	static void StaticRegisterNativesACoin(); \
	friend struct Z_Construct_UClass_ACoin_Statics; \
public: \
	DECLARE_CLASS(ACoin, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTanks"), NO_API) \
	DECLARE_SERIALIZER(ACoin)


#define FID_ToonTanks_Source_ToonTanks_Public_Coin_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACoin(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACoin) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACoin); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACoin); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACoin(ACoin&&); \
	NO_API ACoin(const ACoin&); \
public:


#define FID_ToonTanks_Source_ToonTanks_Public_Coin_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACoin(ACoin&&); \
	NO_API ACoin(const ACoin&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACoin); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACoin); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACoin)


#define FID_ToonTanks_Source_ToonTanks_Public_Coin_h_30_PROLOG
#define FID_ToonTanks_Source_ToonTanks_Public_Coin_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ToonTanks_Source_ToonTanks_Public_Coin_h_33_SPARSE_DATA \
	FID_ToonTanks_Source_ToonTanks_Public_Coin_h_33_RPC_WRAPPERS \
	FID_ToonTanks_Source_ToonTanks_Public_Coin_h_33_INCLASS \
	FID_ToonTanks_Source_ToonTanks_Public_Coin_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ToonTanks_Source_ToonTanks_Public_Coin_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ToonTanks_Source_ToonTanks_Public_Coin_h_33_SPARSE_DATA \
	FID_ToonTanks_Source_ToonTanks_Public_Coin_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ToonTanks_Source_ToonTanks_Public_Coin_h_33_INCLASS_NO_PURE_DECLS \
	FID_ToonTanks_Source_ToonTanks_Public_Coin_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOONTANKS_API UClass* StaticClass<class ACoin>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ToonTanks_Source_ToonTanks_Public_Coin_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
