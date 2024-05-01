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
	EXPERIMENTOS_API UClass* Z_Construct_UClass_AArmeria_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UComponenteArmeria::execRemoveFromInventory)
	{
		P_GET_OBJECT(AArmeria,Z_Param_ActorToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveFromInventory(Z_Param_ActorToRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComponenteArmeria::execAddToInventory)
	{
		P_GET_OBJECT(AArmeria,Z_Param_ActorToAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AddToInventory(Z_Param_ActorToAdd);
		P_NATIVE_END;
	}
	void UComponenteArmeria::StaticRegisterNativesUComponenteArmeria()
	{
		UClass* Class = UComponenteArmeria::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToInventory", &UComponenteArmeria::execAddToInventory },
			{ "RemoveFromInventory", &UComponenteArmeria::execRemoveFromInventory },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UComponenteArmeria_AddToInventory_Statics
	{
		struct ComponenteArmeria_eventAddToInventory_Parms
		{
			AArmeria* ActorToAdd;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorToAdd;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComponenteArmeria_AddToInventory_Statics::NewProp_ActorToAdd = { "ActorToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponenteArmeria_eventAddToInventory_Parms, ActorToAdd), Z_Construct_UClass_AArmeria_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UComponenteArmeria_AddToInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponenteArmeria_eventAddToInventory_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComponenteArmeria_AddToInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponenteArmeria_AddToInventory_Statics::NewProp_ActorToAdd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponenteArmeria_AddToInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponenteArmeria_AddToInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ComponenteArmeria.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComponenteArmeria_AddToInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComponenteArmeria, nullptr, "AddToInventory", nullptr, nullptr, sizeof(ComponenteArmeria_eventAddToInventory_Parms), Z_Construct_UFunction_UComponenteArmeria_AddToInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponenteArmeria_AddToInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComponenteArmeria_AddToInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponenteArmeria_AddToInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComponenteArmeria_AddToInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComponenteArmeria_AddToInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComponenteArmeria_RemoveFromInventory_Statics
	{
		struct ComponenteArmeria_eventRemoveFromInventory_Parms
		{
			AArmeria* ActorToRemove;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorToRemove;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComponenteArmeria_RemoveFromInventory_Statics::NewProp_ActorToRemove = { "ActorToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponenteArmeria_eventRemoveFromInventory_Parms, ActorToRemove), Z_Construct_UClass_AArmeria_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComponenteArmeria_RemoveFromInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponenteArmeria_RemoveFromInventory_Statics::NewProp_ActorToRemove,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponenteArmeria_RemoveFromInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ComponenteArmeria.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComponenteArmeria_RemoveFromInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComponenteArmeria, nullptr, "RemoveFromInventory", nullptr, nullptr, sizeof(ComponenteArmeria_eventRemoveFromInventory_Parms), Z_Construct_UFunction_UComponenteArmeria_RemoveFromInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponenteArmeria_RemoveFromInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComponenteArmeria_RemoveFromInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponenteArmeria_RemoveFromInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComponenteArmeria_RemoveFromInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComponenteArmeria_RemoveFromInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UComponenteArmeria_NoRegister()
	{
		return UComponenteArmeria::StaticClass();
	}
	struct Z_Construct_UClass_UComponenteArmeria_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentInventory_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurrentInventory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComponenteArmeria_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Experimentos,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UComponenteArmeria_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UComponenteArmeria_AddToInventory, "AddToInventory" }, // 2334214387
		{ &Z_Construct_UFunction_UComponenteArmeria_RemoveFromInventory, "RemoveFromInventory" }, // 3300052652
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponenteArmeria_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ComponenteArmeria.h" },
		{ "ModuleRelativePath", "ComponenteArmeria.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UComponenteArmeria_Statics::NewProp_CurrentInventory_Inner = { "CurrentInventory", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AArmeria_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponenteArmeria_Statics::NewProp_CurrentInventory_MetaData[] = {
		{ "ModuleRelativePath", "ComponenteArmeria.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UComponenteArmeria_Statics::NewProp_CurrentInventory = { "CurrentInventory", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UComponenteArmeria, CurrentInventory), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UComponenteArmeria_Statics::NewProp_CurrentInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComponenteArmeria_Statics::NewProp_CurrentInventory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComponenteArmeria_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComponenteArmeria_Statics::NewProp_CurrentInventory_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComponenteArmeria_Statics::NewProp_CurrentInventory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComponenteArmeria_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComponenteArmeria>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UComponenteArmeria_Statics::ClassParams = {
		&UComponenteArmeria::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UComponenteArmeria_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UComponenteArmeria_Statics::PropPointers),
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
	IMPLEMENT_CLASS(UComponenteArmeria, 511211989);
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
