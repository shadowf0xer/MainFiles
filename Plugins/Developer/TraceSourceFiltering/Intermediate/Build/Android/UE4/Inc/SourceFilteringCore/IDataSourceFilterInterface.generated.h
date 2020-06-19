// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOURCEFILTERINGCORE_IDataSourceFilterInterface_generated_h
#error "IDataSourceFilterInterface.generated.h already included, missing '#pragma once' in IDataSourceFilterInterface.h"
#endif
#define SOURCEFILTERINGCORE_IDataSourceFilterInterface_generated_h

#define Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_13_SPARSE_DATA
#define Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_13_RPC_WRAPPERS \
	virtual void GetToolTipText_Implementation(FText& OutDisplayText) const {}; \
	virtual void GetDisplayText_Implementation(FText& OutDisplayText) const {}; \
 \
	DECLARE_FUNCTION(execGetToolTipText); \
	DECLARE_FUNCTION(execGetDisplayText);


#define Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetToolTipText); \
	DECLARE_FUNCTION(execGetDisplayText);


#define Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_13_EVENT_PARMS \
	struct DataSourceFilterInterface_eventGetDisplayText_Parms \
	{ \
		FText OutDisplayText; \
	}; \
	struct DataSourceFilterInterface_eventGetToolTipText_Parms \
	{ \
		FText OutDisplayText; \
	};


#define Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_13_CALLBACK_WRAPPERS
#define Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataSourceFilterInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataSourceFilterInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataSourceFilterInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataSourceFilterInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataSourceFilterInterface(UDataSourceFilterInterface&&); \
	NO_API UDataSourceFilterInterface(const UDataSourceFilterInterface&); \
public:


#define Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataSourceFilterInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataSourceFilterInterface(UDataSourceFilterInterface&&); \
	NO_API UDataSourceFilterInterface(const UDataSourceFilterInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataSourceFilterInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataSourceFilterInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataSourceFilterInterface)


#define Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDataSourceFilterInterface(); \
	friend struct Z_Construct_UClass_UDataSourceFilterInterface_Statics; \
public: \
	DECLARE_CLASS(UDataSourceFilterInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SourceFilteringCore"), NO_API) \
	DECLARE_SERIALIZER(UDataSourceFilterInterface)


#define Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_13_GENERATED_UINTERFACE_BODY() \
	Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_13_GENERATED_UINTERFACE_BODY() \
	Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDataSourceFilterInterface() {} \
public: \
	typedef UDataSourceFilterInterface UClassType; \
	typedef IDataSourceFilterInterface ThisClass; \
	static void Execute_GetDisplayText(const UObject* O, FText& OutDisplayText); \
	static void Execute_GetToolTipText(const UObject* O, FText& OutDisplayText); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IDataSourceFilterInterface() {} \
public: \
	typedef UDataSourceFilterInterface UClassType; \
	typedef IDataSourceFilterInterface ThisClass; \
	static void Execute_GetDisplayText(const UObject* O, FText& OutDisplayText); \
	static void Execute_GetToolTipText(const UObject* O, FText& OutDisplayText); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_10_PROLOG \
	Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_13_EVENT_PARMS


#define Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_13_SPARSE_DATA \
	Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_13_RPC_WRAPPERS \
	Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_13_CALLBACK_WRAPPERS \
	Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_13_SPARSE_DATA \
	Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_13_CALLBACK_WRAPPERS \
	Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOURCEFILTERINGCORE_API UClass* StaticClass<class UDataSourceFilterInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
