// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "QGNodes/Execution/QGNode_Finish.h"
#include "QuestGroup.h"
#include "QuestManagerComponent.h"


void UQGNode_Finish::CompleteQuestGroup(bool bSuccess) const
{
	const UQuestGroup* OwnerQuest = GetQuestGroup();
	UQuestManagerComponent* Manager = GetQuestGroup()->GetManager();
	check(Manager);

	Manager->FinishQuest(OwnerQuest->GetAsset(), bSuccess ? EQuestCompletionState::Success : EQuestCompletionState::Failed);
}
