// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/NaveAerea.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveAerea() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_ANaveAerea_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_ANaveAerea();
	STARFIGHTER_API UClass* Z_Construct_UClass_ANave();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
// End Cross Module References
	void ANaveAerea::StaticRegisterNativesANaveAerea()
	{
	}
	UClass* Z_Construct_UClass_ANaveAerea_NoRegister()
	{
		return ANaveAerea::StaticClass();
	}
	struct Z_Construct_UClass_ANaveAerea_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveAerea_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANave,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveAerea_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NaveAerea.h" },
		{ "ModuleRelativePath", "NaveAerea.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveAerea_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveAerea>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveAerea_Statics::ClassParams = {
		&ANaveAerea::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveAerea_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveAerea_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveAerea()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveAerea_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveAerea, 3154570925);
	template<> STARFIGHTER_API UClass* StaticClass<ANaveAerea>()
	{
		return ANaveAerea::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveAerea(Z_Construct_UClass_ANaveAerea, &ANaveAerea::StaticClass, TEXT("/Script/StarFighter"), TEXT("ANaveAerea"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveAerea);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
