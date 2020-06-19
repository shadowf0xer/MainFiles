// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "LoadQuestAction.h"

#include "Engine/StreamableManager.h"

#include "QuestBase.h"
#include "QuestManagerComponent.h"

#define LOCTEXT_NAMESPACE "LoadQuestAction"


FLoadQuestAction::FLoadQuestAction(UQuestManagerComponent* InManager, const TSoftObjectPtr<UQuestBase>& InAsset, bool& bInSuccess, const FLatentActionInfo& InLatentInfo)
	: Manager(InManager)
	, Asset(InAsset)
	, bSuccess(bInSuccess)
	, LatentInfo(InLatentInfo)
	, bFinished(Asset.IsNull())
{
	if (!bFinished)
	{
		Manager->RequestQuestLoad(Asset, FStreamableDelegate::CreateLambda([this]()
		{
			if (Manager.IsValid())
			{
				const UQuestBase* Quest = Asset.Get();
				check(Quest);
				bSuccess = Manager->StartQuest(Quest).IsValid();
			}
			bFinished = true;
		}));
	}
}

void FLoadQuestAction::UpdateOperation(FLatentResponse& Response)
{
	Response.FinishAndTriggerIf(bFinished, LatentInfo.ExecutionFunction, LatentInfo.Linkage, LatentInfo.CallbackTarget);
}

#if WITH_EDITOR
FString FLoadQuestAction::GetDescription() const
{
	return FString::Printf(TEXT("Loading quest...(%s)"), *Asset.GetAssetName());
}
#endif

#undef LOCTEXT_NAMESPACE
