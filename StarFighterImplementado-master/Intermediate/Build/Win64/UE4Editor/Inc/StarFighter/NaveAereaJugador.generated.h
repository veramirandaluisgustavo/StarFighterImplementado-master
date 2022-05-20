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
struct FVector;
struct FHitResult;
class AInventoryActor;
#ifdef STARFIGHTER_NaveAereaJugador_generated_h
#error "NaveAereaJugador.generated.h already included, missing '#pragma once' in NaveAereaJugador.h"
#endif
#define STARFIGHTER_NaveAereaJugador_generated_h

#define StarFighterImplementado_Source_StarFighter_NaveAereaJugador_h_20_SPARSE_DATA
#define StarFighterImplementado_Source_StarFighter_NaveAereaJugador_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNotifyHit); \
	DECLARE_FUNCTION(execDropItem); \
	DECLARE_FUNCTION(execTakeItem);


#define StarFighterImplementado_Source_StarFighter_NaveAereaJugador_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNotifyHit); \
	DECLARE_FUNCTION(execDropItem); \
	DECLARE_FUNCTION(execTakeItem);


#define StarFighterImplementado_Source_StarFighter_NaveAereaJugador_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANaveAereaJugador(); \
	friend struct Z_Construct_UClass_ANaveAereaJugador_Statics; \
public: \
	DECLARE_CLASS(ANaveAereaJugador, ANaveAerea, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StarFighter"), NO_API) \
	DECLARE_SERIALIZER(ANaveAereaJugador)


#define StarFighterImplementado_Source_StarFighter_NaveAereaJugador_h_20_INCLASS \
private: \
	static void StaticRegisterNativesANaveAereaJugador(); \
	friend struct Z_Construct_UClass_ANaveAereaJugador_Statics; \
public: \
	DECLARE_CLASS(ANaveAereaJugador, ANaveAerea, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StarFighter"), NO_API) \
	DECLARE_SERIALIZER(ANaveAereaJugador)


#define StarFighterImplementado_Source_StarFighter_NaveAereaJugador_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANaveAereaJugador(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANaveAereaJugador) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANaveAereaJugador); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANaveAereaJugador); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANaveAereaJugador(ANaveAereaJugador&&); \
	NO_API ANaveAereaJugador(const ANaveAereaJugador&); \
public:


#define StarFighterImplementado_Source_StarFighter_NaveAereaJugador_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANaveAereaJugador(ANaveAereaJugador&&); \
	NO_API ANaveAereaJugador(const ANaveAereaJugador&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANaveAereaJugador); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANaveAereaJugador); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANaveAereaJugador)


#define StarFighterImplementado_Source_StarFighter_NaveAereaJugador_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(ANaveAereaJugador, CameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ANaveAereaJugador, CameraBoom); }


#define StarFighterImplementado_Source_StarFighter_NaveAereaJugador_h_17_PROLOG
#define StarFighterImplementado_Source_StarFighter_NaveAereaJugador_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StarFighterImplementado_Source_StarFighter_NaveAereaJugador_h_20_PRIVATE_PROPERTY_OFFSET \
	StarFighterImplementado_Source_StarFighter_NaveAereaJugador_h_20_SPARSE_DATA \
	StarFighterImplementado_Source_StarFighter_NaveAereaJugador_h_20_RPC_WRAPPERS \
	StarFighterImplementado_Source_StarFighter_NaveAereaJugador_h_20_INCLASS \
	StarFighterImplementado_Source_StarFighter_NaveAereaJugador_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StarFighterImplementado_Source_StarFighter_NaveAereaJugador_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StarFighterImplementado_Source_StarFighter_NaveAereaJugador_h_20_PRIVATE_PROPERTY_OFFSET \
	StarFighterImplementado_Source_StarFighter_NaveAereaJugador_h_20_SPARSE_DATA \
	StarFighterImplementado_Source_StarFighter_NaveAereaJugador_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	StarFighterImplementado_Source_StarFighter_NaveAereaJugador_h_20_INCLASS_NO_PURE_DECLS \
	StarFighterImplementado_Source_StarFighter_NaveAereaJugador_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARFIGHTER_API UClass* StaticClass<class ANaveAereaJugador>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StarFighterImplementado_Source_StarFighter_NaveAereaJugador_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
