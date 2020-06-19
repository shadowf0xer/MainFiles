// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QUESTEXTENSION_QuestTextArgument_generated_h
#error "QuestTextArgument.generated.h already included, missing '#pragma once' in QuestTextArgument.h"
#endif
#define QUESTEXTENSION_QuestTextArgument_generated_h

#define HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Text_QuestTextArgument_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQuestTextArgument_Statics; \
	QUESTEXTENSION_API static class UScriptStruct* StaticStruct();


template<> QUESTEXTENSION_API UScriptStruct* StaticStruct<struct FQuestTextArgument>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_QuestExtension_Source_QuestExtension_Public_Quests_Text_QuestTextArgument_h


#define FOREACH_ENUM_EQUESTARGTYPE(op) \
	op(EQuestArgType::Int) \
	op(EQuestArgType::Float) \
	op(EQuestArgType::Text) \
	op(EQuestArgType::Gender) 

enum class EQuestArgType : uint8;
template<> QUESTEXTENSION_API UEnum* StaticEnum<EQuestArgType>();

#define FOREACH_ENUM_EQUESTARGGENDER(op) \
	op(EQuestArgGender::Masculine) \
	op(EQuestArgGender::Feminine) \
	op(EQuestArgGender::Neuter) 

enum class EQuestArgGender : uint8;
template<> QUESTEXTENSION_API UEnum* StaticEnum<EQuestArgGender>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
