// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UQuestManagerComponent;
struct FGuid;
class UQuestGroup;
enum class EQGNodeFinishReason : uint8;
#ifdef QUESTEXTENSION_QGNode_generated_h
#error "QGNode.generated.h already included, missing '#pragma once' in QGNode.h"
#endif
#define QUESTEXTENSION_QGNode_generated_h

#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QGNodes_QGNode_h_49_SPARSE_DATA
#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QGNodes_QGNode_h_49_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetManager); \
	DECLARE_FUNCTION(execGetNodeId); \
	DECLARE_FUNCTION(execGetQuestGroup); \
	DECLARE_FUNCTION(execIsRejected); \
	DECLARE_FUNCTION(execIsSucceeded); \
	DECLARE_FUNCTION(execIsCompleted); \
	DECLARE_FUNCTION(execIsRunning); \
	DECLARE_FUNCTION(execCallEvent); \
	DECLARE_FUNCTION(execFinish);


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QGNodes_QGNode_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetManager); \
	DECLARE_FUNCTION(execGetNodeId); \
	DECLARE_FUNCTION(execGetQuestGroup); \
	DECLARE_FUNCTION(execIsRejected); \
	DECLARE_FUNCTION(execIsSucceeded); \
	DECLARE_FUNCTION(execIsCompleted); \
	DECLARE_FUNCTION(execIsRunning); \
	DECLARE_FUNCTION(execCallEvent); \
	DECLARE_FUNCTION(execFinish);


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QGNodes_QGNode_h_49_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UQGNode, NO_API)


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QGNodes_QGNode_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQGNode(); \
	friend struct Z_Construct_UClass_UQGNode_Statics; \
public: \
	DECLARE_CLASS(UQGNode, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/QuestExtension"), NO_API) \
	DECLARE_SERIALIZER(UQGNode) \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QGNodes_QGNode_h_49_ARCHIVESERIALIZER


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QGNodes_QGNode_h_49_INCLASS \
private: \
	static void StaticRegisterNativesUQGNode(); \
	friend struct Z_Construct_UClass_UQGNode_Statics; \
public: \
	DECLARE_CLASS(UQGNode, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/QuestExtension"), NO_API) \
	DECLARE_SERIALIZER(UQGNode) \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QGNodes_QGNode_h_49_ARCHIVESERIALIZER


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QGNodes_QGNode_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQGNode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQGNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQGNode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQGNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQGNode(UQGNode&&); \
	NO_API UQGNode(const UQGNode&); \
public:


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QGNodes_QGNode_h_49_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQGNode(UQGNode&&); \
	NO_API UQGNode(const UQGNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQGNode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQGNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UQGNode)


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QGNodes_QGNode_h_49_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ID() { return STRUCT_OFFSET(UQGNode, ID); } \
	FORCEINLINE static uint32 __PPO__Events() { return STRUCT_OFFSET(UQGNode, Events); } \
	FORCEINLINE static uint32 __PPO__FinishReason() { return STRUCT_OFFSET(UQGNode, FinishReason); }


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QGNodes_QGNode_h_46_PROLOG
#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QGNodes_QGNode_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QGNodes_QGNode_h_49_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QGNodes_QGNode_h_49_SPARSE_DATA \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QGNodes_QGNode_h_49_RPC_WRAPPERS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QGNodes_QGNode_h_49_INCLASS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QGNodes_QGNode_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QGNodes_QGNode_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QGNodes_QGNode_h_49_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QGNodes_QGNode_h_49_SPARSE_DATA \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QGNodes_QGNode_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QGNodes_QGNode_h_49_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QGNodes_QGNode_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTEXTENSION_API UClass* StaticClass<class UQGNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QGNodes_QGNode_h


#define FOREACH_ENUM_EQGNODEFINISHREASON(op) \
	op(EQGNodeFinishReason::None) \
	op(EQGNodeFinishReason::Succeed) \
	op(EQGNodeFinishReason::Fail) \
	op(EQGNodeFinishReason::Rejected) 

enum class EQGNodeFinishReason : uint8;
template<> QUESTEXTENSION_API UEnum* StaticEnum<EQGNodeFinishReason>();

#define FOREACH_ENUM_EQGNODESTATE(op) \
	op(EQGNodeState::Inactive) \
	op(EQGNodeState::Active) \
	op(EQGNodeState::Completed) 

enum class EQGNodeState : uint8;
template<> QUESTEXTENSION_API UEnum* StaticEnum<EQGNodeState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
