// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "QuestExtensionSettings.generated.h"

/**
 * Find Custom Config documentation here: wiki.unrealengine.com/CustomSettings
 */
UCLASS(config = Game, defaultconfig)
class QUESTEXTENSION_API UQuestExtensionSettings : public UObject
{
	GENERATED_BODY()

public:
	UQuestExtensionSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
	}

	UPROPERTY(EditAnywhere, config, Category = Debugger)
	bool bAlwaysGatherData = false;

	UPROPERTY(EditAnywhere, config, Category = Debugger)
	int MaxDebuggerSteps = 100;
};
