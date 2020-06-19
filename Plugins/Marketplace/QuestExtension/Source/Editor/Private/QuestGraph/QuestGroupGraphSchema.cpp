// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "QuestGraph/QuestGroupGraphSchema.h"
#include <UObject/UObjectHash.h>
#include <UObject/UObjectIterator.h>
#include <Layout/SlateRect.h>
#include <Framework/MultiBox/MultiBoxBuilder.h>
#include <EdGraphNode_Comment.h>
#include <EdGraph/EdGraph.h>
#include <ToolMenu.h>

#include <GraphEditorActions.h>
#include <ScopedTransaction.h>
#include <GraphEditor.h>
#include <Engine/Selection.h>
#include <Editor/AIGraph/Classes/AIGraphTypes.h>

#include "QuestGroup.h"

#include "QuestExtensionEditor.h"
#include "QuestGraph/QuestGroupGraph.h"
#include "QuestGraph/QuestGroupNode.h"
#include "QuestGraph/QuestGroupNode_Root.h"
#include "QuestGraph/QuestGroupEditorUtilities.h"
#include "QuestGraph/QuestGroupConnectionDrawingPolicy.h"


#define LOCTEXT_NAMESPACE "QuestGroupSchema"

/////////////////////////////////////////////////////
// FQuestGroupGraphSchemaAction_NewNode

UEdGraphNode* FQuestGroupGraphSchemaAction_NewNode::PerformAction(class UEdGraph* ParentGraph, UEdGraphPin* FromPin, const FVector2D Location, bool bSelectNewNode/* = true*/)
{
	check(QGNodeClass);

	UQuestGroup* QuestGroup = CastChecked<UQuestGroupGraph>(ParentGraph)->GetQuest();
	const FScopedTransaction Transaction( LOCTEXT("QuestEditorNewQGNode", "Quest Group Editor: New Quest Node") );
	ParentGraph->Modify();
	QuestGroup->Modify();


	UQGNode* NewNode = QuestGroup->ConstructQuestNode(QGNodeClass, bSelectNewNode);

	// Attempt to connect inputs to selected nodes, unless we're already dragging from a single output
	if (FromPin == nullptr || FromPin->Direction == EGPD_Input)
	{
		ConnectToSelectedNodes(NewNode, ParentGraph);
	}

	NewNode->GraphNode->NodePosX = Location.X;
	NewNode->GraphNode->NodePosY = Location.Y;

	NewNode->GraphNode->AutowireNewNode(FromPin);

	QuestGroup->PostEditChange();
	QuestGroup->MarkPackageDirty();

	return NewNode->GraphNode;
}

void FQuestGroupGraphSchemaAction_NewNode::ConnectToSelectedNodes(UQGNode* NewNode, class UEdGraph* ParentGraph) const
{
	FQGNodeOutput* Output;

	// only connect if node can have one or more children
	if (NewNode->GetDefaultOutput(Output))
	{
		const FGraphPanelSelectionSet SelectedNodes = FQuestGroupEditorUtilities::GetSelectedNodes(ParentGraph);

		TArray<UQGNode*> SortedNodes;
		for (FGraphPanelSelectionSet::TConstIterator NodeIt(SelectedNodes); NodeIt; ++NodeIt)
		{
			UQuestGroupNode* SelectedNode = Cast<UQuestGroupNode>(*NodeIt);

			if (SelectedNode)
			{
				// Sort the nodes by y position
				bool bInserted = false;
				for (int32 Index = 0; Index < SortedNodes.Num(); ++Index)
				{
					if (SortedNodes[Index]->GraphNode->NodePosY > SelectedNode->NodePosY)
					{
						SortedNodes.Insert(SelectedNode->QuestNode, Index);
						bInserted = true;
						break;
					}
				}
				if (!bInserted)
				{
					SortedNodes.Add(SelectedNode->QuestNode);
				}
			}
		}
		if (SortedNodes.Num() > 1)
		{
			//CastChecked<UQuestGroupGraphSchema>(NewNode->GraphNode->GetSchema())->TryConnectNodes(SortedNodes, NewNode);
		}
	}
}

/////////////////////////////////////////////////////
// FQuestGroupGraphSchemaAction_NewFromSelected

UEdGraphNode* FQuestGroupGraphSchemaAction_NewFromSelected::PerformAction(class UEdGraph* ParentGraph, UEdGraphPin* FromPin, const FVector2D Location, bool bSelectNewNode/* = true*/)
{
	UQuestGroup* QuestGroup = CastChecked<UQuestGroupGraph>(ParentGraph)->GetQuest();
	const FScopedTransaction Transaction( LOCTEXT("QuestGroupEditorNewFromSelection", "Quest Group Editor: New From Selection") );
	ParentGraph->Modify();
	QuestGroup->Modify();

	UEdGraphNode* CreatedNode = nullptr;

	FVector2D WaveStartLocation = Location;

	TArray<UQuestBase*> SelectedQuests;
	TArray<UQGNode*> CreatedNodes;

	FQuestGroupEditorUtilities::GetSelectedAssets(SelectedQuests);
	FQuestGroupEditorUtilities::CreateQuestContainers(SelectedQuests, QuestGroup, CreatedNodes, WaveStartLocation);

	if (CreatedNodes.Num() > 0)
	{
		CreatedNode = CreatedNodes[0]->GraphNode;
	}

	if (CreatedNode)
	{
		CreatedNode->AutowireNewNode(FromPin);
	}

	QuestGroup->PostEditChange();
	QuestGroup->MarkPackageDirty();

	return CreatedNode;
}


/////////////////////////////////////////////////////
// FQuestGroupGraphSchemaAction_NewComment

UEdGraphNode* FQuestGroupGraphSchemaAction_NewComment::PerformAction(class UEdGraph* ParentGraph, UEdGraphPin* FromPin, const FVector2D Location, bool bSelectNewNode/* = true*/)
{
	// Add menu item for creating comment boxes
	UEdGraphNode_Comment* CommentTemplate = NewObject<UEdGraphNode_Comment>();

	FVector2D SpawnLocation = Location;

	FSlateRect Bounds;
	if (FQuestGroupEditorUtilities::GetBoundsForSelectedNodes(ParentGraph, Bounds, 50.0f))
	{
		CommentTemplate->SetBounds(Bounds);
		SpawnLocation.X = CommentTemplate->NodePosX;
		SpawnLocation.Y = CommentTemplate->NodePosY;
	}

	return FEdGraphSchemaAction_NewNode::SpawnNodeFromTemplate<UEdGraphNode_Comment>(ParentGraph, CommentTemplate, SpawnLocation);
}


/////////////////////////////////////////////////////
// FQuestGroupGraphSchemaAction_Paste

UEdGraphNode* FQuestGroupGraphSchemaAction_Paste::PerformAction(class UEdGraph* ParentGraph, UEdGraphPin* FromPin, const FVector2D Location, bool bSelectNewNode/* = true*/)
{
	FQuestGroupEditorUtilities::PasteNodesHere(ParentGraph, Location);
	return nullptr;
}


/////////////////////////////////////////////////////
// UQuestGroupGraphSchema

UQuestGroupGraphSchema::UQuestGroupGraphSchema(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

bool UQuestGroupGraphSchema::ConnectionCausesLoop(const UEdGraphPin* InputPin, const UEdGraphPin* OutputPin) const
{
	// Only Execution pins can cause loops
	if(InputPin->PinType.PinCategory != FQGPins::PC_Exec) {
		return false;
	}

	UQuestGroupNode* OutputNode = Cast<UQuestGroupNode>(OutputPin->GetOwningNode());

	if (OutputNode)
	{
		// Only nodes representing QGNodes have inputs
		UQuestGroupNode* InputNode = CastChecked<UQuestGroupNode>(InputPin->GetOwningNode());

		if (InputNode->QuestNode)
		{
			// Grab all child nodes. We can't just test the input because
			// the loop could happen from any additional child nodes.
			TArray<UQGNode*> Nodes;
			InputNode->QuestNode->GetAllNodes(Nodes);

			// If our test output is in that set, return true.
			return Nodes.Contains(OutputNode->QuestNode);
		}
	}

	// Simple connection to root node
	return false;
}

void UQuestGroupGraphSchema::GetPaletteActions(FGraphActionMenuBuilder& ActionMenuBuilder) const
{
	GetAllQuestNodeActions(ActionMenuBuilder, false);
	GetCommentAction(ActionMenuBuilder);
}

void UQuestGroupGraphSchema::TryConnectNodes(const TArray<UQGNode*>& InputNodes, UQGNode* OutputNode) const
{
	for (int32 Index = 0; Index < InputNodes.Num(); Index++)
	{
		UQuestGroupNode* GraphNode = CastChecked<UQuestGroupNode>(OutputNode->GetGraphNode());
		if (Index >= OutputNode->GetOutputs()->Num())
		{
			//GraphNode->CreateOutputPin();
		}
		TryCreateConnection(GraphNode->GetDefaultOutputPin(), CastChecked<UQuestGroupNode>(InputNodes[Index]->GetGraphNode())->GetExecPin());
	}
}

void UQuestGroupGraphSchema::GetGraphContextActions(FGraphContextMenuBuilder& ContextMenuBuilder) const
{
	GetAllQuestNodeActions(ContextMenuBuilder, true);

	GetCommentAction(ContextMenuBuilder, ContextMenuBuilder.CurrentGraph);

	if (!ContextMenuBuilder.FromPin && FQuestGroupEditorUtilities::CanPasteNodes(ContextMenuBuilder.CurrentGraph))
	{
		TSharedPtr<FQuestGroupGraphSchemaAction_Paste> NewAction( new FQuestGroupGraphSchemaAction_Paste(FText::GetEmpty(), LOCTEXT("PasteHereAction", "Paste here"), FText::GetEmpty(), 0) );
		ContextMenuBuilder.AddAction( NewAction );
	}
}

void UQuestGroupGraphSchema::GetContextMenuActions(UToolMenu* Menu, UGraphNodeContextMenuContext* Context) const
{
	if (Context->Pin)
	{
		auto& Section = Menu->AddSection("QuestGroupGraphSchemaPinActions", LOCTEXT("PinActionsMenuHeader", "Pin Actions"));
		// Only display the 'Break Link' option if there is a link to break!
		if (Context->Pin->LinkedTo.Num() > 0)
		{
			Section.AddMenuEntry(FGraphEditorCommands::Get().BreakPinLinks);
		}
	}
	else if (Context->Node)
	{
		const UQuestGroupNode* QuestGraphNode = Cast<const UQuestGroupNode>(Context->Node);

		Menu->AddSection("QuestGroupGraphSchemaNodeActions", LOCTEXT("NodeActionsMenuHeader", "Node Actions"))
			.AddMenuEntry(FGraphEditorCommands::Get().BreakNodeLinks);
	}

	Super::GetContextMenuActions(Menu, Context);
}

void UQuestGroupGraphSchema::CreateDefaultNodesForGraph(UEdGraph& Graph) const
{
	const int32 RootNodeHeightOffset = -50;

	// Create root node
	FGraphNodeCreator<UQuestGroupNode_Root> NodeCreator(Graph);
	UQuestGroupNode_Root* RootNode = NodeCreator.CreateNode();
	RootNode->NodePosY = RootNodeHeightOffset;
	NodeCreator.Finalize();
	SetNodeMetaData(RootNode, FNodeMetadata::DefaultGraphNode);

	//Create a finish node
	/*TSharedPtr<FQuestGroupGraphSchemaAction_NewNode> NewFinishAction(new FQuestGroupGraphSchemaAction_NewNode());
	NewFinishAction->QGNodeClass = UQGNode_Finish::StaticClass();
	UQuestGroupNode* FinishNode = CastChecked<UQuestGroupNode>( NewFinishAction->PerformAction(
		&Graph,
		RootNode->GetOutputPin(),
		FVector2D(RootNodeHeightOffset, 100),
		false
	));*/

	//Connect them
	//TryCreateConnection(RootNode->GetOutputPin(), FinishNode->GetPinAt(0));
}

const FPinConnectionResponse UQuestGroupGraphSchema::CanCreateConnection(const UEdGraphPin* PinA, const UEdGraphPin* PinB) const
{
	// Make sure the pins are not on the same node
	if (PinA->GetOwningNode() == PinB->GetOwningNode())
	{
		return FPinConnectionResponse(CONNECT_RESPONSE_DISALLOW, LOCTEXT("ConnectionSameNode", "Both are on the same node"));
	}

	// Compare the directions
	const UEdGraphPin* InputPin = nullptr;
	const UEdGraphPin* OutputPin = nullptr;

	if (!CategorizePinsByDirection(PinA, PinB, /*out*/ InputPin, /*out*/ OutputPin))
	{
		return FPinConnectionResponse(CONNECT_RESPONSE_DISALLOW, LOCTEXT("ConnectionIncompatible", "Directions are not compatible"));
	}

	if (ConnectionCausesLoop(InputPin, OutputPin))
	{
		return FPinConnectionResponse(CONNECT_RESPONSE_DISALLOW, LOCTEXT("ConnectionLoop", "Connection would cause loop"));
	}

	// Replace Input pin if it's already connected
	if (InputPin->LinkedTo.Contains(OutputPin))
	{
		return FPinConnectionResponse(CONNECT_RESPONSE_DISALLOW, LOCTEXT("ConnectionAlreadyConnected", "Already connected"));
	}

	const UQuestGroupNode* InputNode = CastChecked<UQuestGroupNode>(InputPin->GetOwningNode());
	const UQuestGroupNode* OutputNode = Cast<UQuestGroupNode>(OutputPin->GetOwningNode());

	if (InputPin->PinType.PinCategory == FQGPins::PC_Exec)
	{
		if (InputNode)
		{
			// Nodes can't execute from the same output that is connected to rejection
			UEdGraphPin* RejectPin = InputNode->GetRejectPin();
			if (RejectPin && OutputPin->LinkedTo.Contains(RejectPin))
			{
				return FPinConnectionResponse(CONNECT_RESPONSE_DISALLOW, LOCTEXT("ConnectionRejectingChildNode", "Can't execute a child node from the output connected for rejection"));
			}
		}
	}
	else if (InputPin->PinType.PinCategory == FQGPins::PC_Reject)
	{
		// Root Nodes can't reject other nodes
		if (OutputPin->GetOwningNode()->IsA<UQuestGroupNode_Root>())
		{
			return FPinConnectionResponse(CONNECT_RESPONSE_DISALLOW, LOCTEXT("ConnectionRejectFromRoot", "Can't reject from root node"));
		}

		// Nodes can't reject from the same output that is connected to execution
		UEdGraphPin* ExecPin = InputNode->GetExecPin();
		if (ExecPin && OutputPin->LinkedTo.Contains(ExecPin))
		{
			return FPinConnectionResponse(CONNECT_RESPONSE_DISALLOW, LOCTEXT("ConnectionRejectingChildNode", "Can't reject a child node from the output connected for execution"));
		}
	}

	return FPinConnectionResponse(CONNECT_RESPONSE_MAKE, TEXT(""));
}

bool UQuestGroupGraphSchema::TryCreateConnection(UEdGraphPin* PinA, UEdGraphPin* PinB) const
{
	bool bModified = UEdGraphSchema::TryCreateConnection(PinA, PinB);

	if (bModified)
	{
		CastChecked<UQuestGroupGraph>(PinA->GetOwningNode()->GetGraph())->GetQuest()->CompileQuestNodesFromGraphNodes();
	}

	return bModified;
}

bool UQuestGroupGraphSchema::ShouldHidePinDefaultValue(UEdGraphPin* Pin) const
{
	return true;
}

FLinearColor UQuestGroupGraphSchema::GetPinTypeColor(const FEdGraphPinType& PinType) const
{
	return FQGPins::GetPinTypeColor(PinType);
}

void UQuestGroupGraphSchema::BreakNodeLinks(UEdGraphNode& TargetNode) const
{
	Super::BreakNodeLinks(TargetNode);

	CastChecked<UQuestGroupGraph>(TargetNode.GetGraph())->GetQuest()->CompileQuestNodesFromGraphNodes();
}

void UQuestGroupGraphSchema::BreakPinLinks(UEdGraphPin& TargetPin, bool bSendsNodeNotifcation) const
{
	const FScopedTransaction Transaction( NSLOCTEXT("UnrealEd", "GraphEd_BreakPinLinks", "Break Pin Links") );

	Super::BreakPinLinks(TargetPin, bSendsNodeNotifcation);

	// if this would notify the node then we need to compile the Quest Group
	if (bSendsNodeNotifcation)
	{
		CastChecked<UQuestGroupGraph>(TargetPin.GetOwningNode()->GetGraph())->GetQuest()->CompileQuestNodesFromGraphNodes();
	}
}

void UQuestGroupGraphSchema::DroppedAssetsOnGraph(const TArray<FAssetData>& Assets, const FVector2D& GraphPosition, UEdGraph* Graph) const
{
	//////////////////////////////////////////////////////////////////////////
	// Retrieve Asset Types
	TArray<UQuestBase*> Quests;
	for (int32 AssetIdx = 0; AssetIdx < Assets.Num(); ++AssetIdx)
	{
		UQuestBase* Quest = Cast<UQuestBase>(Assets[AssetIdx].GetAsset());
		if (Quest)
		{
			Quests.Add(Quest);
		}
		//else continue retrieving other types
	}

	//////////////////////////////////////////////////////////////////////////
	// Handle dropped UQuests
	if (Quests.Num() > 0)
	{
		const FScopedTransaction Transaction( LOCTEXT("QuestGroupEditorDropWave", "Quest Group Editor: Drag and Drop Quest") );

		UQuestGroupGraph* QuestGroupGraph = CastChecked<UQuestGroupGraph>(Graph);
		UQuestGroup* QuestGroup = QuestGroupGraph->GetQuest();

		QuestGroupGraph->Modify();

		TArray<UQGNode*> CreatedNodes;
		FQuestGroupEditorUtilities::CreateQuestContainers(Quests, QuestGroup, CreatedNodes, GraphPosition);
	}
}

void UQuestGroupGraphSchema::DroppedAssetsOnNode(const TArray<FAssetData>& Assets, const FVector2D& GraphPosition, UEdGraphNode* Node) const
{
	// Currently, drag and drop is only supported for dropping on quest group graph nodes.
	if (!Node->IsA<UQuestGroupNode>())
	{
		return;
	}

	//////////////////////////////////////////////////////////////////////////
	// Retrieve Asset Types
	TArray<UQuestBase*> Quests;
	for (int32 AssetIdx = 0; AssetIdx < Assets.Num(); ++AssetIdx)
	{
		UQuestBase* Quest = Cast<UQuestBase>(Assets[AssetIdx].GetAsset());
		if (Quest)
		{
			Quests.Add(Quest);
		}
		//else continue retrieving other types
	}

	//////////////////////////////////////////////////////////////////////////
	// Handle dropped UQuests
	if (Quests.Num() > 0)
	{
		const FScopedTransaction Transaction(LOCTEXT("QuestGroupEditorDropQuestIntoNode", "Quest Group Editor: Drag and Drop Quest"));

		UQuestGroupNode* QGNode = Cast<UQuestGroupNode>(Node);
		check(QGNode);


		if (QGNode->QuestNode)
		{
			UQGNode_QuestFromAsset* QuestNode = Cast<UQGNode_QuestFromAsset>(QGNode->QuestNode);
			if (QuestNode)
			{
				QuestNode->Modify();
				QuestNode->QuestAsset = Quests[0];
			}
		}
	}


	Super::DroppedAssetsOnNode(Assets, GraphPosition, Node);
}

void UQuestGroupGraphSchema::GetAllQuestNodeActions(FGraphActionMenuBuilder& ActionMenuBuilder, bool bShowSelectedActions) const
{
	FQuestExtensionEditorModule& EditorModule = FQuestExtensionEditorModule::GetInstance();

	FGraphNodeClassHelper* ClassCache = EditorModule.GetQGClassCache().Get();

	FText SelectedItemText;
	bool bIsQuestSelected = false;

	if (bShowSelectedActions)
	{
		TArray<UQuestBase*> SelectedQuests;
		FQuestGroupEditorUtilities::GetSelectedAssets(SelectedQuests);

		// Get display text for any items that may be selected
		if (ActionMenuBuilder.FromPin == nullptr)
		{

			const int32 TotalQuests = SelectedQuests.Num();

			if (TotalQuests == 1)
			{
				SelectedItemText = FText::FromString(SelectedQuests[0]->GetName());
				bIsQuestSelected = true;
			}
			else if (TotalQuests > 1)
			{
				bIsQuestSelected = true;
				SelectedItemText = LOCTEXT("MultipleQuestsSelected", "Multiple Quests");
			}
		}
		else if(SelectedQuests.Num() > 0)
		{
			UQuestBase* SelectedQuest = SelectedQuests[0];
			if (SelectedQuest && ActionMenuBuilder.FromPin->Direction == EGPD_Output)
			{
				SelectedItemText = FText::FromString(SelectedQuest->GetName());
				bIsQuestSelected = true;
			}
		}

		bShowSelectedActions = !SelectedItemText.IsEmpty();

		FCategorizedGraphActionListBuilder NodesBuilder(TEXT("Nodes"));

		TArray<FGraphNodeClassData> NodeClasses;
		ClassCache->GatherClasses(UQGNode::StaticClass(), NodeClasses);

		for (auto& NodeClass : NodeClasses)
		{
			// when dragging from an output pin you can create anything but a wave player
			if (!ActionMenuBuilder.FromPin || ActionMenuBuilder.FromPin->Direction == EGPD_Output)
			{
				static const FName NAME_HiddenInQuestGroup(TEXT("HiddenInQuestGroup"));
				if (NodeClass.GetClass()->HasMetaData(NAME_HiddenInQuestGroup))
				{
					continue;
				}


				const FText Name = FText::FromString(FName::NameToDisplayString(NodeClass.ToString(), false));
				const FText Category = NodeClass.GetCategory();

				{
					FFormatNamedArguments Arguments;
					Arguments.Add(TEXT("Name"), Name);
					const FText AddToolTip = FText::Format(LOCTEXT("NewQuestGroupNodeTooltip", "Adds {Name} node here"), Arguments);
					TSharedPtr<FQuestGroupGraphSchemaAction_NewNode> NewNodeAction(new FQuestGroupGraphSchemaAction_NewNode(Category, Name, AddToolTip, 0));
					ActionMenuBuilder.AddAction(NewNodeAction);
					NewNodeAction->QGNodeClass = NodeClass.GetClass();
				}

				if (bShowSelectedActions &&
					((NodeClass.GetClass() == UQGNode_QuestFromAsset::StaticClass() && bIsQuestSelected)))
				{
					FFormatNamedArguments Arguments;
					Arguments.Add(TEXT("Name"), Name);
					Arguments.Add(TEXT("SelectedItems"), SelectedItemText);
					const FText MenuDesc = FText::Format(LOCTEXT("NewQuestNodeRandom", "{Name}: {SelectedItems}"), Arguments);
					const FText ToolTip = FText::Format(LOCTEXT("NewQuestNodeRandomTooltip", "Adds a {Name} node for {SelectedItems}"), Arguments);
					TSharedPtr<FQuestGroupGraphSchemaAction_NewFromSelected> NewNodeAction(new FQuestGroupGraphSchemaAction_NewFromSelected(Category,
						MenuDesc,
						ToolTip, 0));
					NodesBuilder.AddAction(NewNodeAction);
					NewNodeAction->QGNodeClass = NodeClass.GetClass();
				}
			}
		}

		ActionMenuBuilder.Append(NodesBuilder);
	}
}

void UQuestGroupGraphSchema::GetCommentAction(FGraphActionMenuBuilder& ActionMenuBuilder, const UEdGraph* CurrentGraph) const
{
	if (!ActionMenuBuilder.FromPin)
	{
		const bool bIsManyNodesSelected = CurrentGraph ? (FQuestGroupEditorUtilities::GetNumberOfSelectedNodes(CurrentGraph) > 0) : false;
		const FText MenuDescription = bIsManyNodesSelected ? LOCTEXT("CreateCommentAction", "Create Comment from Selection") : LOCTEXT("AddCommentAction", "Add Comment...");
		const FText ToolTip = LOCTEXT("CreateCommentToolTip", "Creates a comment.");

		TSharedPtr<FQuestGroupGraphSchemaAction_NewComment> NewAction(new FQuestGroupGraphSchemaAction_NewComment(FText::GetEmpty(), MenuDescription, ToolTip, 0));
		ActionMenuBuilder.AddAction( NewAction );
	}
}

int32 UQuestGroupGraphSchema::GetNodeSelectionCount(const UEdGraph* Graph) const
{
	return FQuestGroupEditorUtilities::GetNumberOfSelectedNodes(Graph);
}

TSharedPtr<FEdGraphSchemaAction> UQuestGroupGraphSchema::GetCreateCommentAction() const
{
	return TSharedPtr<FEdGraphSchemaAction>(static_cast<FEdGraphSchemaAction*>(new FQuestGroupGraphSchemaAction_NewComment));
}

class FConnectionDrawingPolicy* UQuestGroupGraphSchema::CreateConnectionDrawingPolicy(int32 InBackLayerID, int32 InFrontLayerID, float InZoomFactor, const FSlateRect& InClippingRect, class FSlateWindowElementList& InDrawElements, class UEdGraph* InGraphObj) const
{
	return new FQuestGroupConnectionDrawingPolicy(InBackLayerID, InFrontLayerID, InZoomFactor, InClippingRect, InDrawElements, InGraphObj);
}

#undef LOCTEXT_NAMESPACE
