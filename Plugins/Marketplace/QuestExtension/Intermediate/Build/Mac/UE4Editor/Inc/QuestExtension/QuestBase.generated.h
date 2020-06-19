// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EQuestCompletionState : uint8;
class UQuestBase;
class UQuestGroup;
class UQuestManagerComponent;
struct FQuestTextArgument;
#ifdef QUESTEXTENSION_QuestBase_generated_h
#error "QuestBase.generated.h already included, missing '#pragma once' in QuestBase.h"
#endif
#define QUESTEXTENSION_QuestBase_generated_h

#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestBase_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQuestPhaseResult_Statics; \
	QUESTEXTENSION_API static class UScriptStruct* StaticStruct();


template<> QUESTEXTENSION_API UScriptStruct* StaticStruct<struct FQuestPhaseResult>();

#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestBase_h_58_DELEGATE \
struct _Script_QuestExtension_eventQuestFinishedDelegate_Parms \
{ \
	EQuestCompletionState State; \
}; \
static inline void FQuestFinishedDelegate_DelegateWrapper(const FMulticastScriptDelegate& QuestFinishedDelegate, const EQuestCompletionState State) \
{ \
	_Script_QuestExtension_eventQuestFinishedDelegate_Parms Parms; \
	Parms.State=State; \
	QuestFinishedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestBase_h_57_DELEGATE \
static inline void FQuestStartedDelegate_DelegateWrapper(const FMulticastScriptDelegate& QuestStartedDelegate) \
{ \
	QuestStartedDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestBase_h_64_SPARSE_DATA
#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestBase_h_64_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRootQuest); \
	DECLARE_FUNCTION(execGetParentQuest); \
	DECLARE_FUNCTION(execIsShared); \
	DECLARE_FUNCTION(execIsShareable); \
	DECLARE_FUNCTION(execEquals); \
	DECLARE_FUNCTION(execEqualsAsset); \
	DECLARE_FUNCTION(execGetAsset); \
	DECLARE_FUNCTION(execGetRootQuestGroup); \
	DECLARE_FUNCTION(execGetParentQuestGroup); \
	DECLARE_FUNCTION(execGetManager); \
	DECLARE_FUNCTION(execSetArgument); \
	DECLARE_FUNCTION(execFormatText); \
	DECLARE_FUNCTION(execGetDescription); \
	DECLARE_FUNCTION(execGetTitle);


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestBase_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRootQuest); \
	DECLARE_FUNCTION(execGetParentQuest); \
	DECLARE_FUNCTION(execIsShared); \
	DECLARE_FUNCTION(execIsShareable); \
	DECLARE_FUNCTION(execEquals); \
	DECLARE_FUNCTION(execEqualsAsset); \
	DECLARE_FUNCTION(execGetAsset); \
	DECLARE_FUNCTION(execGetRootQuestGroup); \
	DECLARE_FUNCTION(execGetParentQuestGroup); \
	DECLARE_FUNCTION(execGetManager); \
	DECLARE_FUNCTION(execSetArgument); \
	DECLARE_FUNCTION(execFormatText); \
	DECLARE_FUNCTION(execGetDescription); \
	DECLARE_FUNCTION(execGetTitle);


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestBase_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestBase(); \
	friend struct Z_Construct_UClass_UQuestBase_Statics; \
public: \
	DECLARE_CLASS(UQuestBase, UBpPrimaryDataAsset, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestExtension"), NO_API) \
	DECLARE_SERIALIZER(UQuestBase) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		StartRequirements=NETFIELD_REP_START, \
		SubScripts, \
		NETFIELD_REP_END=SubScripts	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UQuestBase) \
public:


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestBase_h_64_INCLASS \
private: \
	static void StaticRegisterNativesUQuestBase(); \
	friend struct Z_Construct_UClass_UQuestBase_Statics; \
public: \
	DECLARE_CLASS(UQuestBase, UBpPrimaryDataAsset, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestExtension"), NO_API) \
	DECLARE_SERIALIZER(UQuestBase) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		StartRequirements=NETFIELD_REP_START, \
		SubScripts, \
		NETFIELD_REP_END=SubScripts	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UQuestBase) \
public:


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestBase_h_64_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestBase(UQuestBase&&); \
	NO_API UQuestBase(const UQuestBase&); \
public:


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestBase_h_64_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestBase(UQuestBase&&); \
	NO_API UQuestBase(const UQuestBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UQuestBase)


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestBase_h_64_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bCanStartAfterComplete() { return STRUCT_OFFSET(UQuestBase, bCanStartAfterComplete); } \
	FORCEINLINE static uint32 __PPO__bCanBeShared() { return STRUCT_OFFSET(UQuestBase, bCanBeShared); } \
	FORCEINLINE static uint32 __PPO__Title() { return STRUCT_OFFSET(UQuestBase, Title); } \
	FORCEINLINE static uint32 __PPO__Description() { return STRUCT_OFFSET(UQuestBase, Description); } \
	FORCEINLINE static uint32 __PPO__Arguments() { return STRUCT_OFFSET(UQuestBase, Arguments); } \
	FORCEINLINE static uint32 __PPO__RuntimeInfo() { return STRUCT_OFFSET(UQuestBase, RuntimeInfo); } \
	FORCEINLINE static uint32 __PPO__SharedOwner() { return STRUCT_OFFSET(UQuestBase, SharedOwner); } \
	FORCEINLINE static uint32 __PPO__SharedChildrens() { return STRUCT_OFFSET(UQuestBase, SharedChildrens); } \
	FORCEINLINE static uint32 __PPO__StartRequirements() { return STRUCT_OFFSET(UQuestBase, StartRequirements); } \
	FORCEINLINE static uint32 __PPO__SubScripts() { return STRUCT_OFFSET(UQuestBase, SubScripts); } \
	FORCEINLINE static uint32 __PPO__OnComplete() { return STRUCT_OFFSET(UQuestBase, OnComplete); } \
	FORCEINLINE static uint32 __PPO__OnFailure() { return STRUCT_OFFSET(UQuestBase, OnFailure); } \
	FORCEINLINE static uint32 __PPO__ParentQuest() { return STRUCT_OFFSET(UQuestBase, ParentQuest); }


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestBase_h_61_PROLOG
#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestBase_h_64_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestBase_h_64_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestBase_h_64_SPARSE_DATA \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestBase_h_64_RPC_WRAPPERS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestBase_h_64_INCLASS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestBase_h_64_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestBase_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestBase_h_64_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestBase_h_64_SPARSE_DATA \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestBase_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestBase_h_64_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestBase_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTEXTENSION_API UClass* StaticClass<class UQuestBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestBase_h


#define FOREACH_ENUM_EQUESTCOMPLETIONSTATE(op) \
	op(EQuestCompletionState::NotStarted) \
	op(EQuestCompletionState::InProgress) \
	op(EQuestCompletionState::Success) \
	op(EQuestCompletionState::Failed) \
	op(EQuestCompletionState::None) 

enum class EQuestCompletionState : uint8;
template<> QUESTEXTENSION_API UEnum* StaticEnum<EQuestCompletionState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
