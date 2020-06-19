// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMovieSceneComposureExportInitializer;
#ifdef COMPOSURE_IMovieSceneComposureExportClient_generated_h
#error "IMovieSceneComposureExportClient.generated.h already included, missing '#pragma once' in IMovieSceneComposureExportClient.h"
#endif
#define COMPOSURE_IMovieSceneComposureExportClient_generated_h

#define Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_19_SPARSE_DATA
#define Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_19_RPC_WRAPPERS
#define Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_19_EVENT_PARMS \
	struct MovieSceneComposureExportClient_eventInitializeForExport_Parms \
	{ \
		UMovieSceneComposureExportInitializer* ExportInitializer; \
	};


#define Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_19_CALLBACK_WRAPPERS
#define Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneComposureExportClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneComposureExportClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneComposureExportClient); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneComposureExportClient); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneComposureExportClient(UMovieSceneComposureExportClient&&); \
	NO_API UMovieSceneComposureExportClient(const UMovieSceneComposureExportClient&); \
public:


#define Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneComposureExportClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneComposureExportClient(UMovieSceneComposureExportClient&&); \
	NO_API UMovieSceneComposureExportClient(const UMovieSceneComposureExportClient&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneComposureExportClient); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneComposureExportClient); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneComposureExportClient)


#define Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_19_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieSceneComposureExportClient(); \
	friend struct Z_Construct_UClass_UMovieSceneComposureExportClient_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneComposureExportClient, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Composure"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneComposureExportClient)


#define Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_19_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_19_GENERATED_UINTERFACE_BODY() \
	Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_19_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_19_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_19_GENERATED_UINTERFACE_BODY() \
	Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_19_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieSceneComposureExportClient() {} \
public: \
	typedef UMovieSceneComposureExportClient UClassType; \
	typedef IMovieSceneComposureExportClient ThisClass; \
	static void Execute_InitializeForExport(UObject* O, UMovieSceneComposureExportInitializer* ExportInitializer); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_19_INCLASS_IINTERFACE \
protected: \
	virtual ~IMovieSceneComposureExportClient() {} \
public: \
	typedef UMovieSceneComposureExportClient UClassType; \
	typedef IMovieSceneComposureExportClient ThisClass; \
	static void Execute_InitializeForExport(UObject* O, UMovieSceneComposureExportInitializer* ExportInitializer); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_15_PROLOG \
	Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_19_EVENT_PARMS


#define Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_19_SPARSE_DATA \
	Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_19_RPC_WRAPPERS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_19_CALLBACK_WRAPPERS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_19_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_19_SPARSE_DATA \
	Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_19_CALLBACK_WRAPPERS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPOSURE_API UClass* StaticClass<class UMovieSceneComposureExportClient>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
