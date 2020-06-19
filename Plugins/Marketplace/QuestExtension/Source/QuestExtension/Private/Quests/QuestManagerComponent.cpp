// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "QuestManagerComponent.h"

#include "Engine/ActorChannel.h"
#include "Serialization/MemoryReader.h"

#include "Quest.h"
#include "RuntimeQuest.h"
#include "SharedQuest.h"
#include "LoadQuestAction.h"

#if WITH_EDITOR
#include "Framework/Notifications/NotificationManager.h"
#include "Widgets/Notifications/SNotificationList.h"
#endif

#define LOCTEXT_NAMESPACE "QuestManager"


TMap<TWeakObjectPtr<const UWorld>, TWeakObjectPtr<UQuestManagerComponent>> UQuestManagerComponent::WorldInstances {};


UQuestManagerComponent::UQuestManagerComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{}

// Called when the game starts
void UQuestManagerComponent::BeginPlay()
{
	Super::BeginPlay();

	//Setup singleton
	const auto* Instance = WorldInstances.Find(GetWorld());
	if (!Instance || !Instance->IsValid())
	{
		SetAsGlobalManager();
	}

	for (auto* QuestScript : RunningQuests)
	{
		if(QuestScript)
		{
			QuestScript->BeginPlay();
		}
	}

	StartDefaultQuests();
}

void UQuestManagerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	DOREPLIFETIME(UQuestManagerComponent, Memories);
	DOREPLIFETIME(UQuestManagerComponent, RunningQuests);
	DOREPLIFETIME(UQuestManagerComponent, CompletedQuests);

	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

bool UQuestManagerComponent::ReplicateSubobjects(class UActorChannel *Channel, class FOutBunch *Bunch, FReplicationFlags *RepFlags)
{
	bool bWroteSomething = Super::ReplicateSubobjects(Channel, Bunch, RepFlags);

	for (UQuestBase* RunningQuest : RunningQuests)
	{
		if (RunningQuest)
		{
			bWroteSomething |= RunningQuest->ReplicateSubobjects(Channel, Bunch, RepFlags);
			bWroteSomething |= Channel->ReplicateSubobject(RunningQuest, *Bunch, *RepFlags);
		}
	}
	return bWroteSomething;
}

void UQuestManagerComponent::FinishDestroy()
{
	const UWorld* World = GetWorld();

	//Reset the instance in this world if its the same or invalid
	const auto* Instance = WorldInstances.Find(World);
	if (Instance && (!Instance->IsValid() || Instance->Get() == this))
	{
		WorldInstances.Remove(World);
	}

	Super::FinishDestroy();
}

void UQuestManagerComponent::Serialize(FArchive& Ar)
{
	FQuestExtensionArchive* QEAr = static_cast<FQuestExtensionArchive*>(&Ar);

	//If using SaveGame and not by a QuestExtensionArchive, redirect serialization to it
	if (Ar.IsSaveGame() && !QEAr)
	{
		if (Ar.IsSaving())
		{
			FQuestManagerRecord Record;
			DumpRecord(Record);
			Record.Serialize(Ar);
		}
		else if (Ar.IsLoading())
		{
			FQuestManagerRecord Record;
			Record.Serialize(Ar);
			RestoreRecord(Record);
		}
	}
	else
	{
		Super::Serialize(Ar);
	}
}

const FRuntimeQuest UQuestManagerComponent::Internal_StartQuest(const UQuestBase* Asset, UQuestGroup* ParentQuestGroup, bool bFromSerialization)
{
	// Only on server side
	if (!HasAuthority())
		return FRuntimeQuest();

	// If asset is not valid, or asset is not child of filter's type
	if (!IsValid(Asset) ||
		(QuestTypeFilter.Get() && !Asset->GetClass()->IsChildOf(QuestTypeFilter)))
	{
		return FRuntimeQuest();
	}

	// We cache quest state to avoid searching twice over the arrays
	EQuestCompletionState CurrentState;
	int32 CurrentIndex;

	if(!Asset->CanStartQuest(*this, CurrentState, CurrentIndex))
	{
		return FRuntimeQuest();
	}

	// Is the quest completed and still starting it? Clean it
	if (CurrentState == EQuestCompletionState::Success || CurrentState == EQuestCompletionState::Failed)
	{
		CompletedQuests.RemoveAt(CurrentIndex);
	}


	// Start Quest

	// Create a deep copy of the asset. We don't want a shallow copy or a shared object!
	UQuestBase* QuestScript = UQuestBase::NewFromAssetTemplate(Asset, this);
	check(QuestScript);
	QuestScript->SetRuntimeInfo(Asset, ParentQuestGroup);

	RunningQuests.Add(QuestScript);

	const FRuntimeQuest& RQuest = QuestScript->GetRuntimeInfo();

	QuestScript->BeginPlay();
	if (!bFromSerialization)
	{
		OnQuestStarted.Broadcast(RQuest);
		QuestScript->OnStartQuest();
	}
	return RQuest;
}

void UQuestManagerComponent::BP_StartQuest(const UQuestBase* Asset, bool& bStarted, UQuestBase*& Quest)
{
	if (!Asset || !Asset->IsAsset()) {
		bStarted = false;
		return;
	}

	Quest = StartQuest(Asset).GetScript();
	bStarted = Quest != nullptr;
}

void UQuestManagerComponent::BP_StartQuestAsset(const TSoftObjectPtr<UQuestBase> Asset, bool& bStarted, FLatentActionInfo LatentInfo)
{
	UWorld* World = GetWorld();
	if (World)
	{
		FLatentActionManager& LatentManager = World->GetLatentActionManager();
		if (LatentManager.FindExistingAction<FLoadQuestAction>(LatentInfo.CallbackTarget, LatentInfo.UUID) == nullptr)
		{
			FLoadQuestAction* NewAction = new FLoadQuestAction(this, Asset, bStarted, LatentInfo);
			LatentManager.AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, NewAction);
		}
	}
}

void UQuestManagerComponent::StartQuestAsset(const TSoftObjectPtr<UQuestBase> Asset)
{
	RequestQuestLoad(Asset, FStreamableDelegate::CreateLambda([this, Asset]()
	{
		const UQuestBase* Quest = Asset.Get();
		check(Quest);
		StartQuest(Quest);
	}));
}

void UQuestManagerComponent::ShareQuest(UQuestManagerComponent* OtherManager, TSoftObjectPtr<UQuestBase> Quest, EQuestShareCompleteMode CompleteMode)
{
	if (!HasAuthority() || !IsValid(OtherManager) || OtherManager == this)
		return;

	int32 FoundIndex;
	if (GetQuestStateAndIndex(Quest, FoundIndex) == EQuestCompletionState::InProgress)
	{
		UQuestBase* OwnedQuest = RunningQuests[FoundIndex];

		if(OwnedQuest->IsShareable())
		{
			const FRuntimeQuest QuestInfo = OtherManager->StartQuest(Quest.Get());
			if (QuestInfo.IsValid())
			{
				OwnedQuest->Share(QuestInfo.GetScript(), CompleteMode);
			}
		}
	}
}

void UQuestManagerComponent::FinishQuest(const TSoftObjectPtr<UQuestBase> Asset, const EQuestCompletionState State /*= EQuestCompletionState::Success*/)
{
	//Couldn't be started if Quest is not loaded!
	if (!Asset.IsValid())
		return;

	if (!HasAuthority() || (State != EQuestCompletionState::Success && State != EQuestCompletionState::Failed))
		return;

	int32 FoundIndex;
	if (GetQuestStateAndIndex(Asset, FoundIndex) == EQuestCompletionState::InProgress)
	{
		check(FoundIndex != INDEX_NONE); //State should not be Running!

		UQuestBase* Script = RunningQuests[FoundIndex];

		CompletedQuests.AddUnique(FQuestStateData( State, Script->GetAsset() ));
		RunningQuests.RemoveAt(FoundIndex);

		//Delegates
		Script->OnFinishQuest(State);
		Script->MarkPendingKill();

		OnQuestFinished.Broadcast(Script->GetAsset(), State);
	}
}

EQuestCompletionState UQuestManagerComponent::GetQuestState(const TSoftObjectPtr<UQuestBase> Asset) const
{
	int32 I;
	return GetQuestStateAndIndex(Asset, I);
}

UQuestBase* UQuestManagerComponent::GetQuestScript(const TSoftObjectPtr<UQuestBase> Quest) const
{
	if (Quest.IsValid()) {
		UQuestBase* const * QuestScriptPtr = RunningQuests.FindByPredicate([Quest](auto* RunningQuest)
		{
			return RunningQuest && RunningQuest->EqualsAsset(Quest);
		});

		if (QuestScriptPtr)
		{
			return *QuestScriptPtr;
		}
	}

	return nullptr;
}

const EQuestCompletionState UQuestManagerComponent::GetQuestStateAndIndex(const TSoftObjectPtr<UQuestBase> Asset, int32& FoundIndex) const
{
	if (Asset.IsNull())
		return EQuestCompletionState::None;

	if (Asset.IsValid()) {
		//Check if quest is Running
		FoundIndex = RunningQuests.IndexOfByPredicate([Asset](auto* RunningQuest)
			{ return RunningQuest && RunningQuest->EqualsAsset(Asset); });

		if (FoundIndex != INDEX_NONE)
		{
			return EQuestCompletionState::InProgress;
		}
	}

	//Check if quest is Completed
	FoundIndex = CompletedQuests.IndexOfByKey(Asset);

	if (FoundIndex != INDEX_NONE)
	{
		return CompletedQuests[FoundIndex].State;
	}

	return EQuestCompletionState::NotStarted;
}

void UQuestManagerComponent::GetRunningQuests(TArray<FRuntimeQuest>& Quests, bool bIncludeQuestGroups)
{
	if (bIncludeQuestGroups)
	{
		Quests.Reserve(RunningQuests.Num());

		for (const auto* Quest : RunningQuests)
		{
			if (Quest)
			{
				Quests.Add(Quest->GetRuntimeInfo());
			}
		}
	}
	else
	{
		for (const auto* Quest : RunningQuests)
		{
			if (Quest && !Quest->IsA<UQuestGroup>())
			{
				Quests.Add(Quest->GetRuntimeInfo());
			}
		}
	}
}

void UQuestManagerComponent::GetRunningQuestGroups(TArray<UQuestGroup*>& Quests)
{
	for (auto* Quest : RunningQuests)
	{
		if (UQuestGroup* QG = Cast<UQuestGroup>(Quest))
		{
			Quests.Add(QG);
		}
	}
}

void UQuestManagerComponent::GetCompletedQuests(TArray<FQuestStateData>& Quests)
{
	Quests.Append(CompletedQuests);
}

void UQuestManagerComponent::RegistryMemories(const TSoftObjectPtr<UQuestMemory> Memory, int32 Amount /*= 1*/)
{
	if (Memory.IsNull() || Amount < 1)
		return;

	FSetElementId MemoryId = Memories.FindId(Memory);
	if (!MemoryId.IsValidId())
	{
		MemoryId = Memories.Add({ Memory, Amount });
	}
	else
	{
		Memories[MemoryId].Amount += Amount;
	}

	if (MemoryId.IsValidId()) {
		OnMemoryRegistered.Broadcast(Memory, Amount);
	}
}

void UQuestManagerComponent::ForgetMemory(const TSoftObjectPtr<UQuestMemory> Memory, int32 Amount)
{
	if (!Memory.IsNull() || Amount < 1)
		return;

	FMemoryStack* MemoryStack = Memories.Find(Memory);
	if (MemoryStack)
	{
		int32 RemovedAmount = MemoryStack->Amount;
		MemoryStack->Amount -= Amount;

		if (MemoryStack->Amount > 0)
		{
			RemovedAmount = Amount;
		}
		else
		{
			//No Amount left. Remove the memory
			Memories.Remove(Memory);
		}

		OnMemoryForgotten.Broadcast(Memory, RemovedAmount);
	}
}

void UQuestManagerComponent::ForgetAllMemories(const TSoftObjectPtr<UQuestMemory> Memory)
{
	Memories.Remove(Memory);
}

bool UQuestManagerComponent::IsMemoryRegistered(const TSoftObjectPtr<UQuestMemory> Memory) const
{
	if (Memory.IsNull())
		return false;

	return Memories.Contains(Memory);
}

int32 UQuestManagerComponent::GetMemoryCount(const TSoftObjectPtr<UQuestMemory> Memory) const
{
	if (Memory.IsNull())
		return 0;

	const FMemoryStack* MemoryStack = Memories.Find(Memory);
	return MemoryStack? MemoryStack->Amount : 0;
}

void UQuestManagerComponent::SetArgument(FName Name, const FQuestTextArgument& Value)
{
	if (Name.IsNone())
		return;

	FQuestTextArgument& Arg = Arguments.FindOrAdd(Name);
	Arg = Value;
}

void UQuestManagerComponent::Reset()
{
	for (auto* Quest : RunningQuests) {
		if (Quest)
		{
			Quest->MarkPendingKill();
		}
	}

	RunningQuests.Empty();
	CompletedQuests.Empty();
	Memories.Empty();

	StartDefaultQuests();
}

void UQuestManagerComponent::DumpRecord(FQuestManagerRecord& Record)
{
	FQuestExtensionArchive::Save(*this, Record);
}

bool UQuestManagerComponent::RestoreRecord(const FQuestManagerRecord& Record)
{
	return FQuestExtensionArchive::Load(*this, Record);
}

void UQuestManagerComponent::StartDefaultQuests()
{
	for (const auto& Quest : DefaultQuests) {
		StartQuestAsset(Quest);
	}
}

bool UQuestManagerComponent::RequestQuestLoad(const TSoftObjectPtr<UQuestBase> Quest, FStreamableDelegate Delegate)
{
	if(Quest.IsNull())
	{
		return false;
	}
	else if (Quest.IsValid())
	{
		Delegate.ExecuteIfBound();
	}
	else
	{
		FStreamableManager& StreamableManager = UAssetManager::Get().GetStreamableManager();

		StreamableManager.RequestAsyncLoad( Quest.ToSoftObjectPath(), Delegate);
	}
	return true;
}

#undef LOCTEXT_NAMESPACE
