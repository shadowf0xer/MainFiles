// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "Quest.h"

#include "Engine/ActorChannel.h"
#include "Internationalization/Regex.h"

#include "Conditions/ConditionContainer.h"


/******************************************************************************
* UQuest
**/

UQuest::UQuest()
	: Super()
{
	CompleteConditions = CreateDefaultSubobject<UConditionContainer>(TEXT("CompleteConditions"));
}

void UQuest::PostStartQuest()
{
	CheckCompletion();

	ReceiveStart();
}

void UQuest::CheckCompletion()
{
	if (IsValid(CompleteConditions))
	{
		//Run conditions
		FConditionCompleteDel OnCompleted;
		OnCompleted.BindDynamic(this, &UQuest::OnConditionCompleted);
		CompleteConditions->StartLatentCheck(OnCompleted);
	}
}

void UQuest::PostFinishQuest(const EQuestCompletionState State)
{
	ReceiveFinish(State);
}

bool UQuest::CanStartQuest(UQuestManagerComponent& Manager, EQuestCompletionState& CurrentState, int32& Index) const
{
	if (Super::CanStartQuest(Manager, CurrentState, Index))
	{
		if (!IsValid(StartRequirements))
			return false;

		StartRequirements->SetCustomQuestManager(&Manager);
		return StartRequirements->StartInstantCheck() == EConditionState::Success;
	}
	return false;
}

void UQuest::FinishQuest(const EQuestCompletionState State)
{
	GetManager()->FinishQuest(this->GetAsset(), State);
}

void UQuest::OnConditionCompleted(EConditionState Result)
{
	if(Result == EConditionState::Success)
	{
		FinishQuest(EQuestCompletionState::Success);
	}
}

void UQuest::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UQuest, CompleteConditions);
}

bool UQuest::ReplicateSubobjects(class UActorChannel *Channel, class FOutBunch *Bunch, FReplicationFlags *RepFlags)
{
	bool bWroteSomething = Super::ReplicateSubobjects(Channel, Bunch, RepFlags);

	// Replicate Conditions
	if (CompleteConditions != nullptr && !CompleteConditions->IsPendingKill())
	{
		bWroteSomething |= Channel->ReplicateSubobject(CompleteConditions, *Bunch, *RepFlags);
	}

	return bWroteSomething;
}
