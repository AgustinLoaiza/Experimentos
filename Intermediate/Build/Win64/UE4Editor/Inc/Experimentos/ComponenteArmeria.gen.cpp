// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Experimentos/ComponenteArmeria.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponenteArmeria() {}
// Cross Module References
	EXPERIMENTOS_API UClass* Z_Construct_UClass_UComponenteArmeria_NoRegister();
	EXPERIMENTOS_API UClass* Z_Construct_UClass_UComponenteArmeria();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Experimentos();
// End Cross Module References
	void UComponenteArmeria::StaticRegisterNativesUComponenteArmeria()
	{
	}
	UClass* Z_Construct_UClass_UComponenteArmeria_NoRegister()
	{
		return UComponenteArmeria::StaticClass();
	}
	struct Z_Construct_UClass_UComponenteArmeria_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComponenteArmeria_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Experimentos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponenteArmeria_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ComponenteArmeria.h" },
		{ "ModuleRelativePath", "ComponenteArmeria.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComponenteArmeria_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComponenteArmeria>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UComponenteArmeria_Statics::ClassParams = {
		&UComponenteArmeria::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UComponenteArmeria_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComponenteArmeria_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComponenteArmeria()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UComponenteArmeria_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UComponenteArmeria, 3949355356);
	template<> EXPERIMENTOS_API UClass* StaticClass<UComponenteArmeria>()
	{
		return UComponenteArmeria::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UComponenteArmeria(Z_Construct_UClass_UComponenteArmeria, &UComponenteArmeria::StaticClass, TEXT("/Script/Experimentos"), TEXT("UComponenteArmeria"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComponenteArmeria);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
