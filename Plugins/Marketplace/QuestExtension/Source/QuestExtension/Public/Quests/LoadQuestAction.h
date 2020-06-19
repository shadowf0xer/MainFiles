// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "UObject/Object.h"
#include "UObject/ScriptMacros.h"
#include "Engine/LatentActionManager.h"
#include "LatentActions.h"


class UQuestBase;
class UQuestManagerComponent;

// Stream Level Action
class FLoadQuestAction : public FPendingLatentAction
{

public:

	TWeakObjectPtr<UQuestManagerComponent> Manager;
	TSoftObjectPtr<UQuestBase> Asset;
	bool& bSuccess;

	FLatentActionInfo LatentInfo;

	bool bFinished;


	FLoadQuestAction(UQuestManagerComponent* InManager, const TSoftObjectPtr<UQuestBase>& InAsset, bool& bInSuccess, const FLatentActionInfo& InLatentInfo);

	virtual void UpdateOperation(FLatentResponse& Response) override;

#if WITH_EDITOR
	// Returns a human readable description of the latent operation's current state
	virtual FString GetDescription() const override;
#endif
};
