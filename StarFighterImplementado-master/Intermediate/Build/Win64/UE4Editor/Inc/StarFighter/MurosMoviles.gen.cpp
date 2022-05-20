// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/MurosMoviles.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMurosMoviles() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_AMurosMoviles_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_AMurosMoviles();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AMurosMoviles::StaticRegisterNativesAMurosMoviles()
	{
	}
	UClass* Z_Construct_UClass_AMurosMoviles_NoRegister()
	{
		return AMurosMoviles::StaticClass();
	}
	struct Z_Construct_UClass_AMurosMoviles_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshCapsula_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshCapsula;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMurosMoviles_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMurosMoviles_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MurosMoviles.h" },
		{ "ModuleRelativePath", "MurosMoviles.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMurosMoviles_Statics::NewProp_MeshCapsula_MetaData[] = {
		{ "Category", "MurosMoviles" },
		{ "Comment", "// propiedad para el mesh del muro\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MurosMoviles.h" },
		{ "ToolTip", "propiedad para el mesh del muro" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMurosMoviles_Statics::NewProp_MeshCapsula = { "MeshCapsula", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMurosMoviles, MeshCapsula), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMurosMoviles_Statics::NewProp_MeshCapsula_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMurosMoviles_Statics::NewProp_MeshCapsula_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMurosMoviles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMurosMoviles_Statics::NewProp_MeshCapsula,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMurosMoviles_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMurosMoviles>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMurosMoviles_Statics::ClassParams = {
		&AMurosMoviles::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMurosMoviles_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMurosMoviles_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMurosMoviles_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMurosMoviles_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMurosMoviles()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMurosMoviles_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMurosMoviles, 2799375781);
	template<> STARFIGHTER_API UClass* StaticClass<AMurosMoviles>()
	{
		return AMurosMoviles::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMurosMoviles(Z_Construct_UClass_AMurosMoviles, &AMurosMoviles::StaticClass, TEXT("/Script/StarFighter"), TEXT("AMurosMoviles"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMurosMoviles);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
