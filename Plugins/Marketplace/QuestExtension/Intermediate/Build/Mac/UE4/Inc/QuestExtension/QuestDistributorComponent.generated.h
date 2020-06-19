// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UQuestManagerComponent;
class UQuestBase;
#ifdef QUESTEXTENSION_QuestDistributorComponent_generated_h
#error "QuestDistributorComponent.generated.h already included, missing '#pragma once' in QuestDistributorComponent.h"
#endif
#define QUESTEXTENSION_QuestDistributorComponent_generated_h

#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestDistributorComponent_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQuestDistribution_Statics; \
	QUESTEXTENSION_API static class UScriptStruct* StaticStruct();


template<> QUESTEXTENSION_API UScriptStruct* StaticStruct<struct FQuestDistribution>();

#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestDistributorComponent_h_27_SPARSE_DATA
#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestDistributorComponent_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCanStartQuest); \
	DECLARE_FUNCTION(execStartAllDistributableQuests); \
	DECLARE_FUNCTION(execStartQuest);


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestDistributorComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanStartQuest); \
	DECLARE_FUNCTION(execStartAllDistributableQuests); \
	DECLARE_FUNCTION(execStartQuest);


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestDistributorComponent_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestDistributorComponent(); \
	friend struct Z_Construct_UClass_UQuestDistributorComponent_Statics; \
public: \
	DECLARE_CLASS(UQuestDistributorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestExtension"), NO_API) \
	DECLARE_SERIALIZER(UQuestDistributorComponent)


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestDistributorComponent_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUQuestDistributorComponent(); \
	friend struct Z_Construct_UClass_UQuestDistributorComponent_Statics; \
public: \
	DECLARE_CLASS(UQuestDistributorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestExtension"), NO_API) \
	DECLARE_SERIALIZER(UQuestDistributorComponent)


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestDistributorComponent_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestDistributorComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestDistributorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestDistributorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestDistributorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestDistributorComponent(UQuestDistributorComponent&&); \
	NO_API UQuestDistributorComponent(const UQuestDistributorComponent&); \
public:


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestDistributorComponent_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestDistributorComponent(UQuestDistributorComponent&&); \
	NO_API UQuestDistributorComponent(const UQuestDistributorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestDistributorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestDistributorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UQuestDistributorComponent)


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestDistributorComponent_h_27_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestDistributorComponent_h_24_PROLOG
#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestDistributorComponent_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestDistributorComponent_h_27_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestDistributorComponent_h_27_SPARSE_DATA \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestDistributorComponent_h_27_RPC_WRAPPERS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestDistributorComponent_h_27_INCLASS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestDistributorComponent_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestDistributorComponent_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestDistributorComponent_h_27_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestDistributorComponent_h_27_SPARSE_DATA \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestDistributorComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestDistributorComponent_h_27_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestDistributorComponent_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTEXTENSION_API UClass* StaticClass<class UQuestDistributorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestDistributorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
