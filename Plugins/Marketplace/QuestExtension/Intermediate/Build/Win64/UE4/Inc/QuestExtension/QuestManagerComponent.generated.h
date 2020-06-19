// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UQuestMemory;
class UQuestBase;
enum class EQuestCompletionState : uint8;
struct FRuntimeQuest;
struct FQuestManagerRecord;
struct FQuestTextArgument;
struct FQuestStateData;
class UQuestGroup;
class UQuestManagerComponent;
enum class EQuestShareCompleteMode : uint8;
struct FLatentActionInfo;
#ifdef QUESTEXTENSION_QuestManagerComponent_generated_h
#error "QuestManagerComponent.generated.h already included, missing '#pragma once' in QuestManagerComponent.h"
#endif
#define QUESTEXTENSION_QuestManagerComponent_generated_h

#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestManagerComponent_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMemoryStack_Statics; \
	QUESTEXTENSION_API static class UScriptStruct* StaticStruct();


template<> QUESTEXTENSION_API UScriptStruct* StaticStruct<struct FMemoryStack>();

#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestManagerComponent_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQuestStateData_Statics; \
	QUESTEXTENSION_API static class UScriptStruct* StaticStruct();


template<> QUESTEXTENSION_API UScriptStruct* StaticStruct<struct FQuestStateData>();

#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestManagerComponent_h_28_DELEGATE \
struct _Script_QuestExtension_eventMemoryDelegate_Parms \
{ \
	TSoftObjectPtr<UQuestMemory> Memory; \
	int32 Amount; \
}; \
static inline void FMemoryDelegate_DelegateWrapper(const FMulticastScriptDelegate& MemoryDelegate, const TSoftObjectPtr<UQuestMemory>& Memory, int32 Amount) \
{ \
	_Script_QuestExtension_eventMemoryDelegate_Parms Parms; \
	Parms.Memory=Memory; \
	Parms.Amount=Amount; \
	MemoryDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestManagerComponent_h_27_DELEGATE \
struct _Script_QuestExtension_eventAnyQuestFinishedDelegate_Parms \
{ \
	TSoftObjectPtr<UQuestBase> QuestAsset; \
	EQuestCompletionState State; \
}; \
static inline void FAnyQuestFinishedDelegate_DelegateWrapper(const FMulticastScriptDelegate& AnyQuestFinishedDelegate, const TSoftObjectPtr<UQuestBase>& QuestAsset, const EQuestCompletionState State) \
{ \
	_Script_QuestExtension_eventAnyQuestFinishedDelegate_Parms Parms; \
	Parms.QuestAsset=QuestAsset; \
	Parms.State=State; \
	AnyQuestFinishedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestManagerComponent_h_26_DELEGATE \
struct _Script_QuestExtension_eventAnyQuestStartedDelegate_Parms \
{ \
	FRuntimeQuest Quest; \
}; \
static inline void FAnyQuestStartedDelegate_DelegateWrapper(const FMulticastScriptDelegate& AnyQuestStartedDelegate, FRuntimeQuest const& Quest) \
{ \
	_Script_QuestExtension_eventAnyQuestStartedDelegate_Parms Parms; \
	Parms.Quest=Quest; \
	AnyQuestStartedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestManagerComponent_h_100_SPARSE_DATA
#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestManagerComponent_h_100_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRestoreRecord); \
	DECLARE_FUNCTION(execDumpRecord); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execSetArgument); \
	DECLARE_FUNCTION(execGetMemoryCount); \
	DECLARE_FUNCTION(execIsMemoryRegistered); \
	DECLARE_FUNCTION(execForgetAllMemories); \
	DECLARE_FUNCTION(execForgetMemory); \
	DECLARE_FUNCTION(execRegistryMemories); \
	DECLARE_FUNCTION(execRegistryMemory); \
	DECLARE_FUNCTION(execGetCompletedQuests); \
	DECLARE_FUNCTION(execGetRunningQuestGroups); \
	DECLARE_FUNCTION(execGetRunningQuests); \
	DECLARE_FUNCTION(execIsFailed); \
	DECLARE_FUNCTION(execIsCompleted); \
	DECLARE_FUNCTION(execIsFinished); \
	DECLARE_FUNCTION(execIsInProgress); \
	DECLARE_FUNCTION(execIsNotStarted); \
	DECLARE_FUNCTION(execGetQuestScript); \
	DECLARE_FUNCTION(execGetQuestState); \
	DECLARE_FUNCTION(execCanStartQuest); \
	DECLARE_FUNCTION(execFinishQuest); \
	DECLARE_FUNCTION(execShareQuest); \
	DECLARE_FUNCTION(execBP_StartQuestAsset); \
	DECLARE_FUNCTION(execBP_StartQuest); \
	DECLARE_FUNCTION(execSetAsGlobalManager);


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestManagerComponent_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRestoreRecord); \
	DECLARE_FUNCTION(execDumpRecord); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execSetArgument); \
	DECLARE_FUNCTION(execGetMemoryCount); \
	DECLARE_FUNCTION(execIsMemoryRegistered); \
	DECLARE_FUNCTION(execForgetAllMemories); \
	DECLARE_FUNCTION(execForgetMemory); \
	DECLARE_FUNCTION(execRegistryMemories); \
	DECLARE_FUNCTION(execRegistryMemory); \
	DECLARE_FUNCTION(execGetCompletedQuests); \
	DECLARE_FUNCTION(execGetRunningQuestGroups); \
	DECLARE_FUNCTION(execGetRunningQuests); \
	DECLARE_FUNCTION(execIsFailed); \
	DECLARE_FUNCTION(execIsCompleted); \
	DECLARE_FUNCTION(execIsFinished); \
	DECLARE_FUNCTION(execIsInProgress); \
	DECLARE_FUNCTION(execIsNotStarted); \
	DECLARE_FUNCTION(execGetQuestScript); \
	DECLARE_FUNCTION(execGetQuestState); \
	DECLARE_FUNCTION(execCanStartQuest); \
	DECLARE_FUNCTION(execFinishQuest); \
	DECLARE_FUNCTION(execShareQuest); \
	DECLARE_FUNCTION(execBP_StartQuestAsset); \
	DECLARE_FUNCTION(execBP_StartQuest); \
	DECLARE_FUNCTION(execSetAsGlobalManager);


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestManagerComponent_h_100_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UQuestManagerComponent, NO_API)


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestManagerComponent_h_100_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestManagerComponent(); \
	friend struct Z_Construct_UClass_UQuestManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UQuestManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestExtension"), NO_API) \
	DECLARE_SERIALIZER(UQuestManagerComponent) \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestManagerComponent_h_100_ARCHIVESERIALIZER \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Memories=NETFIELD_REP_START, \
		RunningQuests, \
		CompletedQuests, \
		NETFIELD_REP_END=CompletedQuests	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestManagerComponent_h_100_INCLASS \
private: \
	static void StaticRegisterNativesUQuestManagerComponent(); \
	friend struct Z_Construct_UClass_UQuestManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UQuestManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestExtension"), NO_API) \
	DECLARE_SERIALIZER(UQuestManagerComponent) \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestManagerComponent_h_100_ARCHIVESERIALIZER \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Memories=NETFIELD_REP_START, \
		RunningQuests, \
		CompletedQuests, \
		NETFIELD_REP_END=CompletedQuests	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestManagerComponent_h_100_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestManagerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestManagerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestManagerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestManagerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestManagerComponent(UQuestManagerComponent&&); \
	NO_API UQuestManagerComponent(const UQuestManagerComponent&); \
public:


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestManagerComponent_h_100_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestManagerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestManagerComponent(UQuestManagerComponent&&); \
	NO_API UQuestManagerComponent(const UQuestManagerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestManagerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestManagerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestManagerComponent)


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestManagerComponent_h_100_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DefaultQuests() { return STRUCT_OFFSET(UQuestManagerComponent, DefaultQuests); } \
	FORCEINLINE static uint32 __PPO__Memories() { return STRUCT_OFFSET(UQuestManagerComponent, Memories); } \
	FORCEINLINE static uint32 __PPO__QuestTypeFilter() { return STRUCT_OFFSET(UQuestManagerComponent, QuestTypeFilter); } \
	FORCEINLINE static uint32 __PPO__RunningQuests() { return STRUCT_OFFSET(UQuestManagerComponent, RunningQuests); } \
	FORCEINLINE static uint32 __PPO__CompletedQuests() { return STRUCT_OFFSET(UQuestManagerComponent, CompletedQuests); } \
	FORCEINLINE static uint32 __PPO__Arguments() { return STRUCT_OFFSET(UQuestManagerComponent, Arguments); }


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestManagerComponent_h_97_PROLOG
#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestManagerComponent_h_100_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestManagerComponent_h_100_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestManagerComponent_h_100_SPARSE_DATA \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestManagerComponent_h_100_RPC_WRAPPERS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestManagerComponent_h_100_INCLASS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestManagerComponent_h_100_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestManagerComponent_h_100_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestManagerComponent_h_100_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestManagerComponent_h_100_SPARSE_DATA \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestManagerComponent_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestManagerComponent_h_100_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestManagerComponent_h_100_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class QuestManagerComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTEXTENSION_API UClass* StaticClass<class UQuestManagerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestManagerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
