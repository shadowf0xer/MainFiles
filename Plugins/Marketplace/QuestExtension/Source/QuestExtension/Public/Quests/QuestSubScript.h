// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "QuestBase.h"
#include "QuestSubScript.generated.h"


/**
 * This object works as a plug-in into the execution of a quest.
 * It will be created when the quest starts, and destroyed when the quest gets destroyed,
 * providing the user with different quest related events.
 */
UCLASS(ABSTRACT, Blueprintable, BlueprintType, EditInlineNew, DefaultToInstanced, Category = Quests)
class QUESTEXTENSION_API UQuestSubScript : public UObject
{
	GENERATED_BODY()

protected:
	/** Called when the game starts, when this quest is started or when the quest gets loaded */
	virtual void BeginPlay() {
		ReceiveBeginPlay();
	}

	/** Check and update the state of this quest */
	virtual void PostStartQuest() {
		ReceiveStart();
	}

	// Called when this quest finishes
	virtual void PostFinishQuest(const EQuestCompletionState State) {
		ReceiveFinish(State);
	}

	/**
	 * @return true if this quest can be started
	 */
	virtual bool CanStartQuest(UQuestManagerComponent& Manager) const {
		return EventCanStartQuest(&Manager);
	}

	virtual UWorld* GetWorld() const override;


	/** Called when the game starts, when this quest is started or when the quest gets loaded */
	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "Begin Play"))
	void ReceiveBeginPlay();

	/** @return true if this quest can be started */
	UFUNCTION(BlueprintNativeEvent, BlueprintAuthorityOnly, meta = (DisplayName = "Can Start Quest"))
	bool EventCanStartQuest(UQuestManagerComponent* Manager) const;

public:

	/** Check and update the state of this quest */
	UFUNCTION(BlueprintImplementableEvent, BlueprintAuthorityOnly)
	void ReceiveStart();

	// Called when this quest finishes
	UFUNCTION(BlueprintImplementableEvent, BlueprintAuthorityOnly)
	void ReceiveFinish(const EQuestCompletionState State);

	UFUNCTION(BlueprintPure, Category = Quest)
	FORCEINLINE UQuestBase* GetQuestScript() const {
		UQuestBase* Quest = Cast<UQuestBase>(GetOuter());
		return (Quest && !Quest->IsAsset()) ? Quest : nullptr;
	}

	UFUNCTION(BlueprintPure, Category = Quest)
	FORCEINLINE TSoftObjectPtr<UQuestBase> GetQuestAsset() const {
		UQuestBase* Quest = Cast<UQuestBase>(GetOuter());
		return Quest ? Quest->GetAsset() : TSoftObjectPtr<UQuestBase>();
	}

	UFUNCTION(BlueprintPure, Category = Quest)
	FORCEINLINE UQuestManagerComponent* GetManager() const { return GetQuestScript()->GetManager(); }

	/** Finishes owning quest */
	UFUNCTION(BlueprintCallable, Category = Quest)
	void Finish(EQuestCompletionState Result) const {
		GetQuestScript()->Finish(Result);
	}

private:

	friend UQuestBase;
};

