// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFaceDetectionResult;
class UTexture;
class UAppleVisionDetectFacesAsyncTaskBlueprintProxy;
#ifdef APPLEVISION_AppleVisionBlueprintProxy_generated_h
#error "AppleVisionBlueprintProxy.generated.h already included, missing '#pragma once' in AppleVisionBlueprintProxy.h"
#endif
#define APPLEVISION_AppleVisionBlueprintProxy_generated_h

#define Engine_Plugins_Experimental_AppleVision_Source_AppleVision_Public_AppleVisionBlueprintProxy_h_15_DELEGATE \
struct _Script_AppleVision_eventAppleVisionDetectFacesDelegate_Parms \
{ \
	FFaceDetectionResult FaceDetectionResult; \
}; \
static inline void FAppleVisionDetectFacesDelegate_DelegateWrapper(const FMulticastScriptDelegate& AppleVisionDetectFacesDelegate, FFaceDetectionResult const& FaceDetectionResult) \
{ \
	_Script_AppleVision_eventAppleVisionDetectFacesDelegate_Parms Parms; \
	Parms.FaceDetectionResult=FaceDetectionResult; \
	AppleVisionDetectFacesDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_Experimental_AppleVision_Source_AppleVision_Public_AppleVisionBlueprintProxy_h_24_SPARSE_DATA
#define Engine_Plugins_Experimental_AppleVision_Source_AppleVision_Public_AppleVisionBlueprintProxy_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateProxyObjectForDetectFaces);


#define Engine_Plugins_Experimental_AppleVision_Source_AppleVision_Public_AppleVisionBlueprintProxy_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateProxyObjectForDetectFaces);


#define Engine_Plugins_Experimental_AppleVision_Source_AppleVision_Public_AppleVisionBlueprintProxy_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAppleVisionDetectFacesAsyncTaskBlueprintProxy(); \
	friend struct Z_Construct_UClass_UAppleVisionDetectFacesAsyncTaskBlueprintProxy_Statics; \
public: \
	DECLARE_CLASS(UAppleVisionDetectFacesAsyncTaskBlueprintProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AppleVision"), APPLEVISION_API) \
	DECLARE_SERIALIZER(UAppleVisionDetectFacesAsyncTaskBlueprintProxy)


#define Engine_Plugins_Experimental_AppleVision_Source_AppleVision_Public_AppleVisionBlueprintProxy_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUAppleVisionDetectFacesAsyncTaskBlueprintProxy(); \
	friend struct Z_Construct_UClass_UAppleVisionDetectFacesAsyncTaskBlueprintProxy_Statics; \
public: \
	DECLARE_CLASS(UAppleVisionDetectFacesAsyncTaskBlueprintProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AppleVision"), APPLEVISION_API) \
	DECLARE_SERIALIZER(UAppleVisionDetectFacesAsyncTaskBlueprintProxy)


#define Engine_Plugins_Experimental_AppleVision_Source_AppleVision_Public_AppleVisionBlueprintProxy_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	APPLEVISION_API UAppleVisionDetectFacesAsyncTaskBlueprintProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAppleVisionDetectFacesAsyncTaskBlueprintProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(APPLEVISION_API, UAppleVisionDetectFacesAsyncTaskBlueprintProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAppleVisionDetectFacesAsyncTaskBlueprintProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APPLEVISION_API UAppleVisionDetectFacesAsyncTaskBlueprintProxy(UAppleVisionDetectFacesAsyncTaskBlueprintProxy&&); \
	APPLEVISION_API UAppleVisionDetectFacesAsyncTaskBlueprintProxy(const UAppleVisionDetectFacesAsyncTaskBlueprintProxy&); \
public:


#define Engine_Plugins_Experimental_AppleVision_Source_AppleVision_Public_AppleVisionBlueprintProxy_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	APPLEVISION_API UAppleVisionDetectFacesAsyncTaskBlueprintProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APPLEVISION_API UAppleVisionDetectFacesAsyncTaskBlueprintProxy(UAppleVisionDetectFacesAsyncTaskBlueprintProxy&&); \
	APPLEVISION_API UAppleVisionDetectFacesAsyncTaskBlueprintProxy(const UAppleVisionDetectFacesAsyncTaskBlueprintProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(APPLEVISION_API, UAppleVisionDetectFacesAsyncTaskBlueprintProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAppleVisionDetectFacesAsyncTaskBlueprintProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAppleVisionDetectFacesAsyncTaskBlueprintProxy)


#define Engine_Plugins_Experimental_AppleVision_Source_AppleVision_Public_AppleVisionBlueprintProxy_h_24_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Experimental_AppleVision_Source_AppleVision_Public_AppleVisionBlueprintProxy_h_19_PROLOG
#define Engine_Plugins_Experimental_AppleVision_Source_AppleVision_Public_AppleVisionBlueprintProxy_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_AppleVision_Source_AppleVision_Public_AppleVisionBlueprintProxy_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_AppleVision_Source_AppleVision_Public_AppleVisionBlueprintProxy_h_24_SPARSE_DATA \
	Engine_Plugins_Experimental_AppleVision_Source_AppleVision_Public_AppleVisionBlueprintProxy_h_24_RPC_WRAPPERS \
	Engine_Plugins_Experimental_AppleVision_Source_AppleVision_Public_AppleVisionBlueprintProxy_h_24_INCLASS \
	Engine_Plugins_Experimental_AppleVision_Source_AppleVision_Public_AppleVisionBlueprintProxy_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Experimental_AppleVision_Source_AppleVision_Public_AppleVisionBlueprintProxy_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_AppleVision_Source_AppleVision_Public_AppleVisionBlueprintProxy_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_AppleVision_Source_AppleVision_Public_AppleVisionBlueprintProxy_h_24_SPARSE_DATA \
	Engine_Plugins_Experimental_AppleVision_Source_AppleVision_Public_AppleVisionBlueprintProxy_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_AppleVision_Source_AppleVision_Public_AppleVisionBlueprintProxy_h_24_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_AppleVision_Source_AppleVision_Public_AppleVisionBlueprintProxy_h_24_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AppleVisionDetectFacesAsyncTaskBlueprintProxy."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> APPLEVISION_API UClass* StaticClass<class UAppleVisionDetectFacesAsyncTaskBlueprintProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Experimental_AppleVision_Source_AppleVision_Public_AppleVisionBlueprintProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
