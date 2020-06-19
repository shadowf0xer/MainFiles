// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "Engine/DataAsset.h"

#include "Conditions/QuestCondition.h"
#include "QuestMemory.h"
#include "QuestManagerComponent.h"

#include "QC_AsyncMemory.generated.h"


UCLASS(Category = Quests, meta = (DisplayName = "Compare Memory (Latent)"))
class QUESTEXTENSION_API UQC_AsyncMemory : public UQuestCondition
{
	GENERATED_BODY()

public:

	UQC_AsyncMemory();


	/** Required Memory for Condition success */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Condition, meta = (DisplayThumbnail = false))
	TSoftObjectPtr<UQuestMemory> Memory;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Condition, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	bool bUseTotalAmount;
	
	/** Amount of Memories required from Condition start
	 *  E.g: "Kill 5 trolls"
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Condition, meta = (ClampMin = "1", EditCondition = "!bUseTotalAmount"))
	int32 Amount;

	/** Amount of Memories required in total
	 *  E.g: Achievement: "Sit down 5000 times"
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Condition, meta = (ClampMin = "1", EditCondition = "bUseTotalAmount"))
	int32 TotalAmount;


	UPROPERTY(SaveGame)
	int32 CurrentAmount;


public:

	virtual void Check() override;

	virtual void CancelCheck() override;

	virtual const bool IsLatent() const override { return true; }

private:

	UFUNCTION()
	void OnMemoryRegistered(const TSoftObjectPtr<UQuestMemory> NewMemory, int32 AddedAmount);

	bool CompleteIfNeeded();

	virtual FText GetDescription() const override;

};
