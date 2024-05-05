// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Experimentos/ComponenteChino.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponenteChino() {}
// Cross Module References
	EXPERIMENTOS_API UClass* Z_Construct_UClass_AComponenteChino_NoRegister();
	EXPERIMENTOS_API UClass* Z_Construct_UClass_AComponenteChino();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	UPackage* Z_Construct_UPackage__Script_Experimentos();
// End Cross Module References
	void AComponenteChino::StaticRegisterNativesAComponenteChino()
	{
	}
	UClass* Z_Construct_UClass_AComponenteChino_NoRegister()
	{
		return AComponenteChino::StaticClass();
	}
	struct Z_Construct_UClass_AComponenteChino_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AComponenteChino_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Experimentos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AComponenteChino_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "ComponenteChino.h" },
		{ "ModuleRelativePath", "ComponenteChino.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AComponenteChino_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AComponenteChino>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AComponenteChino_Statics::ClassParams = {
		&AComponenteChino::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AComponenteChino_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AComponenteChino_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AComponenteChino()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AComponenteChino_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AComponenteChino, 2881966542);
	template<> EXPERIMENTOS_API UClass* StaticClass<AComponenteChino>()
	{
		return AComponenteChino::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AComponenteChino(Z_Construct_UClass_AComponenteChino, &AComponenteChino::StaticClass, TEXT("/Script/Experimentos"), TEXT("AComponenteChino"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AComponenteChino);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
