// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "QuestBase.h"

#include "Engine/ActorChannel.h"
#include "Internationalization/Regex.h"

#include "QuestManagerComponent.h"
#include "QuestGroup.h"
#include "Conditions/QuestCondition.h"
#include "Conditions/ConditionContainer.h"
#include "QuestSubScript.h"


/******************************************************************************
* FQuestPhaseResult
**/

void FQuestPhaseResult::Execute(UQuestManagerComponent& Manager)
{
	for (const auto& Quest : StartQuests)
	{
		Manager.StartQuestAsset(Quest);
	}

	for (const auto& Memory : ApplyMemories)
	{
		Manager.RegistryMemory(Memory);
	}
}


/******************************************************************************
* UQuestBase
**/

UQuestBase::UQuestBase()
	: Super()
{
	bCanStartAfterComplete = false;
	bCanBeShared = true;

	Title = FName("");
	Description = FText();

	StartRequirements = CreateDefaultSubobject<UConditionContainer>(TEXT("StartRequirements"));
	StartRequirements->bAllowsLatentExecution = false;
	StartRequirements->EmptyResult = EConditionState::Success;
}

void UQuestBase::BeginPlay()
{
	//Notify subscripts
	for (auto* SubScript : SubScripts)
	{
		if (SubScript) SubScript->BeginPlay();
	}
}

void UQuestBase::OnStartQuest()
{
	OnStart.Broadcast();

	PostStartQuest();

	//Notify subscripts
	for (auto* SubScript : SubScripts)
	{
		if(SubScript) SubScript->PostStartQuest();
	}
}

void UQuestBase::OnFinishQuest(const EQuestCompletionState State)
{
	OnFinish.Broadcast(State);

	if (State == EQuestCompletionState::Success)
	{
		GetAsset()->OnComplete.Execute(*GetManager());
	}
	else if (State == EQuestCompletionState::Failed)
	{
		GetAsset()->OnFailure.Execute(*GetManager());
	}

	//Notify subscripts
	for (auto* Subscript : SubScripts)
	{
		if (Subscript) Subscript->PostFinishQuest(State);
	}


	PostFinishQuest(State);


	// QUEST SHARING
	{
		//Finish Shared Quests if needed
		for (auto& SharedQuest : SharedChildrens)
		{
			if (SharedQuest.IsValid())
			{
				if (SharedQuest.Mode == EQuestShareCompleteMode::CompleteWhenOriginal ||
					SharedOwner.Mode == EQuestShareCompleteMode::CompleteWhenAny)
				{
					SharedQuest.Quest->Finish(State);
				}
			}
		}

		//Finish SharedOwner if needed
		if (SharedOwner.IsValid())
		{
			if (SharedOwner.Mode == EQuestShareCompleteMode::CompleteWhenAny)
			{
				SharedOwner.Quest->Finish(State);
			}
		}
	}

	MarkPendingKill();
}

void UQuestBase::Finish(const EQuestCompletionState State)
{
	GetManager()->FinishQuest(GetAsset());
}

bool UQuestBase::CanStartQuest(UQuestManagerComponent& Manager, EQuestCompletionState& CurrentState, int32& Index) const
{
	CurrentState = Manager.GetQuestStateAndIndex(GetAsset(), Index);

	bool bCanStart = false;
	switch (CurrentState)
	{
	case EQuestCompletionState::NotStarted:
		bCanStart = true;
		break;

	case EQuestCompletionState::Success:
	case EQuestCompletionState::Failed:
		if (bCanStartAfterComplete)
		{
			bCanStart = true;
		}
		break;
	}

	// Check if subscripts allow this quest to start
	if (bCanStart)
	{
		for (const auto* SubScript : SubScripts)
		{
			if (SubScript)
			{
				bCanStart = SubScript->CanStartQuest(Manager);
				if (!bCanStart)
					break;
			}
		}
	}

	return bCanStart;
}

UQuestManagerComponent* UQuestBase::GetManager() const
{
	UQuestManagerComponent* Quest = Cast<UQuestManagerComponent>(GetOuter());
	if (!Quest && IsValid(ParentQuest)) {
		return ParentQuest->GetManager();
	}
	return Quest;
}

UQuestGroup* UQuestBase::GetParentQuestGroup() const
{
	return ParentQuest;
}

UQuestGroup* UQuestBase::GetRootQuestGroup()
{
	if (UQuestGroup* Quest = GetParentQuestGroup())
	{
		// If the parent is a quest, retrieve it's root quest
		return Quest->GetRootQuestGroup();
	}
	return Cast<UQuestGroup>(this);
}

TSoftObjectPtr<UQuestBase> UQuestBase::GetAsset() const
{
	if (IsAsset())
	{
		return { this };
	}

	return RuntimeInfo.Asset;
}

FText UQuestBase::GetTitle() const
{
	if (!Title.IsNone())
		return FormatText(FText::FromName(Title));

	FString AssetName = GetName();

	//Remove prefixes from Quest naming
	AssetName.RemoveFromStart("Quest_");
	AssetName.RemoveFromStart("QuestGroup_");
	AssetName.RemoveFromStart("Q_");
	AssetName.RemoveFromStart("QG_");

	//Add Space between capital words
	FRegexPattern SpaceCapital(FString("(?<!^)(?>[A-Z])"));
	FRegexMatcher Match( SpaceCapital, AssetName );

	uint8 count = 0;

	while( Match.FindNext() ) {
		int32 pos = Match.GetMatchBeginning();
		AssetName.InsertAt(pos+count, ' ');
		++count;
	}

	return FText::FromString(AssetName);
}

FText UQuestBase::GetDescription() const
{
	return FormatText(Description);
}

void UQuestBase::SetArgument(FName Name, const FQuestTextArgument& Value)
{
	if (Name.IsNone())
		return;

	FQuestTextArgument& Arg = Arguments.FindOrAdd(Name);
	Arg = Value;
}

void UQuestBase::Share(UQuestBase* OtherQuest, EQuestShareCompleteMode Mode)
{
	if (!OtherQuest && !OtherQuest->IsAsset())
		return;

	const FSharedQuest SharedQuest = { OtherQuest, Mode };

	if (!SharedChildrens.Contains(SharedQuest))
	{
		OtherQuest->SharedOwner = { this, Mode };
		SharedChildrens.Add(SharedQuest);
	}
}

void UQuestBase::PostDuplicate(EDuplicateMode::Type DuplicateMode)
{
	Super::PostDuplicate(DuplicateMode);

	if (!GetManager() && DuplicateMode == EDuplicateMode::Normal)
	{
	}
}

UWorld* UQuestBase::GetWorld() const
{
	// If we are a CDO, we must return nullptr instead of calling Outer->GetWorld() to fool UObject::ImplementsGetWorld.
	if (HasAllFlags(RF_ClassDefaultObject))
		return nullptr;

	return GetOuter()->GetWorld();
}


const FText UQuestBase::FormatText(const FText& RawText) const
{
	TMap<FName, FQuestTextArgument> AllArguments;

	const UQuestManagerComponent* Manager = GetManager();
	if (Manager)
	{
		//Append Manager Arguments if found
		AllArguments = Manager->GetArguments();
	}

	//Quest Arguments have priority over Manager's
	AllArguments.Append(Arguments);

	FFormatNamedArguments NativeArguments;
	GenerateNativeArguments(AllArguments, NativeArguments);

	return FText::Format(RawText, NativeArguments);
}

void UQuestBase::GenerateNativeArguments(const TMap<FName, FQuestTextArgument>& InArguments, FFormatNamedArguments& NativeArguments) const
{
	for (const auto& It : InArguments)
	{
		if (!It.Key.IsNone())
		{
			NativeArguments.Add(It.Key.ToString(), It.Value.GetArgument());
		}
	}
}

void UQuestBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UQuestBase, StartRequirements);
	DOREPLIFETIME(UQuestBase, SubScripts);
}

bool UQuestBase::ReplicateSubobjects(class UActorChannel *Channel, class FOutBunch *Bunch, FReplicationFlags *RepFlags)
{
	bool bWroteSomething = false;

	if (StartRequirements != nullptr && !StartRequirements->IsPendingKill())
	{
		bWroteSomething |= Channel->ReplicateSubobject(StartRequirements, *Bunch, *RepFlags);
	}

	for (UQuestSubScript* SubScript : SubScripts)
	{
		if (SubScript != nullptr && !SubScript->IsPendingKill())
		{
			bWroteSomething |= Channel->ReplicateSubobject(SubScript, *Bunch, *RepFlags);
		}
	}
	return bWroteSomething;
}

UQuestBase* UQuestBase::GetParentQuest() const
{
	return Cast<UQuestBase>(GetParentQuestGroup());
}

UQuestBase* UQuestBase::GetRootQuest()
{
	return Cast<UQuestBase>(GetRootQuestGroup());
}
