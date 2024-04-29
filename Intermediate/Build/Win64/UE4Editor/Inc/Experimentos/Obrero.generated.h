// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EXPERIMENTOS_Obrero_generated_h
#error "Obrero.generated.h already included, missing '#pragma once' in Obrero.h"
#endif
#define EXPERIMENTOS_Obrero_generated_h

#define Experimentos_Source_Experimentos_Obrero_h_13_SPARSE_DATA
#define Experimentos_Source_Experimentos_Obrero_h_13_RPC_WRAPPERS
#define Experimentos_Source_Experimentos_Obrero_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Experimentos_Source_Experimentos_Obrero_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	EXPERIMENTOS_API UObrero(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObrero) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EXPERIMENTOS_API, UObrero); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObrero); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	EXPERIMENTOS_API UObrero(UObrero&&); \
	EXPERIMENTOS_API UObrero(const UObrero&); \
public:


#define Experimentos_Source_Experimentos_Obrero_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	EXPERIMENTOS_API UObrero(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	EXPERIMENTOS_API UObrero(UObrero&&); \
	EXPERIMENTOS_API UObrero(const UObrero&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EXPERIMENTOS_API, UObrero); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObrero); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObrero)


#define Experimentos_Source_Experimentos_Obrero_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUObrero(); \
	friend struct Z_Construct_UClass_UObrero_Statics; \
public: \
	DECLARE_CLASS(UObrero, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Experimentos"), EXPERIMENTOS_API) \
	DECLARE_SERIALIZER(UObrero)


#define Experimentos_Source_Experimentos_Obrero_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Experimentos_Source_Experimentos_Obrero_h_13_GENERATED_UINTERFACE_BODY() \
	Experimentos_Source_Experimentos_Obrero_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Experimentos_Source_Experimentos_Obrero_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Experimentos_Source_Experimentos_Obrero_h_13_GENERATED_UINTERFACE_BODY() \
	Experimentos_Source_Experimentos_Obrero_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Experimentos_Source_Experimentos_Obrero_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IObrero() {} \
public: \
	typedef UObrero UClassType; \
	typedef IObrero ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Experimentos_Source_Experimentos_Obrero_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IObrero() {} \
public: \
	typedef UObrero UClassType; \
	typedef IObrero ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Experimentos_Source_Experimentos_Obrero_h_10_PROLOG
#define Experimentos_Source_Experimentos_Obrero_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Experimentos_Source_Experimentos_Obrero_h_13_SPARSE_DATA \
	Experimentos_Source_Experimentos_Obrero_h_13_RPC_WRAPPERS \
	Experimentos_Source_Experimentos_Obrero_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Experimentos_Source_Experimentos_Obrero_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Experimentos_Source_Experimentos_Obrero_h_13_SPARSE_DATA \
	Experimentos_Source_Experimentos_Obrero_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Experimentos_Source_Experimentos_Obrero_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EXPERIMENTOS_API UClass* StaticClass<class UObrero>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Experimentos_Source_Experimentos_Obrero_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
