// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "ConditionGraph/ConditionGraphSchema.h"
#include <UObject/UObjectHash.h>
#include <UObject/UObjectIterator.h>
#include <Layout/SlateRect.h>
#include <Framework/MultiBox/MultiBoxBuilder.h>
#include <EdGraphNode_Comment.h>
#include <EdGraph/EdGraph.h>
#include <ToolMenu.h>

#include "Editor.h"
#include "GraphEditorActions.h"
#include "ScopedTransaction.h"
#include "GraphEditor.h"
#include "Engine/Selection.h"
#include "Editor/AIGraph/Classes/AIGraphTypes.h"

#include "ConditionGraph.h"
#include "ConditionGraphNode.h"
#include "ConditionGraphNode_Root.h"
#include "ConditionGraphEditorUtilities.h"
#include "ConditionGraphConnectionDrawingPolicy.h"
#include "QuestExtensionEditor.h"

#include "Conditions/ConditionContainer.h"
#include "Conditions/QuestCondition.h"

#define LOCTEXT_NAMESPACE "ConditionGraphSchema"


/////////////////////////////////////////////////////
// FConditionGraphSchemaAction_NewNode

UEdGraphNode* FConditionGraphSchemaAction_NewNode::PerformAction(class UEdGraph* ParentGraph, UEdGraphPin* FromPin, const FVector2D Location, bool bSelectNewNode/* = true*/)
{
	check(ConditionClass);
	UConditionGraph* Graph = CastChecked<UConditionGraph>(ParentGraph);

	UConditionContainer* Container = Graph->GetContainer();
	const FScopedTransaction Transaction( LOCTEXT("QuestEditorNewQuestCondition", "Quest Group Editor: New Quest Node") );
	Graph->Modify();
	Container->Modify();


	UQuestCondition* NewNode = Graph->ConstructConditionNode(ConditionClass, bSelectNewNode);

	// If this node allows >0 children but by default has zero - create a connector for starters
	for (auto& Output : *NewNode->GetOutputs())
	{
		if (Output.GetMaxConnections() > 0 && Output.Connections.Num() == 0)
		{
			Output.CreateStartingConnectors();
		}
	}

	// Attempt to connect inputs to selected nodes, unless we're already dragging from a single output
	if (FromPin == nullptr || FromPin->Direction == EGPD_Input)
	{
		ConnectToSelectedNodes(NewNode, ParentGraph);
	}

	NewNode->GraphNode->NodePosX = Location.X;
	NewNode->GraphNode->NodePosY = Location.Y;

	NewNode->GraphNode->AutowireNewNode(FromPin);

	Container->PostEditChange();
	Container->MarkPackageDirty();

	return NewNode->GraphNode;
}

void FConditionGraphSchemaAction_NewNode::ConnectToSelectedNodes(UQuestCondition* NewNode, class UEdGraph* ParentGraph) const
{
	FConditionOutput* Output = NewNode->GetOutputs()->GetData();

	// only connect if node can have many children

	if (Output && Output->GetMaxConnections() > 1)
	{
		const FGraphPanelSelectionSet SelectedNodes = FConditionGraphEditorUtilities::GetSelectedNodes(ParentGraph);

		TArray<UQuestCondition*> SortedNodes;
		for (FGraphPanelSelectionSet::TConstIterator NodeIt(SelectedNodes); NodeIt; ++NodeIt)
		{
			UConditionGraphNode* SelectedNode = Cast<UConditionGraphNode>(*NodeIt);

			if (SelectedNode)
			{
				// Sort the nodes by y position
				bool bInserted = false;
				for (int32 Index = 0; Index < SortedNodes.Num(); ++Index)
				{
					if (SortedNodes[Index]->GraphNode->NodePosY > SelectedNode->NodePosY)
					{
						SortedNodes.Insert(SelectedNode->ConditionNode, Index);
						bInserted = true;
						break;
					}
				}
				if (!bInserted)
				{
					SortedNodes.Add(SelectedNode->ConditionNode);
				}
			}
		}
		if (SortedNodes.Num() > 1)
		{
			//CastChecked<UConditionGraphSchema>(NewNode->GraphNode->GetSchema())->TryConnectNodes(SortedNodes, NewNode);
		}
	}
}

/////////////////////////////////////////////////////
// FConditionGraphSchemaAction_NewFromSelected

UEdGraphNode* FConditionGraphSchemaAction_NewFromSelected::PerformAction(class UEdGraph* ParentGraph, UEdGraphPin* FromPin, const FVector2D Location, bool bSelectNewNode/* = true*/)
{
	UConditionGraph* Graph = CastChecked<UConditionGraph>(ParentGraph);

	UConditionContainer* Container = Graph->GetContainer();
	const FScopedTransaction Transaction( LOCTEXT("ConditionGraphEditorNewFromSelection", "Quest Group Editor: New From Selection") );
	Graph->Modify();
	Container->Modify();

	UEdGraphNode* CreatedNode = nullptr;

	FVector2D WaveStartLocation = Location;

	if (ConditionClass)
	{
		// If we will create another node, move wave nodes out of the way.
		WaveStartLocation.X -= 200;
	}

	if (ConditionClass)
	{
		UQuestCondition* NewNode = Graph->ConstructConditionNode(ConditionClass, bSelectNewNode);
		UEdGraphNode* NewGraphNode = NewNode->GraphNode;
		const UConditionGraphSchema* NewSchema = CastChecked<UConditionGraphSchema>(NewGraphNode->GetSchema());

		// If this node allows >0 children but by default has zero - create a connector for starters
		for (auto& Output : *NewNode->GetOutputs())
		{
			if (Output.GetMaxConnections() > 0 && Output.Connections.Num() == 0)
			{
				Output.CreateStartingConnectors();
			}
		}

		NewGraphNode->NodePosX = Location.X;
		NewGraphNode->NodePosY = Location.Y;

		CreatedNode = NewNode->GraphNode;
	}

	if (CreatedNode)
	{
		CreatedNode->AutowireNewNode(FromPin);
	}

	Container->PostEditChange();
	Container->MarkPackageDirty();

	return CreatedNode;
}


/////////////////////////////////////////////////////
// FConditionGraphSchemaAction_NewComment

UEdGraphNode* FConditionGraphSchemaAction_NewComment::PerformAction(class UEdGraph* ParentGraph, UEdGraphPin* FromPin, const FVector2D Location, bool bSelectNewNode/* = true*/)
{
	// Add menu item for creating comment boxes
	UEdGraphNode_Comment* CommentTemplate = NewObject<UEdGraphNode_Comment>();

	FVector2D SpawnLocation = Location;

	FSlateRect Bounds;
	if (FConditionGraphEditorUtilities::GetBoundsForSelectedNodes(ParentGraph, Bounds, 50.0f))
	{
		CommentTemplate->SetBounds(Bounds);
		SpawnLocation.X = CommentTemplate->NodePosX;
		SpawnLocation.Y = CommentTemplate->NodePosY;
	}

	return FEdGraphSchemaAction_NewNode::SpawnNodeFromTemplate<UEdGraphNode_Comment>(ParentGraph, CommentTemplate, SpawnLocation);
}


/////////////////////////////////////////////////////
// FConditionGraphSchemaAction_Paste

UEdGraphNode* FConditionGraphSchemaAction_Paste::PerformAction(class UEdGraph* ParentGraph, UEdGraphPin* FromPin, const FVector2D Location, bool bSelectNewNode/* = true*/)
{
	FConditionGraphEditorUtilities::PasteNodesHere(ParentGraph, Location);
	return nullptr;
}


/////////////////////////////////////////////////////
// UConditionGraphSchema

UConditionGraphSchema::UConditionGraphSchema(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

bool UConditionGraphSchema::ConnectionCausesLoop(const UEdGraphPin* InputPin, const UEdGraphPin* OutputPin) const
{
	// Only Execution pins can cause loops
	if(InputPin->PinType.PinCategory != FCGPins::PC_Exec) {
		return false;
	}

	UConditionGraphNode* OutputNode = Cast<UConditionGraphNode>(OutputPin->GetOwningNode());

	if (OutputNode)
	{
		// Only nodes representing QuestConditions have inputs
		UConditionGraphNode* InputNode = CastChecked<UConditionGraphNode>(InputPin->GetOwningNode());

		if (InputNode->ConditionNode)
		{
			// Grab all child nodes. We can't just test the input because
			// the loop could happen from any additional child nodes.
			TArray<UQuestCondition*> Nodes;
			InputNode->ConditionNode->GetAllNodes(Nodes);

			// If our test output is in that set, return true.
			return Nodes.Contains(OutputNode->ConditionNode);
		}
	}

	// Simple connection to root node
	return false;
}

/*void UConditionGraphSchema::TryConnectNodes(const TArray<UQuestCondition*>& InputNodes, UQuestCondition* OutputNode) const
{
	for (UQuestCondition* InputNode : InputNodes)
	{
		UConditionGraphNode* GraphNode = CastChecked<UConditionGraphNode>(OutputNode->GetGraphNode());
		if (Index >= GraphNode->GetOutputCount())
		{
			GraphNode->CreateOutputPin();
		}
		TryCreateConnection(GraphNode->GetOutputPin(Index), CastChecked<UConditionGraphNode>(InputNodes[Index]->GetGraphNode())->GetInputPin());
	}
}*/

void UConditionGraphSchema::GetGraphContextActions(FGraphContextMenuBuilder& ContextMenuBuilder) const
{
	GetAllConditionNodeActions(ContextMenuBuilder, true);

	GetCommentAction(ContextMenuBuilder, ContextMenuBuilder.CurrentGraph);

	if (!ContextMenuBuilder.FromPin && FConditionGraphEditorUtilities::CanPasteNodes(ContextMenuBuilder.CurrentGraph))
	{
		TSharedPtr<FConditionGraphSchemaAction_Paste> NewAction( new FConditionGraphSchemaAction_Paste(LOCTEXT("ActionsCategory", "Actions"), LOCTEXT("PasteHereAction", "Paste here"), FText::GetEmpty(), 0) );
		ContextMenuBuilder.AddAction( NewAction );
	}
}

void UConditionGraphSchema::GetContextMenuActions(UToolMenu* Menu, UGraphNodeContextMenuContext* Context) const
{
	if (Context->Pin)
	{
		auto& Section = Menu->AddSection("ConditionGraphSchemaPinActions", LOCTEXT("PinActionsMenuHeader", "Pin Actions"));

		UConditionGraphNode* ConditionGraphNode = Cast<UConditionGraphNode>(Context->Pin->GetOwningNode());

		// Only allow output destroying if node has dynamic outputs
		if (ConditionGraphNode && ConditionGraphNode->CanAddOutputPin())
		{
			Section.AddMenuEntry("RemovePin",
				LOCTEXT("RemovePinMenuEntry", "Remove pin"),
				LOCTEXT("RemovePinMenuEntry_Tooltip", "Remove this pin from the node"),
				FSlateIcon(),
				FUIAction(FExecuteAction::CreateUObject(this, &UConditionGraphSchema::RemovePin, ConditionGraphNode, Context->Pin))
			);
		}

		// Only display the 'Break Link' option if there is a link to break!
		if (Context->Pin->LinkedTo.Num() > 0)
		{
			Section.AddMenuEntry( FGraphEditorCommands::Get().BreakPinLinks );
		}
	}
	else if (Context->Node)
	{
		const UConditionGraphNode* ConditionGraphNode = Cast<const UConditionGraphNode>(Context->Node);

		Menu->AddSection("ConditionGraphSchemaNodeActions", LOCTEXT("NodeActionsMenuHeader", "Node Actions"))
			.AddMenuEntry(FGraphEditorCommands::Get().BreakNodeLinks);
	}

	Super::GetContextMenuActions(Menu, Context);
}

void UConditionGraphSchema::CreateDefaultNodesForGraph(UEdGraph& Graph) const
{
	const int32 RootNodeHeightOffset = -50;

	// Create root node
	FGraphNodeCreator<UConditionGraphNode_Root> NodeCreator(Graph);
	UConditionGraphNode_Root* RootNode = NodeCreator.CreateNode();
	RootNode->NodePosY = RootNodeHeightOffset;
	NodeCreator.Finalize();
	SetNodeMetaData(RootNode, FNodeMetadata::DefaultGraphNode);
}

const FPinConnectionResponse UConditionGraphSchema::CanCreateConnection(const UEdGraphPin* PinA, const UEdGraphPin* PinB) const
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

	const UConditionGraphNode_Root* RootNode = Cast<UConditionGraphNode_Root>(OutputPin->GetOwningNode());
	const UConditionGraphNode* InputNode = CastChecked<UConditionGraphNode>(InputPin->GetOwningNode());
	const UConditionGraphNode* OutputNode = Cast<UConditionGraphNode>(OutputPin->GetOwningNode());
	const UConditionGraph* Graph = Cast<UConditionGraph>(InputNode->GetGraph());


	if (ConnectionCausesLoop(InputPin, OutputPin))
	{
		return FPinConnectionResponse(CONNECT_RESPONSE_DISALLOW, LOCTEXT("ConnectionLoop", "Connection would cause loop"));
	}

	if (InputPin->LinkedTo.Contains(OutputPin))
	{
		return FPinConnectionResponse(CONNECT_RESPONSE_DISALLOW, LOCTEXT("ConnectionAlreadyConnected", "Already connected"));
	}


	// Limit connection to latent nodes
	if (!Graph->GetContainer()->bAllowsLatentExecution && InputNode->IsLatent())
	{
		//If we are connecting from root node or OutputNode is connected to RootNode
		if (RootNode || OutputNode->IsConnectedForExecution())
		{
			return FPinConnectionResponse(CONNECT_RESPONSE_DISALLOW, LOCTEXT("LatentNodesNotAllowed", "Latent Conditions are not allowed in this graph"));
		}
	}

	if (InputPin->LinkedTo.Num() > 0 && OutputPin->LinkedTo.Num() > 0)
	{
		return FPinConnectionResponse(CONNECT_RESPONSE_DISALLOW, LOCTEXT("ConnectionReplaceRejected", "Cannot replace multiple connections"));
	}

	// Break existing connections on inputs
	if (InputPin->LinkedTo.Num() > 0)
	{
		ECanCreateConnectionResponse ReplyBreakOutputs = InputPin == PinA? CONNECT_RESPONSE_BREAK_OTHERS_A : CONNECT_RESPONSE_BREAK_OTHERS_B;
		return FPinConnectionResponse(ReplyBreakOutputs, LOCTEXT("ConnectionReplaceIn", "Replace existing input connections"));
	}

	// Break existing connections on outputs
	if (OutputPin->LinkedTo.Num() > 0)
	{
		ECanCreateConnectionResponse ReplyBreakInputs = OutputPin == PinA ? CONNECT_RESPONSE_BREAK_OTHERS_A : CONNECT_RESPONSE_BREAK_OTHERS_B;
		return FPinConnectionResponse(ReplyBreakInputs, LOCTEXT("ConnectionReplaceOut", "Replace existing output connections"));
	}

	return FPinConnectionResponse(CONNECT_RESPONSE_MAKE, TEXT(""));
}

bool UConditionGraphSchema::TryCreateConnection(UEdGraphPin* PinA, UEdGraphPin* PinB) const
{
	bool bModified = UEdGraphSchema::TryCreateConnection(PinA, PinB);

	if (bModified)
	{
		CastChecked<UConditionGraph>(PinA->GetOwningNode()->GetGraph())->CompileConditionNodesFromGraphNodes();
	}

	return bModified;
}

bool UConditionGraphSchema::ShouldHidePinDefaultValue(UEdGraphPin* Pin) const
{
	return true;
}

FLinearColor UConditionGraphSchema::GetPinTypeColor(const FEdGraphPinType& PinType) const
{
	return FCGPins::GetPinTypeColor(PinType);
}

void UConditionGraphSchema::RemovePin(UConditionGraphNode* TargetNode, const UEdGraphPin* TargetPin) const
{
	check(TargetPin);
	CastChecked<UConditionGraphNode>(TargetNode)->RemoveOutputPin(*TargetPin);
}

void UConditionGraphSchema::BreakNodeLinks(UEdGraphNode& TargetNode) const
{
	Super::BreakNodeLinks(TargetNode);

	CastChecked<UConditionGraph>(TargetNode.GetGraph())->CompileConditionNodesFromGraphNodes();
}

void UConditionGraphSchema::BreakPinLinks(UEdGraphPin& TargetPin, bool bSendsNodeNotifcation) const
{
	const FScopedTransaction Transaction( NSLOCTEXT("UnrealEd", "GraphEd_BreakPinLinks", "Break Pin Links") );

	Super::BreakPinLinks(TargetPin, bSendsNodeNotifcation);

	// if this would notify the node then we need to compile the Quest Group
	if (bSendsNodeNotifcation)
	{
		CastChecked<UConditionGraph>(TargetPin.GetOwningNode()->GetGraph())->CompileConditionNodesFromGraphNodes();
	}
}

void UConditionGraphSchema::DroppedAssetsOnGraph(const TArray<FAssetData>& Assets, const FVector2D& GraphPosition, UEdGraph* Graph) const
{
	//////////////////////////////////////////////////////////////////////////
	// Retrieve Asset Types
	TArray<UQuest*> Quests;
	for (int32 AssetIdx = 0; AssetIdx < Assets.Num(); ++AssetIdx)
	{
		UQuest* Quest = Cast<UQuest>(Assets[AssetIdx].GetAsset());
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
		const FScopedTransaction Transaction( LOCTEXT("ConditionGraphEditorDropWave", "Quest Group Editor: Drag and Drop Quest") );

		UConditionGraph* ConditionGraph = CastChecked<UConditionGraph>(Graph);
		UConditionContainer* Condition = ConditionGraph->GetContainer();

		ConditionGraph->Modify();

		//FConditionGraphEditorUtilities::CreateQuestContainers(Quests, ConditionGraph, /*CreatedPlayers, */GraphPosition);
	}
}

void UConditionGraphSchema::DroppedAssetsOnNode(const TArray<FAssetData>& Assets, const FVector2D& GraphPosition, UEdGraphNode* Node) const
{
	// Currently, drag and drop is only supported for dropping on quest group graph nodes.
	if (!Node->IsA<UConditionGraphNode>())
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
		const FScopedTransaction Transaction(LOCTEXT("ConditionGraphEditorDropQuestIntoNode", "Quest Group Editor: Drag and Drop Quest"));

		UConditionGraphNode* QuestCondition = Cast<UConditionGraphNode>(Node);
		check(QuestCondition);


		if (QuestCondition->ConditionNode)
		{
		}
	}

	Super::DroppedAssetsOnNode(Assets, GraphPosition, Node);
}

void UConditionGraphSchema::GetAllConditionNodeActions(FGraphContextMenuBuilder& ActionMenuBuilder, bool bShowSelectedActions) const
{
	const UConditionGraph* Graph = CastChecked<UConditionGraph>(ActionMenuBuilder.CurrentGraph);
	bool bLatentNodesDenied = !Graph->GetContainer()->bAllowsLatentExecution;

	FQuestExtensionEditorModule& EditorModule = FQuestExtensionEditorModule::GetInstance();
	FGraphNodeClassHelper* ClassCache = EditorModule.GetConditionClassCache().Get();
	TArray<FGraphNodeClassData> NodeClasses;
	ClassCache->GatherClasses(UQuestCondition::StaticClass(), NodeClasses);

	FCategorizedGraphActionListBuilder NodesBuilder(TEXT("Nodes"));
	for (auto& NodeClass : NodeClasses)
	{
		const UQuestCondition* DefaultNode = Cast<UQuestCondition>(NodeClass.GetClass()->GetDefaultObject());

		//Don't show latent nodes with instant graphs
		if (DefaultNode->IsLatent() && bLatentNodesDenied)
			continue;

		// when dragging from an output pin you can create anything but a wave player
		if (!ActionMenuBuilder.FromPin || ActionMenuBuilder.FromPin->Direction == EGPD_Output)
		{
			const FText Name = FText::FromString(FName::NameToDisplayString(NodeClass.ToString(), false));
			FText Category = NodeClass.GetCategory();
			Category = !Category.IsEmpty() ? Category : LOCTEXT("OtherCategory", "Other");

			{
				FFormatNamedArguments Arguments;
				Arguments.Add(TEXT("Name"), Name);
				const FText AddToolTip = FText::Format(LOCTEXT("NewConditionGraphNodeTooltip", "Adds {Name} node here"), Arguments);
				TSharedPtr<FConditionGraphSchemaAction_NewNode> NewNodeAction(new FConditionGraphSchemaAction_NewNode(Category, Name, AddToolTip, 0));
				ActionMenuBuilder.AddAction(NewNodeAction);
				NewNodeAction->ConditionClass = NodeClass.GetClass();
			}
		}
	}

	ActionMenuBuilder.Append(NodesBuilder);
}

void UConditionGraphSchema::GetCommentAction(FGraphActionMenuBuilder& ActionMenuBuilder, const UEdGraph* CurrentGraph) const
{
	if (!ActionMenuBuilder.FromPin)
	{
		const bool bIsManyNodesSelected = CurrentGraph ? (FConditionGraphEditorUtilities::GetNumberOfSelectedNodes(CurrentGraph) > 0) : false;
		const FText MenuDescription = bIsManyNodesSelected ? LOCTEXT("CreateCommentAction", "Create Comment from Selection") : LOCTEXT("AddCommentAction", "Add Comment...");
		const FText ToolTip = LOCTEXT("CreateCommentToolTip", "Creates a comment.");

		TSharedPtr<FConditionGraphSchemaAction_NewComment> NewAction(new FConditionGraphSchemaAction_NewComment(LOCTEXT("ActionsCategory", "Actions"), MenuDescription, ToolTip, 0));
		ActionMenuBuilder.AddAction( NewAction );
	}
}

int32 UConditionGraphSchema::GetNodeSelectionCount(const UEdGraph* Graph) const
{
	return FConditionGraphEditorUtilities::GetNumberOfSelectedNodes(Graph);
}

TSharedPtr<FEdGraphSchemaAction> UConditionGraphSchema::GetCreateCommentAction() const
{
	return TSharedPtr<FEdGraphSchemaAction>(static_cast<FEdGraphSchemaAction*>(new FConditionGraphSchemaAction_NewComment));
}

class FConnectionDrawingPolicy* UConditionGraphSchema::CreateConnectionDrawingPolicy(int32 InBackLayerID, int32 InFrontLayerID, float InZoomFactor, const FSlateRect& InClippingRect, class FSlateWindowElementList& InDrawElements, class UEdGraph* InGraphObj) const
{
	return new FConditionGraphConnectionDrawingPolicy(InBackLayerID, InFrontLayerID, InZoomFactor, InClippingRect, InDrawElements, InGraphObj);
}

#undef LOCTEXT_NAMESPACE
