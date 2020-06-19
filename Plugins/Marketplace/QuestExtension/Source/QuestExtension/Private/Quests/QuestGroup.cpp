// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "QuestGroup.h"
#include <EngineUtils.h>

#include "QuestExtensionSettings.h"
#include "QuestManagerComponent.h"
#include "Conditions/QuestCondition.h"
#include "QGNodes/Execution/QGNode_Finish.h"
#include "QGNodes/Content/QGNode_QuestFromAsset.h"


#if USE_QUESTGROUP_DEBUGGER
int32 UQuestGroup::ActiveDebuggerCounter = 0;
#endif

/******************************************************************************
* UQuestGroup
**/

#if WITH_EDITOR
TSharedPtr<IQuestEditor> UQuestGroup::QuestEditor = nullptr;
#endif

UQuestGroup::UQuestGroup()
	: Super()
{}

void UQuestGroup::BeginPlay()
{
	for (auto* Node : FirstNodes) {
		if (Node)
			Node->ExecuteBeginPlay();
	}
}

void UQuestGroup::PostStartQuest()
{
#if USE_QUESTGROUP_DEBUGGER
	DebuggerSteps.Reset();
#endif

	StoreDebuggerExecutionStep(EQGExecutionSnap::Regular);

	for (auto* Node : FirstNodes) {
		if (Node)
			Node->Execute(nullptr);
	}
}

void UQuestGroup::PostFinishQuest(const EQuestCompletionState State)
{
	//Terminate All Node executions
	for (auto* Node : FirstNodes)
	{
		Node->TerminateExecution();
	}

	StoreDebuggerExecutionStep(EQGExecutionSnap::OutOfNodes);
}

UQGNode* UQuestGroup::ConstructQuestNode(TSubclassOf<UQGNode> QuestNodeClass /*= UQGNode::StaticClass()*/, bool bSelectNewNode /*= true*/)
{
	// Set flag to be transactional so it registers with undo system
	UQGNode* QuestNode = NewObject<UQGNode>(this, QuestNodeClass, NAME_None, RF_Transactional);
#if WITH_EDITOR
	AllNodes.Add(QuestNode);
	SetupQuestNode(QuestNode, bSelectNewNode);
#endif // WITH_EDITOR
	return QuestNode;
}



UQGNode* UQuestGroup::FindNodeById(FGuid Id)
{
	for (UQGNode* Node : FirstNodes) {
		if (Node)
		{
			if (Node->GetNodeId() == Id)
			{
				return Node;
			}
			else
			{
				UQGNode* Subnode = Node->FindSubNodeById(Id);
				if (Subnode)
				{
					return Subnode;
				}
			}
		}
	}
	return nullptr;
}

void UQuestGroup::GetAllNodes(TArray<UQGNode*>& QGNodes) const
{
	QGNodes.Reserve(FirstNodes.Num());
	for (UQGNode* Node : FirstNodes)
	{
		if (Node)
		{
			Node->GetAllNodes(QGNodes);
		}
	}
}

void UQuestGroup::GetAllQuestNodes(TArray<UQGNode_QuestFromAsset*>& QuestNodes) const
{
	TArray<UQGNode*> ConnectedNodes {};
	GetAllNodes(ConnectedNodes);

	for (UQGNode* Node : ConnectedNodes)
	{
		auto* QuestNode = Cast<UQGNode_QuestFromAsset>(Node);

		if (QuestNode)
		{
			QuestNodes.Add(QuestNode);
		}
	}
}

void UQuestGroup::GetAllRunningQuestNodes(TArray<UQGNode_QuestFromAsset*>& QuestNodes) const
{
	TArray<UQGNode*> ConnectedNodes{};
	GetAllNodes(ConnectedNodes);

	for (UQGNode* Node : ConnectedNodes)
	{
		auto* QuestNode = Cast<UQGNode_QuestFromAsset>(Node);
		check(QuestNode);

		if (QuestNode && QuestNode->IsRunning())
		{
			QuestNodes.Add(QuestNode);
		}
	}
}

void UQuestGroup::Serialize(FArchive& Ar)
{
	Super::Serialize(Ar);

	FStripDataFlags StripFlags(Ar);
#if WITH_EDITORONLY_DATA
	if (!StripFlags.IsEditorDataStripped())
	{
		Ar << QuestGraph;
	}
#endif
}

#if WITH_EDITOR
void UQuestGroup::PostInitProperties()
{
	Super::PostInitProperties();
	if (!HasAnyFlags(RF_ClassDefaultObject | RF_NeedLoad))
	{
		CreateGraph();
	}
}

void UQuestGroup::AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector)
{
	UQuestGroup* This = CastChecked<UQuestGroup>(InThis);

	Collector.AddReferencedObject(This->QuestGraph, This);

	Super::AddReferencedObjects(InThis, Collector);
}

void UQuestGroup::CreateGraph()
{
	IQuestEditor* Editor = GetQuestEditor().Get();
	if (Editor && QuestGraph == nullptr)
	{
		QuestGraph = Editor->CreateNewQuestGroupGraph(this);
		QuestGraph->bAllowDeletion = false;

		// Give the schema a chance to fill out any required nodes (like the root node)
		const UEdGraphSchema* Schema = QuestGraph->GetSchema();
		Schema->CreateDefaultNodesForGraph(*QuestGraph);
	}
}

void UQuestGroup::ClearGraph()
{
	if (QuestGraph)
	{
		QuestGraph->Nodes.Empty();
		// Give the schema a chance to fill out any required nodes (like the results node)
		const UEdGraphSchema* Schema = QuestGraph->GetSchema();
		Schema->CreateDefaultNodesForGraph(*QuestGraph);
	}
}

void UQuestGroup::SetupQuestNode(UQGNode* InQuestNode, bool bSelectNewNode/* = true*/)
{
	// Create the graph node
	check(InQuestNode->GraphNode == nullptr);

	UQuestGroup::GetQuestEditor()->SetupQuestNode(QuestGraph, InQuestNode, bSelectNewNode);
}

void UQuestGroup::LinkGraphNodesFromQuestNodes()
{
	GetQuestEditor()->LinkGraphNodesFromQuestNodes(this);
}

void UQuestGroup::CompileQuestNodesFromGraphNodes()
{
	GetQuestEditor()->CompileQuestNodesFromGraphNodes(this);
}

void UQuestGroup::OnQGNodeChanged(UQGNode* QGNode, FPropertyChangedEvent& PropertyChangedEvent, const bool bChangedOutputs)
{
	if (IQuestEditor* Editor = GetQuestEditor().Get())
	{
		Editor->OnQGNodeChanged(QGNode, PropertyChangedEvent, bChangedOutputs);
	}
}

UEdGraph* UQuestGroup::GetGraph()
{
	return QuestGraph;
}

void UQuestGroup::SetQuestEditor(TSharedPtr<IQuestEditor> InQuestEditor)
{
	check(!QuestEditor.IsValid());
	QuestEditor = InQuestEditor;
}

/** Gets the quest group graph editor implementation. */
TSharedPtr<IQuestEditor> UQuestGroup::GetQuestEditor()
{
	return QuestEditor;
}
#endif // WITH_EDITOR

void UQuestGroup::StoreDebuggerExecutionStep(EQGExecutionSnap::Type SnapType)
{
#if USE_QUESTGROUP_DEBUGGER
	if (!IsDebuggerActive())
	{
		return;
	}

	FQuestGroupExecutionStep CurrentStep;
	CurrentStep.StepIndex = DebuggerSteps.Num() ? DebuggerSteps.Last().StepIndex + 1 : 0;
	CurrentStep.TimeStamp = GetWorld()->GetTimeSeconds();

	FQuestGroupDebuggerInstance StoreInfo;
	StoreDebuggerInstance(StoreInfo, SnapType);
	CurrentStep.Instance = StoreInfo;

	CurrentSearchFlow.Reset();
	CurrentRestart.Reset();
	RemovedInstance = {};

	const UQuestExtensionSettings* Settings = GetDefault<UQuestExtensionSettings>();
	while (DebuggerSteps.Num() >= Settings->MaxDebuggerSteps)
	{
		DebuggerSteps.RemoveAt(0, /*Count=*/1, /*bAllowShrinking=*/false);
	}
	DebuggerSteps.Add(CurrentStep);
#endif
}

void UQuestGroup::StoreDebuggerInstance(FQuestGroupDebuggerInstance& InstanceInfo, EQGExecutionSnap::Type SnapType) const
{
#if USE_QUESTGROUP_DEBUGGER
	InstanceInfo.QGAsset = CastChecked<UQuestGroup>(GetAsset().Get());
	InstanceInfo.RootNodes = FirstNodes;

	if (SnapType == EQGExecutionSnap::Regular)
	{
		TArray<UQGNode*> RootNodesTree;

		//Recover all connected nodes on this Quest Group
		for (UQGNode* RootNode : FirstNodes)
		{
			RootNode->GetAllNodes(RootNodesTree);
		}

		for (UQGNode* Node : RootNodesTree)
		{
			// Store node debugging data
			const FGuid& Id = Node->GetNodeId();

			if (Node->IsRunning())
			{
				InstanceInfo.RunningNodes.Add(Id);
			}
			else if (Node->IsCompleted())
			{
				if (Node->IsSucceeded())
				{
					InstanceInfo.SucceededNodes.Add(Id);
				}
				else
				{
					InstanceInfo.FailedNodes.Add(Id);
				}
			}

			if (Node->DebugInteractionParent.IsValid())
			{
				UQGNode* Parent = Node->DebugInteractionParent.Get();
				check(Parent);
				//Store connection backwards to optimize debugger
				InstanceInfo.ActiveConnections.Add(Node->GetNodeId(), Parent->GetNodeId());
			}
		}

		// runtime values
		//StoreDebuggerRuntimeValues(InstanceInfo.RuntimeDesc, FirstNodes);
	}

	// handle restart triggers
	InstanceInfo.PathFromPrevious = CurrentRestart;
#endif
}

void UQuestGroup::StoreDebuggerRemovedInstance() const
{
#if USE_QUESTGROUP_DEBUGGER
	if (!IsDebuggerActive())
	{
		return;
	}

	FQuestGroupDebuggerInstance StoreInfo;
	StoreDebuggerInstance(StoreInfo, EQGExecutionSnap::OutOfNodes);

	RemovedInstance = StoreInfo;
#endif
}

void UQuestGroup::StoreDebuggerRestart(const UQGNode* Node, bool bAllowed)
{
#if USE_QUESTGROUP_DEBUGGER
	if (!IsDebuggerActive())
	{
		return;
	}

	if (Node)
	{
		FQuestGroupDebuggerInstance::FNodeFlowData FlowInfo;
		FlowInfo.NodeId = Node->GetNodeId();
		FlowInfo.bTrigger = bAllowed;
		FlowInfo.bDiscardedTrigger = !bAllowed;

		CurrentRestart.Add(FlowInfo);
	}
#endif
}

void UQuestGroup::StoreDebuggerRuntimeValues(TArray<FString>& RuntimeDescriptions, UQGNode* RootNode) const
{
#if USE_QUESTGROUP_DEBUGGER

#endif
}

bool UQuestGroup::IsDebuggerActive()
{
#if USE_QUESTGROUP_DEBUGGER
	if (ActiveDebuggerCounter <= 0)
	{
		static bool bAlwaysGatherData = false;
		static uint64 PrevFrameCounter = 0;

		if (GFrameCounter != PrevFrameCounter)
		{
			const UQuestExtensionSettings* Settings = GetDefault<UQuestExtensionSettings>();
			bAlwaysGatherData = Settings->bAlwaysGatherData;
			PrevFrameCounter = GFrameCounter;
		}

		return bAlwaysGatherData;
	}

	return true;
#else
	return false;
#endif
}
