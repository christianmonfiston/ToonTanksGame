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
#ifdef TOONTANKS_TestCollider_generated_h
#error "TestCollider.generated.h already included, missing '#pragma once' in TestCollider.h"
#endif
#define TOONTANKS_TestCollider_generated_h

#define FID_ToonTanks_Source_ToonTanks_Public_TestCollider_h_16_SPARSE_DATA
#define FID_ToonTanks_Source_ToonTanks_Public_TestCollider_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnComponentBeginOverlap);


#define FID_ToonTanks_Source_ToonTanks_Public_TestCollider_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnComponentBeginOverlap);


#define FID_ToonTanks_Source_ToonTanks_Public_TestCollider_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestCollider(); \
	friend struct Z_Construct_UClass_ATestCollider_Statics; \
public: \
	DECLARE_CLASS(ATestCollider, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTanks"), NO_API) \
	DECLARE_SERIALIZER(ATestCollider)


#define FID_ToonTanks_Source_ToonTanks_Public_TestCollider_h_16_INCLASS \
private: \
	static void StaticRegisterNativesATestCollider(); \
	friend struct Z_Construct_UClass_ATestCollider_Statics; \
public: \
	DECLARE_CLASS(ATestCollider, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTanks"), NO_API) \
	DECLARE_SERIALIZER(ATestCollider)


#define FID_ToonTanks_Source_ToonTanks_Public_TestCollider_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATestCollider(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestCollider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestCollider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestCollider); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestCollider(ATestCollider&&); \
	NO_API ATestCollider(const ATestCollider&); \
public:


#define FID_ToonTanks_Source_ToonTanks_Public_TestCollider_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestCollider(ATestCollider&&); \
	NO_API ATestCollider(const ATestCollider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestCollider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestCollider); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestCollider)


#define FID_ToonTanks_Source_ToonTanks_Public_TestCollider_h_13_PROLOG
#define FID_ToonTanks_Source_ToonTanks_Public_TestCollider_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ToonTanks_Source_ToonTanks_Public_TestCollider_h_16_SPARSE_DATA \
	FID_ToonTanks_Source_ToonTanks_Public_TestCollider_h_16_RPC_WRAPPERS \
	FID_ToonTanks_Source_ToonTanks_Public_TestCollider_h_16_INCLASS \
	FID_ToonTanks_Source_ToonTanks_Public_TestCollider_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ToonTanks_Source_ToonTanks_Public_TestCollider_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ToonTanks_Source_ToonTanks_Public_TestCollider_h_16_SPARSE_DATA \
	FID_ToonTanks_Source_ToonTanks_Public_TestCollider_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ToonTanks_Source_ToonTanks_Public_TestCollider_h_16_INCLASS_NO_PURE_DECLS \
	FID_ToonTanks_Source_ToonTanks_Public_TestCollider_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOONTANKS_API UClass* StaticClass<class ATestCollider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ToonTanks_Source_ToonTanks_Public_TestCollider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
