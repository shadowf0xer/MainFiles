// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UQuestBase;
enum class EQuestCompletionState : uint8;
struct FRuntimeQuest;
#ifdef QUESTEXTENSION_QC_AsyncQuest_generated_h
#error "QC_AsyncQuest.generated.h already included, missing '#pragma once' in QC_AsyncQuest.h"
#endif
#define QUESTEXTENSION_QC_AsyncQuest_generated_h

#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QC_AsyncQuest_h_17_SPARSE_DATA
#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QC_AsyncQuest_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnQuestFinished); \
	DECLARE_FUNCTION(execOnQuestStarted);


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QC_AsyncQuest_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnQuestFinished); \
	DECLARE_FUNCTION(execOnQuestStarted);


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QC_AsyncQuest_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQC_AsyncQuest(); \
	friend struct Z_Construct_UClass_UQC_AsyncQuest_Statics; \
public: \
	DECLARE_CLASS(UQC_AsyncQuest, UQuestCondition, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QuestExtension"), NO_API) \
	DECLARE_SERIALIZER(UQC_AsyncQuest)


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QC_AsyncQuest_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUQC_AsyncQuest(); \
	friend struct Z_Construct_UClass_UQC_AsyncQuest_Statics; \
public: \
	DECLARE_CLASS(UQC_AsyncQuest, UQuestCondition, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QuestExtension"), NO_API) \
	DECLARE_SERIALIZER(UQC_AsyncQuest)


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QC_AsyncQuest_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQC_AsyncQuest(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQC_AsyncQuest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQC_AsyncQuest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQC_AsyncQuest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQC_AsyncQuest(UQC_AsyncQuest&&); \
	NO_API UQC_AsyncQuest(const UQC_AsyncQuest&); \
public:


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QC_AsyncQuest_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQC_AsyncQuest(UQC_AsyncQuest&&); \
	NO_API UQC_AsyncQuest(const UQC_AsyncQuest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQC_AsyncQuest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQC_AsyncQuest); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UQC_AsyncQuest)


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QC_AsyncQuest_h_17_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QC_AsyncQuest_h_14_PROLOG
#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QC_AsyncQuest_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QC_AsyncQuest_h_17_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QC_AsyncQuest_h_17_SPARSE_DATA \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QC_AsyncQuest_h_17_RPC_WRAPPERS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QC_AsyncQuest_h_17_INCLASS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QC_AsyncQuest_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QC_AsyncQuest_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QC_AsyncQuest_h_17_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QC_AsyncQuest_h_17_SPARSE_DATA \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QC_AsyncQuest_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QC_AsyncQuest_h_17_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QC_AsyncQuest_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTEXTENSION_API UClass* StaticClass<class UQC_AsyncQuest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_QC_AsyncQuest_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
