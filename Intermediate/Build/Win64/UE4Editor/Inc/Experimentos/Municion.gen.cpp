// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Experimentos/Municion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMunicion() {}
// Cross Module References
	EXPERIMENTOS_API UClass* Z_Construct_UClass_AMunicion_NoRegister();
	EXPERIMENTOS_API UClass* Z_Construct_UClass_AMunicion();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	UPackage* Z_Construct_UPackage__Script_Experimentos();
// End Cross Module References
	void AMunicion::StaticRegisterNativesAMunicion()
	{
	}
	UClass* Z_Construct_UClass_AMunicion_NoRegister()
	{
		return AMunicion::StaticClass();
	}
	struct Z_Construct_UClass_AMunicion_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Verificar_MetaData[];
#endif
		static void NewProp_Verificar_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Verificar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMunicion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Experimentos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMunicion_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "Municion.h" },
		{ "ModuleRelativePath", "Municion.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMunicion_Statics::NewProp_Velocidad_MetaData[] = {
		{ "Comment", "//virtual void Tick(float DeltaTime) override;\n" },
		{ "ModuleRelativePath", "Municion.h" },
		{ "ToolTip", "virtual void Tick(float DeltaTime) override;" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMunicion_Statics::NewProp_Velocidad = { "Velocidad", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMunicion, Velocidad), METADATA_PARAMS(Z_Construct_UClass_AMunicion_Statics::NewProp_Velocidad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMunicion_Statics::NewProp_Velocidad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMunicion_Statics::NewProp_TiempoTranscurrido_MetaData[] = {
		{ "ModuleRelativePath", "Municion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMunicion_Statics::NewProp_TiempoTranscurrido = { "TiempoTranscurrido", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMunicion, TiempoTranscurrido), METADATA_PARAMS(Z_Construct_UClass_AMunicion_Statics::NewProp_TiempoTranscurrido_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMunicion_Statics::NewProp_TiempoTranscurrido_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMunicion_Statics::NewProp_Verificar_MetaData[] = {
		{ "ModuleRelativePath", "Municion.h" },
	};
#endif
	void Z_Construct_UClass_AMunicion_Statics::NewProp_Verificar_SetBit(void* Obj)
	{
		((AMunicion*)Obj)->Verificar = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMunicion_Statics::NewProp_Verificar = { "Verificar", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMunicion), &Z_Construct_UClass_AMunicion_Statics::NewProp_Verificar_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMunicion_Statics::NewProp_Verificar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMunicion_Statics::NewProp_Verificar_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMunicion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMunicion_Statics::NewProp_Velocidad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMunicion_Statics::NewProp_TiempoTranscurrido,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMunicion_Statics::NewProp_Verificar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMunicion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMunicion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMunicion_Statics::ClassParams = {
		&AMunicion::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMunicion_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMunicion_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMunicion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMunicion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMunicion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMunicion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMunicion, 1186447232);
	template<> EXPERIMENTOS_API UClass* StaticClass<AMunicion>()
	{
		return AMunicion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMunicion(Z_Construct_UClass_AMunicion, &AMunicion::StaticClass, TEXT("/Script/Experimentos"), TEXT("AMunicion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMunicion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
