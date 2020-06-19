// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUBSTANCECORE_SubstanceInstanceFactory_generated_h
#error "SubstanceInstanceFactory.generated.h already included, missing '#pragma once' in SubstanceInstanceFactory.h"
#endif
#define SUBSTANCECORE_SubstanceInstanceFactory_generated_h

#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceInstanceFactory_h_39_SPARSE_DATA
#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceInstanceFactory_h_39_RPC_WRAPPERS
#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceInstanceFactory_h_39_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceInstanceFactory_h_39_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USubstanceInstanceFactory, NO_API)


#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceInstanceFactory_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubstanceInstanceFactory(); \
	friend struct Z_Construct_UClass_USubstanceInstanceFactory_Statics; \
public: \
	DECLARE_CLASS(USubstanceInstanceFactory, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SubstanceCore"), NO_API) \
	DECLARE_SERIALIZER(USubstanceInstanceFactory) \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceInstanceFactory_h_39_ARCHIVESERIALIZER


#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceInstanceFactory_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUSubstanceInstanceFactory(); \
	friend struct Z_Construct_UClass_USubstanceInstanceFactory_Statics; \
public: \
	DECLARE_CLASS(USubstanceInstanceFactory, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SubstanceCore"), NO_API) \
	DECLARE_SERIALIZER(USubstanceInstanceFactory) \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceInstanceFactory_h_39_ARCHIVESERIALIZER


#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceInstanceFactory_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubstanceInstanceFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubstanceInstanceFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubstanceInstanceFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubstanceInstanceFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubstanceInstanceFactory(USubstanceInstanceFactory&&); \
	NO_API USubstanceInstanceFactory(const USubstanceInstanceFactory&); \
public:


#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceInstanceFactory_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubstanceInstanceFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubstanceInstanceFactory(USubstanceInstanceFactory&&); \
	NO_API USubstanceInstanceFactory(const USubstanceInstanceFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubstanceInstanceFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubstanceInstanceFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubstanceInstanceFactory)


#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceInstanceFactory_h_39_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mGraphInstances() { return STRUCT_OFFSET(USubstanceInstanceFactory, mGraphInstances); }


#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceInstanceFactory_h_36_PROLOG
#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceInstanceFactory_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceInstanceFactory_h_39_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceInstanceFactory_h_39_SPARSE_DATA \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceInstanceFactory_h_39_RPC_WRAPPERS \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceInstanceFactory_h_39_INCLASS \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceInstanceFactory_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceInstanceFactory_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceInstanceFactory_h_39_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceInstanceFactory_h_39_SPARSE_DATA \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceInstanceFactory_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceInstanceFactory_h_39_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceInstanceFactory_h_39_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SubstanceInstanceFactory."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBSTANCECORE_API UClass* StaticClass<class USubstanceInstanceFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceInstanceFactory_h


#define FOREACH_ENUM_ESUBSTANCEGENERATIONMODE(op) \
	op(SGM_PlatformDefault) \
	op(SGM_Baked) \
	op(SGM_OnLoadSync) \
	op(SGM_OnLoadSyncAndCache) \
	op(SGM_OnLoadAsync) \
	op(SGM_OnLoadAsyncAndCache) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
