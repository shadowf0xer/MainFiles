// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "QuestVolumeActorFactory.h"
#include "AssetData.h"
#include "QuestVolume.h"
#include "QuestBase.h"
#include "QuestMemory.h"

//////////////////////////////////////////////////////////////////////////
// UQuestVolumeActorFactory

UQuestVolumeActorFactory::UQuestVolumeActorFactory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	DisplayName = NSLOCTEXT("QuestExtension", "QuestFactoryDisplayName", "Quest or Memory volume");
	NewActorClass = AQuestVolume::StaticClass();
}

void UQuestVolumeActorFactory::PostSpawnActor(UObject* Asset, AActor* NewActor)
{
	Super::PostSpawnActor(Asset, NewActor);

	AQuestVolume* TypedActor = CastChecked<AQuestVolume>(NewActor);
	check(TypedActor);

	if (UQuestBase* Quest = Cast<UQuestBase>(Asset))
	{
		TypedActor->StartQuest = Quest;
	}
	else if (UQuestMemory* Memory = Cast<UQuestMemory>(Asset))
	{
		TSoftObjectPtr<UQuestMemory> MemoryAsset = { Memory };
		if (MemoryAsset.IsValid()) {
			TypedActor->RegistryMemory = MemoryAsset;
		}
	}
}

void UQuestVolumeActorFactory::PostCreateBlueprint(UObject* Asset, AActor* CDO)
{
	Super::PostCreateBlueprint(Asset, CDO);

	AQuestVolume* TypedActor = CastChecked<AQuestVolume>(CDO);
	check(TypedActor);

	if (UQuestBase* Quest = Cast<UQuestBase>(Asset))
	{
		TypedActor->StartQuest = Quest;
	}
	else if (UQuestMemory* Memory = Cast<UQuestMemory>(Asset))
	{
		TSoftObjectPtr<UQuestMemory> MemoryAsset = { Memory };
		if (MemoryAsset.IsValid()) {
			TypedActor->RegistryMemory = MemoryAsset;
		}
	}
}

bool UQuestVolumeActorFactory::CanCreateActorFrom(const FAssetData& AssetData, FText& OutErrorMsg)
{
	if (AssetData.IsValid() && (
		AssetData.GetClass()->IsChildOf(UQuestBase::StaticClass()) ||
		AssetData.GetClass()->IsChildOf(UQuestMemory::StaticClass())))
	{
		return true;
	}
	else
	{
		OutErrorMsg = NSLOCTEXT("QuestExtension", "CanCreateActorFrom_NoQuestOrMemory", "No quest or memory was specified.");
		return false;
	}
}
