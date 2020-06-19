// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef DATAPREPCORE_DataprepSelectionTransform_generated_h
#error "DataprepSelectionTransform.generated.h already included, missing '#pragma once' in DataprepSelectionTransform.h"
#endif
#define DATAPREPCORE_DataprepSelectionTransform_generated_h

#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_18_SPARSE_DATA
#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_18_RPC_WRAPPERS \
	virtual FText GetAdditionalKeyword_Implementation() const; \
	virtual FText GetCategory_Implementation() const; \
	virtual FText GetTooltip_Implementation() const; \
	virtual FText GetDisplayTransformName_Implementation() const; \
	virtual void OnExecution_Implementation(TArray<UObject*> const& InObjects, TArray<UObject*>& OutObjects); \
 \
	DECLARE_FUNCTION(execGetAdditionalKeyword); \
	DECLARE_FUNCTION(execGetCategory); \
	DECLARE_FUNCTION(execGetTooltip); \
	DECLARE_FUNCTION(execGetDisplayTransformName); \
	DECLARE_FUNCTION(execOnExecution); \
	DECLARE_FUNCTION(execExecute);


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAdditionalKeyword); \
	DECLARE_FUNCTION(execGetCategory); \
	DECLARE_FUNCTION(execGetTooltip); \
	DECLARE_FUNCTION(execGetDisplayTransformName); \
	DECLARE_FUNCTION(execOnExecution); \
	DECLARE_FUNCTION(execExecute);


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_18_EVENT_PARMS \
	struct DataprepSelectionTransform_eventGetAdditionalKeyword_Parms \
	{ \
		FText ReturnValue; \
	}; \
	struct DataprepSelectionTransform_eventGetCategory_Parms \
	{ \
		FText ReturnValue; \
	}; \
	struct DataprepSelectionTransform_eventGetDisplayTransformName_Parms \
	{ \
		FText ReturnValue; \
	}; \
	struct DataprepSelectionTransform_eventGetTooltip_Parms \
	{ \
		FText ReturnValue; \
	}; \
	struct DataprepSelectionTransform_eventOnExecution_Parms \
	{ \
		TArray<UObject*> InObjects; \
		TArray<UObject*> OutObjects; \
	};


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_18_CALLBACK_WRAPPERS
#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataprepSelectionTransform(); \
	friend struct Z_Construct_UClass_UDataprepSelectionTransform_Statics; \
public: \
	DECLARE_CLASS(UDataprepSelectionTransform, UDataprepParameterizableObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DataprepCore"), NO_API) \
	DECLARE_SERIALIZER(UDataprepSelectionTransform)


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUDataprepSelectionTransform(); \
	friend struct Z_Construct_UClass_UDataprepSelectionTransform_Statics; \
public: \
	DECLARE_CLASS(UDataprepSelectionTransform, UDataprepParameterizableObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DataprepCore"), NO_API) \
	DECLARE_SERIALIZER(UDataprepSelectionTransform)


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataprepSelectionTransform(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataprepSelectionTransform) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataprepSelectionTransform); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataprepSelectionTransform); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataprepSelectionTransform(UDataprepSelectionTransform&&); \
	NO_API UDataprepSelectionTransform(const UDataprepSelectionTransform&); \
public:


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataprepSelectionTransform(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataprepSelectionTransform(UDataprepSelectionTransform&&); \
	NO_API UDataprepSelectionTransform(const UDataprepSelectionTransform&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataprepSelectionTransform); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataprepSelectionTransform); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataprepSelectionTransform)


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bOutputCanIncludeInput() { return STRUCT_OFFSET(UDataprepSelectionTransform, bOutputCanIncludeInput); }


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_15_PROLOG \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_18_EVENT_PARMS


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_18_SPARSE_DATA \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_18_RPC_WRAPPERS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_18_CALLBACK_WRAPPERS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_18_INCLASS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_18_SPARSE_DATA \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_18_CALLBACK_WRAPPERS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAPREPCORE_API UClass* StaticClass<class UDataprepSelectionTransform>();

#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_88_SPARSE_DATA
#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_88_RPC_WRAPPERS
#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_88_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_88_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataprepRecursiveSelectionTransform(); \
	friend struct Z_Construct_UClass_UDataprepRecursiveSelectionTransform_Statics; \
public: \
	DECLARE_CLASS(UDataprepRecursiveSelectionTransform, UDataprepSelectionTransform, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DataprepCore"), NO_API) \
	DECLARE_SERIALIZER(UDataprepRecursiveSelectionTransform)


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_88_INCLASS \
private: \
	static void StaticRegisterNativesUDataprepRecursiveSelectionTransform(); \
	friend struct Z_Construct_UClass_UDataprepRecursiveSelectionTransform_Statics; \
public: \
	DECLARE_CLASS(UDataprepRecursiveSelectionTransform, UDataprepSelectionTransform, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DataprepCore"), NO_API) \
	DECLARE_SERIALIZER(UDataprepRecursiveSelectionTransform)


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_88_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataprepRecursiveSelectionTransform(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataprepRecursiveSelectionTransform) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataprepRecursiveSelectionTransform); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataprepRecursiveSelectionTransform); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataprepRecursiveSelectionTransform(UDataprepRecursiveSelectionTransform&&); \
	NO_API UDataprepRecursiveSelectionTransform(const UDataprepRecursiveSelectionTransform&); \
public:


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_88_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataprepRecursiveSelectionTransform(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataprepRecursiveSelectionTransform(UDataprepRecursiveSelectionTransform&&); \
	NO_API UDataprepRecursiveSelectionTransform(const UDataprepRecursiveSelectionTransform&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataprepRecursiveSelectionTransform); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataprepRecursiveSelectionTransform); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataprepRecursiveSelectionTransform)


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_88_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AllowRecursionLevels() { return STRUCT_OFFSET(UDataprepRecursiveSelectionTransform, AllowRecursionLevels); }


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_85_PROLOG
#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_88_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_88_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_88_SPARSE_DATA \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_88_RPC_WRAPPERS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_88_INCLASS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_88_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_88_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_88_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_88_SPARSE_DATA \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_88_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_88_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_88_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAPREPCORE_API UClass* StaticClass<class UDataprepRecursiveSelectionTransform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
