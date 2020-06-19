// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "QGNodes/QGNode.h"
#include "QuestGroup.h"
#include "EngineUtils.h"

#if WITH_EDITORONLY_DATA
#include "EdGraph/EdGraphNode.h"
#endif


UQGNode::UQGNode()
	: Super(),
	ID(FGuid::NewGuid()),
	bHasBegunPlay(false),
	bTerminating(false)
{
	FinishReason = EQGNodeFinishReason::None;
	State = EQGNodeState::Inactive;

	//Add default output
	AddEvent({ " " });
}

void UQGNode::BeginPlay()
{
	for (const auto& Output : Events) {
		for (auto* ExecNode : Output.ExecNodes) {
			ExecNode->ExecuteBeginPlay();
		}
	}
}

void UQGNode::Execute(UQGNode* Parent)
{
	if (!IsRunning() && !IsRejected())
	{
		State = EQGNodeState::Active;

#if USE_QUESTGROUP_DEBUGGER
		//Store parent for debugger
		DebugInteractionParent = Parent;
#endif
		StoreDebuggerExecutionStep(EQGExecutionSnap::Regular);

		OnStart();
	}
}

void UQGNode::Reject(UQGNode* Parent)
{
	FinishReason = EQGNodeFinishReason::Rejected;

	if (IsRunning())
	{
#if USE_QUESTGROUP_DEBUGGER
		//Store parent for debugger
		DebugInteractionParent = Parent;
#endif

		Finish(EQGNodeFinishReason::Rejected);
	}
}

void UQGNode::TerminateExecution()
{
	if (!bTerminating)
	{
		//Avoid loop executions
		bTerminating = true;

		//Terminate sub nodes
		for (const FQGNodeOutput& Event : Events)
		{
			for (UQGNode* ExecNode : Event.ExecNodes)
			{
				if (ExecNode)
				{
					ExecNode->TerminateExecution();
				}
			}
		}

		//Terminate this node
		//TODO: Terminate with Quest End result
		Finish(EQGNodeFinishReason::Rejected);
		bTerminating = false;
	}
}

void UQGNode::Finish(const EQGNodeFinishReason Reason)
{
	if (IsRunning() && Reason != EQGNodeFinishReason::None)
	{
		State = EQGNodeState::Completed;
		FinishReason = Reason;

		StoreDebuggerExecutionStep(EQGExecutionSnap::Regular);

		//Call default output
		OnFinish(Reason);
		CallEvent(" ");
	}
}

void UQGNode::OnStart()
{
	//By default finish instantly
	Finish(EQGNodeFinishReason::Succeed);
}

void UQGNode::OnFinish(const EQGNodeFinishReason Reason)
{
}

void UQGNode::AddEvent(const FQGNodeOutput& Output)
{
	const int32 Index = Events.IndexOfByKey(Output);
	if (Index != INDEX_NONE)
	{
		Events[Index] = Output;
	}
	else
	{
		Events.Add(Output);
	}
}

void UQGNode::CallEvent(const FName Event)
{
	FQGNodeOutput* Output = Events.FindByKey(Event);
	if (Output)
	{
		Output->Execute(this);
	}
}

UQuestGroup* UQGNode::GetQuestGroup() const
{
	return Cast<UQuestGroup>(GetOuter());
}

UQuestManagerComponent* UQGNode::GetManager() const
{
	const UQuestGroup* QG = GetQuestGroup();
	return QG ? QG->GetManager() : nullptr;
}

void UQGNode::SanitizeOutputs()
{
	TArray<FQGNodeOutput> OldEvents = Events;

	// Get Default outputs
	Events = *Cast<UQGNode>(GetClass()->GetDefaultObject())->GetOutputs();

	//Rewire old Outputs
	for (const auto& OldEvent : OldEvents)
	{
		for (auto& NewEvent : Events)
		{
			//If this output exists, copy it
			if (NewEvent == OldEvent)
			{
				NewEvent = OldEvent;
			}
		}
	}
}

UQGNode* UQGNode::FindSubNodeOfType(TSubclassOf<UQGNode> Class, const bool bFilterByCompleted) const
{
	for (const auto& Output : Events)
	{
		UQGNode* SubNode = Output.FindSubNodeOfType(Class, bFilterByCompleted);
		if (SubNode)
			return SubNode;
	}
	return nullptr;
}

UQGNode* UQGNode::FindSubNodeById(FGuid Id) const
{
	for (const auto& Output : Events)
	{
		UQGNode* SubNode = Output.FindSubNodeById(Id);
		if (SubNode)
		{
			return SubNode;
		}
	}
	return nullptr;
}

void UQGNode::GetAllNodes(TArray<UQGNode*>& QGNodes)
{
	QGNodes.Add(this);

	for (auto& Output : Events)
	{
		Output.GetAllConnectedNodes(QGNodes);
	}
}

const FQGNodeOutput* UQGNode::FindOutputByName(FName Name) const
{
	return Events.FindByKey(Name);
}

void UQGNode::GetAllNodesByOutputName(FName Name, TArray<UQGNode*>& QGNodes) const
{
	const FQGNodeOutput* Output = FindOutputByName(Name);
	if (Output)
	{
		Output->GetAllConnectedNodes(QGNodes);
	}
}

void UQGNode::Serialize(FArchive& Ar)
{
	Super::Serialize(Ar);
}

UWorld* UQGNode::GetWorld() const
{
	// If we are a CDO, we must return nullptr instead of calling Outer->GetWorld() to fool UObject::ImplementsGetWorld.
	if (HasAllFlags(RF_ClassDefaultObject))
		return nullptr;

	return GetOuter()->GetWorld();
}

/*bool UQGNode::IsSupportedForNetworking() const
{
	const UQuestGroup* Owner = GetQuestGroup();
	return Owner && !Owner->IsAsset();
}*/

void UQGNode::PostDuplicate(EDuplicateMode::Type DuplicateMode)
{
	//Change ID if we are inside a QuestGroup asset and we get duplicated
	if (GetQuestGroup()->IsAsset())
	{
		ID = FGuid::NewGuid();
	}

	Super::PostDuplicate(DuplicateMode);
}

#if WITH_EDITOR
void UQGNode::AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector)
{
	UQGNode* This = CastChecked<UQGNode>(InThis);

	Collector.AddReferencedObject(This->GraphNode, This);

	Super::AddReferencedObjects(InThis, Collector);
}
#endif //WITH_EDITOR

#if WITH_EDITORONLY_DATA
UEdGraphNode* UQGNode::GetGraphNode() const
{
	return GraphNode;
}
#endif

#if WITH_EDITOR
void UQGNode::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	if (PropertyChangedEvent.Property)
	{
		const FName MemberPropertyName = (PropertyChangedEvent.MemberProperty ? PropertyChangedEvent.MemberProperty->GetFName() : NAME_None);
		const bool bChangedOutputs = MemberPropertyName == GET_MEMBER_NAME_CHECKED(UQGNode, Events);

		GetQuestGroup()->OnQGNodeChanged(this, PropertyChangedEvent, bChangedOutputs);
	}

	Super::PostEditChangeProperty(PropertyChangedEvent);

}

void UQGNode::PostLoad()
{
	Super::PostLoad();
	// Make sure quest nodes are transactional (so they work with undo system)
	SetFlags(RF_Transactional);

	//In case ID wasn't assigned, do it now. (For deprecated QuestGroups)
	if (!ID.IsValid())
	{
		ID = FGuid::NewGuid();
	}
}

void UQGNode::PlaceNode( int32 NodeColumn, int32 NodeRow, int32 RowCount )
{
	GraphNode->NodePosX = (-150 * NodeColumn) - 100;
	GraphNode->NodePosY = (100 * NodeRow) - (50 * RowCount);
}

#endif //WITH_EDITOR

FText UQGNode::GetTitle() const
{
	if (!DisplayName.IsNone())
		return FText::FromName(DisplayName);

#if WITH_EDITOR
	return GetClass()->GetDisplayNameText();
#else
	return NSLOCTEXT("QuestEditor", "DefaultNodeTitle", "Node");
#endif
}

void UQGNode::StoreDebuggerExecutionStep(EQGExecutionSnap::Type SnapType)
{
	if (UQuestGroup* Owner = GetQuestGroup())
	{
		Owner->StoreDebuggerExecutionStep(SnapType);

#if USE_QUESTGROUP_DEBUGGER
		DebugInteractionParent.Reset();
#endif
	}
}
