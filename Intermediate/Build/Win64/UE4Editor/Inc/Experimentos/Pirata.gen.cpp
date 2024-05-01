// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Experimentos/Pirata.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePirata() {}
// Cross Module References
	EXPERIMENTOS_API UClass* Z_Construct_UClass_APirata_NoRegister();
	EXPERIMENTOS_API UClass* Z_Construct_UClass_APirata();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Experimentos();
	EXPERIMENTOS_API UClass* Z_Construct_UClass_UObrero_NoRegister();
// End Cross Module References
	void APirata::StaticRegisterNativesAPirata()
	{
	}
	UClass* Z_Construct_UClass_APirata_NoRegister()
	{
		return APirata::StaticClass();
	}
	struct Z_Construct_UClass_APirata_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APirata_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Experimentos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APirata_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Pirata.h" },
		{ "ModuleRelativePath", "Pirata.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APirata_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UObrero_NoRegister, (int32)VTABLE_OFFSET(APirata, IObrero), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APirata_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APirata>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APirata_Statics::ClassParams = {
		&APirata::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APirata_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APirata_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APirata()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APirata_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APirata, 1685146157);
	template<> EXPERIMENTOS_API UClass* StaticClass<APirata>()
	{
		return APirata::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APirata(Z_Construct_UClass_APirata, &APirata::StaticClass, TEXT("/Script/Experimentos"), TEXT("APirata"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APirata);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
