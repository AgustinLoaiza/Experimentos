// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Experimentos/Armeria.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArmeria() {}
// Cross Module References
	EXPERIMENTOS_API UClass* Z_Construct_UClass_AArmeria_NoRegister();
	EXPERIMENTOS_API UClass* Z_Construct_UClass_AArmeria();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	UPackage* Z_Construct_UPackage__Script_Experimentos();
// End Cross Module References
	void AArmeria::StaticRegisterNativesAArmeria()
	{
	}
	UClass* Z_Construct_UClass_AArmeria_NoRegister()
	{
		return AArmeria::StaticClass();
	}
	struct Z_Construct_UClass_AArmeria_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArmeria_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Experimentos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmeria_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "Armeria.h" },
		{ "ModuleRelativePath", "Armeria.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArmeria_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArmeria>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArmeria_Statics::ClassParams = {
		&AArmeria::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AArmeria_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AArmeria_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArmeria()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArmeria_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArmeria, 1519537883);
	template<> EXPERIMENTOS_API UClass* StaticClass<AArmeria>()
	{
		return AArmeria::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArmeria(Z_Construct_UClass_AArmeria, &AArmeria::StaticClass, TEXT("/Script/Experimentos"), TEXT("AArmeria"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArmeria);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
