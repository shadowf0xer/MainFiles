// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FDataprepContext;
class AActor;
#ifdef DATAPREPCORE_DataprepOperation_generated_h
#error "DataprepOperation.generated.h already included, missing '#pragma once' in DataprepOperation.h"
#endif
#define DATAPREPCORE_DataprepOperation_generated_h

#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_73_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDataprepContext_Statics; \
	DATAPREPCORE_API static class UScriptStruct* StaticStruct();


template<> DATAPREPCORE_API UScriptStruct* StaticStruct<struct FDataprepContext>();

#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_136_SPARSE_DATA
#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_136_RPC_WRAPPERS \
	virtual FText GetAdditionalKeyword_Implementation() const; \
	virtual FText GetCategory_Implementation() const; \
	virtual FText GetTooltip_Implementation() const; \
	virtual FText GetDisplayOperationName_Implementation() const; \
	virtual void OnExecution_Implementation(FDataprepContext const& InContext); \
 \
	DECLARE_FUNCTION(execGetAdditionalKeyword); \
	DECLARE_FUNCTION(execGetCategory); \
	DECLARE_FUNCTION(execGetTooltip); \
	DECLARE_FUNCTION(execGetDisplayOperationName); \
	DECLARE_FUNCTION(execAssetsModified); \
	DECLARE_FUNCTION(execReportProgress); \
	DECLARE_FUNCTION(execEndWork); \
	DECLARE_FUNCTION(execBeginWork); \
	DECLARE_FUNCTION(execLogError); \
	DECLARE_FUNCTION(execLogWarning); \
	DECLARE_FUNCTION(execLogInfo); \
	DECLARE_FUNCTION(execOnExecution); \
	DECLARE_FUNCTION(execExecute);


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_136_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAdditionalKeyword); \
	DECLARE_FUNCTION(execGetCategory); \
	DECLARE_FUNCTION(execGetTooltip); \
	DECLARE_FUNCTION(execGetDisplayOperationName); \
	DECLARE_FUNCTION(execAssetsModified); \
	DECLARE_FUNCTION(execReportProgress); \
	DECLARE_FUNCTION(execEndWork); \
	DECLARE_FUNCTION(execBeginWork); \
	DECLARE_FUNCTION(execLogError); \
	DECLARE_FUNCTION(execLogWarning); \
	DECLARE_FUNCTION(execLogInfo); \
	DECLARE_FUNCTION(execOnExecution); \
	DECLARE_FUNCTION(execExecute);


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_136_EVENT_PARMS \
	struct DataprepOperation_eventGetAdditionalKeyword_Parms \
	{ \
		FText ReturnValue; \
	}; \
	struct DataprepOperation_eventGetCategory_Parms \
	{ \
		FText ReturnValue; \
	}; \
	struct DataprepOperation_eventGetDisplayOperationName_Parms \
	{ \
		FText ReturnValue; \
	}; \
	struct DataprepOperation_eventGetTooltip_Parms \
	{ \
		FText ReturnValue; \
	}; \
	struct DataprepOperation_eventOnExecution_Parms \
	{ \
		FDataprepContext InContext; \
	};


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_136_CALLBACK_WRAPPERS
#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_136_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataprepOperation(); \
	friend struct Z_Construct_UClass_UDataprepOperation_Statics; \
public: \
	DECLARE_CLASS(UDataprepOperation, UDataprepParameterizableObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DataprepCore"), NO_API) \
	DECLARE_SERIALIZER(UDataprepOperation)


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_136_INCLASS \
private: \
	static void StaticRegisterNativesUDataprepOperation(); \
	friend struct Z_Construct_UClass_UDataprepOperation_Statics; \
public: \
	DECLARE_CLASS(UDataprepOperation, UDataprepParameterizableObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DataprepCore"), NO_API) \
	DECLARE_SERIALIZER(UDataprepOperation)


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_136_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataprepOperation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataprepOperation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataprepOperation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataprepOperation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataprepOperation(UDataprepOperation&&); \
	NO_API UDataprepOperation(const UDataprepOperation&); \
public:


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_136_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataprepOperation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataprepOperation(UDataprepOperation&&); \
	NO_API UDataprepOperation(const UDataprepOperation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataprepOperation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataprepOperation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataprepOperation)


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_136_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_133_PROLOG \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_136_EVENT_PARMS


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_136_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_136_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_136_SPARSE_DATA \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_136_RPC_WRAPPERS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_136_CALLBACK_WRAPPERS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_136_INCLASS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_136_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_136_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_136_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_136_SPARSE_DATA \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_136_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_136_CALLBACK_WRAPPERS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_136_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_136_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAPREPCORE_API UClass* StaticClass<class UDataprepOperation>();

#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_276_SPARSE_DATA
#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_276_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDeleteObjects); \
	DECLARE_FUNCTION(execDeleteObject); \
	DECLARE_FUNCTION(execRemoveObjects); \
	DECLARE_FUNCTION(execRemoveObject); \
	DECLARE_FUNCTION(execCreateActor); \
	DECLARE_FUNCTION(execCreateAsset); \
	DECLARE_FUNCTION(execAddAsset);


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_276_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDeleteObjects); \
	DECLARE_FUNCTION(execDeleteObject); \
	DECLARE_FUNCTION(execRemoveObjects); \
	DECLARE_FUNCTION(execRemoveObject); \
	DECLARE_FUNCTION(execCreateActor); \
	DECLARE_FUNCTION(execCreateAsset); \
	DECLARE_FUNCTION(execAddAsset);


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_276_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataprepEditingOperation(); \
	friend struct Z_Construct_UClass_UDataprepEditingOperation_Statics; \
public: \
	DECLARE_CLASS(UDataprepEditingOperation, UDataprepOperation, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DataprepCore"), NO_API) \
	DECLARE_SERIALIZER(UDataprepEditingOperation)


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_276_INCLASS \
private: \
	static void StaticRegisterNativesUDataprepEditingOperation(); \
	friend struct Z_Construct_UClass_UDataprepEditingOperation_Statics; \
public: \
	DECLARE_CLASS(UDataprepEditingOperation, UDataprepOperation, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DataprepCore"), NO_API) \
	DECLARE_SERIALIZER(UDataprepEditingOperation)


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_276_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataprepEditingOperation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataprepEditingOperation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataprepEditingOperation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataprepEditingOperation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataprepEditingOperation(UDataprepEditingOperation&&); \
	NO_API UDataprepEditingOperation(const UDataprepEditingOperation&); \
public:


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_276_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataprepEditingOperation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataprepEditingOperation(UDataprepEditingOperation&&); \
	NO_API UDataprepEditingOperation(const UDataprepEditingOperation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataprepEditingOperation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataprepEditingOperation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataprepEditingOperation)


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_276_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_273_PROLOG
#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_276_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_276_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_276_SPARSE_DATA \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_276_RPC_WRAPPERS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_276_INCLASS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_276_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_276_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_276_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_276_SPARSE_DATA \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_276_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_276_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_276_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAPREPCORE_API UClass* StaticClass<class UDataprepEditingOperation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
