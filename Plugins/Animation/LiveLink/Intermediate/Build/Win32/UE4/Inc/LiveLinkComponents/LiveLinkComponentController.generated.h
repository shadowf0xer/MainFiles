// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIVELINKCOMPONENTS_LiveLinkComponentController_generated_h
#error "LiveLinkComponentController.generated.h already included, missing '#pragma once' in LiveLinkComponentController.h"
#endif
#define LIVELINKCOMPONENTS_LiveLinkComponentController_generated_h

#define Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_9_DELEGATE \
struct _Script_LiveLinkComponents_eventLiveLinkTickDelegate_Parms \
{ \
	float DeltaTime; \
}; \
static inline void FLiveLinkTickDelegate_DelegateWrapper(const FMulticastScriptDelegate& LiveLinkTickDelegate, float DeltaTime) \
{ \
	_Script_LiveLinkComponents_eventLiveLinkTickDelegate_Parms Parms; \
	Parms.DeltaTime=DeltaTime; \
	LiveLinkTickDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_16_SPARSE_DATA
#define Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_16_RPC_WRAPPERS
#define Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_16_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULiveLinkComponentController, NO_API)


#define Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkComponentController(); \
	friend struct Z_Construct_UClass_ULiveLinkComponentController_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkComponentController, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LiveLinkComponents"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkComponentController) \
	Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_16_ARCHIVESERIALIZER


#define Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_16_INCLASS \
private: \
	static void StaticRegisterNativesULiveLinkComponentController(); \
	friend struct Z_Construct_UClass_ULiveLinkComponentController_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkComponentController, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LiveLinkComponents"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkComponentController) \
	Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_16_ARCHIVESERIALIZER


#define Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkComponentController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkComponentController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkComponentController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkComponentController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULiveLinkComponentController(ULiveLinkComponentController&&); \
	NO_API ULiveLinkComponentController(const ULiveLinkComponentController&); \
public:


#define Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULiveLinkComponentController(ULiveLinkComponentController&&); \
	NO_API ULiveLinkComponentController(const ULiveLinkComponentController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkComponentController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkComponentController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULiveLinkComponentController)


#define Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_16_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_13_PROLOG
#define Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_16_SPARSE_DATA \
	Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_16_RPC_WRAPPERS \
	Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_16_INCLASS \
	Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_16_SPARSE_DATA \
	Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVELINKCOMPONENTS_API UClass* StaticClass<class ULiveLinkComponentController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
