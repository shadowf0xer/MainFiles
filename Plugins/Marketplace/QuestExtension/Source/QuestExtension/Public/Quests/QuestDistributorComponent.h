// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "Components/ActorComponent.h"

#include "QuestBase.h"
#include "QuestDistributorComponent.generated.h"

/**
 * Contains information about a quest and it's finished state
 */
USTRUCT(BlueprintType)
struct FQuestDistribution
{
	GENERATED_BODY()
};


/**
 * Quest Distributor Component
 * In charge of distributing quests to Quest managers under certain conditions
 */
UCLASS(ClassGroup = Narrative, meta = (BlueprintSpawnableComponent))
class QUESTEXTENSION_API UQuestDistributorComponent : public UActorComponent
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Narrative)
	TSet<TSoftObjectPtr<UQuestBase>> DistributableQuests;

	UQuestDistributorComponent();

	/** Will start a quest if its one of the Distributable Quests */
	UFUNCTION(BlueprintCallable, Category = Distributor)
	void StartQuest(UQuestManagerComponent* Manager, const TSoftObjectPtr<UQuestBase> Quest);

	/** Will start all distributable quests inside this Distributor */
	UFUNCTION(BlueprintCallable, Category = Distributor)
	void StartAllDistributableQuests(UQuestManagerComponent* Manager);

	/** Returns true if a quest can be started by this Distributor */
	UFUNCTION(BlueprintCallable, Category = Distributor)
	const bool CanStartQuest(UQuestManagerComponent* Manager, const TSoftObjectPtr<UQuestBase> Quest);
};
