// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Experimentos/ComponenteVelocidad.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponenteVelocidad() {}
// Cross Module References
	EXPERIMENTOS_API UClass* Z_Construct_UClass_UComponenteVelocidad_NoRegister();
	EXPERIMENTOS_API UClass* Z_Construct_UClass_UComponenteVelocidad();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Experimentos();
// End Cross Module References
	void UComponenteVelocidad::StaticRegisterNativesUComponenteVelocidad()
	{
	}
	UClass* Z_Construct_UClass_UComponenteVelocidad_NoRegister()
	{
		return UComponenteVelocidad::StaticClass();
	}
	struct Z_Construct_UClass_UComponenteVelocidad_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocidad_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Velocidad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TiempoTranscurrido_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TiempoTranscurrido;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComponenteVelocidad_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Experimentos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponenteVelocidad_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ComponenteVelocidad.h" },
		{ "ModuleRelativePath", "ComponenteVelocidad.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponenteVelocidad_Statics::NewProp_Velocidad_MetaData[] = {
		{ "ModuleRelativePath", "ComponenteVelocidad.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UComponenteVelocidad_Statics::NewProp_Velocidad = { "Velocidad", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UComponenteVelocidad, Velocidad), METADATA_PARAMS(Z_Construct_UClass_UComponenteVelocidad_Statics::NewProp_Velocidad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComponenteVelocidad_Statics::NewProp_Velocidad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponenteVelocidad_Statics::NewProp_TiempoTranscurrido_MetaData[] = {
		{ "ModuleRelativePath", "ComponenteVelocidad.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UComponenteVelocidad_Statics::NewProp_TiempoTranscurrido = { "TiempoTranscurrido", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UComponenteVelocidad, TiempoTranscurrido), METADATA_PARAMS(Z_Construct_UClass_UComponenteVelocidad_Statics::NewProp_TiempoTranscurrido_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComponenteVelocidad_Statics::NewProp_TiempoTranscurrido_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComponenteVelocidad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComponenteVelocidad_Statics::NewProp_Velocidad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComponenteVelocidad_Statics::NewProp_TiempoTranscurrido,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComponenteVelocidad_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComponenteVelocidad>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UComponenteVelocidad_Statics::ClassParams = {
		&UComponenteVelocidad::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UComponenteVelocidad_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UComponenteVelocidad_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UComponenteVelocidad_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComponenteVelocidad_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComponenteVelocidad()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UComponenteVelocidad_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UComponenteVelocidad, 2811409622);
	template<> EXPERIMENTOS_API UClass* StaticClass<UComponenteVelocidad>()
	{
		return UComponenteVelocidad::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UComponenteVelocidad(Z_Construct_UClass_UComponenteVelocidad, &UComponenteVelocidad::StaticClass, TEXT("/Script/Experimentos"), TEXT("UComponenteVelocidad"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComponenteVelocidad);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
