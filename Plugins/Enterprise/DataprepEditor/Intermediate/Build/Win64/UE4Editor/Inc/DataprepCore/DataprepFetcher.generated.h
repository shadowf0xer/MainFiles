// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATAPREPCORE_DataprepFetcher_generated_h
#error "DataprepFetcher.generated.h already included, missing '#pragma once' in DataprepFetcher.h"
#endif
#define DATAPREPCORE_DataprepFetcher_generated_h

#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFetcher_h_21_SPARSE_DATA
#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFetcher_h_21_RPC_WRAPPERS \
	virtual FText GetAdditionalKeyword_Implementation() const; \
	virtual FText GetTooltipText_Implementation() const; \
	virtual FText GetNodeDisplayFetcherName_Implementation() const; \
	virtual FText GetDisplayFetcherName_Implementation() const; \
 \
	DECLARE_FUNCTION(execGetAdditionalKeyword); \
	DECLARE_FUNCTION(execGetTooltipText); \
	DECLARE_FUNCTION(execGetNodeDisplayFetcherName); \
	DECLARE_FUNCTION(execGetDisplayFetcherName);


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFetcher_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAdditionalKeyword); \
	DECLARE_FUNCTION(execGetTooltipText); \
	DECLARE_FUNCTION(execGetNodeDisplayFetcherName); \
	DECLARE_FUNCTION(execGetDisplayFetcherName);


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFetcher_h_21_EVENT_PARMS \
	struct DataprepFetcher_eventGetAdditionalKeyword_Parms \
	{ \
		FText ReturnValue; \
	}; \
	struct DataprepFetcher_eventGetDisplayFetcherName_Parms \
	{ \
		FText ReturnValue; \
	}; \
	struct DataprepFetcher_eventGetNodeDisplayFetcherName_Parms \
	{ \
		FText ReturnValue; \
	}; \
	struct DataprepFetcher_eventGetTooltipText_Parms \
	{ \
		FText ReturnValue; \
	};


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFetcher_h_21_CALLBACK_WRAPPERS
#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFetcher_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataprepFetcher(); \
	friend struct Z_Construct_UClass_UDataprepFetcher_Statics; \
public: \
	DECLARE_CLASS(UDataprepFetcher, UDataprepParameterizableObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DataprepCore"), NO_API) \
	DECLARE_SERIALIZER(UDataprepFetcher)


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFetcher_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUDataprepFetcher(); \
	friend struct Z_Construct_UClass_UDataprepFetcher_Statics; \
public: \
	DECLARE_CLASS(UDataprepFetcher, UDataprepParameterizableObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DataprepCore"), NO_API) \
	DECLARE_SERIALIZER(UDataprepFetcher)


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFetcher_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataprepFetcher(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataprepFetcher) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataprepFetcher); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataprepFetcher); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataprepFetcher(UDataprepFetcher&&); \
	NO_API UDataprepFetcher(const UDataprepFetcher&); \
public:


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFetcher_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataprepFetcher(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataprepFetcher(UDataprepFetcher&&); \
	NO_API UDataprepFetcher(const UDataprepFetcher&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataprepFetcher); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataprepFetcher); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataprepFetcher)


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFetcher_h_21_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFetcher_h_18_PROLOG \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFetcher_h_21_EVENT_PARMS


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFetcher_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFetcher_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFetcher_h_21_SPARSE_DATA \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFetcher_h_21_RPC_WRAPPERS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFetcher_h_21_CALLBACK_WRAPPERS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFetcher_h_21_INCLASS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFetcher_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFetcher_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFetcher_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFetcher_h_21_SPARSE_DATA \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFetcher_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFetcher_h_21_CALLBACK_WRAPPERS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFetcher_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFetcher_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAPREPCORE_API UClass* StaticClass<class UDataprepFetcher>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFetcher_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
