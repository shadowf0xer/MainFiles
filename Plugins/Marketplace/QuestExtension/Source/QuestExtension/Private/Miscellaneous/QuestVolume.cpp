// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "QuestVolume.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/Controller.h"

#include "Quests/QuestManagerComponent.h"
#include "Quests/QuestFunctionLibrary.h"


AQuestVolume::AQuestVolume(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer),
	bUseGlobalManager(false),
	bFindManagerInActor(true)
{
}

void AQuestVolume::ActorEnteredVolume(AActor* Other)
{
	Super::ActorEnteredVolume(Other);

	//If we are filtering and Other is not a child class
	if(FilterClass.Get() && !Other->GetClass()->IsChildOf(FilterClass))
		return;

	UQuestManagerComponent* Manager = nullptr;

	if (bUseGlobalManager)
	{
		Manager = UQuestFunctionLibrary::GetQuestManager(GetWorld());
	}
	else
	{
		if (bFindManagerInActor)
		{
			ManagerOwner = Other;
		}

		if (ManagerOwner) {
			Manager = Cast<UQuestManagerComponent>(ManagerOwner->GetComponentByClass(UQuestManagerComponent::StaticClass()));

			//Search for a quest manager on the controller if not found on Actor
			if (!Manager && Other->IsA(APawn::StaticClass()))
			{
				const AController* Controller = CastChecked<APawn>(ManagerOwner)->GetController();
				if (Controller)
				{
					Manager = Cast<UQuestManagerComponent>(Controller->FindComponentByClass<UQuestManagerComponent>());
				}
			}
		}
	}


	if (!Manager)
		return;

	//Run actions
	if (StartQuest)
	{
		Manager->StartQuest(StartQuest);
	}

	if (FinishQuest.IsValid())
	{
		Manager->FinishQuest(FinishQuest.Quest, FinishQuest.State);
	}

	if (!RegistryMemory.IsNull())
	{
		Manager->RegistryMemory(RegistryMemory);
	}
}

#if WITH_EDITOR
bool AQuestVolume::CanEditChange(const FProperty* InProperty) const
{
	bool bIsEditable = Super::CanEditChange(InProperty);

	if (bIsEditable && InProperty)
	{
		const FName PropertyName = InProperty->GetFName();

		if (PropertyName == GET_MEMBER_NAME_CHECKED(AQuestVolume, ManagerOwner))
		{
			bIsEditable = !bUseGlobalManager && !bFindManagerInActor;
		}
	}
	return bIsEditable;
}
#endif //WITH_EDITOR
