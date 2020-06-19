// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "ConditionContainerCustomization.h"
#include "PropertyCustomizationHelpers.h"
#include "IDetailChildrenBuilder.h"
#include "Modules/ModuleManager.h"
#include "EditorStyleSet.h"
#include "Runtime/Launch/Resources/Version.h"

#if ENGINE_MINOR_VERSION >= 18
#include "HAL/PlatformApplicationMisc.h"
#endif

#include "Editor.h"
#include "ScopedTransaction.h"
#include "GraphEditor.h"
#include "GraphEditorActions.h"
#include "EdGraph/EdGraphNode.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "EdGraphUtilities.h"
#include "SNodePanel.h"
#include "PropertyEditorModule.h"
#include "IDetailsView.h"
#include "Widgets/Docking/SDockTab.h"
#include "Framework/Commands/GenericCommands.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"

#include "ConditionGraph.h"
#include "ConditionGraphNode.h"
#include "ConditionGraphNode_Root.h"
#include "ConditionGraph/ConditionGraphSchema.h"

#include "Conditions/ConditionContainer.h"

#define LOCTEXT_NAMESPACE "ConditionContainerCustomization"


void FConditionContainerCustomization::CustomizeHeader(TSharedRef<class IPropertyHandle> StructPropertyHandle, class FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& StructCustomizationUtils)
{
	HeaderRow.NameContent()
	[
		StructPropertyHandle->CreatePropertyNameWidget()
	]
	.ValueContent()
	.HAlign(HAlign_Fill)
	[
		SNew(SBox)
		.HAlign(HAlign_Left)
		.MaxDesiredWidth(150)
		[
			StructPropertyHandle->CreatePropertyValueWidget()
		]
	];
}

void FConditionContainerCustomization::CustomizeChildren(TSharedRef<class IPropertyHandle> StructPropertyHandle, IDetailChildrenBuilder& StructBuilder, IPropertyTypeCustomizationUtils& StructCustomizationUtils)
{
	ContainerHandle = StructPropertyHandle;

	//Don't show anything
	if (!GetContainer())
		return;

	InitializeContainer();

	// Support undo/redo
	GetContainer()->SetFlags(RF_Transactional);
	GEditor->RegisterForUndo(this);


	CreateInternalWidgets();


	StructBuilder.AddCustomRow(LOCTEXT("ConditionGraph", "Graph"))
	.NameContent()
	.HAlign(HAlign_Fill)
	.VAlign(VAlign_Fill)
	[
		GraphDetails.ToSharedRef()
	]
	.ValueContent()
	.HAlign(HAlign_Fill)
	.VAlign(VAlign_Fill)
	[
		SNew(SBox)
		.MaxDesiredWidth(500)
		.MinDesiredHeight(250)
		[
			ConditionGraphEditor.ToSharedRef()
		]
	];
}

void FConditionContainerCustomization::PostUndo(bool bSuccess)
{
	if (ConditionGraphEditor.IsValid())
	{
		ConditionGraphEditor->ClearSelectionSet();
		ConditionGraphEditor->NotifyGraphChanged();
	}
}


UConditionContainer* FConditionContainerCustomization::GetContainer() const
{
	if (!ContainerHandle.IsValid())
		return nullptr;

	//Set container ptr
	UObject* ContainerObj;
	FPropertyAccess::Result Result = ContainerHandle->GetValue(ContainerObj);
	if (Result == FPropertyAccess::Success && IsValid(ContainerObj))
	{
		return Cast<UConditionContainer>(ContainerObj);
	}
	return nullptr;
}

void FConditionContainerCustomization::SetSelection(TArray<UObject*> SelectedObjects)
{
	if (GraphDetails.IsValid())
	{
		GraphDetails->SetObjects(SelectedObjects);
	}
}

bool FConditionContainerCustomization::GetBoundsForSelectedNodes(class FSlateRect& Rect, float Padding)
{
	return ConditionGraphEditor->GetBoundsForSelectedNodes(Rect, Padding);
}

int32 FConditionContainerCustomization::GetNumberOfSelectedNodes() const
{
	return ConditionGraphEditor->GetSelectedNodes().Num();
}

TSet<UObject*> FConditionContainerCustomization::GetSelectedNodes() const
{
	FGraphPanelSelectionSet CurrentSelection;
	if (ConditionGraphEditor.IsValid())
	{
		CurrentSelection = ConditionGraphEditor->GetSelectedNodes();
	}
	return CurrentSelection;
}

void FConditionContainerCustomization::PasteNodesHere(const FVector2D& Location)
{
	UConditionContainer* Container = GetContainer();
	check(Container);

	// Undo/Redo support
	const FScopedTransaction Transaction(NSLOCTEXT("UnrealEd", "ConditionEditorPaste", "Paste Node"));
	Container->GetGraph()->Modify();
	Container->Modify();

	// Clear the selection set (newly pasted stuff will be selected)
	ConditionGraphEditor->ClearSelectionSet();

	// Grab the text to paste from the clipboard.
	FString TextToImport;

#if ENGINE_MINOR_VERSION >= 18
	FPlatformApplicationMisc::ClipboardPaste(TextToImport);
#else
	FPlatformMisc::ClipboardPaste(TextToImport);
#endif

	// Import the nodes
	TSet<UEdGraphNode*> PastedNodes;
	FEdGraphUtilities::ImportNodesFromText(Container->GetGraph(), TextToImport, /*out*/ PastedNodes);

	//Average position of nodes so we can move them while still maintaining relative distances to each other
	FVector2D AvgNodePosition(0.0f, 0.0f);

	for (TSet<UEdGraphNode*>::TIterator It(PastedNodes); It; ++It)
	{
		UEdGraphNode* Node = *It;
		AvgNodePosition.X += Node->NodePosX;
		AvgNodePosition.Y += Node->NodePosY;
	}

	if (PastedNodes.Num() > 0)
	{
		float InvNumNodes = 1.0f / float(PastedNodes.Num());
		AvgNodePosition.X *= InvNumNodes;
		AvgNodePosition.Y *= InvNumNodes;
	}

	for (TSet<UEdGraphNode*>::TIterator It(PastedNodes); It; ++It)
	{
		UEdGraphNode* Node = *It;

		if (UConditionGraphNode* QGNode = Cast<UConditionGraphNode>(Node))
		{
			Container->AllConditions.Add(QGNode->ConditionNode);

			// Select the newly pasted stuff
			ConditionGraphEditor->SetNodeSelection(QGNode, true);

			QGNode->NodePosX = (QGNode->NodePosX - AvgNodePosition.X) + Location.X;
			QGNode->NodePosY = (QGNode->NodePosY - AvgNodePosition.Y) + Location.Y;

			QGNode->SnapToGrid(SNodePanel::GetSnapGridSize());

			// Give new node a different Guid from the old one
			QGNode->CreateNewGuid();
		}
	}

	// Force new pasted SoundNodes to have same connections as graph nodes
	Cast<UConditionGraph>(Container->GetGraph())->CompileConditionNodesFromGraphNodes();

	// Update UI
	ConditionGraphEditor->NotifyGraphChanged();

	Container->PostEditChange();
	Container->MarkPackageDirty();
}

bool FConditionContainerCustomization::CanPasteNodes() const
{
	UConditionContainer* Container = GetContainer();
	check(Container);

	FString ClipboardContent;
#if ENGINE_MINOR_VERSION >= 18
	FPlatformApplicationMisc::ClipboardPaste(ClipboardContent);
#else
	FPlatformMisc::ClipboardPaste(ClipboardContent);
#endif

	return FEdGraphUtilities::CanImportNodesFromText(Container->GetGraph(), ClipboardContent);
}

void FConditionContainerCustomization::InitializeContainer()
{
	UConditionContainer* Container = GetContainer();
	check(Container);

	if (Container->GetGraph() == nullptr) {
		Container->SetGraph(UConditionGraph::CreateNewConditionGraph(Container));
	}

	//Update property Name
	CastChecked<UConditionGraph>(Container->GetGraph())->PropertyName = ContainerHandle->GetPropertyDisplayName();
}

void FConditionContainerCustomization::CreateInternalWidgets()
{
	CreateGraphEditorWidget();

	//Set reference to this property customization
	Cast<UConditionGraph>(GetContainer()->GetGraph())->ContainerEditor = this;

	if (!GraphDetails.IsValid())
	{
		FDetailsViewArgs Args;
		Args.bHideSelectionTip = true;
		Args.NotifyHook = this;
#if ENGINE_MINOR_VERSION >= 18
		Args.DefaultsOnlyVisibility = EEditDefaultsOnlyNodeVisibility::Hide;
#else
		Args.DefaultsOnlyVisibility = FDetailsViewArgs::EEditDefaultsOnlyNodeVisibility::Hide;
#endif

		FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
		GraphDetails = PropertyModule.CreateDetailView(Args);
	}
}

void FConditionContainerCustomization::CreateGraphEditorWidget()
{
	//If widget exists and referenced graph is the same, skip setup
	if (ConditionGraphEditor.IsValid() && ConditionGraphEditor->GetCurrentGraph() == GetContainer()->GetGraph())
	{
		return;
	}

	if (!GraphEditorCommands.IsValid())
	{
		GraphEditorCommands = MakeShareable(new FUICommandList);

		// Graph Editor Commands
		GraphEditorCommands->MapAction(FGraphEditorCommands::Get().CreateComment,
			FExecuteAction::CreateSP(this, &FConditionContainerCustomization::OnCreateComment)
		);

		// Editing commands
		GraphEditorCommands->MapAction(FGenericCommands::Get().SelectAll,
			FExecuteAction::CreateSP(this, &FConditionContainerCustomization::SelectAllNodes),
			FCanExecuteAction::CreateSP(this, &FConditionContainerCustomization::CanSelectAllNodes)
		);

		GraphEditorCommands->MapAction(FGenericCommands::Get().Delete,
			FExecuteAction::CreateSP(this, &FConditionContainerCustomization::DeleteSelectedNodes),
			FCanExecuteAction::CreateSP(this, &FConditionContainerCustomization::CanDeleteNodes)
		);

		GraphEditorCommands->MapAction(FGenericCommands::Get().Copy,
			FExecuteAction::CreateSP(this, &FConditionContainerCustomization::CopySelectedNodes),
			FCanExecuteAction::CreateSP(this, &FConditionContainerCustomization::CanCopyNodes)
		);

		GraphEditorCommands->MapAction(FGenericCommands::Get().Cut,
			FExecuteAction::CreateSP(this, &FConditionContainerCustomization::CutSelectedNodes),
			FCanExecuteAction::CreateSP(this, &FConditionContainerCustomization::CanCutNodes)
		);

		GraphEditorCommands->MapAction(FGenericCommands::Get().Paste,
			FExecuteAction::CreateSP(this, &FConditionContainerCustomization::PasteNodes),
			FCanExecuteAction::CreateSP(this, &FConditionContainerCustomization::CanPasteNodes)
		);

		GraphEditorCommands->MapAction(FGenericCommands::Get().Duplicate,
			FExecuteAction::CreateSP(this, &FConditionContainerCustomization::DuplicateNodes),
			FCanExecuteAction::CreateSP(this, &FConditionContainerCustomization::CanDuplicateNodes)
		);

		GraphEditorCommands->MapAction(
			FGenericCommands::Get().Undo,
			FExecuteAction::CreateSP(this, &FConditionContainerCustomization::UndoGraphAction)
		);

		GraphEditorCommands->MapAction(
			FGenericCommands::Get().Redo,
			FExecuteAction::CreateSP(this, &FConditionContainerCustomization::RedoGraphAction)
		);
	}

	SGraphEditor::FGraphEditorEvents InEvents;
	InEvents.OnSelectionChanged = SGraphEditor::FOnSelectionChanged::CreateSP(this, &FConditionContainerCustomization::OnSelectedNodesChanged);
	InEvents.OnTextCommitted = FOnNodeTextCommitted::CreateSP(this, &FConditionContainerCustomization::OnNodeTitleCommitted);
	InEvents.OnNodeDoubleClicked = FSingleNodeEvent::CreateSP(this, &FConditionContainerCustomization::OnNodeDoubleClicked);


	ConditionGraphEditor = SNew(SGraphEditor)
		.AdditionalCommands(GraphEditorCommands)
		.IsEditable(true)
		.GraphToEdit(GetContainer()->GetGraph())
		.GraphEvents(InEvents)
		.AutoExpandActionMenu(true)
		.ShowGraphStateOverlay(false);

	ConditionGraphEditor->ZoomToFit(false);
}

FText FConditionContainerCustomization::GetInformationText() const
{
	return GetContainer() ? LOCTEXT("InformationValid", "") : LOCTEXT("InformationNull", "Container is null");
}

void FConditionContainerCustomization::OnCreateComment()
{
	FConditionGraphSchemaAction_NewComment CommentAction;
	CommentAction.PerformAction(GetContainer()->GetGraph(), nullptr, ConditionGraphEditor->GetPasteLocation());
}

void FConditionContainerCustomization::OnSelectedNodesChanged(const TSet<class UObject*>& NewSelection)
{
	TArray<UObject*> Selection;

	if (NewSelection.Num())
	{
		for (TSet<class UObject*>::TConstIterator SetIt(NewSelection); SetIt; ++SetIt)
		{
			UConditionGraphNode* GraphNode = Cast<UConditionGraphNode>(*SetIt);

			if (GraphNode)
			{
				UQuestCondition* Node = GraphNode->ConditionNode;
				if (!Node)
				{
					Selection.Add(GraphNode);
				}
				else
				{
					Selection.Add(Node);
				}
			}
			else if(*SetIt)
			{
				Selection.Add(*SetIt);
			}
		}
	}

	SetSelection(Selection);
}

void FConditionContainerCustomization::OnNodeTitleCommitted(const FText& NewText, ETextCommit::Type CommitInfo, UEdGraphNode* NodeBeingChanged)
{
	if (NodeBeingChanged)
	{
		const FScopedTransaction Transaction(LOCTEXT("RenameNode", "Rename Node"));
		NodeBeingChanged->Modify();
		NodeBeingChanged->OnRenameNode(NewText.ToString());
	}
}

void FConditionContainerCustomization::OnNodeDoubleClicked(UEdGraphNode* Node)
{
	UConditionGraphNode* GraphNode = Cast<UConditionGraphNode>(Node);
	if (GraphNode)
	{
		GraphNode->OnDoubleClicked();
	}
}

void FConditionContainerCustomization::SelectAllNodes()
{
	ConditionGraphEditor->SelectAllNodes();
}

bool FConditionContainerCustomization::CanSelectAllNodes() const
{
	return true;
}

void FConditionContainerCustomization::DeleteSelectedNodes()
{
	UConditionContainer* Container = GetContainer();
	check(Container);

	const FScopedTransaction Transaction(NSLOCTEXT("UnrealEd", "ConditionEditorDeleteSelectedNode", "Delete Selected Node"));

	ConditionGraphEditor->GetCurrentGraph()->Modify();

	const FGraphPanelSelectionSet SelectedNodes = GetSelectedNodes();

	ConditionGraphEditor->ClearSelectionSet();

	for (FGraphPanelSelectionSet::TConstIterator NodeIt(SelectedNodes); NodeIt; ++NodeIt)
	{
		UEdGraphNode* Node = CastChecked<UEdGraphNode>(*NodeIt);

		if (Node->CanUserDeleteNode())
		{
			if (UConditionGraphNode* CGNode = Cast<UConditionGraphNode>(Node))
			{
				UQuestCondition* DelNode = CGNode->ConditionNode;

				FBlueprintEditorUtils::RemoveNode(nullptr, CGNode, true);

				// Make sure QuestGroup is updated to match graph
				Cast<UConditionGraph>(Container->GetGraph())->CompileConditionNodesFromGraphNodes();

				// Remove this node from the Quest Group's list of all Quest Nodes
				Container->AllConditions.Remove(DelNode);
				Container->MarkPackageDirty();
			}
			else
			{
				FBlueprintEditorUtils::RemoveNode(nullptr, Node, true);
			}
		}
	}
}

bool FConditionContainerCustomization::CanDeleteNodes() const
{
	const FGraphPanelSelectionSet SelectedNodes = GetSelectedNodes();

	if (SelectedNodes.Num() == 1)
	{
		for (FGraphPanelSelectionSet::TConstIterator NodeIt(SelectedNodes); NodeIt; ++NodeIt)
		{
			if (Cast<UConditionGraphNode_Root>(*NodeIt))
			{
				// Return false if only root node is selected, as it can't be deleted
				return false;
			}
		}
	}

	return SelectedNodes.Num() > 0;
}

void FConditionContainerCustomization::DeleteSelectedDuplicatableNodes()
{
	// Cache off the old selection
	const FGraphPanelSelectionSet OldSelectedNodes = GetSelectedNodes();

	// Clear the selection and only select the nodes that can be duplicated
	FGraphPanelSelectionSet RemainingNodes;
	ConditionGraphEditor->ClearSelectionSet();

	for (FGraphPanelSelectionSet::TConstIterator SelectedIter(OldSelectedNodes); SelectedIter; ++SelectedIter)
	{
		UEdGraphNode* Node = Cast<UEdGraphNode>(*SelectedIter);
		if ((Node != nullptr) && Node->CanDuplicateNode())
		{
			ConditionGraphEditor->SetNodeSelection(Node, true);
		}
		else
		{
			RemainingNodes.Add(Node);
		}
	}

	// Delete the duplicable nodes
	DeleteSelectedNodes();

	// Reselect whatever's left from the original selection after the deletion
	ConditionGraphEditor->ClearSelectionSet();

	for (FGraphPanelSelectionSet::TConstIterator SelectedIter(RemainingNodes); SelectedIter; ++SelectedIter)
	{
		if (UEdGraphNode* Node = Cast<UEdGraphNode>(*SelectedIter))
		{
			ConditionGraphEditor->SetNodeSelection(Node, true);
		}
	}
}

void FConditionContainerCustomization::CutSelectedNodes()
{
	CopySelectedNodes();
	// Cut should only delete nodes that can be duplicated
	DeleteSelectedDuplicatableNodes();
}

bool FConditionContainerCustomization::CanCutNodes() const
{
	return CanCopyNodes() && CanDeleteNodes();
}

void FConditionContainerCustomization::CopySelectedNodes()
{
	// Export the selected nodes and place the text on the clipboard
	const FGraphPanelSelectionSet SelectedNodes = GetSelectedNodes();

	FString ExportedText;

	for (FGraphPanelSelectionSet::TConstIterator SelectedIter(SelectedNodes); SelectedIter; ++SelectedIter)
	{
		if (UConditionGraphNode_Base* Node = Cast<UConditionGraphNode_Base>(*SelectedIter))
		{
			Node->PrepareForCopying();
		}
	}

	FEdGraphUtilities::ExportNodesToText(SelectedNodes, /*out*/ ExportedText);

#if ENGINE_MINOR_VERSION >= 18
	FPlatformApplicationMisc::ClipboardCopy(*ExportedText);
#else
	FPlatformMisc::ClipboardCopy(*ExportedText);
#endif

	// Make sure Quest remains the owner of the copied nodes
	for (FGraphPanelSelectionSet::TConstIterator SelectedIter(SelectedNodes); SelectedIter; ++SelectedIter)
	{
		if (UConditionGraphNode* Node = Cast<UConditionGraphNode>(*SelectedIter))
		{
			Node->PostCopyNode();
		}
	}
}

bool FConditionContainerCustomization::CanCopyNodes() const
{
	// If any of the nodes can be duplicated then we should allow copying
	const FGraphPanelSelectionSet SelectedNodes = GetSelectedNodes();
	for (FGraphPanelSelectionSet::TConstIterator SelectedIter(SelectedNodes); SelectedIter; ++SelectedIter)
	{
		UEdGraphNode* Node = Cast<UEdGraphNode>(*SelectedIter);
		if ((Node != nullptr) && Node->CanDuplicateNode())
		{
			return true;
		}
	}
	return false;
}

void FConditionContainerCustomization::PasteNodes()
{
	PasteNodesHere(ConditionGraphEditor->GetPasteLocation());
}

void FConditionContainerCustomization::DuplicateNodes()
{
	// Copy and paste current selection
	CopySelectedNodes();
	PasteNodes();
}

bool FConditionContainerCustomization::CanDuplicateNodes() const
{
	return CanCopyNodes();
}

void FConditionContainerCustomization::UndoGraphAction()
{
	GEditor->UndoTransaction();
}

void FConditionContainerCustomization::RedoGraphAction()
{
	// Clear selection, to avoid holding refs to nodes that go away
	ConditionGraphEditor->ClearSelectionSet();

	GEditor->RedoTransaction();
}

#undef LOCTEXT_NAMESPACE
