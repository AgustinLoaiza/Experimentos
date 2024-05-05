// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Experimentos/Gasolinera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGasolinera() {}
// Cross Module References
	EXPERIMENTOS_API UClass* Z_Construct_UClass_AGasolinera_NoRegister();
	EXPERIMENTOS_API UClass* Z_Construct_UClass_AGasolinera();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	UPackage* Z_Construct_UPackage__Script_Experimentos();
// End Cross Module References
	void AGasolinera::StaticRegisterNativesAGasolinera()
	{
	}
	UClass* Z_Construct_UClass_AGasolinera_NoRegister()
	{
		return AGasolinera::StaticClass();
	}
	struct Z_Construct_UClass_AGasolinera_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGasolinera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Experimentos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGasolinera_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "Gasolinera.h" },
		{ "ModuleRelativePath", "Gasolinera.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGasolinera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGasolinera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGasolinera_Statics::ClassParams = {
		&AGasolinera::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGasolinera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGasolinera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGasolinera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGasolinera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGasolinera, 3344779007);
	template<> EXPERIMENTOS_API UClass* StaticClass<AGasolinera>()
	{
		return AGasolinera::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGasolinera(Z_Construct_UClass_AGasolinera, &AGasolinera::StaticClass, TEXT("/Script/Experimentos"), TEXT("AGasolinera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGasolinera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
