// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "QuestSubScript.h"


UWorld* UQuestSubScript::GetWorld() const
{
	// If we are a CDO, we must return nullptr instead of calling Outer->GetWorld() to fool UObject::ImplementsGetWorld.
	if (HasAllFlags(RF_ClassDefaultObject))
		return nullptr;

	return GetOuter()->GetWorld();
}

bool UQuestSubScript::EventCanStartQuest_Implementation(UQuestManagerComponent* Manager) const
{
	return true;
}

