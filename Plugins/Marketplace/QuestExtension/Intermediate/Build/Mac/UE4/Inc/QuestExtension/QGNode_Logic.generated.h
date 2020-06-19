// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EQGNodeFinishReason : uint8;
#ifdef QUESTEXTENSION_QGNode_Logic_generated_h
#error "QGNode_Logic.generated.h already included, missing '#pragma once' in QGNode_Logic.h"
#endif
#define QUESTEXTENSION_QGNode_Logic_generated_h

#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QGNodes_QGNode_Logic_h_13_SPARSE_DATA
#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QGNodes_QGNode_Logic_h_13_RPC_WRAPPERS \
	virtual FText GetNodeName_Implementation() const; \
	virtual void ReceiveStart_Implementation(); \
 \
	DECLARE_FUNCTION(execGetNodeName); \
	DECLARE_FUNCTION(execReceiveStart);


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QGNodes_QGNode_Logic_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FText GetNodeName_Implementation() const; \
	virtual void ReceiveStart_Implementation(); \
 \
	DECLARE_FUNCTION(execGetNodeName); \
	DECLARE_FUNCTION(execReceiveStart);


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QGNodes_QGNode_Logic_h_13_EVENT_PARMS \
	struct QGNode_Logic_eventGetNodeName_Parms \
	{ \
		FText ReturnValue; \
	}; \
	struct QGNode_Logic_eventReceiveFinish_Parms \
	{ \
		EQGNodeFinishReason Reason; \
	};


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QGNodes_QGNode_Logic_h_13_CALLBACK_WRAPPERS
#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QGNodes_QGNode_Logic_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQGNode_Logic(); \
	friend struct Z_Construct_UClass_UQGNode_Logic_Statics; \
public: \
	DECLARE_CLASS(UQGNode_Logic, UQGNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QuestExtension"), NO_API) \
	DECLARE_SERIALIZER(UQGNode_Logic)


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QGNodes_QGNode_Logic_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUQGNode_Logic(); \
	friend struct Z_Construct_UClass_UQGNode_Logic_Statics; \
public: \
	DECLARE_CLASS(UQGNode_Logic, UQGNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QuestExtension"), NO_API) \
	DECLARE_SERIALIZER(UQGNode_Logic)


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QGNodes_QGNode_Logic_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQGNode_Logic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQGNode_Logic) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQGNode_Logic); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQGNode_Logic); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQGNode_Logic(UQGNode_Logic&&); \
	NO_API UQGNode_Logic(const UQGNode_Logic&); \
public:


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QGNodes_QGNode_Logic_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQGNode_Logic() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQGNode_Logic(UQGNode_Logic&&); \
	NO_API UQGNode_Logic(const UQGNode_Logic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQGNode_Logic); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQGNode_Logic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UQGNode_Logic)


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QGNodes_QGNode_Logic_h_13_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QGNodes_QGNode_Logic_h_10_PROLOG \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QGNodes_QGNode_Logic_h_13_EVENT_PARMS


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QGNodes_QGNode_Logic_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QGNodes_QGNode_Logic_h_13_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QGNodes_QGNode_Logic_h_13_SPARSE_DATA \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QGNodes_QGNode_Logic_h_13_RPC_WRAPPERS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QGNodes_QGNode_Logic_h_13_CALLBACK_WRAPPERS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QGNodes_QGNode_Logic_h_13_INCLASS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QGNodes_QGNode_Logic_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QGNodes_QGNode_Logic_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QGNodes_QGNode_Logic_h_13_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QGNodes_QGNode_Logic_h_13_SPARSE_DATA \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QGNodes_QGNode_Logic_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QGNodes_QGNode_Logic_h_13_CALLBACK_WRAPPERS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QGNodes_QGNode_Logic_h_13_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QGNodes_QGNode_Logic_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTEXTENSION_API UClass* StaticClass<class UQGNode_Logic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QGNodes_QGNode_Logic_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
