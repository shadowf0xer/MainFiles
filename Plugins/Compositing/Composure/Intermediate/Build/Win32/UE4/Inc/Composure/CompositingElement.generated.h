// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACompositingElement;
class UTexture;
class UCompositingElementOutput;
class UCompositingElementTransform;
class UCompositingElementInput;
struct FIntPoint;
class ACameraActor;
struct FCompositingMaterial;
class UTextureRenderTarget2D;
enum class ETargetUsageFlags : uint8;
#ifdef COMPOSURE_CompositingElement_generated_h
#error "CompositingElement.generated.h already included, missing '#pragma once' in CompositingElement.h"
#endif
#define COMPOSURE_CompositingElement_generated_h

#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_30_DELEGATE \
struct _Script_Composure_eventDynamicOnFinalPassRendered_Parms \
{ \
	ACompositingElement* CompElement; \
	UTexture* Texture; \
}; \
static inline void FDynamicOnFinalPassRendered_DelegateWrapper(const FMulticastScriptDelegate& DynamicOnFinalPassRendered, ACompositingElement* CompElement, UTexture* Texture) \
{ \
	_Script_Composure_eventDynamicOnFinalPassRendered_Parms Parms; \
	Parms.CompElement=CompElement; \
	Parms.Texture=Texture; \
	DynamicOnFinalPassRendered.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_29_DELEGATE \
struct _Script_Composure_eventDynamicOnTransformPassRendered_Parms \
{ \
	ACompositingElement* CompElement; \
	UTexture* Texture; \
	FName PassName; \
}; \
static inline void FDynamicOnTransformPassRendered_DelegateWrapper(const FMulticastScriptDelegate& DynamicOnTransformPassRendered, ACompositingElement* CompElement, UTexture* Texture, FName PassName) \
{ \
	_Script_Composure_eventDynamicOnTransformPassRendered_Parms Parms; \
	Parms.CompElement=CompElement; \
	Parms.Texture=Texture; \
	Parms.PassName=PassName; \
	DynamicOnTransformPassRendered.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_SPARSE_DATA
#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_RPC_WRAPPERS \
	virtual UTexture* RenderCompElement_Implementation(bool bCameraCutThisFrame); \
 \
	DECLARE_FUNCTION(execAddNewOutputPass); \
	DECLARE_FUNCTION(execAddNewTransformPass); \
	DECLARE_FUNCTION(execAddNewInputPass); \
	DECLARE_FUNCTION(execGetOutputsList); \
	DECLARE_FUNCTION(execGetTransformsList); \
	DECLARE_FUNCTION(execGetInputsList); \
	DECLARE_FUNCTION(execFindOutputPass); \
	DECLARE_FUNCTION(execFindTransformPass); \
	DECLARE_FUNCTION(execFindInputPass); \
	DECLARE_FUNCTION(execGetRenderResolution); \
	DECLARE_FUNCTION(execGetLatestRenderResult); \
	DECLARE_FUNCTION(execFindNamedRenderResult); \
	DECLARE_FUNCTION(execRegisterPassResult); \
	DECLARE_FUNCTION(execFindTargetCamera); \
	DECLARE_FUNCTION(execRenderCompositingMaterialToTarget); \
	DECLARE_FUNCTION(execRenderCompositingMaterial); \
	DECLARE_FUNCTION(execReleaseOwnedTarget); \
	DECLARE_FUNCTION(execRequestNamedRenderTarget); \
	DECLARE_FUNCTION(execGetCompElementName); \
	DECLARE_FUNCTION(execRenderCompElement); \
	DECLARE_FUNCTION(execSetEditorColorPickerDisplayImage); \
	DECLARE_FUNCTION(execSetEditorColorPickingTarget);


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual UTexture* RenderCompElement_Implementation(bool bCameraCutThisFrame); \
 \
	DECLARE_FUNCTION(execAddNewOutputPass); \
	DECLARE_FUNCTION(execAddNewTransformPass); \
	DECLARE_FUNCTION(execAddNewInputPass); \
	DECLARE_FUNCTION(execGetOutputsList); \
	DECLARE_FUNCTION(execGetTransformsList); \
	DECLARE_FUNCTION(execGetInputsList); \
	DECLARE_FUNCTION(execFindOutputPass); \
	DECLARE_FUNCTION(execFindTransformPass); \
	DECLARE_FUNCTION(execFindInputPass); \
	DECLARE_FUNCTION(execGetRenderResolution); \
	DECLARE_FUNCTION(execGetLatestRenderResult); \
	DECLARE_FUNCTION(execFindNamedRenderResult); \
	DECLARE_FUNCTION(execRegisterPassResult); \
	DECLARE_FUNCTION(execFindTargetCamera); \
	DECLARE_FUNCTION(execRenderCompositingMaterialToTarget); \
	DECLARE_FUNCTION(execRenderCompositingMaterial); \
	DECLARE_FUNCTION(execReleaseOwnedTarget); \
	DECLARE_FUNCTION(execRequestNamedRenderTarget); \
	DECLARE_FUNCTION(execGetCompElementName); \
	DECLARE_FUNCTION(execRenderCompElement); \
	DECLARE_FUNCTION(execSetEditorColorPickerDisplayImage); \
	DECLARE_FUNCTION(execSetEditorColorPickingTarget);


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_EVENT_PARMS \
	struct CompositingElement_eventRenderCompElement_Parms \
	{ \
		bool bCameraCutThisFrame; \
		UTexture* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		CompositingElement_eventRenderCompElement_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_CALLBACK_WRAPPERS
#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ACompositingElement, NO_API)


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACompositingElement(); \
	friend struct Z_Construct_UClass_ACompositingElement_Statics; \
public: \
	DECLARE_CLASS(ACompositingElement, AComposurePipelineBaseActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Composure"), NO_API) \
	DECLARE_SERIALIZER(ACompositingElement) \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<ACompositingElement*>(this); }


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_INCLASS \
private: \
	static void StaticRegisterNativesACompositingElement(); \
	friend struct Z_Construct_UClass_ACompositingElement_Statics; \
public: \
	DECLARE_CLASS(ACompositingElement, AComposurePipelineBaseActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Composure"), NO_API) \
	DECLARE_SERIALIZER(ACompositingElement) \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<ACompositingElement*>(this); }


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACompositingElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACompositingElement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACompositingElement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACompositingElement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACompositingElement(ACompositingElement&&); \
	NO_API ACompositingElement(const ACompositingElement&); \
public:


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACompositingElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACompositingElement(ACompositingElement&&); \
	NO_API ACompositingElement(const ACompositingElement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACompositingElement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACompositingElement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACompositingElement)


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Inputs() { return STRUCT_OFFSET(ACompositingElement, Inputs); } \
	FORCEINLINE static uint32 __PPO__TransformPasses() { return STRUCT_OFFSET(ACompositingElement, TransformPasses); } \
	FORCEINLINE static uint32 __PPO__Outputs() { return STRUCT_OFFSET(ACompositingElement, Outputs); } \
	FORCEINLINE static uint32 __PPO__RenderResolution() { return STRUCT_OFFSET(ACompositingElement, RenderResolution); } \
	FORCEINLINE static uint32 __PPO__FreezeFrameMask() { return STRUCT_OFFSET(ACompositingElement, FreezeFrameMask); } \
	FORCEINLINE static uint32 __PPO__CompShotIdName() { return STRUCT_OFFSET(ACompositingElement, CompShotIdName); } \
	FORCEINLINE static uint32 __PPO__Parent() { return STRUCT_OFFSET(ACompositingElement, Parent); } \
	FORCEINLINE static uint32 __PPO__ChildLayers() { return STRUCT_OFFSET(ACompositingElement, ChildLayers); } \
	FORCEINLINE static uint32 __PPO__OutputOpacity() { return STRUCT_OFFSET(ACompositingElement, OutputOpacity); } \
	FORCEINLINE static uint32 __PPO__UserConstructedInputs() { return STRUCT_OFFSET(ACompositingElement, UserConstructedInputs); } \
	FORCEINLINE static uint32 __PPO__UserConstructedTransforms() { return STRUCT_OFFSET(ACompositingElement, UserConstructedTransforms); } \
	FORCEINLINE static uint32 __PPO__UserConstructedOutputs() { return STRUCT_OFFSET(ACompositingElement, UserConstructedOutputs); } \
	FORCEINLINE static uint32 __PPO__InternalInputs() { return STRUCT_OFFSET(ACompositingElement, InternalInputs); } \
	FORCEINLINE static uint32 __PPO__InternalTransformPasses() { return STRUCT_OFFSET(ACompositingElement, InternalTransformPasses); } \
	FORCEINLINE static uint32 __PPO__InternalOutputs() { return STRUCT_OFFSET(ACompositingElement, InternalOutputs); } \
	FORCEINLINE static uint32 __PPO__InternalAlphaPass() { return STRUCT_OFFSET(ACompositingElement, InternalAlphaPass); }


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_75_PROLOG \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_EVENT_PARMS


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_SPARSE_DATA \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_RPC_WRAPPERS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_CALLBACK_WRAPPERS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_INCLASS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_SPARSE_DATA \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_CALLBACK_WRAPPERS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CompositingElement."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPOSURE_API UClass* StaticClass<class ACompositingElement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h


#define FOREACH_ENUM_ECOMPPASSCONSTRUCTIONTYPE(op) \
	op(ECompPassConstructionType::Unknown) \
	op(ECompPassConstructionType::EditorConstructed) \
	op(ECompPassConstructionType::BlueprintConstructed) \
	op(ECompPassConstructionType::CodeConstructed) 

enum class ECompPassConstructionType;
template<> COMPOSURE_API UEnum* StaticEnum<ECompPassConstructionType>();

#define FOREACH_ENUM_ETARGETUSAGEFLAGS(op) \
	op(ETargetUsageFlags::USAGE_None) \
	op(ETargetUsageFlags::USAGE_Input) \
	op(ETargetUsageFlags::USAGE_Transform) \
	op(ETargetUsageFlags::USAGE_Output) \
	op(ETargetUsageFlags::USAGE_Persistent) \
	op(ETargetUsageFlags::USAGE_Intermediate0) \
	op(ETargetUsageFlags::USAGE_Intermediate1) 

enum class ETargetUsageFlags : uint8;
template<> COMPOSURE_API UEnum* StaticEnum<ETargetUsageFlags>();

#define FOREACH_ENUM_EINHERITEDSOURCETYPE(op) \
	op(EInheritedSourceType::Inherited) \
	op(EInheritedSourceType::Override) 

enum class EInheritedSourceType;
template<> COMPOSURE_API UEnum* StaticEnum<EInheritedSourceType>();

#define FOREACH_ENUM_ESCENECAMERALINKTYPE(op) \
	op(ESceneCameraLinkType::Inherited) \
	op(ESceneCameraLinkType::Override) \
	op(ESceneCameraLinkType::Unused) 

enum class ESceneCameraLinkType;
template<> COMPOSURE_API UEnum* StaticEnum<ESceneCameraLinkType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
