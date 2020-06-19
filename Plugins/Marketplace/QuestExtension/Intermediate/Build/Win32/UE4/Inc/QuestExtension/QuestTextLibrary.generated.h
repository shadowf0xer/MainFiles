// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EQuestArgGender : uint8;
struct FQuestTextArgument;
#ifdef QUESTEXTENSION_QuestTextLibrary_generated_h
#error "QuestTextLibrary.generated.h already included, missing '#pragma once' in QuestTextLibrary.h"
#endif
#define QUESTEXTENSION_QuestTextLibrary_generated_h

#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Text_QuestTextLibrary_h_16_SPARSE_DATA
#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Text_QuestTextLibrary_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConv_GenderToArgument); \
	DECLARE_FUNCTION(execConv_TextToArgument); \
	DECLARE_FUNCTION(execConv_IntToArgument); \
	DECLARE_FUNCTION(execConv_FloatToArgument);


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Text_QuestTextLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConv_GenderToArgument); \
	DECLARE_FUNCTION(execConv_TextToArgument); \
	DECLARE_FUNCTION(execConv_IntToArgument); \
	DECLARE_FUNCTION(execConv_FloatToArgument);


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Text_QuestTextLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestTextLibrary(); \
	friend struct Z_Construct_UClass_UQuestTextLibrary_Statics; \
public: \
	DECLARE_CLASS(UQuestTextLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QuestExtension"), NO_API) \
	DECLARE_SERIALIZER(UQuestTextLibrary)


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Text_QuestTextLibrary_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUQuestTextLibrary(); \
	friend struct Z_Construct_UClass_UQuestTextLibrary_Statics; \
public: \
	DECLARE_CLASS(UQuestTextLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QuestExtension"), NO_API) \
	DECLARE_SERIALIZER(UQuestTextLibrary)


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Text_QuestTextLibrary_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestTextLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestTextLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestTextLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestTextLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestTextLibrary(UQuestTextLibrary&&); \
	NO_API UQuestTextLibrary(const UQuestTextLibrary&); \
public:


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Text_QuestTextLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestTextLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestTextLibrary(UQuestTextLibrary&&); \
	NO_API UQuestTextLibrary(const UQuestTextLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestTextLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestTextLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestTextLibrary)


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Text_QuestTextLibrary_h_16_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Text_QuestTextLibrary_h_13_PROLOG
#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Text_QuestTextLibrary_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Text_QuestTextLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Text_QuestTextLibrary_h_16_SPARSE_DATA \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Text_QuestTextLibrary_h_16_RPC_WRAPPERS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Text_QuestTextLibrary_h_16_INCLASS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Text_QuestTextLibrary_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Text_QuestTextLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Text_QuestTextLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Text_QuestTextLibrary_h_16_SPARSE_DATA \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Text_QuestTextLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Text_QuestTextLibrary_h_16_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Text_QuestTextLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTEXTENSION_API UClass* StaticClass<class UQuestTextLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Text_QuestTextLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
