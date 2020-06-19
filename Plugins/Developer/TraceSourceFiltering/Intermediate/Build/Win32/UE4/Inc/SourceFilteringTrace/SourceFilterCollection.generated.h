// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOURCEFILTERINGTRACE_SourceFilterCollection_generated_h
#error "SourceFilterCollection.generated.h already included, missing '#pragma once' in SourceFilterCollection.h"
#endif
#define SOURCEFILTERINGTRACE_SourceFilterCollection_generated_h

#define Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_SourceFilterCollection_h_15_SPARSE_DATA
#define Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_SourceFilterCollection_h_15_RPC_WRAPPERS
#define Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_SourceFilterCollection_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_SourceFilterCollection_h_15_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USourceFilterCollection, NO_API)


#define Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_SourceFilterCollection_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSourceFilterCollection(); \
	friend struct Z_Construct_UClass_USourceFilterCollection_Statics; \
public: \
	DECLARE_CLASS(USourceFilterCollection, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SourceFilteringTrace"), NO_API) \
	DECLARE_SERIALIZER(USourceFilterCollection) \
	Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_SourceFilterCollection_h_15_ARCHIVESERIALIZER


#define Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_SourceFilterCollection_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSourceFilterCollection(); \
	friend struct Z_Construct_UClass_USourceFilterCollection_Statics; \
public: \
	DECLARE_CLASS(USourceFilterCollection, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SourceFilteringTrace"), NO_API) \
	DECLARE_SERIALIZER(USourceFilterCollection) \
	Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_SourceFilterCollection_h_15_ARCHIVESERIALIZER


#define Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_SourceFilterCollection_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USourceFilterCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USourceFilterCollection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USourceFilterCollection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USourceFilterCollection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USourceFilterCollection(USourceFilterCollection&&); \
	NO_API USourceFilterCollection(const USourceFilterCollection&); \
public:


#define Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_SourceFilterCollection_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USourceFilterCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USourceFilterCollection(USourceFilterCollection&&); \
	NO_API USourceFilterCollection(const USourceFilterCollection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USourceFilterCollection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USourceFilterCollection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USourceFilterCollection)


#define Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_SourceFilterCollection_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Filters() { return STRUCT_OFFSET(USourceFilterCollection, Filters); } \
	FORCEINLINE static uint32 __PPO__FilterClasses() { return STRUCT_OFFSET(USourceFilterCollection, FilterClasses); } \
	FORCEINLINE static uint32 __PPO__ChildToParent() { return STRUCT_OFFSET(USourceFilterCollection, ChildToParent); }


#define Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_SourceFilterCollection_h_12_PROLOG
#define Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_SourceFilterCollection_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_SourceFilterCollection_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_SourceFilterCollection_h_15_SPARSE_DATA \
	Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_SourceFilterCollection_h_15_RPC_WRAPPERS \
	Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_SourceFilterCollection_h_15_INCLASS \
	Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_SourceFilterCollection_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_SourceFilterCollection_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_SourceFilterCollection_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_SourceFilterCollection_h_15_SPARSE_DATA \
	Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_SourceFilterCollection_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_SourceFilterCollection_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_SourceFilterCollection_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOURCEFILTERINGTRACE_API UClass* StaticClass<class USourceFilterCollection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_SourceFilterCollection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
