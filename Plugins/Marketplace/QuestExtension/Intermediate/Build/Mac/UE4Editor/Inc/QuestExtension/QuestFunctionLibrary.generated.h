// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRuntimeQuest;
class UQuestBase;
struct FQuestManagerRecord;
class UObject;
class UQuestManagerComponent;
#ifdef QUESTEXTENSION_QuestFunctionLibrary_generated_h
#error "QuestFunctionLibrary.generated.h already included, missing '#pragma once' in QuestFunctionLibrary.h"
#endif
#define QUESTEXTENSION_QuestFunctionLibrary_generated_h

#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestFunctionLibrary_h_21_SPARSE_DATA
#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestFunctionLibrary_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRuntimeQuestAsset); \
	DECLARE_FUNCTION(execIsValidQuestManagerRecord); \
	DECLARE_FUNCTION(execGetQuestManager);


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestFunctionLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRuntimeQuestAsset); \
	DECLARE_FUNCTION(execIsValidQuestManagerRecord); \
	DECLARE_FUNCTION(execGetQuestManager);


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestFunctionLibrary_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestFunctionLibrary(); \
	friend struct Z_Construct_UClass_UQuestFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UQuestFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QuestExtension"), NO_API) \
	DECLARE_SERIALIZER(UQuestFunctionLibrary)


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestFunctionLibrary_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUQuestFunctionLibrary(); \
	friend struct Z_Construct_UClass_UQuestFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UQuestFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QuestExtension"), NO_API) \
	DECLARE_SERIALIZER(UQuestFunctionLibrary)


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestFunctionLibrary_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestFunctionLibrary(UQuestFunctionLibrary&&); \
	NO_API UQuestFunctionLibrary(const UQuestFunctionLibrary&); \
public:


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestFunctionLibrary_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestFunctionLibrary(UQuestFunctionLibrary&&); \
	NO_API UQuestFunctionLibrary(const UQuestFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestFunctionLibrary)


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestFunctionLibrary_h_21_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestFunctionLibrary_h_18_PROLOG
#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestFunctionLibrary_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestFunctionLibrary_h_21_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestFunctionLibrary_h_21_SPARSE_DATA \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestFunctionLibrary_h_21_RPC_WRAPPERS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestFunctionLibrary_h_21_INCLASS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestFunctionLibrary_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestFunctionLibrary_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestFunctionLibrary_h_21_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestFunctionLibrary_h_21_SPARSE_DATA \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestFunctionLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestFunctionLibrary_h_21_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestFunctionLibrary_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTEXTENSION_API UClass* StaticClass<class UQuestFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_QuestFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
