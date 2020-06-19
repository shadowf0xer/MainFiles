// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "Engine/DataAsset.h"
#include "QuestMemory.generated.h"

/**
 * Quest Memory
 * A Memory is a persistent, optionally accumulable registry
 * of an event or action that has happened in the game
 */
UCLASS(BlueprintType)
class QUESTEXTENSION_API UQuestMemory : public UDataAsset
{
	GENERATED_BODY()

public:
	UQuestMemory();


	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Memory)
	FString Name;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Memory)
	FString Description;
};
