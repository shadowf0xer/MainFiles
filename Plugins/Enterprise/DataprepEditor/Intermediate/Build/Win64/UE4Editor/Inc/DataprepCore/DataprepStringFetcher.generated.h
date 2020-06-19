// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef DATAPREPCORE_DataprepStringFetcher_generated_h
#error "DataprepStringFetcher.generated.h already included, missing '#pragma once' in DataprepStringFetcher.h"
#endif
#define DATAPREPCORE_DataprepStringFetcher_generated_h

#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFetcher_h_19_SPARSE_DATA
#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFetcher_h_19_RPC_WRAPPERS \
	virtual FString Fetch_Implementation(const UObject* Object, bool& bOutFetchSucceded) const; \
 \
	DECLARE_FUNCTION(execFetch);


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFetcher_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFetch);


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFetcher_h_19_EVENT_PARMS \
	struct DataprepStringFetcher_eventFetch_Parms \
	{ \
		const UObject* Object; \
		bool bOutFetchSucceded; \
		FString ReturnValue; \
	};


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFetcher_h_19_CALLBACK_WRAPPERS
#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFetcher_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataprepStringFetcher(); \
	friend struct Z_Construct_UClass_UDataprepStringFetcher_Statics; \
public: \
	DECLARE_CLASS(UDataprepStringFetcher, UDataprepFetcher, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DataprepCore"), NO_API) \
	DECLARE_SERIALIZER(UDataprepStringFetcher)


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFetcher_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUDataprepStringFetcher(); \
	friend struct Z_Construct_UClass_UDataprepStringFetcher_Statics; \
public: \
	DECLARE_CLASS(UDataprepStringFetcher, UDataprepFetcher, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DataprepCore"), NO_API) \
	DECLARE_SERIALIZER(UDataprepStringFetcher)


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFetcher_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataprepStringFetcher(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataprepStringFetcher) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataprepStringFetcher); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataprepStringFetcher); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataprepStringFetcher(UDataprepStringFetcher&&); \
	NO_API UDataprepStringFetcher(const UDataprepStringFetcher&); \
public:


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFetcher_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataprepStringFetcher(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataprepStringFetcher(UDataprepStringFetcher&&); \
	NO_API UDataprepStringFetcher(const UDataprepStringFetcher&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataprepStringFetcher); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataprepStringFetcher); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataprepStringFetcher)


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFetcher_h_19_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFetcher_h_16_PROLOG \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFetcher_h_19_EVENT_PARMS


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFetcher_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFetcher_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFetcher_h_19_SPARSE_DATA \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFetcher_h_19_RPC_WRAPPERS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFetcher_h_19_CALLBACK_WRAPPERS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFetcher_h_19_INCLASS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFetcher_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFetcher_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFetcher_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFetcher_h_19_SPARSE_DATA \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFetcher_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFetcher_h_19_CALLBACK_WRAPPERS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFetcher_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFetcher_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAPREPCORE_API UClass* StaticClass<class UDataprepStringFetcher>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFetcher_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
