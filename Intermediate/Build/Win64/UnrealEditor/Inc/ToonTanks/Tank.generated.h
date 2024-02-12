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
#ifdef TOONTANKS_Tank_generated_h
#error "Tank.generated.h already included, missing '#pragma once' in Tank.h"
#endif
#define TOONTANKS_Tank_generated_h

#define FID_ToonTanks_Source_ToonTanks_Tank_h_33_SPARSE_DATA
#define FID_ToonTanks_Source_ToonTanks_Tank_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnComponentBeginOverlap); \
	DECLARE_FUNCTION(execActorSpawn); \
	DECLARE_FUNCTION(execActorDrawLine); \
	DECLARE_FUNCTION(execDrawLine); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execDisplayDeltaSeconds); \
	DECLARE_FUNCTION(execRotateTurret); \
	DECLARE_FUNCTION(execMoveForward); \
	DECLARE_FUNCTION(execDebug);


#define FID_ToonTanks_Source_ToonTanks_Tank_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnComponentBeginOverlap); \
	DECLARE_FUNCTION(execActorSpawn); \
	DECLARE_FUNCTION(execActorDrawLine); \
	DECLARE_FUNCTION(execDrawLine); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execDisplayDeltaSeconds); \
	DECLARE_FUNCTION(execRotateTurret); \
	DECLARE_FUNCTION(execMoveForward); \
	DECLARE_FUNCTION(execDebug);


#define FID_ToonTanks_Source_ToonTanks_Tank_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATank(); \
	friend struct Z_Construct_UClass_ATank_Statics; \
public: \
	DECLARE_CLASS(ATank, ABasePawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTanks"), NO_API) \
	DECLARE_SERIALIZER(ATank)


#define FID_ToonTanks_Source_ToonTanks_Tank_h_33_INCLASS \
private: \
	static void StaticRegisterNativesATank(); \
	friend struct Z_Construct_UClass_ATank_Statics; \
public: \
	DECLARE_CLASS(ATank, ABasePawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTanks"), NO_API) \
	DECLARE_SERIALIZER(ATank)


#define FID_ToonTanks_Source_ToonTanks_Tank_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATank(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATank) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATank); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATank); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATank(ATank&&); \
	NO_API ATank(const ATank&); \
public:


#define FID_ToonTanks_Source_ToonTanks_Tank_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATank(ATank&&); \
	NO_API ATank(const ATank&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATank); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATank); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATank)


#define FID_ToonTanks_Source_ToonTanks_Tank_h_30_PROLOG
#define FID_ToonTanks_Source_ToonTanks_Tank_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ToonTanks_Source_ToonTanks_Tank_h_33_SPARSE_DATA \
	FID_ToonTanks_Source_ToonTanks_Tank_h_33_RPC_WRAPPERS \
	FID_ToonTanks_Source_ToonTanks_Tank_h_33_INCLASS \
	FID_ToonTanks_Source_ToonTanks_Tank_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ToonTanks_Source_ToonTanks_Tank_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ToonTanks_Source_ToonTanks_Tank_h_33_SPARSE_DATA \
	FID_ToonTanks_Source_ToonTanks_Tank_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ToonTanks_Source_ToonTanks_Tank_h_33_INCLASS_NO_PURE_DECLS \
	FID_ToonTanks_Source_ToonTanks_Tank_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOONTANKS_API UClass* StaticClass<class ATank>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ToonTanks_Source_ToonTanks_Tank_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
