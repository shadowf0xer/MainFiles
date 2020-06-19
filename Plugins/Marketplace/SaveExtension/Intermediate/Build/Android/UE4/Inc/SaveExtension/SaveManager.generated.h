// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USlotInfo;
class UObject;
class USaveManager;
class ISaveExtensionInterface;
class ULevelStreaming;
class USavePreset;
class USlotData;
enum class EDeleteSlotsResult : uint8;
struct FLatentActionInfo;
enum class ELoadInfoResult : uint8;
enum class ELoadGameResult : uint8;
struct FScreenshotSize;
enum class ESaveGameResult : uint8;
#ifdef SAVEEXTENSION_SaveManager_generated_h
#error "SaveManager.generated.h already included, missing '#pragma once' in SaveManager.h"
#endif
#define SAVEEXTENSION_SaveManager_generated_h

#define HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FScreenshotSize_Statics; \
	SAVEEXTENSION_API static class UScriptStruct* StaticStruct();


template<> SAVEEXTENSION_API UScriptStruct* StaticStruct<struct FScreenshotSize>();

#define HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_35_DELEGATE \
struct _Script_SaveExtension_eventOnGameLoadedMC_Parms \
{ \
	USlotInfo* SlotInfo; \
}; \
static inline void FOnGameLoadedMC_DelegateWrapper(const FMulticastScriptDelegate& OnGameLoadedMC, USlotInfo* SlotInfo) \
{ \
	_Script_SaveExtension_eventOnGameLoadedMC_Parms Parms; \
	Parms.SlotInfo=SlotInfo; \
	OnGameLoadedMC.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_34_DELEGATE \
struct _Script_SaveExtension_eventOnGameSavedMC_Parms \
{ \
	USlotInfo* SlotInfo; \
}; \
static inline void FOnGameSavedMC_DelegateWrapper(const FMulticastScriptDelegate& OnGameSavedMC, USlotInfo* SlotInfo) \
{ \
	_Script_SaveExtension_eventOnGameSavedMC_Parms Parms; \
	Parms.SlotInfo=SlotInfo; \
	OnGameSavedMC.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_60_SPARSE_DATA
#define HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_60_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSaveManager); \
	DECLARE_FUNCTION(execUnsubscribeFromEvents); \
	DECLARE_FUNCTION(execSubscribeForEvents); \
	DECLARE_FUNCTION(execIsSavingOrLoading); \
	DECLARE_FUNCTION(execDeserializeStreamingLevel); \
	DECLARE_FUNCTION(execSerializeStreamingLevel); \
	DECLARE_FUNCTION(execSetActivePreset); \
	DECLARE_FUNCTION(execIsInSlot); \
	DECLARE_FUNCTION(execIsSlotSaved); \
	DECLARE_FUNCTION(execGetSlotInfo); \
	DECLARE_FUNCTION(execGetCurrentData); \
	DECLARE_FUNCTION(execGetCurrentInfo); \
	DECLARE_FUNCTION(execDeleteSlot); \
	DECLARE_FUNCTION(execBPDeleteAllSlots); \
	DECLARE_FUNCTION(execDeleteSlotFromId); \
	DECLARE_FUNCTION(execBPLoadAllSlotInfos); \
	DECLARE_FUNCTION(execBPReloadCurrentSlot); \
	DECLARE_FUNCTION(execBPLoadSlot); \
	DECLARE_FUNCTION(execBPLoadSlotFromId); \
	DECLARE_FUNCTION(execBPSaveCurrentSlot); \
	DECLARE_FUNCTION(execBPSaveSlot); \
	DECLARE_FUNCTION(execBPSaveSlotToId);


#define HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSaveManager); \
	DECLARE_FUNCTION(execUnsubscribeFromEvents); \
	DECLARE_FUNCTION(execSubscribeForEvents); \
	DECLARE_FUNCTION(execIsSavingOrLoading); \
	DECLARE_FUNCTION(execDeserializeStreamingLevel); \
	DECLARE_FUNCTION(execSerializeStreamingLevel); \
	DECLARE_FUNCTION(execSetActivePreset); \
	DECLARE_FUNCTION(execIsInSlot); \
	DECLARE_FUNCTION(execIsSlotSaved); \
	DECLARE_FUNCTION(execGetSlotInfo); \
	DECLARE_FUNCTION(execGetCurrentData); \
	DECLARE_FUNCTION(execGetCurrentInfo); \
	DECLARE_FUNCTION(execDeleteSlot); \
	DECLARE_FUNCTION(execBPDeleteAllSlots); \
	DECLARE_FUNCTION(execDeleteSlotFromId); \
	DECLARE_FUNCTION(execBPLoadAllSlotInfos); \
	DECLARE_FUNCTION(execBPReloadCurrentSlot); \
	DECLARE_FUNCTION(execBPLoadSlot); \
	DECLARE_FUNCTION(execBPLoadSlotFromId); \
	DECLARE_FUNCTION(execBPSaveCurrentSlot); \
	DECLARE_FUNCTION(execBPSaveSlot); \
	DECLARE_FUNCTION(execBPSaveSlotToId);


#define HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSaveManager(); \
	friend struct Z_Construct_UClass_USaveManager_Statics; \
public: \
	DECLARE_CLASS(USaveManager, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SaveExtension"), NO_API) \
	DECLARE_SERIALIZER(USaveManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_60_INCLASS \
private: \
	static void StaticRegisterNativesUSaveManager(); \
	friend struct Z_Construct_UClass_USaveManager_Statics; \
public: \
	DECLARE_CLASS(USaveManager, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SaveExtension"), NO_API) \
	DECLARE_SERIALIZER(USaveManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_60_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveManager(USaveManager&&); \
	NO_API USaveManager(const USaveManager&); \
public:


#define HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_60_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveManager(USaveManager&&); \
	NO_API USaveManager(const USaveManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USaveManager)


#define HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_60_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentInfo() { return STRUCT_OFFSET(USaveManager, CurrentInfo); } \
	FORCEINLINE static uint32 __PPO__CurrentData() { return STRUCT_OFFSET(USaveManager, CurrentData); } \
	FORCEINLINE static uint32 __PPO__LevelStreamingNotifiers() { return STRUCT_OFFSET(USaveManager, LevelStreamingNotifiers); } \
	FORCEINLINE static uint32 __PPO__SubscribedInterfaces() { return STRUCT_OFFSET(USaveManager, SubscribedInterfaces); } \
	FORCEINLINE static uint32 __PPO__Tasks() { return STRUCT_OFFSET(USaveManager, Tasks); }


#define HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_57_PROLOG
#define HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_60_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_60_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_60_SPARSE_DATA \
	HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_60_RPC_WRAPPERS \
	HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_60_INCLASS \
	HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_60_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_60_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_60_SPARSE_DATA \
	HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_60_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAVEEXTENSION_API UClass* StaticClass<class USaveManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
