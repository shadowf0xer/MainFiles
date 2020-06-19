// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTimecode;
struct FSubjectFrameHandle;
#ifdef LIVELINK_LiveLinkComponent_generated_h
#error "LiveLinkComponent.generated.h already included, missing '#pragma once' in LiveLinkComponent.h"
#endif
#define LIVELINK_LiveLinkComponent_generated_h

#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_12_DELEGATE \
struct _Script_LiveLink_eventLiveLinkTickSignature_Parms \
{ \
	float DeltaTime; \
}; \
static inline void FLiveLinkTickSignature_DelegateWrapper(const FMulticastScriptDelegate& LiveLinkTickSignature, float DeltaTime) \
{ \
	_Script_LiveLink_eventLiveLinkTickSignature_Parms Parms; \
	Parms.DeltaTime=DeltaTime; \
	LiveLinkTickSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_20_SPARSE_DATA
#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSubjectDataAtSceneTime); \
	DECLARE_FUNCTION(execGetSubjectDataAtWorldTime); \
	DECLARE_FUNCTION(execGetSubjectData); \
	DECLARE_FUNCTION(execGetAvailableSubjectNames);


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSubjectDataAtSceneTime); \
	DECLARE_FUNCTION(execGetSubjectDataAtWorldTime); \
	DECLARE_FUNCTION(execGetSubjectData); \
	DECLARE_FUNCTION(execGetAvailableSubjectNames);


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkComponent(); \
	friend struct Z_Construct_UClass_ULiveLinkComponent_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LiveLink"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkComponent)


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesULiveLinkComponent(); \
	friend struct Z_Construct_UClass_ULiveLinkComponent_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LiveLink"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkComponent)


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULiveLinkComponent(ULiveLinkComponent&&); \
	NO_API ULiveLinkComponent(const ULiveLinkComponent&); \
public:


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULiveLinkComponent(ULiveLinkComponent&&); \
	NO_API ULiveLinkComponent(const ULiveLinkComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULiveLinkComponent)


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_20_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_17_PROLOG
#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_20_SPARSE_DATA \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_20_RPC_WRAPPERS \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_20_INCLASS \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_20_SPARSE_DATA \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVELINK_API UClass* StaticClass<class ULiveLinkComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
