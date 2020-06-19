// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "QuestGraph/QuestGroupGraph.h"

#include "Kismet2/BlueprintEditorUtils.h"

#include "QuestGroupGraphSchema.h"
#include "QuestGraph/QuestGroupNode.h"
#include "QuestGraph/QuestGroupNode_Root.h"

#define LOCTEXT_NAMESPACE "QuestGraph"


class FQuestEditor : public IQuestEditor
{
public:
	FQuestEditor() {}

	~FQuestEditor() {}

	UEdGraph* CreateNewQuestGroupGraph(UQuestGroup* InQuestGroup) override
	{
		UQuestGroupGraph* QuestGroupGraph = CastChecked<UQuestGroupGraph>(FBlueprintEditorUtils::CreateNewGraph(InQuestGroup, NAME_None, UQuestGroupGraph::StaticClass(), UQuestGroupGraphSchema::StaticClass()));

		return Cast<UEdGraph>(QuestGroupGraph);
	}

	void SetupQuestNode(UEdGraph* QuestGroupGraph, UQGNode* InQuestNode, bool bSelectNewNode) override
	{
		FGraphNodeCreator<UQuestGroupNode> NodeCreator(*QuestGroupGraph);
		UQuestGroupNode* GraphNode = NodeCreator.CreateNode(bSelectNewNode);
		GraphNode->SetQuestNode(InQuestNode);
		NodeCreator.Finalize();
	}

	void LinkGraphNodesFromQuestNodes(UQuestGroup* QuestGroup) override
	{
		check(QuestGroup);

		// Use QuestNodes to make GraphNode Connections

		//Bind root node connections
		if(QuestGroup->FirstNodes.Num() > 0)
		{
			// Find the root node
			TArray<UQuestGroupNode_Root*> RootNodeList;
			QuestGroup->QuestGraph->GetNodesOfClass<UQuestGroupNode_Root>(RootNodeList);
			check(RootNodeList.Num() == 1);

			UEdGraphPin* RootOutputPin = RootNodeList[0]->GetOutputPin();
			RootOutputPin->BreakAllPinLinks();

			for (UQGNode* FirstNode : QuestGroup->FirstNodes)
			{
				if (FirstNode != nullptr)
				{
					RootOutputPin->MakeLinkTo(CastChecked<UQuestGroupNode>(FirstNode->GetGraphNode())->GetExecPin());
				}
			}
		}

		//Bind other connections
		for (TArray<UQGNode*>::TConstIterator It(QuestGroup->AllNodes); It; ++It)
		{
			UQGNode* QuestNode = *It;
			if (QuestNode)
			{
				for (auto& Output : *QuestNode->GetOutputs()) {
					UEdGraphPin* OutputPin = CastChecked<UQuestGroupNode>(QuestNode->GetGraphNode())->GetOutputPin(Output);

					check(OutputPin->LinkedTo.Num() == Output.ExecNodes.Num());

					OutputPin->BreakAllPinLinks();

					for (auto* ChildNode : Output.ExecNodes)
					{
						if (ChildNode)
						{
							OutputPin->MakeLinkTo(CastChecked<UQuestGroupNode>(ChildNode->GetGraphNode())->GetExecPin());
						}
					}

					for (auto* ChildNode : Output.RejectNodes)
					{
						if (ChildNode)
						{
							OutputPin->MakeLinkTo(CastChecked<UQuestGroupNode>(ChildNode->GetGraphNode())->GetRejectPin());
						}
					}
				}
			}
		}
	}

	void CompileQuestNodesFromGraphNodes(UQuestGroup* QuestGroup) override
	{
		// Use GraphNodes to make QuestNode Connections
		TArray<UQGNode*> ChildExecNodes;
		TArray<UQGNode*> ChildRejectNodes;
		UEdGraphPin* OutputPin;

		for (UEdGraphNode* BaseNode : QuestGroup->QuestGraph->Nodes)
		{
			UQuestGroupNode* GraphNode = Cast<UQuestGroupNode>(BaseNode);

			if (GraphNode && GraphNode->QuestNode)
			{
				// Set ChildNodes of each QuestNode
				for (auto& Output : *GraphNode->QuestNode->GetOutputs())
				{
					OutputPin = GraphNode->GetOutputPin(Output);
					ChildExecNodes.Empty();
					ChildRejectNodes.Empty();

					if (OutputPin && OutputPin->LinkedTo.Num() > 0)
					{
						for (auto* ConectedPin : OutputPin->LinkedTo)
						{
							if (ConectedPin)
							{
								UQuestGroupNode* GraphChildNode = CastChecked<UQuestGroupNode>(ConectedPin->GetOwningNode());
								if (ConectedPin->PinType.PinCategory == FQGPins::PC_Exec)
								{
									ChildExecNodes.Add(GraphChildNode->QuestNode);
								}
								else if (ConectedPin->PinType.PinCategory == FQGPins::PC_Reject)
								{
									ChildRejectNodes.Add(GraphChildNode->QuestNode);
								}
							}
						}
					}

					GraphNode->QuestNode->SetFlags(RF_Transactional);
					GraphNode->QuestNode->Modify();
					Output.SetConnectedExecNodes(ChildExecNodes);
					Output.SetConnectedRejectNodes(ChildRejectNodes);
					GraphNode->QuestNode->PostEditChange();
				}
			}
			else
			{
				// Set FirstNodes based on RootNode connections
				UQuestGroupNode_Root* RootNode = Cast<UQuestGroupNode_Root>(BaseNode);
				if (RootNode)
				{
					QuestGroup->Modify();

					QuestGroup->FirstNodes.Empty();

					for (auto* LinkedPin : RootNode->GetOutputPin()->LinkedTo)
					{
						QuestGroup->FirstNodes.Add(CastChecked<UQuestGroupNode>(LinkedPin->GetOwningNode())->QuestNode);
					}

					QuestGroup->PostEditChange();
				}
			}
		}
	}

	void RemoveNullNodes(UQuestGroup* QuestGroup) override
	{
		// Deal with QGNode types being removed - iterate in reverse as nodes may be removed
		for (UEdGraphNode* GraphNode : QuestGroup->QuestGraph->Nodes)
		{
			UQuestGroupNode* Node = Cast<UQuestGroupNode>(GraphNode);

			if (Node && Node->QuestNode == nullptr)
			{
				FBlueprintEditorUtils::RemoveNode(nullptr, Node, true);
			}
		}
	}

	void OnQGNodeChanged(UQGNode* QGNode, FPropertyChangedEvent& PropertyChangedEvent, const bool bChangedOutputs) override {
		UQuestGroupNode* QuestGroupNode = Cast<UQuestGroupNode>(QGNode->GetGraphNode());
		if (QuestGroupNode)
		{
			//QuestGroupNode->OnQGNodeChanged(PropertyChangedEvent, bChangedOutputs);
		}
	}
};


UQuestGroupGraph::UQuestGroupGraph( const FObjectInitializer& ObjectInitializer )
	: Super( ObjectInitializer )
{
	if (!UQuestGroup::GetQuestEditor().IsValid())
	{
		UQuestGroup::SetQuestEditor(MakeShared<FQuestEditor>());
	}
}

void UQuestGroupGraph::RefreshGraph()
{
	RemoveAllNodes();
}

void UQuestGroupGraph::RemoveAllNodes()
{
	TArray< UEdGraphNode* > NodesToRemove = Nodes;
	for (int32 NodeIndex = 0; NodeIndex < NodesToRemove.Num(); ++NodeIndex)
	{
		RemoveNode( NodesToRemove[NodeIndex] );
	}
}

class UQuestGroup* UQuestGroupGraph::GetQuest() const
{
	return CastChecked<UQuestGroup>(GetOuter());
}

#undef LOCTEXT_NAMESPACE