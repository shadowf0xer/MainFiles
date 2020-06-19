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
#ifdef QUESTEXTENSION_ConditionContainer_generated_h
#error "ConditionContainer.generated.h already included, missing '#pragma once' in ConditionContainer.h"
#endif
#define QUESTEXTENSION_ConditionContainer_generated_h

#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_ConditionContainer_h_15_SPARSE_DATA
#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_ConditionContainer_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execGetFirstCondition); \
	DECLARE_FUNCTION(execCancelLatentCheck); \
	DECLARE_FUNCTION(execStartLatentCheck); \
	DECLARE_FUNCTION(execStartInstantCheck);


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_ConditionContainer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execGetFirstCondition); \
	DECLARE_FUNCTION(execCancelLatentCheck); \
	DECLARE_FUNCTION(execStartLatentCheck); \
	DECLARE_FUNCTION(execStartInstantCheck);


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_ConditionContainer_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConditionContainer(); \
	friend struct Z_Construct_UClass_UConditionContainer_Statics; \
public: \
	DECLARE_CLASS(UConditionContainer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QuestExtension"), NO_API) \
	DECLARE_SERIALIZER(UConditionContainer)


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_ConditionContainer_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUConditionContainer(); \
	friend struct Z_Construct_UClass_UConditionContainer_Statics; \
public: \
	DECLARE_CLASS(UConditionContainer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QuestExtension"), NO_API) \
	DECLARE_SERIALIZER(UConditionContainer)


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_ConditionContainer_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConditionContainer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConditionContainer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConditionContainer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConditionContainer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConditionContainer(UConditionContainer&&); \
	NO_API UConditionContainer(const UConditionContainer&); \
public:


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_ConditionContainer_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConditionContainer(UConditionContainer&&); \
	NO_API UConditionContainer(const UConditionContainer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConditionContainer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConditionContainer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UConditionContainer)


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_ConditionContainer_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CustomManager() { return STRUCT_OFFSET(UConditionContainer, CustomManager); }


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_ConditionContainer_h_12_PROLOG
#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_ConditionContainer_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_ConditionContainer_h_15_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_ConditionContainer_h_15_SPARSE_DATA \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_ConditionContainer_h_15_RPC_WRAPPERS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_ConditionContainer_h_15_INCLASS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_ConditionContainer_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_ConditionContainer_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_ConditionContainer_h_15_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_ConditionContainer_h_15_SPARSE_DATA \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_ConditionContainer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_ConditionContainer_h_15_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_ConditionContainer_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTEXTENSION_API UClass* StaticClass<class UConditionContainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Conditions_ConditionContainer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
