// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "Conditions/ConditionContainer.h"

#if WITH_EDITOR
#include "Kismet2/BlueprintEditorUtils.h"
#endif

UConditionContainer::UConditionContainer()
	: Super()
{
	bAllowsLatentExecution = true;
	EmptyResult = EConditionState::Failed;
}

EConditionState UConditionContainer::StartInstantCheck()
{
	if (IsValid(FirstCondition))
	{
		EConditionState State = FirstCondition->StartCheck();
		return State == EConditionState::Running? EmptyResult : State;
	}
	else
	{
		return EmptyResult;
	}
}

void UConditionContainer::StartLatentCheck(const FConditionCompleteDel& InOnComplete)
{
	if (IsValid(FirstCondition) && bAllowsLatentExecution)
	{
		FirstCondition->StartCheck(InOnComplete);
	}
	else
	{
		InOnComplete.ExecuteIfBound(EConditionState::Failed);
	}
}

void UConditionContainer::CancelLatentCheck()
{
	if (IsValid(FirstCondition) && bAllowsLatentExecution)
	{
		FirstCondition->CancelCheck();
	}
}

UQuestManagerComponent* UConditionContainer::GetQuestManager() const
{
	if (CustomManager && CustomManager->IsValidLowLevel())
	{
		return CustomManager;
	}
	const UQuestBase* QuestOwner = GetOwnerQuest();
	return QuestOwner ? QuestOwner->GetManager() : nullptr;
}

#if WITH_EDITOR
void UConditionContainer::ClearGraph()
{
	if (Graph)
	{
		Graph->Nodes.Empty();
		// Give the schema a chance to fill out any required nodes (like the results node)
		const UEdGraphSchema* Schema = Graph->GetSchema();
		Schema->CreateDefaultNodesForGraph(*Graph);
	}
}

class UEdGraph* UConditionContainer::GetGraph()
{
	return Graph;
}

void UConditionContainer::SetGraph(UEdGraph* NewGraph)
{
	check(Graph == nullptr);
	Graph = NewGraph;
}

#endif //WITH_EDITOR

UWorld* UConditionContainer::GetWorld() const
{
	// If we are a CDO, we must return nullptr instead of calling Outer->GetWorld() to fool UObject::ImplementsGetWorld.
	if (HasAllFlags(RF_ClassDefaultObject))
		return nullptr;

	return GetOuter()->GetWorld();
}
