// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/NaveAcuatica.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveAcuatica() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_ANaveAcuatica_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_ANaveAcuatica();
	STARFIGHTER_API UClass* Z_Construct_UClass_ANave();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
// End Cross Module References
	void ANaveAcuatica::StaticRegisterNativesANaveAcuatica()
	{
	}
	UClass* Z_Construct_UClass_ANaveAcuatica_NoRegister()
	{
		return ANaveAcuatica::StaticClass();
	}
	struct Z_Construct_UClass_ANaveAcuatica_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveAcuatica_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANave,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveAcuatica_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NaveAcuatica.h" },
		{ "ModuleRelativePath", "NaveAcuatica.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveAcuatica_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveAcuatica>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveAcuatica_Statics::ClassParams = {
		&ANaveAcuatica::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveAcuatica_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveAcuatica_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveAcuatica()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveAcuatica_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveAcuatica, 2510175029);
	template<> STARFIGHTER_API UClass* StaticClass<ANaveAcuatica>()
	{
		return ANaveAcuatica::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveAcuatica(Z_Construct_UClass_ANaveAcuatica, &ANaveAcuatica::StaticClass, TEXT("/Script/StarFighter"), TEXT("ANaveAcuatica"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveAcuatica);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
