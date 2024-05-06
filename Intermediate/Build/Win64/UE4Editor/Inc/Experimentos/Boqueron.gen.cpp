// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Experimentos/Boqueron.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoqueron() {}
// Cross Module References
	EXPERIMENTOS_API UClass* Z_Construct_UClass_ABoqueron_NoRegister();
	EXPERIMENTOS_API UClass* Z_Construct_UClass_ABoqueron();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Experimentos();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	EXPERIMENTOS_API UClass* Z_Construct_UClass_UPlanosDeAsedio_NoRegister();
// End Cross Module References
	void ABoqueron::StaticRegisterNativesABoqueron()
	{
	}
	UClass* Z_Construct_UClass_ABoqueron_NoRegister()
	{
		return ABoqueron::StaticClass();
	}
	struct Z_Construct_UClass_ABoqueron_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PowerUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Disparador_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Disparador;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Escudo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Escudo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuroEspinas_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MuroEspinas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshBoqueron_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshBoqueron;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoqueron_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Experimentos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoqueron_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Boqueron.h" },
		{ "ModuleRelativePath", "Boqueron.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoqueron_Statics::NewProp_PowerUp_MetaData[] = {
		{ "Category", "Boqueron" },
		{ "ModuleRelativePath", "Boqueron.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABoqueron_Statics::NewProp_PowerUp = { "PowerUp", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoqueron, PowerUp), METADATA_PARAMS(Z_Construct_UClass_ABoqueron_Statics::NewProp_PowerUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoqueron_Statics::NewProp_PowerUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoqueron_Statics::NewProp_Disparador_MetaData[] = {
		{ "Category", "Boqueron" },
		{ "ModuleRelativePath", "Boqueron.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABoqueron_Statics::NewProp_Disparador = { "Disparador", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoqueron, Disparador), METADATA_PARAMS(Z_Construct_UClass_ABoqueron_Statics::NewProp_Disparador_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoqueron_Statics::NewProp_Disparador_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoqueron_Statics::NewProp_Escudo_MetaData[] = {
		{ "Category", "Boqueron" },
		{ "ModuleRelativePath", "Boqueron.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABoqueron_Statics::NewProp_Escudo = { "Escudo", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoqueron, Escudo), METADATA_PARAMS(Z_Construct_UClass_ABoqueron_Statics::NewProp_Escudo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoqueron_Statics::NewProp_Escudo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoqueron_Statics::NewProp_MuroEspinas_MetaData[] = {
		{ "Category", "Boqueron" },
		{ "ModuleRelativePath", "Boqueron.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABoqueron_Statics::NewProp_MuroEspinas = { "MuroEspinas", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoqueron, MuroEspinas), METADATA_PARAMS(Z_Construct_UClass_ABoqueron_Statics::NewProp_MuroEspinas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoqueron_Statics::NewProp_MuroEspinas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoqueron_Statics::NewProp_MeshBoqueron_MetaData[] = {
		{ "Category", "Boqueron" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Boqueron.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoqueron_Statics::NewProp_MeshBoqueron = { "MeshBoqueron", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoqueron, MeshBoqueron), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoqueron_Statics::NewProp_MeshBoqueron_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoqueron_Statics::NewProp_MeshBoqueron_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoqueron_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoqueron_Statics::NewProp_PowerUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoqueron_Statics::NewProp_Disparador,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoqueron_Statics::NewProp_Escudo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoqueron_Statics::NewProp_MuroEspinas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoqueron_Statics::NewProp_MeshBoqueron,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABoqueron_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPlanosDeAsedio_NoRegister, (int32)VTABLE_OFFSET(ABoqueron, IPlanosDeAsedio), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoqueron_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoqueron>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABoqueron_Statics::ClassParams = {
		&ABoqueron::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABoqueron_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABoqueron_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABoqueron_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABoqueron_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABoqueron()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABoqueron_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABoqueron, 475320079);
	template<> EXPERIMENTOS_API UClass* StaticClass<ABoqueron>()
	{
		return ABoqueron::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABoqueron(Z_Construct_UClass_ABoqueron, &ABoqueron::StaticClass, TEXT("/Script/Experimentos"), TEXT("ABoqueron"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoqueron);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
