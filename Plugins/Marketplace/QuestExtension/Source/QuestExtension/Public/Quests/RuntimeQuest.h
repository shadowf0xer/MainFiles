// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "RuntimeQuest.generated.h"

class UQuestBase;
class UQuestManagerComponent;

/**
 * Represents a Quest in runtime
 */
 USTRUCT(BlueprintType)
 struct FRuntimeQuest
 {
	GENERATED_USTRUCT_BODY()

	FRuntimeQuest() : Manager(nullptr), Asset(nullptr), QuestScript(nullptr) {}
	FRuntimeQuest(UQuestManagerComponent* const InManager, UQuestBase* const Script, const UQuestBase* const InAsset);


	UPROPERTY(BlueprintReadOnly, Category = Runtime, SaveGame)
	UQuestManagerComponent* Manager;

	UPROPERTY(SaveGame)
	const UQuestBase* Asset;

	UPROPERTY(BlueprintReadOnly, Category = Runtime, SaveGame, meta = (DisplayName = "Script"))
	UQuestBase* QuestScript;


 public:

	UQuestBase* GetScript() const;
	TSoftObjectPtr<UQuestBase> GetAsset() const;

	FORCEINLINE bool IsValid() const {
		return Manager && QuestScript && Asset;
	}

	FORCEINLINE bool operator== (const FRuntimeQuest& Other)		 const { return  Asset && Asset == Other.Asset; }
	FORCEINLINE bool operator== (const TSoftObjectPtr<UQuestBase>& Other) const { return  !Other.IsNull() && GetAsset() == Other; }

	friend uint32 GetTypeHash(const FRuntimeQuest& InRuntimeQuest)
	{
		return InRuntimeQuest.IsValid()? GetTypeHash(InRuntimeQuest.Asset) : -1;
	}
 };
