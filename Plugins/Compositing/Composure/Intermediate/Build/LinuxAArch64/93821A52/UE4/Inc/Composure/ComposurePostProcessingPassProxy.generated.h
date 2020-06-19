// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneCaptureComponent2D;
class UMaterialInterface;
class UTexture;
class UComposurePostProcessPassPolicy;
#ifdef COMPOSURE_ComposurePostProcessingPassProxy_generated_h
#error "ComposurePostProcessingPassProxy.generated.h already included, missing '#pragma once' in ComposurePostProcessingPassProxy.h"
#endif
#define COMPOSURE_ComposurePostProcessingPassProxy_generated_h

#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_20_SPARSE_DATA
#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_20_RPC_WRAPPERS \
	virtual void SetupPostProcess_Implementation(USceneCaptureComponent2D* SceneCapture, UMaterialInterface*& TonemapperOverride); \
 \
	DECLARE_FUNCTION(execSetupPostProcess);


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetupPostProcess_Implementation(USceneCaptureComponent2D* SceneCapture, UMaterialInterface*& TonemapperOverride); \
 \
	DECLARE_FUNCTION(execSetupPostProcess);


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_20_EVENT_PARMS \
	struct ComposurePostProcessPassPolicy_eventSetupPostProcess_Parms \
	{ \
		USceneCaptureComponent2D* SceneCapture; \
		UMaterialInterface* TonemapperOverride; \
	};


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_20_CALLBACK_WRAPPERS
#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComposurePostProcessPassPolicy(); \
	friend struct Z_Construct_UClass_UComposurePostProcessPassPolicy_Statics; \
public: \
	DECLARE_CLASS(UComposurePostProcessPassPolicy, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Composure"), NO_API) \
	DECLARE_SERIALIZER(UComposurePostProcessPassPolicy)


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUComposurePostProcessPassPolicy(); \
	friend struct Z_Construct_UClass_UComposurePostProcessPassPolicy_Statics; \
public: \
	DECLARE_CLASS(UComposurePostProcessPassPolicy, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Composure"), NO_API) \
	DECLARE_SERIALIZER(UComposurePostProcessPassPolicy)


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComposurePostProcessPassPolicy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComposurePostProcessPassPolicy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComposurePostProcessPassPolicy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComposurePostProcessPassPolicy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComposurePostProcessPassPolicy(UComposurePostProcessPassPolicy&&); \
	NO_API UComposurePostProcessPassPolicy(const UComposurePostProcessPassPolicy&); \
public:


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComposurePostProcessPassPolicy(UComposurePostProcessPassPolicy&&); \
	NO_API UComposurePostProcessPassPolicy(const UComposurePostProcessPassPolicy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComposurePostProcessPassPolicy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComposurePostProcessPassPolicy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UComposurePostProcessPassPolicy)


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_20_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_17_PROLOG \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_20_EVENT_PARMS


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_20_SPARSE_DATA \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_20_RPC_WRAPPERS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_20_CALLBACK_WRAPPERS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_20_INCLASS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_20_SPARSE_DATA \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_20_CALLBACK_WRAPPERS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPOSURE_API UClass* StaticClass<class UComposurePostProcessPassPolicy>();

#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_37_SPARSE_DATA
#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_37_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execExecute);


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExecute);


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComposurePostProcessingPassProxy(); \
	friend struct Z_Construct_UClass_UComposurePostProcessingPassProxy_Statics; \
public: \
	DECLARE_CLASS(UComposurePostProcessingPassProxy, UComposurePostProcessPass, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Composure"), NO_API) \
	DECLARE_SERIALIZER(UComposurePostProcessingPassProxy)


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUComposurePostProcessingPassProxy(); \
	friend struct Z_Construct_UClass_UComposurePostProcessingPassProxy_Statics; \
public: \
	DECLARE_CLASS(UComposurePostProcessingPassProxy, UComposurePostProcessPass, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Composure"), NO_API) \
	DECLARE_SERIALIZER(UComposurePostProcessingPassProxy)


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComposurePostProcessingPassProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComposurePostProcessingPassProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComposurePostProcessingPassProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComposurePostProcessingPassProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComposurePostProcessingPassProxy(UComposurePostProcessingPassProxy&&); \
	NO_API UComposurePostProcessingPassProxy(const UComposurePostProcessingPassProxy&); \
public:


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComposurePostProcessingPassProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComposurePostProcessingPassProxy(UComposurePostProcessingPassProxy&&); \
	NO_API UComposurePostProcessingPassProxy(const UComposurePostProcessingPassProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComposurePostProcessingPassProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComposurePostProcessingPassProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComposurePostProcessingPassProxy)


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_37_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SetupMID() { return STRUCT_OFFSET(UComposurePostProcessingPassProxy, SetupMID); }


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_34_PROLOG
#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_37_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_37_SPARSE_DATA \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_37_RPC_WRAPPERS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_37_INCLASS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_37_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_37_SPARSE_DATA \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_37_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_37_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ComposurePostProcessingPassProxy."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPOSURE_API UClass* StaticClass<class UComposurePostProcessingPassProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
