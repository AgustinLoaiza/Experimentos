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
class AComponenteChino;
class AArmeria;
class AMunicion;
class AMotor;
class ACentroMedico;
class AGasolinera;
#ifdef EXPERIMENTOS_ExperimentosPawn_generated_h
#error "ExperimentosPawn.generated.h already included, missing '#pragma once' in ExperimentosPawn.h"
#endif
#define EXPERIMENTOS_ExperimentosPawn_generated_h

#define Experimentos_Source_Experimentos_ExperimentosPawn_h_31_SPARSE_DATA
#define Experimentos_Source_Experimentos_ExperimentosPawn_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNotifyHit); \
	DECLARE_FUNCTION(execTakeItemChino); \
	DECLARE_FUNCTION(execDropItemChino); \
	DECLARE_FUNCTION(execTakeItemArmeria); \
	DECLARE_FUNCTION(execDropItemArmeria); \
	DECLARE_FUNCTION(execTakeItemMunicion); \
	DECLARE_FUNCTION(execDropItemMunicion); \
	DECLARE_FUNCTION(execTakeItem); \
	DECLARE_FUNCTION(execDropItem); \
	DECLARE_FUNCTION(execTakeItemCentroMedico); \
	DECLARE_FUNCTION(execDropItemCentroMedico); \
	DECLARE_FUNCTION(execTakeItemGasolinera); \
	DECLARE_FUNCTION(execDropItemGasolinera);


#define Experimentos_Source_Experimentos_ExperimentosPawn_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNotifyHit); \
	DECLARE_FUNCTION(execTakeItemChino); \
	DECLARE_FUNCTION(execDropItemChino); \
	DECLARE_FUNCTION(execTakeItemArmeria); \
	DECLARE_FUNCTION(execDropItemArmeria); \
	DECLARE_FUNCTION(execTakeItemMunicion); \
	DECLARE_FUNCTION(execDropItemMunicion); \
	DECLARE_FUNCTION(execTakeItem); \
	DECLARE_FUNCTION(execDropItem); \
	DECLARE_FUNCTION(execTakeItemCentroMedico); \
	DECLARE_FUNCTION(execDropItemCentroMedico); \
	DECLARE_FUNCTION(execTakeItemGasolinera); \
	DECLARE_FUNCTION(execDropItemGasolinera);


#define Experimentos_Source_Experimentos_ExperimentosPawn_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAExperimentosPawn(); \
	friend struct Z_Construct_UClass_AExperimentosPawn_Statics; \
public: \
	DECLARE_CLASS(AExperimentosPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Experimentos"), NO_API) \
	DECLARE_SERIALIZER(AExperimentosPawn)


#define Experimentos_Source_Experimentos_ExperimentosPawn_h_31_INCLASS \
private: \
	static void StaticRegisterNativesAExperimentosPawn(); \
	friend struct Z_Construct_UClass_AExperimentosPawn_Statics; \
public: \
	DECLARE_CLASS(AExperimentosPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Experimentos"), NO_API) \
	DECLARE_SERIALIZER(AExperimentosPawn)


#define Experimentos_Source_Experimentos_ExperimentosPawn_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AExperimentosPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AExperimentosPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExperimentosPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExperimentosPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExperimentosPawn(AExperimentosPawn&&); \
	NO_API AExperimentosPawn(const AExperimentosPawn&); \
public:


#define Experimentos_Source_Experimentos_ExperimentosPawn_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExperimentosPawn(AExperimentosPawn&&); \
	NO_API AExperimentosPawn(const AExperimentosPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExperimentosPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExperimentosPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AExperimentosPawn)


#define Experimentos_Source_Experimentos_ExperimentosPawn_h_31_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ShipMeshComponent() { return STRUCT_OFFSET(AExperimentosPawn, ShipMeshComponent); } \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(AExperimentosPawn, CameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AExperimentosPawn, CameraBoom); }


#define Experimentos_Source_Experimentos_ExperimentosPawn_h_28_PROLOG
#define Experimentos_Source_Experimentos_ExperimentosPawn_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Experimentos_Source_Experimentos_ExperimentosPawn_h_31_PRIVATE_PROPERTY_OFFSET \
	Experimentos_Source_Experimentos_ExperimentosPawn_h_31_SPARSE_DATA \
	Experimentos_Source_Experimentos_ExperimentosPawn_h_31_RPC_WRAPPERS \
	Experimentos_Source_Experimentos_ExperimentosPawn_h_31_INCLASS \
	Experimentos_Source_Experimentos_ExperimentosPawn_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Experimentos_Source_Experimentos_ExperimentosPawn_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Experimentos_Source_Experimentos_ExperimentosPawn_h_31_PRIVATE_PROPERTY_OFFSET \
	Experimentos_Source_Experimentos_ExperimentosPawn_h_31_SPARSE_DATA \
	Experimentos_Source_Experimentos_ExperimentosPawn_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	Experimentos_Source_Experimentos_ExperimentosPawn_h_31_INCLASS_NO_PURE_DECLS \
	Experimentos_Source_Experimentos_ExperimentosPawn_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EXPERIMENTOS_API UClass* StaticClass<class AExperimentosPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Experimentos_Source_Experimentos_ExperimentosPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
