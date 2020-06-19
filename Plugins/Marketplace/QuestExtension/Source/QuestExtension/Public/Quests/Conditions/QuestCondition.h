// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "QuestExtensionModule.h"

#include "Tickable.h"
#include "Engine/DataAsset.h"
#include "UObject/WeakObjectPtr.h"

#include "ConditionOutput.h"
#include "QuestManagerComponent.h"

#include "QuestCondition.generated.h"

class UQuest;


UENUM(BlueprintType)
enum class EConditionState : uint8
{
	NotRunning,
	Running,
	Success,
	Failed,
	Ignored
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMCConditionCompleteDelegate, EConditionState, Result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FConditionCompleteDel, EConditionState, Result);


UENUM()
enum class EConditionQuestMode : uint8
{
	SucceedsQuest,
	FailsQuest,
	SucceedsAndFailsQuest,
};


UCLASS(Abstract, DefaultToInstanced, EditInlineNew)
class QUESTEXTENSION_API UQuestCondition : public UDataAsset, public FTickableGameObject
{
	GENERATED_BODY()

protected:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Condition, SaveGame)
	FName DisplayName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Condition)
	bool bCompactNode;

	//~ Begin Ticking
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Condition|Tick", SaveGame)
	bool bWantsToTick;

	//Tick length in seconds. 0 is default tick rate
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Condition|Tick", SaveGame)
	float TickRate;

private:

	UPROPERTY(SaveGame)
	float TickTimeElapsed;
	//~ End Ticking

	UPROPERTY(SaveGame)
	EConditionState ConState;

protected:

	UPROPERTY(EditDefaultsOnly, Category = QuestNode, SaveGame)
	TArray<FConditionOutput> Outputs;

public:

	UPROPERTY(BlueprintAssignable, SaveGame)
	FMCConditionCompleteDelegate OnComplete;


	UQuestCondition();

	EConditionState StartCheck();
	EConditionState StartCheck(const FConditionCompleteDel& InOnComplete);

	virtual void CancelCheck();

protected:

	//To be overridden
	virtual void Check() {
		Complete(EConditionState::Failed);
	}

	UFUNCTION(BlueprintCallable, Category = Condition)
	bool Complete(const EConditionState Result);

public:

	UFUNCTION(BlueprintPure, Category = Condition)
	UConditionContainer* GetContainer() const;

	UFUNCTION(BlueprintPure, Category = Condition)
	UQuestManagerComponent* GetQuestManager() const;

	UFUNCTION(BlueprintPure, Category = Condition)
	UQuestBase* GetQuestOwner() const;

	UFUNCTION(BlueprintPure, Category = Condition)
	FORCEINLINE EConditionState GetState() const {
		return ConState;
	}

	UFUNCTION(BlueprintPure, Category = Condition)
	FORCEINLINE bool IsCompleted() const {
		return ConState == EConditionState::Success || ConState == EConditionState::Failed;
	}

	/**
	* May be expensive to call.
	* @return an array with all the nodes connected to this one, not just directly
	*/
	UFUNCTION(BlueprintCallable, Category = Condition)
	void GetAllNodes(TArray<UQuestCondition*>& Nodes);

	/**
	* May be expensive to call.
	* @return an array with all the nodes directly connected to this one
	*/
	UFUNCTION(BlueprintCallable, Category = Condition)
	void GetChildNodes(TArray<UQuestCondition*>& Nodes);


	virtual const bool CanExecuteNodes() const { return true; }
	virtual const bool HasDynamicOutputs() const { return false; }
	virtual const bool IsLatent() const;
	FORCEINLINE   bool IsInstant() const { return !IsLatent(); }
	bool IsCompactNode() const { return bCompactNode; }

protected:

	//~ Begin Tickable Object Interface
	virtual void Tick(float DeltaTime) override;
	virtual void OnTick(float DeltaTime) {}
	virtual bool IsTickable() const override {
		return !IsDefaultSubobject() && bWantsToTick && GetState() == EConditionState::Running && !GetOutermost()->IsPendingKill();
	}
	virtual TStatId GetStatId() const override {
		RETURN_QUICK_DECLARE_CYCLE_STAT(UAction, STATGROUP_Tickables);
	}
	//~ End Tickable Object Interface


public:

	void AddOutput(const FConditionOutput& Output);
	void RemoveOutput(const FConditionOutput& Output);

	TArray<FConditionOutput>* const GetOutputs() {
		return &Outputs;
	}

	void SanitizeOutputs();

	/**
	* Find a node of a defined type T
	* @return the node found or null
	*/
	UQuestCondition* FindSubNodeOfType(TSubclassOf<UQuestCondition> Class, const bool bFilterByCompleted = false) const;

	/**
	* Find a node of a defined type T
	* @return the node found or null
	*/
	template<class T>
	T* FindSubNodeOfType(const bool bFilterByCompleted = false) const {
		return Cast<T>(FindSubNodeOfType(T::StaticClass(), bFilterByCompleted));
	}

	/** Finds an output by Name */
	const FConditionOutput* FindOutputByName(FName Name) const;

	void GetAllNodesByOutputName(FName Name, TArray<UQuestCondition*>& Nodes) const;



	/**
	* Editor interface.
	*/

	virtual FText GetTitle() const;
	virtual FText GetDescription() const { return FText::GetEmpty(); }

#if WITH_EDITOR
	/** Helper function to set the position of a quest group node on a grid */
	void PlaceNode(int32 NodeColumn, int32 NodeRow, int32 RowCount);

	virtual FLinearColor GetTitleColor() const {
		return FColor(91, 184, 216);
	}
#endif //WITH_EDITOR

#if WITH_EDITORONLY_DATA
	/** Node's Graph representation, used to get position. */
	UPROPERTY()
	UEdGraphNode* GraphNode;

	class UEdGraphNode* GetGraphNode() const;
	virtual void PostLoad() override;
	static void AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector);
#endif


	virtual UWorld* GetWorld() const override;
};


UCLASS(Abstract, Blueprintable, NotEditInlineNew)
class QUESTEXTENSION_API ULatentCondition : public UQuestCondition
{
	GENERATED_BODY()

public:

	ULatentCondition();

	UFUNCTION(BlueprintImplementableEvent, Category = Condition, meta = (DisplayName = "Check"))
	void ReceiveCheck();

	UFUNCTION(BlueprintImplementableEvent, Category = Condition, meta = (DisplayName = "Tick"))
	void ReceiveTick(float DeltaTime);

	virtual const bool IsLatent() const { return true; }

protected:

	virtual void Check() override
	{
		ReceiveCheck();
	}

	virtual void OnTick(float DeltaTime) override
	{
		ReceiveTick(DeltaTime);
	}
};

UCLASS(Abstract, Blueprintable, NotEditInlineNew)
class QUESTEXTENSION_API UInstantCondition : public UQuestCondition
{
	GENERATED_BODY()

public:

	UInstantCondition();

	UFUNCTION(BlueprintImplementableEvent, Category = Condition, meta = (DisplayName = "Check"))
	EConditionState ReceiveCheck();

	UFUNCTION(BlueprintImplementableEvent, Category = Condition, meta = (DisplayName = "Tick"))
	void ReceiveTick(float DeltaTime);

	FORCEINLINE virtual const bool IsLatent() const override {
		return Super::IsLatent(); //Return based on subnodes. Default false
	}

protected:

	virtual void Check() override
	{
		EConditionState Result = ReceiveCheck();
		//Try to complete with the resulting state
		Complete(Result);
	}

	virtual void OnTick(float DeltaTime) override
	{
		ReceiveTick(DeltaTime);
	}
};
