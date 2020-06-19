// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/TextProperty.h"
#include "Net/UnrealNetwork.h"

#include "QuestMemory.h"
#include "RuntimeQuest.h"
#include "SharedQuest.h"
#include "Text/QuestTextArgument.h"

#include "BpPrimaryDataAsset.h"

#include "QuestBase.generated.h"


class UQuestBase;
class UQuestGroup;
class UQuestCondition;
class UConditionContainer;
class UQuestManagerComponent;

UENUM(BlueprintType)
enum class EQuestCompletionState : uint8
{
	NotStarted, // Quest phase is not started
	InProgress, // Quest phase is in progress
	Success,	// Quest phase is completed successfully
	Failed,	 // Quest phase is failed
	None UMETA(hidden)
};


/**
 * Defines the consequences of finishing a quest phase
 */
USTRUCT()
struct FQuestPhaseResult
{
	GENERATED_USTRUCT_BODY()

	FQuestPhaseResult() {}

	void Execute(UQuestManagerComponent& Manager);


	UPROPERTY(EditAnywhere, Category = Result)
	TArray<TSoftObjectPtr<UQuestBase>> StartQuests;

	UPROPERTY(EditAnywhere, Category = Result)
	TArray<TSoftObjectPtr<UQuestMemory>> ApplyMemories;
};


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FQuestStartedDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FQuestFinishedDelegate, const EQuestCompletionState, State);


UCLASS(Abstract, BlueprintType, config = Game)
class QUESTEXTENSION_API UQuestBase : public UBpPrimaryDataAsset
{
	GENERATED_BODY()

public:

	UQuestBase();


protected:

	/**
	* Quest Asset Properties
	*/

	UPROPERTY(EditDefaultsOnly, Category = Quest, Config)
	bool bCanStartAfterComplete;

	UPROPERTY(EditDefaultsOnly, Category = Quest, Config)
	bool bCanBeShared;

	UPROPERTY(EditDefaultsOnly, Category = Properties)
	FName Title;

	UPROPERTY(EditDefaultsOnly, Category = Properties, meta = (MultiLine = "true"))
	FText Description;

	/** Arguments to be replaced in quest texts. These have priority over Manager arguments. */
	UPROPERTY(EditAnywhere, AdvancedDisplay, Category = Properties)
	TMap<FName, FQuestTextArgument> Arguments;


	/**
	 * Quest Script Properties
	 */

	UPROPERTY(SaveGame)
	FRuntimeQuest RuntimeInfo;

	UPROPERTY(SaveGame)
	FSharedQuest SharedOwner;

	UPROPERTY(SaveGame)
	TArray<FSharedQuest> SharedChildrens;

	UPROPERTY(EditInstanceOnly, Replicated, Instanced, Category = Quest, SaveGame)
	UConditionContainer* StartRequirements;

	UPROPERTY(EditAnywhere, Replicated, Category = Quest, Instanced, SaveGame)
	TArray<class UQuestSubScript*> SubScripts;

	UPROPERTY(EditAnywhere, Category = Quest, SaveGame)
	FQuestPhaseResult OnComplete;

	UPROPERTY(EditAnywhere, Category = Quest, SaveGame)
	FQuestPhaseResult OnFailure;

	UPROPERTY(SaveGame)
	UQuestGroup* ParentQuest;

public:

	UPROPERTY(BlueprintAssignable, SaveGame)
	FQuestStartedDelegate OnStart;

	UPROPERTY(BlueprintAssignable, SaveGame)
	FQuestFinishedDelegate OnFinish;


	/** Called when the game starts, when this quest is started or when the quest gets loaded */
	virtual void BeginPlay();

	// Finished this quest
	void Finish(const EQuestCompletionState State);

	virtual bool CanStartQuest(UQuestManagerComponent& Manager, EQuestCompletionState& CurrentState, int32& Index) const;

	//Called when the quest starts
	void OnStartQuest();

	//Called when the quest finishes
	void OnFinishQuest(const EQuestCompletionState State);

	UFUNCTION(BlueprintPure, Category = Properties)
	FText GetTitle() const;

	UFUNCTION(BlueprintPure, Category = Properties)
	FText GetDescription() const;

	UFUNCTION(BlueprintPure, Category = Quest)
	const FText FormatText(const FText& RawText) const;

	/** Set a text argument in runtime */
	UFUNCTION(BlueprintCallable, Category = Quest)
	void SetArgument(FName Name, const FQuestTextArgument& Value);

	UFUNCTION(BlueprintPure, Category = Quest)
	UQuestManagerComponent* GetManager() const;

	/** @return the quest group containing this quest, if any */
	UFUNCTION(BlueprintPure, Category = Quest)
	UQuestGroup* GetParentQuestGroup() const;

	/** @return the first quest group running this quest */
	UFUNCTION(BlueprintPure, Category = Quest)
	UQuestGroup* GetRootQuestGroup();

	FORCEINLINE void SetRuntimeInfo(const UQuestBase* const Asset, UQuestGroup* InParentQuest) {
		RuntimeInfo = FRuntimeQuest(GetManager(), this, Asset);
		ParentQuest = InParentQuest;
	}

	FORCEINLINE FRuntimeQuest GetRuntimeInfo() const { return RuntimeInfo; }

	UFUNCTION(BlueprintPure, Category = "Quest|Properties")
	TSoftObjectPtr<UQuestBase> GetAsset() const;

	/** Check if this Quest equals another Quest by ID */
	UFUNCTION(BlueprintPure, Category = "Quest|Properties", meta = (DisplayName = "Equals(asset)"))
	FORCEINLINE bool EqualsAsset(TSoftObjectPtr<UQuestBase> Other) const
	{
		return Other && GetAsset() == Other;
	}

	/** Check if this Quest equals another Quest by ID */
	UFUNCTION(BlueprintPure, Category = "Quest|Properties")
	FORCEINLINE bool Equals(const UQuestBase* Other) const
	{
		const auto& Asset = GetAsset();
		return Other && Asset && Asset == Other->GetAsset();
	}

	/** Check if this quest can be shared */
	UFUNCTION(BlueprintPure, Category = "Quest|Properties")
	FORCEINLINE bool IsShareable() const { return bCanBeShared; }

	/** Check if this Quest is shared from another Quest Manager */
	UFUNCTION(BlueprintPure, Category = "Quest|Properties")
	FORCEINLINE bool IsShared() const { return SharedOwner.IsValid(); }

	void Share(UQuestBase* OtherQuest, EQuestShareCompleteMode Mode);


protected:

	virtual void PostStartQuest() {}

	virtual void PostFinishQuest(const EQuestCompletionState State) {}

	virtual void PostDuplicate(EDuplicateMode::Type DuplicateMode) override;

	virtual UWorld* GetWorld() const override;

	void GenerateNativeArguments(const TMap<FName, FQuestTextArgument>& InArguments, FFormatNamedArguments& NativeArguments) const;

public:

	virtual bool IsSupportedForNetworking() const override
	{ return !IsAsset(); }

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	/**
	* Allows Subobject replication on a UObject, must be explicitly called from owning object.
	* param Channel
	* param Bunch
	* param RepFlags  */
	virtual bool ReplicateSubobjects(class UActorChannel *Channel, class FOutBunch *Bunch, struct FReplicationFlags *RepFlags);


	/************************************************************************/
	/* DEPRECATED														   */
	/************************************************************************/

	UFUNCTION(BlueprintPure, Category = Quest, meta = (DeprecatedFunction, DeprecationMessage = "Please use GetParentQuestGroup instead"))
	UQuestBase* GetParentQuest() const;

	UFUNCTION(BlueprintPure, Category = Quest, meta = (DeprecatedFunction, DeprecationMessage = "Please use GetRootQuestGroup instead"))
	UQuestBase* GetRootQuest();


	/************************************************************************/
	/* Static															   */
	/************************************************************************/

	/** Create new Quest from an asset */
	template<class T>
	static T* NewFromAsset(TSoftObjectPtr<T> Asset, UObject* Outer);

	/** Create new Quest from an asset object */
	template<typename T>
	static T* NewFromAssetTemplate(const T* Template, UObject* Outer);
};


template<typename T>
T* UQuestBase::NewFromAsset(TSoftObjectPtr<T> Asset, UObject* Outer)
{
	if (Asset.IsNull())
		return nullptr;

	return NewFromAssetTemplate(Asset.LoadSynchronous(), Outer);
}

template<typename T>
T* UQuestBase::NewFromAssetTemplate(const T* Template, UObject* Outer)
{
	if (Template && Template->template IsA<UQuestBase>()) {
		return DuplicateObject<T>(Template, Outer);
	}

	return nullptr;
}
