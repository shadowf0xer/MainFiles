// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "SharedQuest.h"

#include "QuestManagerComponent.h"
#include "QuestBase.h"


/******************************************************************************
* FSharedQuest
**/

FSharedQuest::FSharedQuest(UQuestBase* const InQuest, EQuestShareCompleteMode InMode)
	: Quest(InQuest), Mode(InMode)
{}
