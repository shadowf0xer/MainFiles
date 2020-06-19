// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EMultiUserConnectionStatus : uint8;
struct FMultiUserConnectionError;
struct FMultiUserClientConfig;
struct FMultiUserClientInfo;
struct FTransform;
struct FGuid;
#ifdef MULTIUSERCLIENTLIBRARY_MultiUserClientStatics_generated_h
#error "MultiUserClientStatics.generated.h already included, missing '#pragma once' in MultiUserClientStatics.h"
#endif
#define MULTIUSERCLIENTLIBRARY_MultiUserClientStatics_generated_h

#define Engine_Plugins_Developer_Concert_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_84_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMultiUserClientConfig_Statics; \
	MULTIUSERCLIENTLIBRARY_API static class UScriptStruct* StaticStruct();


template<> MULTIUSERCLIENTLIBRARY_API UScriptStruct* StaticStruct<struct FMultiUserClientConfig>();

#define Engine_Plugins_Developer_Concert_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMultiUserConnectionError_Statics; \
	MULTIUSERCLIENTLIBRARY_API static class UScriptStruct* StaticStruct();


template<> MULTIUSERCLIENTLIBRARY_API UScriptStruct* StaticStruct<struct FMultiUserConnectionError>();

#define Engine_Plugins_Developer_Concert_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMultiUserClientInfo_Statics; \
	MULTIUSERCLIENTLIBRARY_API static class UScriptStruct* StaticStruct();


template<> MULTIUSERCLIENTLIBRARY_API UScriptStruct* StaticStruct<struct FMultiUserClientInfo>();

#define Engine_Plugins_Developer_Concert_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_116_SPARSE_DATA
#define Engine_Plugins_Developer_Concert_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_116_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMultiUserConnectionStatus); \
	DECLARE_FUNCTION(execGetMultiUserConnectionStatusDetail); \
	DECLARE_FUNCTION(execGetLastMultiUserConnectionError); \
	DECLARE_FUNCTION(execStartMultiUserDefaultConnection); \
	DECLARE_FUNCTION(execConfigureMultiUserClient); \
	DECLARE_FUNCTION(execGetRemoteMultiUserClientInfos); \
	DECLARE_FUNCTION(execGetMultiUserClientInfoByName); \
	DECLARE_FUNCTION(execGetLocalMultiUserClientInfo); \
	DECLARE_FUNCTION(execPersistMultiUserSessionChanges); \
	DECLARE_FUNCTION(execUpdateWorkspaceModifiedPackages); \
	DECLARE_FUNCTION(execJumpToMultiUserPresence); \
	DECLARE_FUNCTION(execGetMultiUserPresenceTransform); \
	DECLARE_FUNCTION(execSetMultiUserPresenceVisibilityById); \
	DECLARE_FUNCTION(execSetMultiUserPresenceVisibility); \
	DECLARE_FUNCTION(execSetMultiUserPresenceEnabled);


#define Engine_Plugins_Developer_Concert_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_116_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMultiUserConnectionStatus); \
	DECLARE_FUNCTION(execGetMultiUserConnectionStatusDetail); \
	DECLARE_FUNCTION(execGetLastMultiUserConnectionError); \
	DECLARE_FUNCTION(execStartMultiUserDefaultConnection); \
	DECLARE_FUNCTION(execConfigureMultiUserClient); \
	DECLARE_FUNCTION(execGetRemoteMultiUserClientInfos); \
	DECLARE_FUNCTION(execGetMultiUserClientInfoByName); \
	DECLARE_FUNCTION(execGetLocalMultiUserClientInfo); \
	DECLARE_FUNCTION(execPersistMultiUserSessionChanges); \
	DECLARE_FUNCTION(execUpdateWorkspaceModifiedPackages); \
	DECLARE_FUNCTION(execJumpToMultiUserPresence); \
	DECLARE_FUNCTION(execGetMultiUserPresenceTransform); \
	DECLARE_FUNCTION(execSetMultiUserPresenceVisibilityById); \
	DECLARE_FUNCTION(execSetMultiUserPresenceVisibility); \
	DECLARE_FUNCTION(execSetMultiUserPresenceEnabled);


#define Engine_Plugins_Developer_Concert_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_116_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMultiUserClientStatics(); \
	friend struct Z_Construct_UClass_UMultiUserClientStatics_Statics; \
public: \
	DECLARE_CLASS(UMultiUserClientStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MultiUserClientLibrary"), NO_API) \
	DECLARE_SERIALIZER(UMultiUserClientStatics)


#define Engine_Plugins_Developer_Concert_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_116_INCLASS \
private: \
	static void StaticRegisterNativesUMultiUserClientStatics(); \
	friend struct Z_Construct_UClass_UMultiUserClientStatics_Statics; \
public: \
	DECLARE_CLASS(UMultiUserClientStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MultiUserClientLibrary"), NO_API) \
	DECLARE_SERIALIZER(UMultiUserClientStatics)


#define Engine_Plugins_Developer_Concert_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_116_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMultiUserClientStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMultiUserClientStatics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiUserClientStatics); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiUserClientStatics); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMultiUserClientStatics(UMultiUserClientStatics&&); \
	NO_API UMultiUserClientStatics(const UMultiUserClientStatics&); \
public:


#define Engine_Plugins_Developer_Concert_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_116_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMultiUserClientStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMultiUserClientStatics(UMultiUserClientStatics&&); \
	NO_API UMultiUserClientStatics(const UMultiUserClientStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiUserClientStatics); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiUserClientStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMultiUserClientStatics)


#define Engine_Plugins_Developer_Concert_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_116_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Developer_Concert_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_113_PROLOG
#define Engine_Plugins_Developer_Concert_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_116_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Developer_Concert_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_116_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Developer_Concert_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_116_SPARSE_DATA \
	Engine_Plugins_Developer_Concert_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_116_RPC_WRAPPERS \
	Engine_Plugins_Developer_Concert_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_116_INCLASS \
	Engine_Plugins_Developer_Concert_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_116_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Developer_Concert_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_116_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Developer_Concert_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_116_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Developer_Concert_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_116_SPARSE_DATA \
	Engine_Plugins_Developer_Concert_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_116_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Developer_Concert_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_116_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Developer_Concert_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_116_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MultiUserClientStatics."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIUSERCLIENTLIBRARY_API UClass* StaticClass<class UMultiUserClientStatics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Developer_Concert_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h


#define FOREACH_ENUM_EMULTIUSERCONNECTIONSTATUS(op) \
	op(EMultiUserConnectionStatus::Connecting) \
	op(EMultiUserConnectionStatus::Connected) \
	op(EMultiUserConnectionStatus::Disconnecting) \
	op(EMultiUserConnectionStatus::Disconnected) 

enum class EMultiUserConnectionStatus : uint8;
template<> MULTIUSERCLIENTLIBRARY_API UEnum* StaticEnum<EMultiUserConnectionStatus>();

#define FOREACH_ENUM_EMULTIUSERSOURCEVALIDATIONMODE(op) \
	op(EMultiUserSourceValidationMode::Hard) \
	op(EMultiUserSourceValidationMode::Soft) \
	op(EMultiUserSourceValidationMode::SoftAutoProceed) 

enum class EMultiUserSourceValidationMode : uint8;
template<> MULTIUSERCLIENTLIBRARY_API UEnum* StaticEnum<EMultiUserSourceValidationMode>();

#define FOREACH_ENUM_EMULTIUSERCONNECTIONERROR(op) \
	op(EMultiUserConnectionError::None) \
	op(EMultiUserConnectionError::Canceled) \
	op(EMultiUserConnectionError::ConnectionAttemptAborted) \
	op(EMultiUserConnectionError::ServerNotResponding) \
	op(EMultiUserConnectionError::ServerError) \
	op(EMultiUserConnectionError::WorkspaceValidationUnknown) \
	op(EMultiUserConnectionError::SourceControlValidationUnknown) \
	op(EMultiUserConnectionError::SourceControlValidationCanceled) \
	op(EMultiUserConnectionError::SourceControlValidationError) \
	op(EMultiUserConnectionError::DirtyPackageValidationError) 

enum class EMultiUserConnectionError;
template<> MULTIUSERCLIENTLIBRARY_API UEnum* StaticEnum<EMultiUserConnectionError>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
