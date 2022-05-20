// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARFIGHTER_Nave_generated_h
#error "Nave.generated.h already included, missing '#pragma once' in Nave.h"
#endif
#define STARFIGHTER_Nave_generated_h

#define StarFighterImplementado_Source_StarFighter_Nave_h_12_SPARSE_DATA
#define StarFighterImplementado_Source_StarFighter_Nave_h_12_RPC_WRAPPERS
#define StarFighterImplementado_Source_StarFighter_Nave_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define StarFighterImplementado_Source_StarFighter_Nave_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANave(); \
	friend struct Z_Construct_UClass_ANave_Statics; \
public: \
	DECLARE_CLASS(ANave, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StarFighter"), NO_API) \
	DECLARE_SERIALIZER(ANave)


#define StarFighterImplementado_Source_StarFighter_Nave_h_12_INCLASS \
private: \
	static void StaticRegisterNativesANave(); \
	friend struct Z_Construct_UClass_ANave_Statics; \
public: \
	DECLARE_CLASS(ANave, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StarFighter"), NO_API) \
	DECLARE_SERIALIZER(ANave)


#define StarFighterImplementado_Source_StarFighter_Nave_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANave(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANave) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANave); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANave); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANave(ANave&&); \
	NO_API ANave(const ANave&); \
public:


#define StarFighterImplementado_Source_StarFighter_Nave_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANave(ANave&&); \
	NO_API ANave(const ANave&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANave); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANave); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANave)


#define StarFighterImplementado_Source_StarFighter_Nave_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ShipMeshComponent() { return STRUCT_OFFSET(ANave, ShipMeshComponent); }


#define StarFighterImplementado_Source_StarFighter_Nave_h_9_PROLOG
#define StarFighterImplementado_Source_StarFighter_Nave_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StarFighterImplementado_Source_StarFighter_Nave_h_12_PRIVATE_PROPERTY_OFFSET \
	StarFighterImplementado_Source_StarFighter_Nave_h_12_SPARSE_DATA \
	StarFighterImplementado_Source_StarFighter_Nave_h_12_RPC_WRAPPERS \
	StarFighterImplementado_Source_StarFighter_Nave_h_12_INCLASS \
	StarFighterImplementado_Source_StarFighter_Nave_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StarFighterImplementado_Source_StarFighter_Nave_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StarFighterImplementado_Source_StarFighter_Nave_h_12_PRIVATE_PROPERTY_OFFSET \
	StarFighterImplementado_Source_StarFighter_Nave_h_12_SPARSE_DATA \
	StarFighterImplementado_Source_StarFighter_Nave_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	StarFighterImplementado_Source_StarFighter_Nave_h_12_INCLASS_NO_PURE_DECLS \
	StarFighterImplementado_Source_StarFighter_Nave_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARFIGHTER_API UClass* StaticClass<class ANave>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StarFighterImplementado_Source_StarFighter_Nave_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
