// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "SharedQuest.generated.h"

class UQuestBase;
class UQuestManagerComponent;


/**
* Define the complete behavior while sharing a Quest
*/
UENUM(BlueprintType)
enum class EQuestShareCompleteMode : uint8
{
	CompleteIndividually, /**< Complete every quest individually */
	CompleteWhenOriginal, /**< Complete when first/original quest does */
	CompleteWhenAny,	  /**< Complete when one of the quests does */
};


/**
* Represents a shared Quest
*/
USTRUCT(BlueprintType)
struct FSharedQuest
{
	GENERATED_USTRUCT_BODY()

	FSharedQuest() : Quest(nullptr), Mode(EQuestShareCompleteMode::CompleteIndividually) {}
	FSharedQuest(UQuestBase* const InQuest, EQuestShareCompleteMode InMode);


	UPROPERTY(BlueprintReadOnly, Category = Shared)
	UQuestBase* Quest;

	UPROPERTY(BlueprintReadOnly, Category = Shared)
	EQuestShareCompleteMode Mode;


public:

	FORCEINLINE bool IsValid() const {
		return Quest != nullptr;
	}

	FORCEINLINE bool operator== (const FSharedQuest& Other) const { return  Quest && Quest == Other.Quest; }
};
