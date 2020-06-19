// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "ConditionGraph.h"
#include "Kismet2/BlueprintEditorUtils.h"

#include "Conditions/ConditionContainer.h"
#include "Conditions/QuestCondition.h"
#include "ConditionContainerCustomization.h"

#include "ConditionGraphSchema.h"
#include "ConditionGraphNode.h"
#include "ConditionGraphNode_Root.h"

#define LOCTEXT_NAMESPACE "ConditionGraph"


UConditionGraph::UConditionGraph( const FObjectInitializer& ObjectInitializer )
	: Super( ObjectInitializer )
{
	/*if (!UConditionContainer::GetConditionEditor().IsValid())
	{
		UConditionContainer::SetConditionEditor(TSharedPtr<FConditionEditor>(new FConditionEditor()));
	}*/
}

void UConditionGraph::RefreshGraph()
{
	RemoveAllNodes();
}

void UConditionGraph::RemoveAllNodes()
{
	TArray< UEdGraphNode* > NodesToRemove = Nodes;
	for (int32 NodeIndex = 0; NodeIndex < NodesToRemove.Num(); ++NodeIndex)
	{
		RemoveNode( NodesToRemove[NodeIndex] );
	}
}

class UConditionContainer* UConditionGraph::GetContainer() const
{
	return CastChecked<UConditionContainer>(GetOuter());
}

class UConditionGraphNode_Root* UConditionGraph::GetRootNode() const
{
	TArray<UConditionGraphNode_Root*> RootNodeList;
	GetContainer()->GetGraph()->GetNodesOfClass<UConditionGraphNode_Root>(RootNodeList);
	check(RootNodeList.Num() == 1);
	return RootNodeList[0];
}

UQuestCondition* UConditionGraph::ConstructConditionNode(TSubclassOf<UQuestCondition> NodeClass /*= UQuestCondition::StaticClass()*/, bool bSelectNewNode)
{
	// Set flag to be transactional so it registers with undo system
	UQuestCondition* Node = NewObject<UQuestCondition>(GetContainer(), NodeClass, NAME_None, RF_Transactional);

	//Setup node
	{
		GetContainer()->AllConditions.Add(Node);
		FGraphNodeCreator<UConditionGraphNode> NodeCreator(*this);
		UConditionGraphNode* GraphNode = NodeCreator.CreateNode(bSelectNewNode);
		GraphNode->SetConditionNode(Node);
		NodeCreator.Finalize();
	}

	return Node;
}

void UConditionGraph::LinkGraphNodesFromConditionNodes()
{
	UConditionContainer* Container = GetContainer();
	check(Container);

	// Use ConditionNodes to make GraphNode Connections

	//Bind root node connections
	if (Container->FirstCondition)
	{
		UEdGraphPin* RootOutputPin = GetRootNode()->GetOutputPin();
		RootOutputPin->BreakAllPinLinks();

		RootOutputPin->MakeLinkTo(CastChecked<UConditionGraphNode>(Container->FirstCondition->GetGraphNode())->GetInputPin());
	}

	//Bind other connections
	for (TArray<UQuestCondition*>::TConstIterator It(Container->AllConditions); It; ++It)
	{
		UQuestCondition* ConditionNode = *It;
		if (ConditionNode)
		{
			for (auto& Output : *ConditionNode->GetOutputs()) {
				UEdGraphPin* OutputPin = CastChecked<UConditionGraphNode>(ConditionNode->GetGraphNode())->GetOutputPin(Output);

				check(OutputPin->LinkedTo.Num() == Output.Connections.Num());

				OutputPin->BreakAllPinLinks();

				for (auto* ChildNode : Output.Connections)
				{
					if (ChildNode)
					{
						OutputPin->MakeLinkTo(CastChecked<UConditionGraphNode>(ChildNode->GetGraphNode())->GetInputPin());
					}
				}
			}
		}
	}
}

void UConditionGraph::CompileConditionNodesFromGraphNodes()
{
	UConditionContainer* Container = GetContainer();
	check(Container);

	// Use GraphNodes to make ConditionNode Connections
	TArray<UQuestCondition*> ChildNodes;
	UEdGraphPin* OutputPin;

	for (UEdGraphNode* BaseNode : Nodes)
	{
		UConditionGraphNode* GraphNode = Cast<UConditionGraphNode>(BaseNode);

		if (GraphNode && GraphNode->ConditionNode)
		{
			// Set ChildNodes of each ConditionNode
			for (auto& Output : *GraphNode->ConditionNode->GetOutputs())
			{
				OutputPin = GraphNode->GetOutputPin(Output);
				ChildNodes.Empty();

				if (OutputPin && OutputPin->LinkedTo.Num() > 0)
				{
					for (auto* ConectedPin : OutputPin->LinkedTo)
					{
						if (ConectedPin)
						{
							UConditionGraphNode* GraphChildNode = CastChecked<UConditionGraphNode>(ConectedPin->GetOwningNode());
							if (ConectedPin->PinType.PinCategory == FCGPins::PC_Exec)
							{
								ChildNodes.Add(GraphChildNode->ConditionNode);
							}
						}
					}
				}

				GraphNode->ConditionNode->SetFlags(RF_Transactional);
				GraphNode->ConditionNode->Modify();
				Output.SetConnectedNodes(ChildNodes);
				GraphNode->ConditionNode->PostEditChange();
			}
		}
		else
		{
			// Set FirstNodes based on RootNode connections
			UConditionGraphNode_Root* RootNode = Cast<UConditionGraphNode_Root>(BaseNode);
			if (RootNode)
			{
				Container->Modify();

				const UEdGraphPin* RootOutput = RootNode->GetOutputPin();

				if (RootOutput->LinkedTo.Num() > 0)
				{
					Container->FirstCondition = CastChecked<UConditionGraphNode>(RootOutput->LinkedTo[0]->GetOwningNode())->ConditionNode;
				}

				Container->PostEditChange();
			}
		}
	}
}

void UConditionGraph::RemoveNullNodes()
{
	// Deal with QuestCondition types being removed - iterate in reverse as nodes may be removed
	for (UEdGraphNode* GraphNode : Nodes)
	{
		UConditionGraphNode* Node = Cast<UConditionGraphNode>(GraphNode);

		if (Node && Node->ConditionNode == nullptr)
		{
			FBlueprintEditorUtils::RemoveNode(nullptr, Node, true);
		}
	}
}

UConditionGraph* UConditionGraph::CreateNewConditionGraph(UConditionContainer * Container)
{
	UConditionGraph* Graph = CastChecked<UConditionGraph>(FBlueprintEditorUtils::CreateNewGraph(Container, NAME_None, UConditionGraph::StaticClass(), UConditionGraphSchema::StaticClass()));
	Graph->bAllowDeletion = false;

	// Give the schema a chance to fill out any required nodes (like the root node)
	const UEdGraphSchema* Schema = Graph->GetSchema();
	Schema->CreateDefaultNodesForGraph(*Graph);
	return Graph;
}

#undef LOCTEXT_NAMESPACE
