// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/ObstaculoEdificacion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstaculoEdificacion() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_AObstaculoEdificacion_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_AObstaculoEdificacion();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
// End Cross Module References
	void AObstaculoEdificacion::StaticRegisterNativesAObstaculoEdificacion()
	{
	}
	UClass* Z_Construct_UClass_AObstaculoEdificacion_NoRegister()
	{
		return AObstaculoEdificacion::StaticClass();
	}
	struct Z_Construct_UClass_AObstaculoEdificacion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObstaculoEdificacion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculoEdificacion_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ObstaculoEdificacion.h" },
		{ "ModuleRelativePath", "ObstaculoEdificacion.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObstaculoEdificacion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstaculoEdificacion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObstaculoEdificacion_Statics::ClassParams = {
		&AObstaculoEdificacion::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AObstaculoEdificacion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculoEdificacion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObstaculoEdificacion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObstaculoEdificacion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObstaculoEdificacion, 594762696);
	template<> STARFIGHTER_API UClass* StaticClass<AObstaculoEdificacion>()
	{
		return AObstaculoEdificacion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObstaculoEdificacion(Z_Construct_UClass_AObstaculoEdificacion, &AObstaculoEdificacion::StaticClass, TEXT("/Script/StarFighter"), TEXT("AObstaculoEdificacion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObstaculoEdificacion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
