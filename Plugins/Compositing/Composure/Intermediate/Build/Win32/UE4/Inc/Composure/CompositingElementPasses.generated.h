// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTextureRenderTarget2D;
struct FIntPoint;
class UTexture;
class UComposurePostProcessingPassProxy;
class ACameraActor;
#ifdef COMPOSURE_CompositingElementPasses_generated_h
#error "CompositingElementPasses.generated.h already included, missing '#pragma once' in CompositingElementPasses.h"
#endif
#define COMPOSURE_CompositingElementPasses_generated_h

#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_21_SPARSE_DATA
#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_21_RPC_WRAPPERS \
	virtual void OnEnabled_Implementation(); \
	virtual void OnDisabled_Implementation(); \
	virtual void Reset_Implementation(); \
	virtual void OnFrameEnd_Implementation(); \
	virtual void OnFrameBegin_Implementation(bool bCameraCutThisFrame); \
 \
	DECLARE_FUNCTION(execReleaseRenderTarget); \
	DECLARE_FUNCTION(execRequestNativelyFormattedTarget); \
	DECLARE_FUNCTION(execRequestRenderTarget); \
	DECLARE_FUNCTION(execOnEnabled); \
	DECLARE_FUNCTION(execOnDisabled); \
	DECLARE_FUNCTION(execSetPassEnabled); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execOnFrameEnd); \
	DECLARE_FUNCTION(execOnFrameBegin);


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnEnabled_Implementation(); \
	virtual void OnDisabled_Implementation(); \
	virtual void Reset_Implementation(); \
	virtual void OnFrameEnd_Implementation(); \
	virtual void OnFrameBegin_Implementation(bool bCameraCutThisFrame); \
 \
	DECLARE_FUNCTION(execReleaseRenderTarget); \
	DECLARE_FUNCTION(execRequestNativelyFormattedTarget); \
	DECLARE_FUNCTION(execRequestRenderTarget); \
	DECLARE_FUNCTION(execOnEnabled); \
	DECLARE_FUNCTION(execOnDisabled); \
	DECLARE_FUNCTION(execSetPassEnabled); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execOnFrameEnd); \
	DECLARE_FUNCTION(execOnFrameBegin);


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_21_EVENT_PARMS \
	struct CompositingElementPass_eventOnFrameBegin_Parms \
	{ \
		bool bCameraCutThisFrame; \
	};


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_21_CALLBACK_WRAPPERS
#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositingElementPass(); \
	friend struct Z_Construct_UClass_UCompositingElementPass_Statics; \
public: \
	DECLARE_CLASS(UCompositingElementPass, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Composure"), NO_API) \
	DECLARE_SERIALIZER(UCompositingElementPass)


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUCompositingElementPass(); \
	friend struct Z_Construct_UClass_UCompositingElementPass_Statics; \
public: \
	DECLARE_CLASS(UCompositingElementPass, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Composure"), NO_API) \
	DECLARE_SERIALIZER(UCompositingElementPass)


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCompositingElementPass(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompositingElementPass) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCompositingElementPass); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositingElementPass); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCompositingElementPass(UCompositingElementPass&&); \
	NO_API UCompositingElementPass(const UCompositingElementPass&); \
public:


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCompositingElementPass(UCompositingElementPass&&); \
	NO_API UCompositingElementPass(const UCompositingElementPass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCompositingElementPass); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositingElementPass); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCompositingElementPass)


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_21_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_18_PROLOG \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_21_EVENT_PARMS


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_21_SPARSE_DATA \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_21_RPC_WRAPPERS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_21_CALLBACK_WRAPPERS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_21_INCLASS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_21_SPARSE_DATA \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_21_CALLBACK_WRAPPERS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPOSURE_API UClass* StaticClass<class UCompositingElementPass>();

#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_86_SPARSE_DATA
#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_86_RPC_WRAPPERS \
	virtual UTexture* GenerateInput_Implementation(); \
 \
	DECLARE_FUNCTION(execGenerateInput);


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_86_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual UTexture* GenerateInput_Implementation(); \
 \
	DECLARE_FUNCTION(execGenerateInput);


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_86_EVENT_PARMS \
	struct CompositingElementInput_eventGenerateInput_Parms \
	{ \
		UTexture* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		CompositingElementInput_eventGenerateInput_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_86_CALLBACK_WRAPPERS
#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_86_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositingElementInput(); \
	friend struct Z_Construct_UClass_UCompositingElementInput_Statics; \
public: \
	DECLARE_CLASS(UCompositingElementInput, UCompositingElementPass, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Composure"), NO_API) \
	DECLARE_SERIALIZER(UCompositingElementInput)


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_86_INCLASS \
private: \
	static void StaticRegisterNativesUCompositingElementInput(); \
	friend struct Z_Construct_UClass_UCompositingElementInput_Statics; \
public: \
	DECLARE_CLASS(UCompositingElementInput, UCompositingElementPass, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Composure"), NO_API) \
	DECLARE_SERIALIZER(UCompositingElementInput)


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_86_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCompositingElementInput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompositingElementInput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCompositingElementInput); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositingElementInput); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCompositingElementInput(UCompositingElementInput&&); \
	NO_API UCompositingElementInput(const UCompositingElementInput&); \
public:


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_86_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCompositingElementInput() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCompositingElementInput(UCompositingElementInput&&); \
	NO_API UCompositingElementInput(const UCompositingElementInput&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCompositingElementInput); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositingElementInput); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCompositingElementInput)


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_86_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_83_PROLOG \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_86_EVENT_PARMS


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_86_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_86_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_86_SPARSE_DATA \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_86_RPC_WRAPPERS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_86_CALLBACK_WRAPPERS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_86_INCLASS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_86_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_86_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_86_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_86_SPARSE_DATA \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_86_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_86_CALLBACK_WRAPPERS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_86_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_86_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPOSURE_API UClass* StaticClass<class UCompositingElementInput>();

#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_114_SPARSE_DATA
#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_114_RPC_WRAPPERS \
	virtual UTexture* ApplyTransform_Implementation(UTexture* Input, UComposurePostProcessingPassProxy* PostProcessProxy, ACameraActor* TargetCamera); \
 \
	DECLARE_FUNCTION(execFindNamedPrePassResult); \
	DECLARE_FUNCTION(execApplyTransform);


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_114_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual UTexture* ApplyTransform_Implementation(UTexture* Input, UComposurePostProcessingPassProxy* PostProcessProxy, ACameraActor* TargetCamera); \
 \
	DECLARE_FUNCTION(execFindNamedPrePassResult); \
	DECLARE_FUNCTION(execApplyTransform);


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_114_EVENT_PARMS \
	struct CompositingElementTransform_eventApplyTransform_Parms \
	{ \
		UTexture* Input; \
		UComposurePostProcessingPassProxy* PostProcessProxy; \
		ACameraActor* TargetCamera; \
		UTexture* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		CompositingElementTransform_eventApplyTransform_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_114_CALLBACK_WRAPPERS
#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_114_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositingElementTransform(); \
	friend struct Z_Construct_UClass_UCompositingElementTransform_Statics; \
public: \
	DECLARE_CLASS(UCompositingElementTransform, UCompositingElementPass, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Composure"), NO_API) \
	DECLARE_SERIALIZER(UCompositingElementTransform)


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_114_INCLASS \
private: \
	static void StaticRegisterNativesUCompositingElementTransform(); \
	friend struct Z_Construct_UClass_UCompositingElementTransform_Statics; \
public: \
	DECLARE_CLASS(UCompositingElementTransform, UCompositingElementPass, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Composure"), NO_API) \
	DECLARE_SERIALIZER(UCompositingElementTransform)


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_114_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCompositingElementTransform(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompositingElementTransform) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCompositingElementTransform); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositingElementTransform); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCompositingElementTransform(UCompositingElementTransform&&); \
	NO_API UCompositingElementTransform(const UCompositingElementTransform&); \
public:


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_114_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCompositingElementTransform() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCompositingElementTransform(UCompositingElementTransform&&); \
	NO_API UCompositingElementTransform(const UCompositingElementTransform&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCompositingElementTransform); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositingElementTransform); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCompositingElementTransform)


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_114_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_111_PROLOG \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_114_EVENT_PARMS


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_114_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_114_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_114_SPARSE_DATA \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_114_RPC_WRAPPERS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_114_CALLBACK_WRAPPERS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_114_INCLASS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_114_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_114_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_114_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_114_SPARSE_DATA \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_114_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_114_CALLBACK_WRAPPERS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_114_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_114_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPOSURE_API UClass* StaticClass<class UCompositingElementTransform>();

#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_146_SPARSE_DATA
#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_146_RPC_WRAPPERS \
	virtual void RelayOutput_Implementation(UTexture* FinalResult, UComposurePostProcessingPassProxy* PostProcessProxy); \
 \
	DECLARE_FUNCTION(execRelayOutput);


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_146_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void RelayOutput_Implementation(UTexture* FinalResult, UComposurePostProcessingPassProxy* PostProcessProxy); \
 \
	DECLARE_FUNCTION(execRelayOutput);


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_146_EVENT_PARMS \
	struct CompositingElementOutput_eventRelayOutput_Parms \
	{ \
		UTexture* FinalResult; \
		UComposurePostProcessingPassProxy* PostProcessProxy; \
	};


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_146_CALLBACK_WRAPPERS
#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_146_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositingElementOutput(); \
	friend struct Z_Construct_UClass_UCompositingElementOutput_Statics; \
public: \
	DECLARE_CLASS(UCompositingElementOutput, UCompositingElementPass, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Composure"), NO_API) \
	DECLARE_SERIALIZER(UCompositingElementOutput)


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_146_INCLASS \
private: \
	static void StaticRegisterNativesUCompositingElementOutput(); \
	friend struct Z_Construct_UClass_UCompositingElementOutput_Statics; \
public: \
	DECLARE_CLASS(UCompositingElementOutput, UCompositingElementPass, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Composure"), NO_API) \
	DECLARE_SERIALIZER(UCompositingElementOutput)


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_146_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCompositingElementOutput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompositingElementOutput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCompositingElementOutput); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositingElementOutput); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCompositingElementOutput(UCompositingElementOutput&&); \
	NO_API UCompositingElementOutput(const UCompositingElementOutput&); \
public:


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_146_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCompositingElementOutput() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCompositingElementOutput(UCompositingElementOutput&&); \
	NO_API UCompositingElementOutput(const UCompositingElementOutput&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCompositingElementOutput); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositingElementOutput); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCompositingElementOutput)


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_146_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_143_PROLOG \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_146_EVENT_PARMS


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_146_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_146_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_146_SPARSE_DATA \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_146_RPC_WRAPPERS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_146_CALLBACK_WRAPPERS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_146_INCLASS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_146_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_146_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_146_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_146_SPARSE_DATA \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_146_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_146_CALLBACK_WRAPPERS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_146_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_146_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPOSURE_API UClass* StaticClass<class UCompositingElementOutput>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
