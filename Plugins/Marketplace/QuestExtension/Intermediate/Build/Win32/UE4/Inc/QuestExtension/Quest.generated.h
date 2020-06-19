// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EConditionState : uint8;
enum class EQuestCompletionState : uint8;
#ifdef QUESTEXTENSION_Quest_generated_h
#error "Quest.generated.h already included, missing '#pragma once' in Quest.h"
#endif
#define QUESTEXTENSION_Quest_generated_h

#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Quest_h_19_SPARSE_DATA
#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Quest_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsInQuestGroup); \
	DECLARE_FUNCTION(execOnConditionCompleted); \
	DECLARE_FUNCTION(execFinishQuest);


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Quest_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsInQuestGroup); \
	DECLARE_FUNCTION(execOnConditionCompleted); \
	DECLARE_FUNCTION(execFinishQuest);


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Quest_h_19_EVENT_PARMS \
	struct Quest_eventReceiveFinish_Parms \
	{ \
		EQuestCompletionState State; \
	};


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Quest_h_19_CALLBACK_WRAPPERS
#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Quest_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuest(); \
	friend struct Z_Construct_UClass_UQuest_Statics; \
public: \
	DECLARE_CLASS(UQuest, UQuestBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestExtension"), NO_API) \
	DECLARE_SERIALIZER(UQuest) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CompleteConditions=NETFIELD_REP_START, \
		NETFIELD_REP_END=CompleteConditions	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Quest_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUQuest(); \
	friend struct Z_Construct_UClass_UQuest_Statics; \
public: \
	DECLARE_CLASS(UQuest, UQuestBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestExtension"), NO_API) \
	DECLARE_SERIALIZER(UQuest) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CompleteConditions=NETFIELD_REP_START, \
		NETFIELD_REP_END=CompleteConditions	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Quest_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuest(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuest(UQuest&&); \
	NO_API UQuest(const UQuest&); \
public:


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Quest_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuest(UQuest&&); \
	NO_API UQuest(const UQuest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuest); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UQuest)


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Quest_h_19_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Quest_h_16_PROLOG \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Quest_h_19_EVENT_PARMS


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Quest_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Quest_h_19_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Quest_h_19_SPARSE_DATA \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Quest_h_19_RPC_WRAPPERS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Quest_h_19_CALLBACK_WRAPPERS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Quest_h_19_INCLASS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Quest_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Quest_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Quest_h_19_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Quest_h_19_SPARSE_DATA \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Quest_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Quest_h_19_CALLBACK_WRAPPERS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Quest_h_19_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Quest_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTEXTENSION_API UClass* StaticClass<class UQuest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Quest_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
