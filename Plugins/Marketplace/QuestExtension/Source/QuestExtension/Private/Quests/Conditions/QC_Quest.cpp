// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "Conditions/QC_Quest.h"

UQC_Quest::UQC_Quest()
	: Super(),
	ExpectedState(EQuestCompletionState::Success),
	bInverseCondition(false)
{}

void UQC_Quest::Check()
{
	if(!GetQuestManager() || Quest.IsNull())
	{
		Complete(EConditionState::Failed);
		return;
	}

	if((GetQuestManager()->GetQuestState(Quest) == ExpectedState) ^ bInverseCondition)
	{
		Complete(EConditionState::Success);
		return;
	}

	Complete(EConditionState::Failed);
}

FText UQC_Quest::GetDescription() const
{
	FString State;
	switch (ExpectedState)
	{
	case EQuestCompletionState::Success:
		State = "Succeeded";
		break;
	case EQuestCompletionState::Failed:
		State = "Failed";
		break;
	case EQuestCompletionState::InProgress:
		State = "In Progress";
		break;
	case EQuestCompletionState::NotStarted:
		State = "Not Started";
		break;
	}

	FString Negate = bInverseCondition? TEXT("not ") : TEXT("");

	const FString Guide = FString::Printf(TEXT("%s is %s%s"), *Quest.GetAssetName(), *Negate, *State);
	return FText::FromString(Guide);
}
