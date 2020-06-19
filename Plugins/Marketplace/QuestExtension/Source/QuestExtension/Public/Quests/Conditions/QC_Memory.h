// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "Engine/DataAsset.h"

#include "Conditions/QuestCondition.h"
#include "QuestMemory.h"
#include "QuestManagerComponent.h"

#include "QC_Memory.generated.h"


UCLASS(Category = Quests, meta = (DisplayName = "Compare Memory"))
class QUESTEXTENSION_API UQC_Memory : public UQuestCondition
{
	GENERATED_BODY()

public:

	UQC_Memory();

	virtual void Check() override;

	virtual const bool IsLatent() const override { return false; }


	/** Required Memory for Condition success */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Condition, meta = (DisplayThumbnail = false))
	TSoftObjectPtr<UQuestMemory> Memory;

	/** Amount of Memories required for this condition to complete
	 *  E.g: A quest that can be started when you "Sit down 5000 times"
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Condition, meta = (ClampMin = "1"))
	int32 RequiredAmount;


private:

	bool CompleteIfNeeded();

	virtual FText GetDescription() const override;

};
