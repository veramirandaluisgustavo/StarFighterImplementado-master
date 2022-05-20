// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/NaveTerrestreEnemiga01.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveTerrestreEnemiga01() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_ANaveTerrestreEnemiga01_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_ANaveTerrestreEnemiga01();
	STARFIGHTER_API UClass* Z_Construct_UClass_ANaveTerrestre();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
// End Cross Module References
	void ANaveTerrestreEnemiga01::StaticRegisterNativesANaveTerrestreEnemiga01()
	{
	}
	UClass* Z_Construct_UClass_ANaveTerrestreEnemiga01_NoRegister()
	{
		return ANaveTerrestreEnemiga01::StaticClass();
	}
	struct Z_Construct_UClass_ANaveTerrestreEnemiga01_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveTerrestreEnemiga01_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveTerrestre,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveTerrestreEnemiga01_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NaveTerrestreEnemiga01.h" },
		{ "ModuleRelativePath", "NaveTerrestreEnemiga01.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveTerrestreEnemiga01_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveTerrestreEnemiga01>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveTerrestreEnemiga01_Statics::ClassParams = {
		&ANaveTerrestreEnemiga01::StaticClass,
		"Game",
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveTerrestreEnemiga01_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveTerrestreEnemiga01_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveTerrestreEnemiga01()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveTerrestreEnemiga01_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveTerrestreEnemiga01, 2827327381);
	template<> STARFIGHTER_API UClass* StaticClass<ANaveTerrestreEnemiga01>()
	{
		return ANaveTerrestreEnemiga01::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveTerrestreEnemiga01(Z_Construct_UClass_ANaveTerrestreEnemiga01, &ANaveTerrestreEnemiga01::StaticClass, TEXT("/Script/StarFighter"), TEXT("ANaveTerrestreEnemiga01"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveTerrestreEnemiga01);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
