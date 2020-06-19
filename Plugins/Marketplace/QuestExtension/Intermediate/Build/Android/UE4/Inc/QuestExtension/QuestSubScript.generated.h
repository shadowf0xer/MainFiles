// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EQuestCompletionState : uint8;
class UQuestManagerComponent;
class UQuestBase;
#ifdef QUESTEXTENSION_QuestSubScript_generated_h
#error "QuestSubScript.generated.h already included, missing '#pragma once' in QuestSubScript.h"
#endif
#define QUESTEXTENSION_QuestSubScript_generated_h

#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestSubScript_h_19_SPARSE_DATA
#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestSubScript_h_19_RPC_WRAPPERS \
	virtual bool EventCanStartQuest_Implementation(UQuestManagerComponent* Manager) const; \
 \
	DECLARE_FUNCTION(execFinish); \
	DECLARE_FUNCTION(execGetManager); \
	DECLARE_FUNCTION(execGetQuestAsset); \
	DECLARE_FUNCTION(execGetQuestScript); \
	DECLARE_FUNCTION(execEventCanStartQuest);


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestSubScript_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool EventCanStartQuest_Implementation(UQuestManagerComponent* Manager) const; \
 \
	DECLARE_FUNCTION(execFinish); \
	DECLARE_FUNCTION(execGetManager); \
	DECLARE_FUNCTION(execGetQuestAsset); \
	DECLARE_FUNCTION(execGetQuestScript); \
	DECLARE_FUNCTION(execEventCanStartQuest);


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestSubScript_h_19_EVENT_PARMS \
	struct QuestSubScript_eventEventCanStartQuest_Parms \
	{ \
		UQuestManagerComponent* Manager; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		QuestSubScript_eventEventCanStartQuest_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct QuestSubScript_eventReceiveFinish_Parms \
	{ \
		EQuestCompletionState State; \
	};


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestSubScript_h_19_CALLBACK_WRAPPERS
#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestSubScript_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestSubScript(); \
	friend struct Z_Construct_UClass_UQuestSubScript_Statics; \
public: \
	DECLARE_CLASS(UQuestSubScript, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/QuestExtension"), NO_API) \
	DECLARE_SERIALIZER(UQuestSubScript)


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestSubScript_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUQuestSubScript(); \
	friend struct Z_Construct_UClass_UQuestSubScript_Statics; \
public: \
	DECLARE_CLASS(UQuestSubScript, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/QuestExtension"), NO_API) \
	DECLARE_SERIALIZER(UQuestSubScript)


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestSubScript_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestSubScript(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestSubScript) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestSubScript); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestSubScript); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestSubScript(UQuestSubScript&&); \
	NO_API UQuestSubScript(const UQuestSubScript&); \
public:


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestSubScript_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestSubScript(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestSubScript(UQuestSubScript&&); \
	NO_API UQuestSubScript(const UQuestSubScript&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestSubScript); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestSubScript); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestSubScript)


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestSubScript_h_19_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestSubScript_h_16_PROLOG \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestSubScript_h_19_EVENT_PARMS


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestSubScript_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestSubScript_h_19_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestSubScript_h_19_SPARSE_DATA \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestSubScript_h_19_RPC_WRAPPERS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestSubScript_h_19_CALLBACK_WRAPPERS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestSubScript_h_19_INCLASS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestSubScript_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestSubScript_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestSubScript_h_19_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestSubScript_h_19_SPARSE_DATA \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestSubScript_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestSubScript_h_19_CALLBACK_WRAPPERS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestSubScript_h_19_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestSubScript_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTEXTENSION_API UClass* StaticClass<class UQuestSubScript>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestSubScript_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
