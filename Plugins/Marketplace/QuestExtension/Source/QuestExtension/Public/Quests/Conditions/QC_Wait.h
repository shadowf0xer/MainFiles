// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "Engine/DataAsset.h"

#include "Conditions/QuestCondition.h"
#include "QuestManagerComponent.h"

#include "QC_Wait.generated.h"


UCLASS(Category = Flow, meta = (DisplayName = "Wait"))
class QUESTEXTENSION_API UQC_Wait : public UQuestCondition
{
	GENERATED_BODY()

	//TODO: Support timer by game time for serialization

public:

	UQC_Wait();


	/** Seconds to wait for this condition to complete */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Condition)
	float Delay;

	virtual void Check() override;

	virtual const bool IsLatent() const override { return true; }

private:

	virtual void OnTick(float DeltaTime) override;

	virtual FText GetDescription() const override;
};
