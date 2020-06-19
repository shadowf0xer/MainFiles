// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef SOURCEFILTERINGTRACE_DataSourceFilter_generated_h
#error "DataSourceFilter.generated.h already included, missing '#pragma once' in DataSourceFilter.h"
#endif
#define SOURCEFILTERINGTRACE_DataSourceFilter_generated_h

#define Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_21_SPARSE_DATA
#define Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_21_RPC_WRAPPERS \
	virtual bool DoesActorPassFilter_Implementation(const AActor* InActor) const; \
 \
	DECLARE_FUNCTION(execDoesActorPassFilter);


#define Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDoesActorPassFilter);


#define Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_21_EVENT_PARMS \
	struct DataSourceFilter_eventDoesActorPassFilter_Parms \
	{ \
		const AActor* InActor; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		DataSourceFilter_eventDoesActorPassFilter_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_21_CALLBACK_WRAPPERS
#define Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataSourceFilter(); \
	friend struct Z_Construct_UClass_UDataSourceFilter_Statics; \
public: \
	DECLARE_CLASS(UDataSourceFilter, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SourceFilteringTrace"), NO_API) \
	DECLARE_SERIALIZER(UDataSourceFilter) \
	virtual UObject* _getUObject() const override { return const_cast<UDataSourceFilter*>(this); }


#define Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUDataSourceFilter(); \
	friend struct Z_Construct_UClass_UDataSourceFilter_Statics; \
public: \
	DECLARE_CLASS(UDataSourceFilter, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SourceFilteringTrace"), NO_API) \
	DECLARE_SERIALIZER(UDataSourceFilter) \
	virtual UObject* _getUObject() const override { return const_cast<UDataSourceFilter*>(this); }


#define Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataSourceFilter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataSourceFilter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataSourceFilter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataSourceFilter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataSourceFilter(UDataSourceFilter&&); \
	NO_API UDataSourceFilter(const UDataSourceFilter&); \
public:


#define Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataSourceFilter(UDataSourceFilter&&); \
	NO_API UDataSourceFilter(const UDataSourceFilter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataSourceFilter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataSourceFilter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDataSourceFilter)


#define Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_21_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_18_PROLOG \
	Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_21_EVENT_PARMS


#define Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_21_SPARSE_DATA \
	Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_21_RPC_WRAPPERS \
	Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_21_CALLBACK_WRAPPERS \
	Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_21_INCLASS \
	Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_21_SPARSE_DATA \
	Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_21_CALLBACK_WRAPPERS \
	Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOURCEFILTERINGTRACE_API UClass* StaticClass<class UDataSourceFilter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
