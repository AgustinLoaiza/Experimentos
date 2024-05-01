// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Experimentos/Artillero.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArtillero() {}
// Cross Module References
	EXPERIMENTOS_API UClass* Z_Construct_UClass_AArtillero_NoRegister();
	EXPERIMENTOS_API UClass* Z_Construct_UClass_AArtillero();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Experimentos();
	EXPERIMENTOS_API UClass* Z_Construct_UClass_UObrero_NoRegister();
// End Cross Module References
	void AArtillero::StaticRegisterNativesAArtillero()
	{
	}
	UClass* Z_Construct_UClass_AArtillero_NoRegister()
	{
		return AArtillero::StaticClass();
	}
	struct Z_Construct_UClass_AArtillero_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArtillero_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Experimentos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArtillero_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Artillero.h" },
		{ "ModuleRelativePath", "Artillero.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AArtillero_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UObrero_NoRegister, (int32)VTABLE_OFFSET(AArtillero, IObrero), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArtillero_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArtillero>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArtillero_Statics::ClassParams = {
		&AArtillero::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AArtillero_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AArtillero_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArtillero()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArtillero_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArtillero, 398366365);
	template<> EXPERIMENTOS_API UClass* StaticClass<AArtillero>()
	{
		return AArtillero::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArtillero(Z_Construct_UClass_AArtillero, &AArtillero::StaticClass, TEXT("/Script/Experimentos"), TEXT("AArtillero"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArtillero);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
