// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOURCEFILTERINGTRACE_DataSourceFilterSet_generated_h
#error "DataSourceFilterSet.generated.h already included, missing '#pragma once' in DataSourceFilterSet.h"
#endif
#define SOURCEFILTERINGTRACE_DataSourceFilterSet_generated_h

#define Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilterSet_h_16_SPARSE_DATA
#define Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilterSet_h_16_RPC_WRAPPERS
#define Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilterSet_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilterSet_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataSourceFilterSet(); \
	friend struct Z_Construct_UClass_UDataSourceFilterSet_Statics; \
public: \
	DECLARE_CLASS(UDataSourceFilterSet, UDataSourceFilter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SourceFilteringTrace"), NO_API) \
	DECLARE_SERIALIZER(UDataSourceFilterSet) \
	virtual UObject* _getUObject() const override { return const_cast<UDataSourceFilterSet*>(this); }


#define Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilterSet_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUDataSourceFilterSet(); \
	friend struct Z_Construct_UClass_UDataSourceFilterSet_Statics; \
public: \
	DECLARE_CLASS(UDataSourceFilterSet, UDataSourceFilter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SourceFilteringTrace"), NO_API) \
	DECLARE_SERIALIZER(UDataSourceFilterSet) \
	virtual UObject* _getUObject() const override { return const_cast<UDataSourceFilterSet*>(this); }


#define Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilterSet_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataSourceFilterSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataSourceFilterSet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataSourceFilterSet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataSourceFilterSet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataSourceFilterSet(UDataSourceFilterSet&&); \
	NO_API UDataSourceFilterSet(const UDataSourceFilterSet&); \
public:


#define Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilterSet_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataSourceFilterSet() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataSourceFilterSet(UDataSourceFilterSet&&); \
	NO_API UDataSourceFilterSet(const UDataSourceFilterSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataSourceFilterSet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataSourceFilterSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDataSourceFilterSet)


#define Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilterSet_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Filters() { return STRUCT_OFFSET(UDataSourceFilterSet, Filters); } \
	FORCEINLINE static uint32 __PPO__Mode() { return STRUCT_OFFSET(UDataSourceFilterSet, Mode); }


#define Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilterSet_h_11_PROLOG
#define Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilterSet_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilterSet_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilterSet_h_16_SPARSE_DATA \
	Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilterSet_h_16_RPC_WRAPPERS \
	Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilterSet_h_16_INCLASS \
	Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilterSet_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilterSet_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilterSet_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilterSet_h_16_SPARSE_DATA \
	Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilterSet_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilterSet_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilterSet_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOURCEFILTERINGTRACE_API UClass* StaticClass<class UDataSourceFilterSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilterSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
