// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "Engine/DataAsset.h"

#include "Conditions/QuestCondition.h"
#include "QuestManagerComponent.h"

#include "QC_Sequence.generated.h"


UCLASS(Category = Flow, meta = (DisplayName = "Require in Order"))
class QUESTEXTENSION_API UQC_Sequence : public UQuestCondition
{
	GENERATED_BODY()

public:

	UQC_Sequence();


	UPROPERTY(SaveGame)
	UQuestManagerComponent* Manager;

	UPROPERTY(SaveGame)
	int32 LastOutput;

	virtual void Check() override;

	virtual const bool HasDynamicOutputs() const override { return true; }

	UFUNCTION()
	void OnConditionCompleted(const EConditionState Result);

private:

	void RunNextCondition();

};
