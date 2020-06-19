// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "QuestBase.h"
#include "Conditions/QuestCondition.h"
#include "Quest.generated.h"

/**
 * Quest
 * A Quest is an asset that contains name, description,
 * conditions to complete or fail and more.
 *
 * Custom Quests with new logic will inherit from this class.
 */
UCLASS(EditInlineNew)
class QUESTEXTENSION_API UQuest : public UQuestBase
{
	GENERATED_BODY()

public:

	UQuest();


	UPROPERTY(EditInstanceOnly, Replicated, Instanced, Category = Quest, SaveGame)
	UConditionContainer* CompleteConditions;

	/** Check and update the state of this quest */
	virtual void PostStartQuest() override;

	void CheckCompletion();

	virtual void PostFinishQuest(const EQuestCompletionState State) override;

	virtual bool CanStartQuest(UQuestManagerComponent& Manager, EQuestCompletionState& CurrentState, int32& Index) const override;

	UFUNCTION(BlueprintImplementableEvent)
	void ReceiveStart();

	UFUNCTION(BlueprintImplementableEvent)
	void ReceiveFinish(const EQuestCompletionState State);

protected:

	/**
	* Finishes this quest
	*/
	UFUNCTION(BlueprintCallable, Category = Condition)
	void FinishQuest(const EQuestCompletionState State);

public:

	UFUNCTION()
	void OnConditionCompleted(EConditionState Result);

	/**
	 * Check if this quest is contained inside a Quest Group
	 *
	 * @return true if is inside a Quest Group
	 */
	UFUNCTION(BlueprintPure, Category = Condition)
	FORCEINLINE bool IsInQuestGroup() const
	{
		const UQuestBase* Parent = GetParentQuest();
		return Parent && Parent->IsA<UQuestGroup>();
	}


	// NETWORKING
public:

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	virtual bool ReplicateSubobjects(class UActorChannel *Channel, class FOutBunch *Bunch, FReplicationFlags *RepFlags);
};
