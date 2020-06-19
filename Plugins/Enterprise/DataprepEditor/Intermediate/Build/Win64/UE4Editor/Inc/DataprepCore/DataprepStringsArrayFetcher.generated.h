// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef DATAPREPCORE_DataprepStringsArrayFetcher_generated_h
#error "DataprepStringsArrayFetcher.generated.h already included, missing '#pragma once' in DataprepStringsArrayFetcher.h"
#endif
#define DATAPREPCORE_DataprepStringsArrayFetcher_generated_h

#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringsArrayFetcher_h_16_SPARSE_DATA
#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringsArrayFetcher_h_16_RPC_WRAPPERS \
	virtual TArray<FString> Fetch_Implementation(const UObject* Object, bool& bOutFetchSucceded) const; \
 \
	DECLARE_FUNCTION(execFetch);


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringsArrayFetcher_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFetch);


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringsArrayFetcher_h_16_EVENT_PARMS \
	struct DataprepStringsArrayFetcher_eventFetch_Parms \
	{ \
		const UObject* Object; \
		bool bOutFetchSucceded; \
		TArray<FString> ReturnValue; \
	};


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringsArrayFetcher_h_16_CALLBACK_WRAPPERS
#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringsArrayFetcher_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataprepStringsArrayFetcher(); \
	friend struct Z_Construct_UClass_UDataprepStringsArrayFetcher_Statics; \
public: \
	DECLARE_CLASS(UDataprepStringsArrayFetcher, UDataprepFetcher, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DataprepCore"), NO_API) \
	DECLARE_SERIALIZER(UDataprepStringsArrayFetcher)


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringsArrayFetcher_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUDataprepStringsArrayFetcher(); \
	friend struct Z_Construct_UClass_UDataprepStringsArrayFetcher_Statics; \
public: \
	DECLARE_CLASS(UDataprepStringsArrayFetcher, UDataprepFetcher, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DataprepCore"), NO_API) \
	DECLARE_SERIALIZER(UDataprepStringsArrayFetcher)


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringsArrayFetcher_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataprepStringsArrayFetcher(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataprepStringsArrayFetcher) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataprepStringsArrayFetcher); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataprepStringsArrayFetcher); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataprepStringsArrayFetcher(UDataprepStringsArrayFetcher&&); \
	NO_API UDataprepStringsArrayFetcher(const UDataprepStringsArrayFetcher&); \
public:


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringsArrayFetcher_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataprepStringsArrayFetcher(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataprepStringsArrayFetcher(UDataprepStringsArrayFetcher&&); \
	NO_API UDataprepStringsArrayFetcher(const UDataprepStringsArrayFetcher&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataprepStringsArrayFetcher); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataprepStringsArrayFetcher); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataprepStringsArrayFetcher)


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringsArrayFetcher_h_16_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringsArrayFetcher_h_13_PROLOG \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringsArrayFetcher_h_16_EVENT_PARMS


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringsArrayFetcher_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringsArrayFetcher_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringsArrayFetcher_h_16_SPARSE_DATA \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringsArrayFetcher_h_16_RPC_WRAPPERS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringsArrayFetcher_h_16_CALLBACK_WRAPPERS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringsArrayFetcher_h_16_INCLASS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringsArrayFetcher_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringsArrayFetcher_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringsArrayFetcher_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringsArrayFetcher_h_16_SPARSE_DATA \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringsArrayFetcher_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringsArrayFetcher_h_16_CALLBACK_WRAPPERS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringsArrayFetcher_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringsArrayFetcher_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAPREPCORE_API UClass* StaticClass<class UDataprepStringsArrayFetcher>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringsArrayFetcher_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
