// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "Engine/DataAsset.h"

#include "Conditions/QuestCondition.h"
#include "QuestManagerComponent.h"

#include "QC_Or.generated.h"


UCLASS(Category = Flow, meta = (DisplayName = "Require One"))
class QUESTEXTENSION_API UQC_Or : public UQuestCondition
{
	GENERATED_BODY()

public:

	UQC_Or();

	virtual void Check() override;

	virtual const bool HasDynamicOutputs() const override { return true; }

	UFUNCTION()
	void OnConditionCompleted(const EConditionState Result);
};
