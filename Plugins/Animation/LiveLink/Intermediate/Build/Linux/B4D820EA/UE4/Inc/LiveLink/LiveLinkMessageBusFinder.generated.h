// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULiveLinkMessageBusFinder;
struct FProviderPollResult;
struct FLiveLinkSourceHandle;
class UObject;
struct FLatentActionInfo;
#ifdef LIVELINK_LiveLinkMessageBusFinder_generated_h
#error "LiveLinkMessageBusFinder.generated.h already included, missing '#pragma once' in LiveLinkMessageBusFinder.h"
#endif
#define LIVELINK_LiveLinkMessageBusFinder_generated_h

#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProviderPollResult_Statics; \
	LIVELINK_API static class UScriptStruct* StaticStruct();


template<> LIVELINK_API UScriptStruct* StaticStruct<struct FProviderPollResult>();

#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_59_SPARSE_DATA
#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_59_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConstructMessageBusFinder); \
	DECLARE_FUNCTION(execConnectToProvider); \
	DECLARE_FUNCTION(execGetAvailableProviders);


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConstructMessageBusFinder); \
	DECLARE_FUNCTION(execConnectToProvider); \
	DECLARE_FUNCTION(execGetAvailableProviders);


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkMessageBusFinder(); \
	friend struct Z_Construct_UClass_ULiveLinkMessageBusFinder_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkMessageBusFinder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLink"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkMessageBusFinder)


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_59_INCLASS \
private: \
	static void StaticRegisterNativesULiveLinkMessageBusFinder(); \
	friend struct Z_Construct_UClass_ULiveLinkMessageBusFinder_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkMessageBusFinder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLink"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkMessageBusFinder)


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_59_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkMessageBusFinder(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkMessageBusFinder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkMessageBusFinder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkMessageBusFinder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULiveLinkMessageBusFinder(ULiveLinkMessageBusFinder&&); \
	NO_API ULiveLinkMessageBusFinder(const ULiveLinkMessageBusFinder&); \
public:


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_59_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULiveLinkMessageBusFinder(ULiveLinkMessageBusFinder&&); \
	NO_API ULiveLinkMessageBusFinder(const ULiveLinkMessageBusFinder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkMessageBusFinder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkMessageBusFinder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULiveLinkMessageBusFinder)


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_59_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_55_PROLOG
#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_59_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_59_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_59_SPARSE_DATA \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_59_RPC_WRAPPERS \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_59_INCLASS \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_59_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_59_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_59_SPARSE_DATA \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_59_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVELINK_API UClass* StaticClass<class ULiveLinkMessageBusFinder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
