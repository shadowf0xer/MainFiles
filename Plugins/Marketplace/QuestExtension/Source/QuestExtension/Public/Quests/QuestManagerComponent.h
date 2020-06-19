// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "Engine/World.h"
#include "Engine/AssetManager.h"
#include "Engine/StreamableManager.h"
#include "Engine/LatentActionManager.h"
#include "Components/ActorComponent.h"
#include "GameFramework/Actor.h"
#include "Net/UnrealNetwork.h"

#include "Text/QuestTextArgument.h"
#include "QuestBase.h"
#include "QuestGroup.h"
#include "QuestMemory.h"
#include "QuestManagerRecord.h"

#include "QuestManagerComponent.generated.h"

struct FRuntimeQuest;
struct FSharedQuest;
class UWorld;
class UQuest;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAnyQuestStartedDelegate, const FRuntimeQuest&, Quest);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAnyQuestFinishedDelegate, const TSoftObjectPtr<UQuestBase>, QuestAsset, const EQuestCompletionState, State);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMemoryDelegate, const TSoftObjectPtr<UQuestMemory>, Memory, int32, Amount);


/**
 * Contains information about a quest and it's finished state
 */
USTRUCT(BlueprintType)
struct FQuestStateData
{
	GENERATED_USTRUCT_BODY()

	FQuestStateData()
		: Quest{}, State(EQuestCompletionState::NotStarted)
	{}

	FQuestStateData(EQuestCompletionState InState, const TSoftObjectPtr<UQuestBase> InQuest)
		: Quest(InQuest), State(InState)
	{}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = State, SaveGame, meta = (DisplayThumbnail = false))
	TSoftObjectPtr<UQuestBase> Quest;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = State, SaveGame)
	EQuestCompletionState State;


	FORCEINLINE bool IsValid() {
		return Quest != nullptr && State != EQuestCompletionState::None;
	}

	FORCEINLINE bool operator== (const FQuestStateData& Other)	   const { return Quest.IsValid() && Quest == Other.Quest; }
	FORCEINLINE bool operator== (const TSoftObjectPtr<UQuestBase>& Other) const {
		return this->Quest == Other;
	}
};


USTRUCT(BlueprintType)
struct FMemoryStack
{
	GENERATED_USTRUCT_BODY()

	FMemoryStack() {}
	FMemoryStack(const TSoftObjectPtr<UQuestMemory>& InMemory, int32 InAmount = 1)
		: Memory(InMemory), Amount(InAmount)
	{}

	// FIX: TSoftObjectPtr can't be serialized with SaveGame
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stack, SaveGame, meta = (DisplayThumbnail = false))
	TSoftObjectPtr<UQuestMemory> Memory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stack, SaveGame)
	int32 Amount;


	FORCEINLINE bool operator== (const FMemoryStack& Other)			const { return  !Memory.IsNull() && Memory == Other.Memory; }
	FORCEINLINE bool operator== (const TSoftObjectPtr<UQuestMemory>& Other) const { return  !Memory.IsNull() && Memory == Other; }

	friend uint32 GetTypeHash(const FMemoryStack& InStack)
	{
		return GetTypeHash(InStack.Memory);
	}
};


/**
 * Quest Manager Component
 * In charge of controlling all quest states and memories.
 */
UCLASS(ClassGroup = Narrative, meta = (BlueprintSpawnableComponent))
class QUESTEXTENSION_API UQuestManagerComponent : public UActorComponent
{
	GENERATED_UCLASS_BODY()

protected:

	UPROPERTY(EditAnywhere, Category = QuestManager)
	TArray<TSoftObjectPtr<UQuestBase>> DefaultQuests;

	UPROPERTY(EditAnywhere, Replicated, Category = QuestManager, SaveGame, meta = (DisplayName = "Default Memories"))
	TSet<FMemoryStack> Memories;

	/** If set, only Quests of this type (and QuestGroups) will be allowed to be started */
	UPROPERTY(EditAnywhere, Category = QuestManager)
	TSubclassOf<UQuest> QuestTypeFilter;

	UPROPERTY(VisibleAnywhere, Replicated, Category = QuestManager)
	TArray<UQuestBase*> RunningQuests;

	UPROPERTY(VisibleAnywhere, Replicated, Category = QuestManager, SaveGame)
	TArray<FQuestStateData> CompletedQuests;

	/** Arguments to be replaced in quest texts */
	UPROPERTY(EditAnywhere, Category = Text, SaveGame)
	TMap<FName, FQuestTextArgument> Arguments;

public:

	//Delegates

	UPROPERTY(BlueprintAssignable, SaveGame)
	FAnyQuestStartedDelegate OnQuestStarted;

	UPROPERTY(BlueprintAssignable, SaveGame)
	FAnyQuestFinishedDelegate OnQuestFinished;

	UPROPERTY(BlueprintAssignable, SaveGame)
	FMemoryDelegate OnMemoryRegistered;

	UPROPERTY(BlueprintAssignable, SaveGame)
	FMemoryDelegate OnMemoryForgotten;


public:

	/** Sets this manager as the global manager */
	UFUNCTION(BlueprintCallable, Category = Quests)
	void SetAsGlobalManager() {
		if (!IsPendingKill())
		{
			WorldInstances.FindOrAdd(GetWorld()) = this;
		}
	}

	/************
	* Quests	*
	************/

	/**
	 * Starts a quest
	 * @param Asset Quest asset to be started
	 * @param bStarted true if the quest started successfully
	 * @param Quest The script of the started quest
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = Quests, meta = (DisplayName = "Start Quest"))
	void BP_StartQuest(const UQuestBase* Asset, bool& bStarted, UQuestBase*& Quest);

	/**
	* Starts a quest by asset. Will be loaded if needed.
	* @param Quest asset to be started
	*/
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = Quests, meta = (DisplayName = "Start Quest Asset", Latent = "", LatentInfo = "LatentInfo"))
	void BP_StartQuestAsset(const TSoftObjectPtr<UQuestBase> Asset, bool& bStarted, FLatentActionInfo LatentInfo);
	void StartQuestAsset(const TSoftObjectPtr<UQuestBase> Asset);

	/**
	* Starts a quest
	* @param OtherManager asset to be started
	* @param Quest asset to be started
	* @return the quest started
	*/
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = Quests)
	void ShareQuest(UQuestManagerComponent* OtherManager, TSoftObjectPtr<UQuestBase> Quest, EQuestShareCompleteMode CompleteMode);

	/**
	 * Finishes a quest
	 * @param Quest Asset or Instance to finish
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = Quests, meta = (KeyWords = "Complete Fail"))
	void FinishQuest(const TSoftObjectPtr<UQuestBase> Asset, const EQuestCompletionState State = EQuestCompletionState::Success);

	/**
	* Checks if a Quest can be started
	* @param Quest Asset or Quest Script
	* @return true if the quest can be started
	*/
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = Quests)
	FORCEINLINE bool CanStartQuest(UQuestBase* Quest) {
		int32 Index; EQuestCompletionState State;
		return Quest && Quest->CanStartQuest(*this, State, Index);
	}


	/****************
	* Quest Helpers *
	****************/

	/**
	 * Gets the state of a Quest
	 * @param Quest
	 * @return the state of a Quest
	 */
	UFUNCTION(BlueprintPure, Category = Quests)
	EQuestCompletionState GetQuestState(const TSoftObjectPtr<UQuestBase> Quest) const;

	/**
	* Gets the script of an started Quest
	* @param Quest
	* @return the script of a Quest
	*/
	UFUNCTION(BlueprintPure, Category = Quests, meta = (DeterminesOutputType = "Quest"))
	UQuestBase* GetQuestScript(const TSoftObjectPtr<UQuestBase> Quest) const;

	/**
	 * Returns true if the quest is started
	 * @param Quest
	 */
	UFUNCTION(BlueprintPure, Category = Quests)
	FORCEINLINE bool IsNotStarted(const TSoftObjectPtr<UQuestBase> Quest) {
		return GetQuestState(Quest) == EQuestCompletionState::NotStarted;
	}

	/**
	 * Returns true if the quest is in progress
	 * @param Quest
	 */
	UFUNCTION(BlueprintPure, Category = Quests, meta = (KeyWords = "Running"))
	FORCEINLINE bool IsInProgress(const TSoftObjectPtr<UQuestBase> Quest) {
		return GetQuestState(Quest) == EQuestCompletionState::InProgress;
	}

	/**
	 * Returns true if the quest is finished
	 * @param Quest
	 */
	UFUNCTION(BlueprintPure, Category = Quests)
	FORCEINLINE bool IsFinished(const TSoftObjectPtr<UQuestBase> Quest) {
		const EQuestCompletionState State = GetQuestState(Quest);
		return State == EQuestCompletionState::Success
			|| State == EQuestCompletionState::Failed;
	}

	/**
	 * Returns true if the quest is finished and completed
	 * @param Quest
	 */
	UFUNCTION(BlueprintPure, Category = Quests)
	FORCEINLINE bool IsCompleted(const TSoftObjectPtr<UQuestBase> Quest) {
		return GetQuestState(Quest) == EQuestCompletionState::Success;
	}

	/**
	 * @param Quest
	 * @return true if the quest is finished and failed
	 */
	UFUNCTION(BlueprintPure, Category = Quests)
	FORCEINLINE bool IsFailed(const TSoftObjectPtr<UQuestBase> Quest) {
		return GetQuestState(Quest) == EQuestCompletionState::Failed;
	}

	/**
	* @param IncludeQuestGroups includes QuestGroups in the result
	* @return Quests currently running
	* @Note: This function will be more performant with IncludeQuestGroups checked
	*/
	UFUNCTION(BlueprintPure, Category = Quests)
	void GetRunningQuests(TArray<FRuntimeQuest>& Quests, bool bIncludeQuestGroups = true);

	/**
	* @param Quest
	* @return true if the quest is finished and failed
	*/
	UFUNCTION(BlueprintPure, Category = Quests)
	void GetRunningQuestGroups(TArray<UQuestGroup*>& Quests);

	/**
	* @param Quest
	* @return true if the quest is finished and failed
	*/
	UFUNCTION(BlueprintPure, Category = Quests)
	void GetCompletedQuests(TArray<FQuestStateData>& Quests);


	/***********
	* Memories *
	***********/

	/* Registry a single memory. If it already is, count will be incremented by 1 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = Quests)
	void RegistryMemory(const TSoftObjectPtr<UQuestMemory> Memory) {
		RegistryMemories(Memory, 1);
	}

	/* Registry a memory 'amount' times. If it already is, count will be incremented by 'amount' */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = Quests)
	void RegistryMemories(const TSoftObjectPtr<UQuestMemory> Memory, int32 Amount = 1);

	/// Forgets an amount of memories. 1 by default
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = Quests)
	void ForgetMemory(const TSoftObjectPtr<UQuestMemory> Memory, int32 Amount = 1);

	/// Forgets all memories
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = Quests)
	void ForgetAllMemories(const TSoftObjectPtr<UQuestMemory> Memory);

	/// Checks if there are 1 or more memories registered
	UFUNCTION(BlueprintPure, Category = Quests)
	bool IsMemoryRegistered(const TSoftObjectPtr<UQuestMemory> Memory) const;

	/// Returns the registered amount of a certain memory
	UFUNCTION(BlueprintPure, Category = Quests)
	int32 GetMemoryCount(const TSoftObjectPtr<UQuestMemory> Memory) const;


	/******************
	* Text Formatting *
	******************/

	/** Set a text argument in runtime */
	UFUNCTION(BlueprintCallable, Category = Quests)
	void SetArgument(FName Name, const FQuestTextArgument& Value);


	/** Resets this Quest Manager's state to default removing all its quests */
	UFUNCTION(BlueprintCallable, Category = Quests)
	void Reset();


	/*********************************
	* Dump & Restore - Serialization *
	**********************************/

	/** Dump current quest manager state into a record. This record can be saved with SaveGame objects */
	UFUNCTION(BlueprintCallable, Category = Quests)
	void DumpRecord(FQuestManagerRecord& Record);

	/** Restores a saved quest manager state from the record */
	UFUNCTION(BlueprintCallable, Category = Quests)
	bool RestoreRecord(const FQuestManagerRecord& Record);



	// Called when the game starts
	virtual void BeginPlay() override;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	/**
	 * Allows Subobject replication on a UObject, must be explicitly called from owning object.
	 * param Channel
	 * param Bunch
	 * param RepFlags  */
	virtual bool ReplicateSubobjects(class UActorChannel *Channel, class FOutBunch *Bunch, FReplicationFlags *RepFlags) override;

protected:

	virtual void FinishDestroy() override;

public:

	virtual void Serialize(FArchive& Ar) override;

	/**
	* Starts a quest
	* @param Quest asset to be started
	* @return the started quest
	*/
	const FRuntimeQuest StartQuest(const UQuestBase* Asset, UQuestGroup* ParentQuestGroup = nullptr) { return Internal_StartQuest(Asset, ParentQuestGroup, false); }

	const EQuestCompletionState GetQuestStateAndIndex(const TSoftObjectPtr<UQuestBase> Asset, int32& FoundIndex) const;

	const TMap<FName, FQuestTextArgument>& GetArguments() const { return Arguments; }

	bool RequestQuestLoad(TSoftObjectPtr<UQuestBase> Quest, FStreamableDelegate Delegate);

protected:

	void StartDefaultQuests();

	const FRuntimeQuest Internal_StartQuest(const UQuestBase* Asset, UQuestGroup* ParentQuestGroup, bool bFromSerialization);

public:

	bool HasAuthority() const { return GetOwner()->HasAuthority(); }


	/**
	 * Singleton
	 */
	static UQuestManagerComponent* Get(UWorld* World) {
		const auto* Instance = WorldInstances.Find(World);
		if (Instance && Instance->IsValid()) {
			return Instance->Get();
		}
		return nullptr;
	}

private:

	static TMap<TWeakObjectPtr<const UWorld>, TWeakObjectPtr<UQuestManagerComponent>> WorldInstances;

	friend FQuestExtensionArchive;
};
