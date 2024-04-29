// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Experimentos/ExperimentosGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExperimentosGameMode() {}
// Cross Module References
	EXPERIMENTOS_API UClass* Z_Construct_UClass_AExperimentosGameMode_NoRegister();
	EXPERIMENTOS_API UClass* Z_Construct_UClass_AExperimentosGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Experimentos();
// End Cross Module References
	void AExperimentosGameMode::StaticRegisterNativesAExperimentosGameMode()
	{
	}
	UClass* Z_Construct_UClass_AExperimentosGameMode_NoRegister()
	{
		return AExperimentosGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AExperimentosGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExperimentosGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Experimentos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExperimentosGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ExperimentosGameMode.h" },
		{ "ModuleRelativePath", "ExperimentosGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExperimentosGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExperimentosGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AExperimentosGameMode_Statics::ClassParams = {
		&AExperimentosGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AExperimentosGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AExperimentosGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AExperimentosGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AExperimentosGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AExperimentosGameMode, 3884899503);
	template<> EXPERIMENTOS_API UClass* StaticClass<AExperimentosGameMode>()
	{
		return AExperimentosGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AExperimentosGameMode(Z_Construct_UClass_AExperimentosGameMode, &AExperimentosGameMode::StaticClass, TEXT("/Script/Experimentos"), TEXT("AExperimentosGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExperimentosGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
