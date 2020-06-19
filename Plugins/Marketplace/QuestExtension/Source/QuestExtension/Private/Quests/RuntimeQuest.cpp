// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "RuntimeQuest.h"

#include "QuestBase.h"
#include "QuestManagerComponent.h"


/******************************************************************************
* FRuntimeQuest
**/

FRuntimeQuest::FRuntimeQuest(UQuestManagerComponent* const InManager, UQuestBase* const Script, const UQuestBase* const InAsset)
	: Manager(InManager), Asset(InAsset), QuestScript(Script)
{
}

UQuestBase* FRuntimeQuest::GetScript() const
{
	return QuestScript;
}

TSoftObjectPtr<UQuestBase> FRuntimeQuest::GetAsset() const
{
	return Asset->GetAsset();
}
