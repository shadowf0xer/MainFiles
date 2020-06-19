// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QUESTEXTENSION_SharedQuest_generated_h
#error "SharedQuest.generated.h already included, missing '#pragma once' in SharedQuest.h"
#endif
#define QUESTEXTENSION_SharedQuest_generated_h

#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_SharedQuest_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSharedQuest_Statics; \
	QUESTEXTENSION_API static class UScriptStruct* StaticStruct();


template<> QUESTEXTENSION_API UScriptStruct* StaticStruct<struct FSharedQuest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_SharedQuest_h


#define FOREACH_ENUM_EQUESTSHARECOMPLETEMODE(op) \
	op(EQuestShareCompleteMode::CompleteIndividually) \
	op(EQuestShareCompleteMode::CompleteWhenOriginal) \
	op(EQuestShareCompleteMode::CompleteWhenAny) 

enum class EQuestShareCompleteMode : uint8;
template<> QUESTEXTENSION_API UEnum* StaticEnum<EQuestShareCompleteMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
