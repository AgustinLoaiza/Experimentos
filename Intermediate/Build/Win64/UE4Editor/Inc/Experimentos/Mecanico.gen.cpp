// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Experimentos/Mecanico.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMecanico() {}
// Cross Module References
	EXPERIMENTOS_API UClass* Z_Construct_UClass_AMecanico_NoRegister();
	EXPERIMENTOS_API UClass* Z_Construct_UClass_AMecanico();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Experimentos();
	EXPERIMENTOS_API UClass* Z_Construct_UClass_UObrero_NoRegister();
// End Cross Module References
	void AMecanico::StaticRegisterNativesAMecanico()
	{
	}
	UClass* Z_Construct_UClass_AMecanico_NoRegister()
	{
		return AMecanico::StaticClass();
	}
	struct Z_Construct_UClass_AMecanico_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMecanico_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Experimentos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMecanico_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Mecanico.h" },
		{ "ModuleRelativePath", "Mecanico.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMecanico_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UObrero_NoRegister, (int32)VTABLE_OFFSET(AMecanico, IObrero), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMecanico_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMecanico>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMecanico_Statics::ClassParams = {
		&AMecanico::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMecanico_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMecanico_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMecanico()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMecanico_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMecanico, 3305576582);
	template<> EXPERIMENTOS_API UClass* StaticClass<AMecanico>()
	{
		return AMecanico::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMecanico(Z_Construct_UClass_AMecanico, &AMecanico::StaticClass, TEXT("/Script/Experimentos"), TEXT("AMecanico"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMecanico);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
