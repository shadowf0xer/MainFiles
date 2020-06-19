// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMPOSURE_ComposurePipelineBaseActor_generated_h
#error "ComposurePipelineBaseActor.generated.h already included, missing '#pragma once' in ComposurePipelineBaseActor.h"
#endif
#define COMPOSURE_ComposurePipelineBaseActor_generated_h

#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_SPARSE_DATA
#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_RPC_WRAPPERS \
	virtual void EnqueueRendering_Implementation(bool bCameraCutThisFrame); \
	virtual bool IsActivelyRunning_Implementation() const; \
 \
	DECLARE_FUNCTION(execEnqueueRendering); \
	DECLARE_FUNCTION(execIsActivelyRunning); \
	DECLARE_FUNCTION(execSetAutoRun);


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void EnqueueRendering_Implementation(bool bCameraCutThisFrame); \
	virtual bool IsActivelyRunning_Implementation() const; \
 \
	DECLARE_FUNCTION(execEnqueueRendering); \
	DECLARE_FUNCTION(execIsActivelyRunning); \
	DECLARE_FUNCTION(execSetAutoRun);


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_EVENT_PARMS \
	struct ComposurePipelineBaseActor_eventEnqueueRendering_Parms \
	{ \
		bool bCameraCutThisFrame; \
	}; \
	struct ComposurePipelineBaseActor_eventIsActivelyRunning_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ComposurePipelineBaseActor_eventIsActivelyRunning_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_CALLBACK_WRAPPERS
#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAComposurePipelineBaseActor(); \
	friend struct Z_Construct_UClass_AComposurePipelineBaseActor_Statics; \
public: \
	DECLARE_CLASS(AComposurePipelineBaseActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Composure"), NO_API) \
	DECLARE_SERIALIZER(AComposurePipelineBaseActor)


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAComposurePipelineBaseActor(); \
	friend struct Z_Construct_UClass_AComposurePipelineBaseActor_Statics; \
public: \
	DECLARE_CLASS(AComposurePipelineBaseActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Composure"), NO_API) \
	DECLARE_SERIALIZER(AComposurePipelineBaseActor)


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AComposurePipelineBaseActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AComposurePipelineBaseActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AComposurePipelineBaseActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AComposurePipelineBaseActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AComposurePipelineBaseActor(AComposurePipelineBaseActor&&); \
	NO_API AComposurePipelineBaseActor(const AComposurePipelineBaseActor&); \
public:


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AComposurePipelineBaseActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AComposurePipelineBaseActor(AComposurePipelineBaseActor&&); \
	NO_API AComposurePipelineBaseActor(const AComposurePipelineBaseActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AComposurePipelineBaseActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AComposurePipelineBaseActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AComposurePipelineBaseActor)


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_14_PROLOG \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_EVENT_PARMS


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_SPARSE_DATA \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_RPC_WRAPPERS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_CALLBACK_WRAPPERS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_INCLASS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_SPARSE_DATA \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_CALLBACK_WRAPPERS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ComposurePipelineBaseActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPOSURE_API UClass* StaticClass<class AComposurePipelineBaseActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
