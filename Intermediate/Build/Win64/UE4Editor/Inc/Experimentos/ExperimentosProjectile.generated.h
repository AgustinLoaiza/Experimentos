// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef EXPERIMENTOS_ExperimentosProjectile_generated_h
#error "ExperimentosProjectile.generated.h already included, missing '#pragma once' in ExperimentosProjectile.h"
#endif
#define EXPERIMENTOS_ExperimentosProjectile_generated_h

#define Experimentos_Source_Experimentos_ExperimentosProjectile_h_15_SPARSE_DATA
#define Experimentos_Source_Experimentos_ExperimentosProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Experimentos_Source_Experimentos_ExperimentosProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Experimentos_Source_Experimentos_ExperimentosProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAExperimentosProjectile(); \
	friend struct Z_Construct_UClass_AExperimentosProjectile_Statics; \
public: \
	DECLARE_CLASS(AExperimentosProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Experimentos"), NO_API) \
	DECLARE_SERIALIZER(AExperimentosProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Experimentos_Source_Experimentos_ExperimentosProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAExperimentosProjectile(); \
	friend struct Z_Construct_UClass_AExperimentosProjectile_Statics; \
public: \
	DECLARE_CLASS(AExperimentosProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Experimentos"), NO_API) \
	DECLARE_SERIALIZER(AExperimentosProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Experimentos_Source_Experimentos_ExperimentosProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AExperimentosProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AExperimentosProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExperimentosProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExperimentosProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExperimentosProjectile(AExperimentosProjectile&&); \
	NO_API AExperimentosProjectile(const AExperimentosProjectile&); \
public:


#define Experimentos_Source_Experimentos_ExperimentosProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExperimentosProjectile(AExperimentosProjectile&&); \
	NO_API AExperimentosProjectile(const AExperimentosProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExperimentosProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExperimentosProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AExperimentosProjectile)


#define Experimentos_Source_Experimentos_ExperimentosProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(AExperimentosProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AExperimentosProjectile, ProjectileMovement); }


#define Experimentos_Source_Experimentos_ExperimentosProjectile_h_12_PROLOG
#define Experimentos_Source_Experimentos_ExperimentosProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Experimentos_Source_Experimentos_ExperimentosProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Experimentos_Source_Experimentos_ExperimentosProjectile_h_15_SPARSE_DATA \
	Experimentos_Source_Experimentos_ExperimentosProjectile_h_15_RPC_WRAPPERS \
	Experimentos_Source_Experimentos_ExperimentosProjectile_h_15_INCLASS \
	Experimentos_Source_Experimentos_ExperimentosProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Experimentos_Source_Experimentos_ExperimentosProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Experimentos_Source_Experimentos_ExperimentosProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Experimentos_Source_Experimentos_ExperimentosProjectile_h_15_SPARSE_DATA \
	Experimentos_Source_Experimentos_ExperimentosProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Experimentos_Source_Experimentos_ExperimentosProjectile_h_15_INCLASS_NO_PURE_DECLS \
	Experimentos_Source_Experimentos_ExperimentosProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EXPERIMENTOS_API UClass* StaticClass<class AExperimentosProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Experimentos_Source_Experimentos_ExperimentosProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
