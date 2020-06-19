// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "UObject/Object.h"
#include "UObject/Class.h"

#include "QGNodeOutput.h"
#include "QuestGroupDebugging.h"

#include "QGNode.generated.h"

class UQuestGroupNode;
class UQuestGroup;
#if WITH_EDITORONLY_DATA
class UEdGraphNode;
#endif


/**
 * Quest group node state
 */
UENUM()
enum class EQGNodeState : uint8
{
	/** When the node */
	Inactive, /**< has not been run */
	Active,   /**< is running */
	Completed /**< has finished running */
};

/**
* Quest group finish result
*/
UENUM()
enum class EQGNodeFinishReason : uint8
{
	None,
	Succeed, /**< The node has been completed */
	Fail,	/**< The node failed */
	Rejected   /**< The node has been rejected */
};

UCLASS(Abstract, hidecategories=Object, meta = (DisplayName = "Node"), Category = "Nodes")
class QUESTEXTENSION_API UQGNode : public UObject
{
	GENERATED_BODY()

public:

	UQGNode();


	/**
	* Asset Properties
	*/

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = QuestNode)
	FName DisplayName;

protected:

	UPROPERTY(SaveGame)
	FGuid ID;

	UPROPERTY(EditDefaultsOnly, Category = QuestNode, SaveGame)
	TArray<FQGNodeOutput> Events;

public:

	/**
	* Runtime Properties
	*/

	UPROPERTY(SaveGame)
	EQGNodeState State;

#if USE_QUESTGROUP_DEBUGGER
	TWeakObjectPtr<UQGNode> DebugInteractionParent;
#endif

protected:

	UPROPERTY(SaveGame)
	EQGNodeFinishReason FinishReason;

private:

	UPROPERTY(Transient)
	uint8 bHasBegunPlay : 1;
	UPROPERTY(Transient)
	uint8 bTerminating : 1;


public:

	/** Called when the Quest Group is checked */
	void Execute(UQGNode* Parent);

	UFUNCTION(BlueprintCallable, Category = QuestNode)
	void Finish(const EQGNodeFinishReason Reason);

	void Reject(UQGNode* Parent);

	void TerminateExecution();

	void ExecuteBeginPlay() {
		if (!bHasBegunPlay) {
			bHasBegunPlay = true;
			BeginPlay();
		}
	}

protected:

	// Called when the game starts or the quest group is started
	virtual void BeginPlay();

	virtual void OnStart();

	virtual void OnFinish(const EQGNodeFinishReason Reason);

	void AddEvent(const FQGNodeOutput& Output);

	UFUNCTION(BlueprintCallable, Category = "QuestGroup|Node")
	void CallEvent(const FName Event = FName(" "));

public:

	virtual const bool CanExecuteNodes() const { return true; }
	virtual const bool CanRejectNodes()  const { return true; }
	virtual const bool CanBeRejected()   const { return true; }


	UFUNCTION(BlueprintPure, Category = "QuestGroup|Node")
	FORCEINLINE bool IsRunning() const {
		return State == EQGNodeState::Active;
	}

	UFUNCTION(BlueprintPure, Category = "QuestGroup|Node")
	FORCEINLINE bool IsCompleted() const {
		return State == EQGNodeState::Completed;
	}

	UFUNCTION(BlueprintPure, Category = "QuestGroup|Node")
	FORCEINLINE bool IsSucceeded() const {
		return IsCompleted() && FinishReason == EQGNodeFinishReason::Succeed;
	}

	UFUNCTION(BlueprintPure, Category = "QuestGroup|Node")
	FORCEINLINE bool IsRejected() const {
		return FinishReason == EQGNodeFinishReason::Rejected;
	}

	UFUNCTION(BlueprintPure, Category = "QuestGroup|Node")
	UQuestGroup* GetQuestGroup() const;

	UFUNCTION(BlueprintPure, Category = "QuestGroup|Node")
	FORCEINLINE FGuid GetNodeId() const {
		return ID;
	}

	UFUNCTION(BlueprintPure, Category = "QuestGroup|Node")
	UQuestManagerComponent* GetManager() const;

	FORCEINLINE bool GetDefaultOutput(FQGNodeOutput*& OutOutput) {
		const bool bFound = Events.IsValidIndex(0);
		if (bFound)
			OutOutput = &Events[0];
		return bFound;
	}

	TArray<FQGNodeOutput>* const GetOutputs() {
		return &Events;
	}

	void SanitizeOutputs();

	/**
	 * Find a node of a defined type T
	 * @return the node found or null
	 */
	UQGNode* FindSubNodeOfType(TSubclassOf<UQGNode> Class, const bool bFilterByCompleted = false) const;

	/**
	* Find a node of a defined type T
	* @return the node found or null
	*/
	template<class T>
	T* FindSubNodeOfType(const bool bFilterByCompleted = false) const {
		return Cast<T>(FindSubNodeOfType(T::StaticClass(), bFilterByCompleted));
	}

	/**
	* Find a node by Guid
	* @return the node found or null
	*/
	UQGNode* FindSubNodeById(FGuid Id) const;

	/**
	* Returns an array of all (not just active) nodes.
	*/
	virtual void GetAllNodes(TArray<UQGNode*>& QGNodes);

	/**
	* Finds an output by Name
	*/
	const FQGNodeOutput* FindOutputByName(FName Name) const;
	void GetAllNodesByOutputName(FName Name, TArray<UQGNode*>& QGNodes) const;


#if WITH_EDITORONLY_DATA
	/** Node's Graph representation, used to get position. */
	UPROPERTY()
	UEdGraphNode* GraphNode;

	UEdGraphNode* GetGraphNode() const;
#endif


	//~ Begin UObject Interface
	virtual void Serialize(FArchive& Ar) override;
	virtual UWorld* GetWorld() const override;
	//virtual bool IsSupportedForNetworking() const override;

	virtual void PostDuplicate(EDuplicateMode::Type DuplicateMode) override;
#if WITH_EDITORONLY_DATA
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	virtual void PostLoad() override;
	static void AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector);
#endif //WITH_EDITORONLY_DATA
	//~ End UObject Interface


	/**
	 * Editor interface.
	 */

#if WITH_EDITOR
	/** Get the name of a specific input pin */
	virtual FText GetInputPinName(int32 PinIndex) const { return FText::GetEmpty(); }

	/** Helper function to set the position of a quest group node on a grid */
	void PlaceNode(int32 NodeColumn, int32 NodeRow, int32 RowCount );

	/** Called as PIE begins */
	virtual void OnBeginPIE(const bool bIsSimulating) {};

	/** Called as PIE ends */
	virtual void OnEndPIE(const bool bIsSimulating) {};

	virtual FLinearColor GetTitleColor() const {
		return FColor(91, 184, 216);
	}
#endif //WITH_EDITOR

	virtual FText GetTitle() const;

protected:

	void StoreDebuggerExecutionStep(EQGExecutionSnap::Type SnapType);
};
