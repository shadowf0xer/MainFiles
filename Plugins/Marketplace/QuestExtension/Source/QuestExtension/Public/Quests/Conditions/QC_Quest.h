// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "Engine/DataAsset.h"

#include "Conditions/QuestCondition.h"
#include "QuestBase.h"
#include "QuestManagerComponent.h"

#include "QC_Quest.generated.h"


UCLASS(Category = Quests, meta = (DisplayName = "Compare Quest"))
class QUESTEXTENSION_API UQC_Quest : public UQuestCondition
{
	GENERATED_BODY()

public:

	UQC_Quest();


	/** Quest that will be compared */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Condition, meta = (DisplayThumbnail = false))
	TSoftObjectPtr<UQuestBase> Quest;

	/** Expected quest state to succeed */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Condition)
	EQuestCompletionState ExpectedState;

	/** Whether or not should negate the condition */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Condition)
	bool bInverseCondition;


	virtual void Check() override;

	virtual const bool IsLatent() const override { return false; }

private:

	virtual FText GetDescription() const override;

};
