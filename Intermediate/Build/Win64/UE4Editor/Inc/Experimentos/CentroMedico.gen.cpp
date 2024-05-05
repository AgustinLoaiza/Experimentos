// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Experimentos/CentroMedico.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCentroMedico() {}
// Cross Module References
	EXPERIMENTOS_API UClass* Z_Construct_UClass_ACentroMedico_NoRegister();
	EXPERIMENTOS_API UClass* Z_Construct_UClass_ACentroMedico();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	UPackage* Z_Construct_UPackage__Script_Experimentos();
// End Cross Module References
	void ACentroMedico::StaticRegisterNativesACentroMedico()
	{
	}
	UClass* Z_Construct_UClass_ACentroMedico_NoRegister()
	{
		return ACentroMedico::StaticClass();
	}
	struct Z_Construct_UClass_ACentroMedico_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACentroMedico_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Experimentos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACentroMedico_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "CentroMedico.h" },
		{ "ModuleRelativePath", "CentroMedico.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACentroMedico_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACentroMedico>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACentroMedico_Statics::ClassParams = {
		&ACentroMedico::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACentroMedico_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACentroMedico_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACentroMedico()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACentroMedico_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACentroMedico, 4104201647);
	template<> EXPERIMENTOS_API UClass* StaticClass<ACentroMedico>()
	{
		return ACentroMedico::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACentroMedico(Z_Construct_UClass_ACentroMedico, &ACentroMedico::StaticClass, TEXT("/Script/Experimentos"), TEXT("ACentroMedico"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACentroMedico);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
