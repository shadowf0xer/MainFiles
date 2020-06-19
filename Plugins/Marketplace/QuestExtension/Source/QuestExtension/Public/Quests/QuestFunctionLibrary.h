// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include <Kismet/BlueprintFunctionLibrary.h>
#include <Engine/Engine.h>

#include "QuestBase.h"
#include "QuestMemory.h"
#include "QuestManagerComponent.h"
#include "QuestManagerRecord.h"
#include "QuestFunctionLibrary.generated.h"


/**
 *
 */
UCLASS()
class QUESTEXTENSION_API UQuestFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/** Gets the global Quest Manager if it can be found.
	 * If you have more than one Quest Manager on your game, access it directly. */
	UFUNCTION(BlueprintPure, Category = Quests, meta = (WorldContext = "ContextObject"))
	static UQuestManagerComponent* GetQuestManager(const UObject* ContextObject) {
		UWorld* World = GEngine->GetWorldFromContextObject(ContextObject, EGetWorldErrorMode::LogAndReturnNull);
		return World ? UQuestManagerComponent::Get(World) : nullptr;
	}

	UFUNCTION(BlueprintPure, Category = Save, meta = (DisplayName = "Is Valid"))
	static FORCEINLINE bool IsValidQuestManagerRecord(const FQuestManagerRecord& Record) {
		return Record.IsValid();
	}

	UFUNCTION(BlueprintPure, Category = Save, meta = (DisplayName = "Get Asset"))
	static FORCEINLINE TSoftObjectPtr<UQuestBase> GetRuntimeQuestAsset(const FRuntimeQuest& Quest) {
		return Quest.GetAsset();
	}
};
