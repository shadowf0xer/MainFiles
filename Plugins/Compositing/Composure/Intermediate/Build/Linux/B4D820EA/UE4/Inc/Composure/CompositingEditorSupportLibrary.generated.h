// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector2D;
struct FLinearColor;
class UTextureRenderTarget2D;
class UTexture;
class UCompositingPickerAsyncTask;
#ifdef COMPOSURE_CompositingEditorSupportLibrary_generated_h
#error "CompositingEditorSupportLibrary.generated.h already included, missing '#pragma once' in CompositingEditorSupportLibrary.h"
#endif
#define COMPOSURE_CompositingEditorSupportLibrary_generated_h

#define Engine_Plugins_Compositing_Composure_Source_Composure_Private_EditorSupport_CompositingEditorSupportLibrary_h_15_DELEGATE \
struct _Script_Composure_eventOnPixelPicked_Parms \
{ \
	FVector2D PickedUV; \
	FLinearColor SampledColor; \
}; \
static inline void FOnPixelPicked_DelegateWrapper(const FMulticastScriptDelegate& OnPixelPicked, FVector2D const& PickedUV, FLinearColor const& SampledColor) \
{ \
	_Script_Composure_eventOnPixelPicked_Parms Parms; \
	Parms.PickedUV=PickedUV; \
	Parms.SampledColor=SampledColor; \
	OnPixelPicked.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_Compositing_Composure_Source_Composure_Private_EditorSupport_CompositingEditorSupportLibrary_h_20_SPARSE_DATA
#define Engine_Plugins_Compositing_Composure_Source_Composure_Private_EditorSupport_CompositingEditorSupportLibrary_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOpenCompositingPicker);


#define Engine_Plugins_Compositing_Composure_Source_Composure_Private_EditorSupport_CompositingEditorSupportLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOpenCompositingPicker);


#define Engine_Plugins_Compositing_Composure_Source_Composure_Private_EditorSupport_CompositingEditorSupportLibrary_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositingPickerAsyncTask(); \
	friend struct Z_Construct_UClass_UCompositingPickerAsyncTask_Statics; \
public: \
	DECLARE_CLASS(UCompositingPickerAsyncTask, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Composure"), NO_API) \
	DECLARE_SERIALIZER(UCompositingPickerAsyncTask) \
	virtual UObject* _getUObject() const override { return const_cast<UCompositingPickerAsyncTask*>(this); }


#define Engine_Plugins_Compositing_Composure_Source_Composure_Private_EditorSupport_CompositingEditorSupportLibrary_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUCompositingPickerAsyncTask(); \
	friend struct Z_Construct_UClass_UCompositingPickerAsyncTask_Statics; \
public: \
	DECLARE_CLASS(UCompositingPickerAsyncTask, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Composure"), NO_API) \
	DECLARE_SERIALIZER(UCompositingPickerAsyncTask) \
	virtual UObject* _getUObject() const override { return const_cast<UCompositingPickerAsyncTask*>(this); }


#define Engine_Plugins_Compositing_Composure_Source_Composure_Private_EditorSupport_CompositingEditorSupportLibrary_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCompositingPickerAsyncTask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompositingPickerAsyncTask) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCompositingPickerAsyncTask); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositingPickerAsyncTask); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCompositingPickerAsyncTask(UCompositingPickerAsyncTask&&); \
	NO_API UCompositingPickerAsyncTask(const UCompositingPickerAsyncTask&); \
public:


#define Engine_Plugins_Compositing_Composure_Source_Composure_Private_EditorSupport_CompositingEditorSupportLibrary_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCompositingPickerAsyncTask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCompositingPickerAsyncTask(UCompositingPickerAsyncTask&&); \
	NO_API UCompositingPickerAsyncTask(const UCompositingPickerAsyncTask&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCompositingPickerAsyncTask); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositingPickerAsyncTask); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompositingPickerAsyncTask)


#define Engine_Plugins_Compositing_Composure_Source_Composure_Private_EditorSupport_CompositingEditorSupportLibrary_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PickerTarget() { return STRUCT_OFFSET(UCompositingPickerAsyncTask, PickerTarget); } \
	FORCEINLINE static uint32 __PPO__PickerDisplayImage() { return STRUCT_OFFSET(UCompositingPickerAsyncTask, PickerDisplayImage); }


#define Engine_Plugins_Compositing_Composure_Source_Composure_Private_EditorSupport_CompositingEditorSupportLibrary_h_17_PROLOG
#define Engine_Plugins_Compositing_Composure_Source_Composure_Private_EditorSupport_CompositingEditorSupportLibrary_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Compositing_Composure_Source_Composure_Private_EditorSupport_CompositingEditorSupportLibrary_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Compositing_Composure_Source_Composure_Private_EditorSupport_CompositingEditorSupportLibrary_h_20_SPARSE_DATA \
	Engine_Plugins_Compositing_Composure_Source_Composure_Private_EditorSupport_CompositingEditorSupportLibrary_h_20_RPC_WRAPPERS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Private_EditorSupport_CompositingEditorSupportLibrary_h_20_INCLASS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Private_EditorSupport_CompositingEditorSupportLibrary_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Compositing_Composure_Source_Composure_Private_EditorSupport_CompositingEditorSupportLibrary_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Compositing_Composure_Source_Composure_Private_EditorSupport_CompositingEditorSupportLibrary_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Compositing_Composure_Source_Composure_Private_EditorSupport_CompositingEditorSupportLibrary_h_20_SPARSE_DATA \
	Engine_Plugins_Compositing_Composure_Source_Composure_Private_EditorSupport_CompositingEditorSupportLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Private_EditorSupport_CompositingEditorSupportLibrary_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Private_EditorSupport_CompositingEditorSupportLibrary_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPOSURE_API UClass* StaticClass<class UCompositingPickerAsyncTask>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Compositing_Composure_Source_Composure_Private_EditorSupport_CompositingEditorSupportLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
