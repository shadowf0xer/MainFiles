// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "Conditions/QuestCondition.h"
#include "Quest.h"
#include "Conditions/ConditionContainer.h"


inline const EConditionState operator! (const EConditionState& a)
{
	if (a != EConditionState::Success && a != EConditionState::Failed)
		return a;
	return (a == EConditionState::Success)? EConditionState::Failed : EConditionState::Success;
}


UQuestCondition::UQuestCondition()
	: Super(),
	bCompactNode(true),
	bWantsToTick(false),
	TickRate(0.15f),
	ConState(EConditionState::NotRunning)
{}

EConditionState UQuestCondition::StartCheck()
{
	// IsInstant() -> Instant conditions don't depend on previous results
	if (IsInstant() || ConState == EConditionState::NotRunning)
	{
		ConState = EConditionState::Running;

		//Start check logic
		Check();

		//Fail if is instant and didn't finish
		if (IsInstant() && !IsCompleted())
		{
			//WARNING: Execution should have finished already on this condition
			Complete(EConditionState::Failed);
		}
	}

	return ConState;
}

EConditionState UQuestCondition::StartCheck(const FConditionCompleteDel& InOnComplete)
{
	if (IsInstant() || ConState == EConditionState::NotRunning)
	{
		OnComplete.AddUnique(InOnComplete);
		return StartCheck();
	}
	return ConState;
}

void UQuestCondition::CancelCheck()
{
	if (ConState != EConditionState::NotRunning)
	{
		ConState = EConditionState::NotRunning;
		OnComplete.Clear();

		for (auto& Output : Outputs)
		{
			Output.CancelCheck();
		}
	}
}

bool UQuestCondition::Complete(const EConditionState Result)
{
	if (ConState == EConditionState::Running)
	{
		if (Result == EConditionState::Success ||
			Result == EConditionState::Failed)
		{
			ConState = Result;
			OnComplete.Broadcast(Result);
			return true;
		}
	}
	return false;
}

UConditionContainer* UQuestCondition::GetContainer() const
{
	return CastChecked<UConditionContainer>(GetOuter());
}

UQuestManagerComponent* UQuestCondition::GetQuestManager() const
{
	return GetContainer()->GetQuestManager();
}

UQuestBase* UQuestCondition::GetQuestOwner() const
{
	return GetContainer()->GetOwnerQuest();
}

const bool UQuestCondition::IsLatent() const
{
	bool bIsLatent = false;
	for (const auto& Output : Outputs)
	{
		const UQuestCondition* SubNode = Output.GetFirstConnection();
		bIsLatent |= SubNode && SubNode->IsLatent();
	}
	//If any sub-node is latent, this one will be too
	return bIsLatent;
}

void UQuestCondition::Tick(float DeltaTime)
{
	if (TickRate > 0)
	{
		TickTimeElapsed += DeltaTime;
		if (TickTimeElapsed < TickRate)
			return;

		// Delayed Tick
		OnTick(TickTimeElapsed);

		TickTimeElapsed = 0;
	}
	else {
		//Normal Tick
		OnTick(DeltaTime);
	}
}

#if WITH_EDITORONLY_DATA
UEdGraphNode* UQuestCondition::GetGraphNode() const
{
	return GraphNode;
}

void UQuestCondition::PostLoad()
{
	Super::PostLoad();
	// Make sure quest nodes are transactional (so they work with undo system)
	SetFlags(RF_Transactional);
}

void UQuestCondition::AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector)
{
	UQuestCondition* This = CastChecked<UQuestCondition>(InThis);

	Collector.AddReferencedObject(This->GraphNode, This);

	Super::AddReferencedObjects(InThis, Collector);
}
#endif


void UQuestCondition::AddOutput(const FConditionOutput& Output)
{
	const int32 Index = Outputs.IndexOfByKey(Output);
	if (Index != INDEX_NONE)
	{
		Outputs[Index] = Output;
	}
	else
	{
		Outputs.Add(Output);
	}
}

void UQuestCondition::RemoveOutput(const FConditionOutput& Output)
{
	Outputs.Remove(Output);
}

void UQuestCondition::SanitizeOutputs()
{
	TArray<FConditionOutput> OldOutputs = Outputs;

	// Get Default outputs
	Outputs = *Cast<UQuestCondition>(GetClass()->GetDefaultObject())->GetOutputs();

	//Rewire old Outputs
	for (const auto& OldOutput : OldOutputs)
	{
		for (auto& NewOutput : Outputs)
		{
			//If this output exists, copy it
			if (NewOutput == OldOutput)
			{
				NewOutput = OldOutput;
			}
		}
	}
}

UQuestCondition* UQuestCondition::FindSubNodeOfType(TSubclassOf<UQuestCondition> Class, const bool bFilterByCompleted /*= false*/) const
{
	for (const auto& Output : Outputs)
	{
		UQuestCondition* SubNode = Output.FindSubNodeOfType(Class, bFilterByCompleted);
		if (SubNode)
			return SubNode;
	}
	return nullptr;
}

void UQuestCondition::GetAllNodes(TArray<UQuestCondition*>& Nodes)
{
	Nodes.Add(this);
	for (auto& Output : Outputs)
	{
		Output.GetAllConnectedNodes(Nodes);
	}
}

void UQuestCondition::GetChildNodes(TArray<UQuestCondition*>& Nodes)
{
	for (auto& Output : Outputs)
	{
		Output.GetConnectedNodes(Nodes);
	}
}

const FConditionOutput* UQuestCondition::FindOutputByName(FName Name) const
{
	return Outputs.FindByKey(Name);
}

void UQuestCondition::GetAllNodesByOutputName(FName Name, TArray<UQuestCondition*>& Nodes) const
{
	const FConditionOutput* Output = FindOutputByName(Name);
	if (Output)
	{
		Output->GetAllConnectedNodes(Nodes);
	}
}

FText UQuestCondition::GetTitle() const
{
	if (!DisplayName.IsNone())
		return FText::FromName(DisplayName);

#if WITH_EDITOR
	return GetClass()->GetDisplayNameText();
#else
	return NSLOCTEXT("QuestEditor", "DefaultNodeTitle", "Node");
#endif
}

#if WITH_EDITOR
void UQuestCondition::PlaceNode(int32 NodeColumn, int32 NodeRow, int32 RowCount)
{
	GraphNode->NodePosX = (-150 * NodeColumn) - 100;
	GraphNode->NodePosY = (100 * NodeRow) - (50 * RowCount);
}
#endif //WITH_EDITOR

UWorld* UQuestCondition::GetWorld() const
{
	// If we are a CDO, we must return nullptr instead of calling Outer->GetWorld() to fool UObject::ImplementsGetWorld.
	if (HasAllFlags(RF_ClassDefaultObject))
		return nullptr;

	return GetOuter()->GetWorld();
}


ULatentCondition::ULatentCondition()
	: Super()
{}

UInstantCondition::UInstantCondition()
	: Super()
{}
