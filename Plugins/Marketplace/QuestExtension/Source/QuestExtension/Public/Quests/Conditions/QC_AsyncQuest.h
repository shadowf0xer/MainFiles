// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "Engine/DataAsset.h"

#include "Conditions/QuestCondition.h"
#include "QuestBase.h"
#include "QuestManagerComponent.h"

#include "QC_AsyncQuest.generated.h"


UCLASS(Category = Quests, meta = (DisplayName = "Compare Quest (Latent)"))
class QUESTEXTENSION_API UQC_AsyncQuest : public UQuestCondition
{
	GENERATED_BODY()

public:

	UQC_AsyncQuest();


	/** Quest that will be compared */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Condition, meta = (DisplayThumbnail = false))
	TSoftObjectPtr<UQuestBase> Quest;

	/** Expected quest state to succeed */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Condition)
	EQuestCompletionState ExpectedState;

	/** Whether or not should negate the condition */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Condition)
	bool bInverseCondition;


public:

	virtual void Check() override;

	virtual void CancelCheck() override;

	virtual const bool IsLatent() const override { return true; }

private:

	UFUNCTION()
	void OnQuestStarted(const FRuntimeQuest& InQuest);
	UFUNCTION()
	void OnQuestFinished(const TSoftObjectPtr<UQuestBase> InQuestAsset, const EQuestCompletionState State);

	void UnbindDelegates();

	virtual FText GetDescription() const override;

};
