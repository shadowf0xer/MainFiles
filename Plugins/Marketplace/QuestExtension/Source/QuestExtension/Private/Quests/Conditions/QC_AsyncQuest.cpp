// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "Conditions/QC_AsyncQuest.h"

UQC_AsyncQuest::UQC_AsyncQuest()
	: Super(),
	ExpectedState(EQuestCompletionState::Success),
	bInverseCondition(false)
{}

void UQC_AsyncQuest::Check()
{
	UQuestManagerComponent* Manager { GetQuestManager() };

	if(!Manager || Quest.IsNull())
	{
		Complete(EConditionState::Failed);
		return;
	}

	if((Manager->GetQuestState(Quest) == ExpectedState) ^ bInverseCondition)
	{
		Complete(EConditionState::Success);
		return;
	}

	Manager->OnQuestStarted.RemoveAll(this);
	Manager->OnQuestFinished.RemoveAll(this);
	Manager->OnQuestStarted.AddDynamic(this, &UQC_AsyncQuest::OnQuestStarted);
	Manager->OnQuestFinished.AddDynamic(this, &UQC_AsyncQuest::OnQuestFinished);
}

void UQC_AsyncQuest::CancelCheck()
{
	UQuestManagerComponent* Manager{ GetQuestManager() };
	if (Manager)
	{
		Manager->OnQuestStarted.RemoveAll(this);
		Manager->OnQuestFinished.RemoveAll(this);
	}
	Super::CancelCheck();
}

void UQC_AsyncQuest::OnQuestStarted(const FRuntimeQuest& InQuest)
{
	if (InQuest.GetAsset() == Quest)
	{
		if ((EQuestCompletionState::InProgress == ExpectedState) ^ bInverseCondition)
		{
			UnbindDelegates();
			Complete(EConditionState::Success);
			return;
		}
	}
}

void UQC_AsyncQuest::OnQuestFinished(const TSoftObjectPtr<UQuestBase> InQuestAsset, const EQuestCompletionState State)
{
	if (InQuestAsset == Quest)
	{
		if ((State == ExpectedState) ^ bInverseCondition)
		{
			UnbindDelegates();
			Complete(EConditionState::Success);
			return;
		}
	}
}

void UQC_AsyncQuest::UnbindDelegates()
{
	UQuestManagerComponent* Manager{ GetQuestManager() };
	check(Manager);

	//Unbind events
	Manager->OnQuestStarted.RemoveDynamic(this, &UQC_AsyncQuest::OnQuestStarted);
	Manager->OnQuestFinished.RemoveDynamic(this, &UQC_AsyncQuest::OnQuestFinished);
}

FText UQC_AsyncQuest::GetDescription() const
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
