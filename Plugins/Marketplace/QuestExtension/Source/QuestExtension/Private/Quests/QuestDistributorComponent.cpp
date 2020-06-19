// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "QuestDistributorComponent.h"
#include "QuestManagerComponent.h"

#if WITH_EDITOR
#include "Framework/Notifications/NotificationManager.h"
#include "Widgets/Notifications/SNotificationList.h"
#endif

#define LOCTEXT_NAMESPACE "QuestDistributor"


UQuestDistributorComponent::UQuestDistributorComponent()
	: Super()
{
}

void UQuestDistributorComponent::StartQuest(UQuestManagerComponent* Manager, const TSoftObjectPtr<UQuestBase> Quest)
{
	if (!Manager)
		return;

	if (DistributableQuests.Contains(Quest)) {
		Manager->StartQuestAsset(Quest);
	}
}

void UQuestDistributorComponent::StartAllDistributableQuests(UQuestManagerComponent* Manager)
{
	if (!Manager)
		return;

	for (const auto& Quest : DistributableQuests) {
		Manager->StartQuestAsset(Quest);
	}
}


const bool UQuestDistributorComponent::CanStartQuest(UQuestManagerComponent* Manager, const TSoftObjectPtr<UQuestBase> Quest)
{
	if (Quest.IsNull())
		return false;

	if (!Quest.IsValid()) {
		Quest.LoadSynchronous();
	}

	return DistributableQuests.Contains(Quest) && Manager->CanStartQuest(Quest.Get());
}

#undef LOCTEXT_NAMESPACE
