// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EConditionState : uint8;
class UQuestCondition;
class UQuestBase;
class UQuestManagerComponent;
class UConditionContainer;
#ifdef QUESTEXTENSION_QuestCondition_generated_h
#error "QuestCondition.generated.h already included, missing '#pragma once' in QuestCondition.h"
#endif
#define QUESTEXTENSION_QuestCondition_generated_h

#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_30_DELEGATE \
struct _Script_QuestExtension_eventConditionCompleteDel_Parms \
{ \
	EConditionState Result; \
}; \
static inline void FConditionCompleteDel_DelegateWrapper(const FScriptDelegate& ConditionCompleteDel, EConditionState Result) \
{ \
	_Script_QuestExtension_eventConditionCompleteDel_Parms Parms; \
	Parms.Result=Result; \
	ConditionCompleteDel.ProcessDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_29_DELEGATE \
struct _Script_QuestExtension_eventMCConditionCompleteDelegate_Parms \
{ \
	EConditionState Result; \
}; \
static inline void FMCConditionCompleteDelegate_DelegateWrapper(const FMulticastScriptDelegate& MCConditionCompleteDelegate, EConditionState Result) \
{ \
	_Script_QuestExtension_eventMCConditionCompleteDelegate_Parms Parms; \
	Parms.Result=Result; \
	MCConditionCompleteDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_45_SPARSE_DATA
#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_45_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetChildNodes); \
	DECLARE_FUNCTION(execGetAllNodes); \
	DECLARE_FUNCTION(execIsCompleted); \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execGetQuestOwner); \
	DECLARE_FUNCTION(execGetQuestManager); \
	DECLARE_FUNCTION(execGetContainer); \
	DECLARE_FUNCTION(execComplete);


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetChildNodes); \
	DECLARE_FUNCTION(execGetAllNodes); \
	DECLARE_FUNCTION(execIsCompleted); \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execGetQuestOwner); \
	DECLARE_FUNCTION(execGetQuestManager); \
	DECLARE_FUNCTION(execGetContainer); \
	DECLARE_FUNCTION(execComplete);


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestCondition(); \
	friend struct Z_Construct_UClass_UQuestCondition_Statics; \
public: \
	DECLARE_CLASS(UQuestCondition, UDataAsset, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/QuestExtension"), NO_API) \
	DECLARE_SERIALIZER(UQuestCondition)


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_45_INCLASS \
private: \
	static void StaticRegisterNativesUQuestCondition(); \
	friend struct Z_Construct_UClass_UQuestCondition_Statics; \
public: \
	DECLARE_CLASS(UQuestCondition, UDataAsset, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/QuestExtension"), NO_API) \
	DECLARE_SERIALIZER(UQuestCondition)


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestCondition(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestCondition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestCondition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestCondition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestCondition(UQuestCondition&&); \
	NO_API UQuestCondition(const UQuestCondition&); \
public:


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_45_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestCondition(UQuestCondition&&); \
	NO_API UQuestCondition(const UQuestCondition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestCondition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestCondition); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UQuestCondition)


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_45_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DisplayName() { return STRUCT_OFFSET(UQuestCondition, DisplayName); } \
	FORCEINLINE static uint32 __PPO__bCompactNode() { return STRUCT_OFFSET(UQuestCondition, bCompactNode); } \
	FORCEINLINE static uint32 __PPO__bWantsToTick() { return STRUCT_OFFSET(UQuestCondition, bWantsToTick); } \
	FORCEINLINE static uint32 __PPO__TickRate() { return STRUCT_OFFSET(UQuestCondition, TickRate); } \
	FORCEINLINE static uint32 __PPO__TickTimeElapsed() { return STRUCT_OFFSET(UQuestCondition, TickTimeElapsed); } \
	FORCEINLINE static uint32 __PPO__ConState() { return STRUCT_OFFSET(UQuestCondition, ConState); } \
	FORCEINLINE static uint32 __PPO__Outputs() { return STRUCT_OFFSET(UQuestCondition, Outputs); }


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_42_PROLOG
#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_45_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_45_SPARSE_DATA \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_45_RPC_WRAPPERS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_45_INCLASS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_45_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_45_SPARSE_DATA \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_45_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTEXTENSION_API UClass* StaticClass<class UQuestCondition>();

#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_223_SPARSE_DATA
#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_223_RPC_WRAPPERS
#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_223_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_223_EVENT_PARMS \
	struct LatentCondition_eventReceiveTick_Parms \
	{ \
		float DeltaTime; \
	};


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_223_CALLBACK_WRAPPERS
#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_223_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULatentCondition(); \
	friend struct Z_Construct_UClass_ULatentCondition_Statics; \
public: \
	DECLARE_CLASS(ULatentCondition, UQuestCondition, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/QuestExtension"), NO_API) \
	DECLARE_SERIALIZER(ULatentCondition)


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_223_INCLASS \
private: \
	static void StaticRegisterNativesULatentCondition(); \
	friend struct Z_Construct_UClass_ULatentCondition_Statics; \
public: \
	DECLARE_CLASS(ULatentCondition, UQuestCondition, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/QuestExtension"), NO_API) \
	DECLARE_SERIALIZER(ULatentCondition)


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_223_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULatentCondition(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULatentCondition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULatentCondition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULatentCondition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULatentCondition(ULatentCondition&&); \
	NO_API ULatentCondition(const ULatentCondition&); \
public:


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_223_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULatentCondition(ULatentCondition&&); \
	NO_API ULatentCondition(const ULatentCondition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULatentCondition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULatentCondition); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULatentCondition)


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_223_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_220_PROLOG \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_223_EVENT_PARMS


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_223_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_223_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_223_SPARSE_DATA \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_223_RPC_WRAPPERS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_223_CALLBACK_WRAPPERS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_223_INCLASS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_223_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_223_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_223_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_223_SPARSE_DATA \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_223_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_223_CALLBACK_WRAPPERS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_223_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_223_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTEXTENSION_API UClass* StaticClass<class ULatentCondition>();

#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_253_SPARSE_DATA
#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_253_RPC_WRAPPERS
#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_253_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_253_EVENT_PARMS \
	struct InstantCondition_eventReceiveCheck_Parms \
	{ \
		EConditionState ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		InstantCondition_eventReceiveCheck_Parms() \
			: ReturnValue((EConditionState)0) \
		{ \
		} \
	}; \
	struct InstantCondition_eventReceiveTick_Parms \
	{ \
		float DeltaTime; \
	};


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_253_CALLBACK_WRAPPERS
#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_253_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInstantCondition(); \
	friend struct Z_Construct_UClass_UInstantCondition_Statics; \
public: \
	DECLARE_CLASS(UInstantCondition, UQuestCondition, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/QuestExtension"), NO_API) \
	DECLARE_SERIALIZER(UInstantCondition)


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_253_INCLASS \
private: \
	static void StaticRegisterNativesUInstantCondition(); \
	friend struct Z_Construct_UClass_UInstantCondition_Statics; \
public: \
	DECLARE_CLASS(UInstantCondition, UQuestCondition, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/QuestExtension"), NO_API) \
	DECLARE_SERIALIZER(UInstantCondition)


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_253_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInstantCondition(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInstantCondition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInstantCondition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInstantCondition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInstantCondition(UInstantCondition&&); \
	NO_API UInstantCondition(const UInstantCondition&); \
public:


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_253_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInstantCondition(UInstantCondition&&); \
	NO_API UInstantCondition(const UInstantCondition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInstantCondition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInstantCondition); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInstantCondition)


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_253_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_250_PROLOG \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_253_EVENT_PARMS


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_253_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_253_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_253_SPARSE_DATA \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_253_RPC_WRAPPERS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_253_CALLBACK_WRAPPERS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_253_INCLASS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_253_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_253_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_253_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_253_SPARSE_DATA \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_253_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_253_CALLBACK_WRAPPERS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_253_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h_253_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTEXTENSION_API UClass* StaticClass<class UInstantCondition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QuestCondition_h


#define FOREACH_ENUM_ECONDITIONQUESTMODE(op) \
	op(EConditionQuestMode::SucceedsQuest) \
	op(EConditionQuestMode::FailsQuest) \
	op(EConditionQuestMode::SucceedsAndFailsQuest) 

enum class EConditionQuestMode : uint8;
template<> QUESTEXTENSION_API UEnum* StaticEnum<EConditionQuestMode>();

#define FOREACH_ENUM_ECONDITIONSTATE(op) \
	op(EConditionState::NotRunning) \
	op(EConditionState::Running) \
	op(EConditionState::Success) \
	op(EConditionState::Failed) \
	op(EConditionState::Ignored) 

enum class EConditionState : uint8;
template<> QUESTEXTENSION_API UEnum* StaticEnum<EConditionState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
