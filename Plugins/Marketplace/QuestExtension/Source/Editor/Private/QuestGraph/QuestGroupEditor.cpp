// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "QuestGroupEditor.h"
#include "Editor.h"
#include "Modules/ModuleManager.h"
#include "EditorStyleSet.h"
#include "Runtime/Launch/Resources/Version.h"

#if ENGINE_MINOR_VERSION >= 18
#include "HAL/PlatformApplicationMisc.h"
#endif

#include "CoreMinimal.h"
#include "UnrealEdGlobals.h"
#include "ScopedTransaction.h"
#include "Widgets/Input/SComboButton.h"

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
#include "Editor/UnrealEdEngine.h"

#include "QuestGraph/QuestGroupGraph.h"
#include "QuestGraph/QuestGroupNode.h"
#include "QuestGraph/QuestGroupNode_Base.h"
#include "QuestGraph/QuestGroupNode_Root.h"
#include "QuestGraph/QuestGroupGraphSchema.h"

#include "QuestGroup.h"
#include "QGNodes/QGNode_Logic.h"
#include "QGNodes/Execution/QGNode_Finish.h"

#include "QuestGroupDebugger.h"

#include "SQuestPalette.h"
#include "QuestGraphEditorCommands.h"

#define LOCTEXT_NAMESPACE "QuestEditor"


const FName FQuestGroupEditor::GraphCanvasTabId( TEXT( "QuestEditor_GraphCanvas" ) );
const FName FQuestGroupEditor::PropertiesTabId( TEXT( "QuestEditor_Properties" ) );
const FName FQuestGroupEditor::PaletteTabId( TEXT( "QuestEditor_Palette" ) );

FQuestGroupEditor::FQuestGroupEditor()
	: IQuestGroupEditor()
	, Quest(nullptr)
{
}

FQuestGroupEditor::~FQuestGroupEditor()
{
	GEditor->UnregisterForUndo(this);

	Debugger.Reset();
}

void FQuestGroupEditor::RegisterTabSpawners(const TSharedRef<class FTabManager>& InTabManager)
{
	WorkspaceMenuCategory = InTabManager->AddLocalWorkspaceMenuCategory(LOCTEXT("WorkspaceMenu_QuestEditor", "Quest Editor"));
	auto WorkspaceMenuCategoryRef = WorkspaceMenuCategory.ToSharedRef();

	InTabManager->RegisterTabSpawner( GraphCanvasTabId, FOnSpawnTab::CreateSP(this, &FQuestGroupEditor::SpawnTab_GraphCanvas) )
		.SetDisplayName( LOCTEXT("GraphCanvasTab", "Viewport") )
		.SetGroup(WorkspaceMenuCategoryRef)
		.SetIcon(FSlateIcon(FEditorStyle::GetStyleSetName(), "GraphEditor.EventGraph_16x"));

	InTabManager->RegisterTabSpawner( PropertiesTabId, FOnSpawnTab::CreateSP(this, &FQuestGroupEditor::SpawnTab_Properties) )
		.SetDisplayName( LOCTEXT("DetailsTab", "Details") )
		.SetGroup(WorkspaceMenuCategoryRef)
		.SetIcon(FSlateIcon(FEditorStyle::GetStyleSetName(), "LevelEditor.Tabs.Details"));

	InTabManager->RegisterTabSpawner( PaletteTabId, FOnSpawnTab::CreateSP(this, &FQuestGroupEditor::SpawnTab_Palette) )
		.SetDisplayName( LOCTEXT("PaletteTab", "Palette") )
		.SetGroup(WorkspaceMenuCategoryRef)
		.SetIcon(FSlateIcon(FEditorStyle::GetStyleSetName(), "Kismet.Tabs.Palette"));

	FAssetEditorToolkit::RegisterTabSpawners(InTabManager);
}

void FQuestGroupEditor::UnregisterTabSpawners(const TSharedRef<class FTabManager>& InTabManager)
{
	FAssetEditorToolkit::UnregisterTabSpawners(InTabManager);

	InTabManager->UnregisterTabSpawner( GraphCanvasTabId );
	InTabManager->UnregisterTabSpawner( PropertiesTabId );
	InTabManager->UnregisterTabSpawner( PaletteTabId );
}

void FQuestGroupEditor::InitQuestGroupEditor(const EToolkitMode::Type Mode, const TSharedPtr< class IToolkitHost >& InitToolkitHost, UObject* ObjectToEdit)
{
	Quest = CastChecked<UQuestGroup>(ObjectToEdit);

	// Support undo/redo
	Quest->SetFlags(RF_Transactional);
	GEditor->RegisterForUndo(this);

	FGraphEditorCommands::Register();
	FQuestGraphEditorCommands::Register();
	FQGDebuggerCommands::Register();

	BindGraphCommands();
	Debugger = MakeShared<FQuestGroupDebugger>();
	BindDebuggerToolbarCommands();

	CreateInternalWidgets();

	const TSharedRef<FTabManager::FLayout> StandaloneDefaultLayout = FTabManager::NewLayout("Standalone_QuestEditor_Layout_v1")
		->AddArea
		(
			FTabManager::NewPrimaryArea()->SetOrientation(Orient_Vertical)
			->Split
			(
				FTabManager::NewStack()
				->SetSizeCoefficient(0.1f)
				->AddTab(GetToolbarTabId(), ETabState::OpenedTab)->SetHideTabWell(true)
			)
			->Split
			(
				FTabManager::NewSplitter()->SetOrientation(Orient_Horizontal)->SetSizeCoefficient(0.9f)
				->Split
				(
					FTabManager::NewStack()
					->SetSizeCoefficient(0.225f)
					->AddTab(PropertiesTabId, ETabState::OpenedTab)
				)
				->Split
				(
					FTabManager::NewStack()
					->SetSizeCoefficient(0.65f)
					->AddTab(GraphCanvasTabId, ETabState::OpenedTab)->SetHideTabWell(true)
				)
				->Split
				(
					FTabManager::NewStack()
					->SetSizeCoefficient(0.125f)
					->AddTab(PaletteTabId, ETabState::OpenedTab)
				)
			)
		);

	const bool bCreateDefaultStandaloneMenu = true;
	const bool bCreateDefaultToolbar = true;
	FAssetEditorToolkit::InitAssetEditor(Mode, InitToolkitHost, TEXT("QuestEditorApp"), StandaloneDefaultLayout, bCreateDefaultStandaloneMenu, bCreateDefaultToolbar, ObjectToEdit, false);


	ExtendToolbar();
	RegenerateMenusAndToolbars();

	Debugger->Setup(Quest, SharedThis(this));
}

UQuestGroup* FQuestGroupEditor::GetQuest() const
{
	return Quest;
}

void FQuestGroupEditor::SetSelection(TArray<UObject*> SelectedObjects)
{
	if (QuestProperties.IsValid())
	{
		QuestProperties->SetObjects(SelectedObjects);
	}
}

bool FQuestGroupEditor::GetBoundsForSelectedNodes(class FSlateRect& Rect, float Padding )
{
	return QuestGraphEditor->GetBoundsForSelectedNodes(Rect, Padding);
}

int32 FQuestGroupEditor::GetNumberOfSelectedNodes() const
{
	return QuestGraphEditor->GetSelectedNodes().Num();
}

FName FQuestGroupEditor::GetToolkitFName() const
{
	return FName("QuestEditor");
}

FText FQuestGroupEditor::GetBaseToolkitName() const
{
	return LOCTEXT("AppLabel", "QUest Editor");
}

FString FQuestGroupEditor::GetWorldCentricTabPrefix() const
{
	return LOCTEXT("WorldCentricTabPrefix", "Quest ").ToString();
}

FLinearColor FQuestGroupEditor::GetWorldCentricTabColorScale() const
{
	return FLinearColor(0.3f, 0.2f, 0.5f, 0.5f);
}

TSharedRef<SDockTab> FQuestGroupEditor::SpawnTab_GraphCanvas(const FSpawnTabArgs& Args)
{
	check( Args.GetTabId() == GraphCanvasTabId );

	TSharedRef<SDockTab> SpawnedTab = SNew(SDockTab)
		.Label(LOCTEXT("QuestGraphCanvasTitle", "Viewport"));

	if (QuestGraphEditor.IsValid())
	{
		SpawnedTab->SetContent(QuestGraphEditor.ToSharedRef());
	}

	return SpawnedTab;
}

TSharedRef<SDockTab> FQuestGroupEditor::SpawnTab_Properties(const FSpawnTabArgs& Args)
{
	check( Args.GetTabId() == PropertiesTabId );

	return SNew(SDockTab)
		.Icon(FEditorStyle::GetBrush("LevelEditor.Tabs.Details"))
		.Label(LOCTEXT("QuestDetailsTitle", "Details"))
		[
			QuestProperties.ToSharedRef()
		];
}

TSharedRef<SDockTab> FQuestGroupEditor::SpawnTab_Palette(const FSpawnTabArgs& Args)
{
	check( Args.GetTabId() == PaletteTabId );

	return SNew(SDockTab)
		.Icon(FEditorStyle::GetBrush("Kismet.Tabs.Palette"))
		.Label(LOCTEXT("QuestPaletteTitle", "Palette"))
		[
			Palette.ToSharedRef()
		];
}

void FQuestGroupEditor::AddReferencedObjects(FReferenceCollector& Collector)
{
	Collector.AddReferencedObject(Quest);
}

void FQuestGroupEditor::PostUndo(bool bSuccess)
{
	if (QuestGraphEditor.IsValid())
	{
		QuestGraphEditor->ClearSelectionSet();
		QuestGraphEditor->NotifyGraphChanged();
	}
}

bool FQuestGroupEditor::IsDebuggerReady() const
{
	return Debugger.IsValid() && Debugger->IsDebuggerReady();
}

bool FQuestGroupEditor::IsDebuggerPaused() const
{
	return IsDebuggerReady() && GUnrealEd->PlayWorld && GUnrealEd->PlayWorld->bDebugPauseExecution;
}

bool FQuestGroupEditor::CanEditWithDebuggerActive() const
{
	if (Debugger.IsValid())
	{
		return !Debugger->IsDebuggerReady();
	}

	return true;
}

FGraphAppearanceInfo FQuestGroupEditor::GetGraphAppearance() const
{
	FGraphAppearanceInfo AppearanceInfo;
	AppearanceInfo.CornerText = LOCTEXT("AppearanceCornerText", "QUEST GROUP");

	const int32 StepIdx = Debugger.IsValid() ? Debugger->GetShownStateIndex() : 0;
	if (Debugger.IsValid() && !Debugger->IsDebuggerRunning())
	{
		AppearanceInfo.PIENotifyText = LOCTEXT("InactiveLabel", "INACTIVE");
	}
	else if (StepIdx)
	{
		AppearanceInfo.PIENotifyText = FText::Format(LOCTEXT("StepsBackLabelFmt", "STEPS BACK: {0}"), FText::AsNumber(StepIdx));
	}
	else if (FQuestGroupDebugger::IsPlaySessionPaused())
	{
		AppearanceInfo.PIENotifyText = LOCTEXT("PausedLabel", "PAUSED");
	}

	return AppearanceInfo;
}

EVisibility FQuestGroupEditor::GetDebuggerVisibility() const
{
	return IsDebuggerReady() ? EVisibility::Visible : EVisibility::Collapsed;
}

TSharedRef<class SWidget> FQuestGroupEditor::OnGetDebuggerActorsMenu()
{
	FMenuBuilder MenuBuilder(true, nullptr);

	if (Debugger.IsValid())
	{
		TArray<UQuestManagerComponent*> MatchingInstances;
		Debugger->GetMatchingInstances(MatchingInstances);

		// Fill the combo menu with presets of common screen resolutions
		for (int32 i = 0; i < MatchingInstances.Num(); i++)
		{
			if (MatchingInstances[i])
			{
				const FText ActorDesc = FText::FromString(Debugger->DescribeInstance(*MatchingInstances[i]));
				TWeakObjectPtr<UQuestManagerComponent> InstancePtr = MatchingInstances[i];

				FUIAction ItemAction(FExecuteAction::CreateSP(this, &FQuestGroupEditor::OnDebuggerActorSelected, InstancePtr));
				MenuBuilder.AddMenuEntry(ActorDesc, TAttribute<FText>(), FSlateIcon(), ItemAction);
			}
		}

		// Failsafe when no actor match
		if (MatchingInstances.Num() == 0)
		{
			const FText ActorDesc = LOCTEXT("NoMatchForDebug", "Can't find matching actors");
			TWeakObjectPtr<UQuestManagerComponent> InstancePtr;

			FUIAction ItemAction(FExecuteAction::CreateSP(this, &FQuestGroupEditor::OnDebuggerActorSelected, InstancePtr));
			MenuBuilder.AddMenuEntry(ActorDesc, TAttribute<FText>(), FSlateIcon(), ItemAction);
		}
	}

	return MenuBuilder.MakeWidget();
}

void FQuestGroupEditor::OnDebuggerActorSelected(TWeakObjectPtr<UQuestManagerComponent> InstanceToDebug)
{
	if (Debugger.IsValid())
	{
		Debugger->OnInstanceSelectedInDropdown(InstanceToDebug.Get());
	}
}

FText FQuestGroupEditor::GetDebuggerActorDesc() const
{
	return Debugger.IsValid() ? FText::FromString(Debugger->GetDebuggedInstanceDesc()) : FText::GetEmpty();
}

void FQuestGroupEditor::DebuggerSwitchAsset(UQuestGroup* NewAsset)
{
	if (NewAsset)
	{
		auto* AssetEditor = GEditor->GetEditorSubsystem<UAssetEditorSubsystem>();
		AssetEditor->OpenEditorForAsset(NewAsset);

		auto* ChildNodeEditor = static_cast<IQuestGroupEditor*>(AssetEditor->FindEditorForAsset(NewAsset, true));
		if (ChildNodeEditor)
		{
			ChildNodeEditor->InitializeDebuggerState(Debugger.Get());
		}
	}
}

void FQuestGroupEditor::JumpToNode(const UEdGraphNode* Node)
{
	if (QuestGraphEditor.IsValid())
	{
		QuestGraphEditor->JumpToNode(Node, false);
	}
}

bool FQuestGroupEditor::IsPropertyVisible(const FPropertyAndParent& PropertyAndParent) const
{
	if (PropertyAndParent.Objects.Num() == 1)
	{
		UQuestGroup* SelectedQG = Cast<UQuestGroup>(PropertyAndParent.Objects[0].Get());

		// Is selected quest different than the one we edit and it is a default only property?
		if (SelectedQG != GetQuest() &&
			PropertyAndParent.Property.HasAnyPropertyFlags(CPF_DisableEditOnInstance))
		{
			return false;
		}
	}
	return true;
}

bool FQuestGroupEditor::IsPropertyEditable() const
{
	if (FQuestGroupDebugger::IsPIESimulating())
	{
		return false;
	}
	return QuestGraphEditor.IsValid() && QuestGraphEditor->GetCurrentGraph() && QuestGraphEditor->GetCurrentGraph()->bEditable;
}

void FQuestGroupEditor::NotifyPostChange( const FPropertyChangedEvent& PropertyChangedEvent, class FProperty* PropertyThatChanged)
{
	if (QuestGraphEditor.IsValid() && PropertyChangedEvent.ChangeType != EPropertyChangeType::Interactive)
	{
		QuestGraphEditor->NotifyGraphChanged();
	}
}

void FQuestGroupEditor::CreateInternalWidgets()
{
	QuestGraphEditor = CreateGraphEditorWidget();

	FDetailsViewArgs Args;
	Args.bHideSelectionTip = true;
	Args.NotifyHook = this;
#if ENGINE_MINOR_VERSION >= 18
	Args.DefaultsOnlyVisibility = EEditDefaultsOnlyNodeVisibility::Show;
#else
	Args.DefaultsOnlyVisibility = FDetailsViewArgs::EEditDefaultsOnlyNodeVisibility::Show;
#endif


	FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
	QuestProperties = PropertyModule.CreateDetailView(Args);
	QuestProperties->SetObject(Quest);
	QuestProperties->SetIsPropertyEditingEnabledDelegate(FIsPropertyEditingEnabled::CreateSP(this, &FQuestGroupEditor::IsPropertyEditable));
	QuestProperties->SetIsPropertyVisibleDelegate(FIsPropertyVisible::CreateSP(this, &FQuestGroupEditor::IsPropertyVisible));

	Palette = SNew(SQuestPalette);
}

void FQuestGroupEditor::ExtendToolbar()
{
	TSharedRef<SWidget> DebuggerSelector = SNew(SVerticalBox)
		.Visibility(this, &FQuestGroupEditor::GetDebuggerVisibility)
		.ToolTipText(LOCTEXT("QuestGroupDebuggerTooltip", "Specify the Quest Manager to be debugged"))
		+ SVerticalBox::Slot()
		.VAlign(VAlign_Top)
		.AutoHeight()
		.Padding(0)
		[
			SNew(SComboButton)
			.OnGetMenuContent(this, &FQuestGroupEditor::OnGetDebuggerActorsMenu)
		.ButtonContent()
		[
			SNew(STextBlock)
			.Text(this, &FQuestGroupEditor::GetDebuggerActorDesc)
		]
		]
	+ SVerticalBox::Slot()
		.VAlign(VAlign_Bottom)
		.HAlign(HAlign_Center)
		[
			SNew(STextBlock)
			.Text(LOCTEXT("QuestGroupDebuggerTitle", "Quest Manager"))
		];

	struct Local
	{
		static void FillToolbar(FToolBarBuilder& ToolbarBuilder, TSharedRef<SWidget> DebuggerSelector)
		{
			//If Debugger is ready
			if (DebuggerSelector.Get().GetVisibility() == EVisibility::Visible)
			{
				ToolbarBuilder.BeginSection("CachedState");
				{
					ToolbarBuilder.AddToolBarButton(FQGDebuggerCommands::Get().BackEnd,	NAME_None, FText::GetEmpty());
					ToolbarBuilder.AddToolBarButton(FQGDebuggerCommands::Get().Back,	   NAME_None, FText::GetEmpty());
					ToolbarBuilder.AddToolBarButton(FQGDebuggerCommands::Get().Forward,	NAME_None, FText::GetEmpty());
					ToolbarBuilder.AddToolBarButton(FQGDebuggerCommands::Get().ForwardEnd, NAME_None, FText::GetEmpty());
				}
				ToolbarBuilder.EndSection();
				ToolbarBuilder.BeginSection("World");
				{
					ToolbarBuilder.AddToolBarButton(FQGDebuggerCommands::Get().PausePlaySession);
					ToolbarBuilder.AddToolBarButton(FQGDebuggerCommands::Get().ResumePlaySession);
					ToolbarBuilder.AddToolBarButton(FQGDebuggerCommands::Get().StopPlaySession);
					ToolbarBuilder.AddSeparator();
					ToolbarBuilder.AddWidget(DebuggerSelector);
				}
				ToolbarBuilder.EndSection();
			}
		}
	};

	TSharedPtr<FExtender> ToolbarExtender = MakeShareable(new FExtender);

	ToolbarExtender->AddToolBarExtension(
		"Asset",
		EExtensionHook::After,
		GetToolkitCommands(),
		FToolBarExtensionDelegate::CreateStatic(&Local::FillToolbar, DebuggerSelector)
	);

	AddToolbarExtender(ToolbarExtender);
}

void FQuestGroupEditor::BindGraphCommands()
{
	const FQuestGraphEditorCommands& Commands = FQuestGraphEditorCommands::Get();

	ToolkitCommands->MapAction(
		FGenericCommands::Get().Undo,
		FExecuteAction::CreateSP( this, &FQuestGroupEditor::UndoGraphAction ));

	ToolkitCommands->MapAction(
		FGenericCommands::Get().Redo,
		FExecuteAction::CreateSP( this, &FQuestGroupEditor::RedoGraphAction ));
}

void FQuestGroupEditor::BindDebuggerToolbarCommands()
{
	const FQGDebuggerCommands& Commands = FQGDebuggerCommands::Get();
	TSharedRef<FQuestGroupDebugger> DebuggerOb = Debugger.ToSharedRef();

	ToolkitCommands->MapAction(
		Commands.BackEnd,
		FExecuteAction::CreateSP(DebuggerOb, &FQuestGroupDebugger::StepBackEnd),
		FCanExecuteAction::CreateSP(DebuggerOb, &FQuestGroupDebugger::CanStepBack));

	ToolkitCommands->MapAction(
		Commands.Back,
		FExecuteAction::CreateSP(DebuggerOb, &FQuestGroupDebugger::StepBack),
		FCanExecuteAction::CreateSP(DebuggerOb, &FQuestGroupDebugger::CanStepBack));

	ToolkitCommands->MapAction(
		Commands.Forward,
		FExecuteAction::CreateSP(DebuggerOb, &FQuestGroupDebugger::StepForward),
		FCanExecuteAction::CreateSP(DebuggerOb, &FQuestGroupDebugger::CanStepForward));

	ToolkitCommands->MapAction(
		Commands.ForwardEnd,
		FExecuteAction::CreateSP(DebuggerOb, &FQuestGroupDebugger::StepForwardEnd),
		FCanExecuteAction::CreateSP(DebuggerOb, &FQuestGroupDebugger::CanStepForward));

	ToolkitCommands->MapAction(
		Commands.PausePlaySession,
		FExecuteAction::CreateStatic(&FQuestGroupDebugger::PausePlaySession),
		FCanExecuteAction::CreateStatic(&FQuestGroupDebugger::IsPlaySessionRunning),
		FIsActionChecked(),
		FIsActionButtonVisible::CreateStatic(&FQuestGroupDebugger::IsPlaySessionRunning));

	ToolkitCommands->MapAction(
		Commands.ResumePlaySession,
		FExecuteAction::CreateStatic(&FQuestGroupDebugger::ResumePlaySession),
		FCanExecuteAction::CreateStatic(&FQuestGroupDebugger::IsPlaySessionPaused),
		FIsActionChecked(),
		FIsActionButtonVisible::CreateStatic(&FQuestGroupDebugger::IsPlaySessionPaused));

	ToolkitCommands->MapAction(
		Commands.StopPlaySession,
		FExecuteAction::CreateStatic(&FQuestGroupDebugger::StopPlaySession));
}

void FQuestGroupEditor::SyncInBrowser()
{
	TArray<UObject*> ObjectsToSync;
	const FGraphPanelSelectionSet SelectedNodes = GetSelectedNodes();

	for (FGraphPanelSelectionSet::TConstIterator NodeIt(SelectedNodes); NodeIt; ++NodeIt)
	{
		UQuestGroupNode_Base* SelectedNode = Cast<UQuestGroupNode_Base>(*NodeIt);

		if (SelectedNode)
		{
			//Set custom node behaviors
			//Ref: SoundCueEditor.cpp
		}
	}

	if (ObjectsToSync.Num() > 0)
	{
		GEditor->SyncBrowserToObjects(ObjectsToSync);
	}
}

bool FQuestGroupEditor::CanSyncInBrowser() const
{
	const FGraphPanelSelectionSet SelectedNodes = GetSelectedNodes();

	for (FGraphPanelSelectionSet::TConstIterator NodeIt(SelectedNodes); NodeIt; ++NodeIt)
	{
		UQuestGroupNode_Base* SelectedNode = Cast<UQuestGroupNode_Base>(*NodeIt);

		if (SelectedNode)
		{
			//Check custom node behaviours
			//Ref: SoundCueEditor.cpp
		}
	}
	return false;
}

void FQuestGroupEditor::OnCreateComment()
{
	FQuestGroupGraphSchemaAction_NewComment CommentAction;
	CommentAction.PerformAction(Quest->QuestGraph, nullptr, QuestGraphEditor->GetPasteLocation());
}

TSharedRef<SGraphEditor> FQuestGroupEditor::CreateGraphEditorWidget()
{
	UEdGraph* InGraph = Quest->GetGraph();
	check(InGraph != nullptr);

	if ( !GraphEditorCommands.IsValid() )
	{
		GraphEditorCommands = MakeShareable( new FUICommandList );

		GraphEditorCommands->MapAction( FQuestGraphEditorCommands::Get().BrowserSync,
			FExecuteAction::CreateSP(this, &FQuestGroupEditor::SyncInBrowser),
			FCanExecuteAction::CreateSP( this, &FQuestGroupEditor::CanSyncInBrowser ));

		// Graph Editor Commands
		GraphEditorCommands->MapAction( FGraphEditorCommands::Get().CreateComment,
			FExecuteAction::CreateSP( this, &FQuestGroupEditor::OnCreateComment )
			);

		// Editing commands
		GraphEditorCommands->MapAction( FGenericCommands::Get().SelectAll,
			FExecuteAction::CreateSP( this, &FQuestGroupEditor::SelectAllNodes ),
			FCanExecuteAction::CreateSP( this, &FQuestGroupEditor::CanSelectAllNodes )
			);

		GraphEditorCommands->MapAction( FGenericCommands::Get().Delete,
			FExecuteAction::CreateSP( this, &FQuestGroupEditor::DeleteSelectedNodes ),
			FCanExecuteAction::CreateSP( this, &FQuestGroupEditor::CanDeleteNodes )
			);

		GraphEditorCommands->MapAction( FGenericCommands::Get().Copy,
			FExecuteAction::CreateSP( this, &FQuestGroupEditor::CopySelectedNodes ),
			FCanExecuteAction::CreateSP( this, &FQuestGroupEditor::CanCopyNodes )
			);

		GraphEditorCommands->MapAction( FGenericCommands::Get().Cut,
			FExecuteAction::CreateSP( this, &FQuestGroupEditor::CutSelectedNodes ),
			FCanExecuteAction::CreateSP( this, &FQuestGroupEditor::CanCutNodes )
			);

		GraphEditorCommands->MapAction( FGenericCommands::Get().Paste,
			FExecuteAction::CreateSP( this, &FQuestGroupEditor::PasteNodes ),
			FCanExecuteAction::CreateSP( this, &FQuestGroupEditor::CanPasteNodes )
			);

		GraphEditorCommands->MapAction( FGenericCommands::Get().Duplicate,
			FExecuteAction::CreateSP( this, &FQuestGroupEditor::DuplicateNodes ),
			FCanExecuteAction::CreateSP( this, &FQuestGroupEditor::CanDuplicateNodes )
			);
	}

	SGraphEditor::FGraphEditorEvents InEvents;
	InEvents.OnSelectionChanged = SGraphEditor::FOnSelectionChanged::CreateSP(this, &FQuestGroupEditor::OnSelectedNodesChanged);
	InEvents.OnTextCommitted = FOnNodeTextCommitted::CreateSP(this, &FQuestGroupEditor::OnNodeTitleCommitted);
	InEvents.OnNodeDoubleClicked = FSingleNodeEvent::CreateSP(this, &FQuestGroupEditor::OnNodeDoubleClicked);

	const bool bGraphIsEditable = InGraph->bEditable;
	return SNew(SGraphEditor)
		.AdditionalCommands(GraphEditorCommands)
		.IsEditable(this, &FQuestGroupEditor::InEditingMode, bGraphIsEditable)
		.Appearance(this, &FQuestGroupEditor::GetGraphAppearance)
		.GraphToEdit(InGraph)
		.GraphEvents(InEvents)
		.AutoExpandActionMenu(true)
		.ShowGraphStateOverlay(false);
}

bool FQuestGroupEditor::InEditingMode(bool bGraphIsEditable) const
{
	return bGraphIsEditable && FQuestGroupDebugger::IsPIENotSimulating();
}


FGraphPanelSelectionSet FQuestGroupEditor::GetSelectedNodes() const
{
	FGraphPanelSelectionSet CurrentSelection;
	if (QuestGraphEditor.IsValid())
	{
		CurrentSelection = QuestGraphEditor->GetSelectedNodes();
	}
	return CurrentSelection;
}

void FQuestGroupEditor::InitializeDebuggerState(FQuestGroupDebugger* ParentDebugger) const
{
	if (Debugger.IsValid())
	{
		Debugger->InitializeFromParent(ParentDebugger);
	}
}

void FQuestGroupEditor::OnSelectedNodesChanged(const TSet<class UObject*>& NewSelection)
{
	TArray<UObject*> Selection;

	if(NewSelection.Num())
	{
		for(TSet<class UObject*>::TConstIterator SetIt(NewSelection);SetIt;++SetIt)
		{
			UQuestGroupNode* GraphNode = Cast<UQuestGroupNode>(*SetIt);

			if (!*SetIt || (*SetIt)->IsA<UQuestGroupNode_Root>())
			{
				Selection.Add(GetQuest());
			}
			else if (GraphNode)
			{
				UQGNode* Node = GraphNode->QuestNode;
				if (!Node)
				{
					Selection.Add(GraphNode);
				}
				else if (Node->IsA<UQGNode_Finish>())
				{
					Selection.Add(GetQuest());
				}
				else if (Node->IsA<UQGNode_Logic>())
				{
					Selection.Add(Node);
				}
				else
				{
					Selection.Add(Node);
				}
			}
			else
			{
				Selection.Add(*SetIt);
			}
		}
	}
	else
	{
		Selection.Add(GetQuest());
	}

	SetSelection(Selection);
}

void FQuestGroupEditor::OnNodeTitleCommitted(const FText& NewText, ETextCommit::Type CommitInfo, UEdGraphNode* NodeBeingChanged)
{
	if (NodeBeingChanged)
	{
		const FScopedTransaction Transaction( LOCTEXT( "RenameNode", "Rename Node" ) );
		NodeBeingChanged->Modify();
		NodeBeingChanged->OnRenameNode(NewText.ToString());
	}
}

void FQuestGroupEditor::OnNodeDoubleClicked(UEdGraphNode* Node)
{
	UQuestGroupNode* GraphNode = Cast<UQuestGroupNode>(Node);
	if (GraphNode)
	{
		GraphNode->OnDoubleClicked();
	}
}

void FQuestGroupEditor::SelectAllNodes()
{
	QuestGraphEditor->SelectAllNodes();
}

bool FQuestGroupEditor::CanSelectAllNodes() const
{
	return true;
}

void FQuestGroupEditor::DeleteSelectedNodes()
{
	const FScopedTransaction Transaction( NSLOCTEXT("UnrealEd", "QuestEditorDeleteSelectedNode", "Delete Selected Quest Node") );

	QuestGraphEditor->GetCurrentGraph()->Modify();

	const FGraphPanelSelectionSet SelectedNodes = GetSelectedNodes();

	QuestGraphEditor->ClearSelectionSet();

	for (FGraphPanelSelectionSet::TConstIterator NodeIt(SelectedNodes); NodeIt; ++NodeIt)
	{
		UEdGraphNode* Node = CastChecked<UEdGraphNode>(*NodeIt);

		if (Node->CanUserDeleteNode())
		{
			if (UQuestGroupNode* QuestGroupNode = Cast<UQuestGroupNode>(Node))
			{
				UQGNode* DelNode = QuestGroupNode->QuestNode;

				FBlueprintEditorUtils::RemoveNode(nullptr, QuestGroupNode, true);

				// Make sure QuestGroup is updated to match graph
				Quest->CompileQuestNodesFromGraphNodes();

				// Remove this node from the Quest Group's list of all Quest Nodes
				Quest->AllNodes.Remove(DelNode);
				Quest->MarkPackageDirty();
			}
			else
			{
				FBlueprintEditorUtils::RemoveNode(nullptr, Node, true);
			}
		}
	}
}

bool FQuestGroupEditor::CanDeleteNodes() const
{
	const FGraphPanelSelectionSet SelectedNodes = GetSelectedNodes();

	if (SelectedNodes.Num() == 1)
	{
		for (FGraphPanelSelectionSet::TConstIterator NodeIt(SelectedNodes); NodeIt; ++NodeIt)
		{
			if (Cast<UQuestGroupNode_Root>(*NodeIt))
			{
				// Return false if only root node is selected, as it can't be deleted
				return false;
			}
		}
	}

	return SelectedNodes.Num() > 0;
}

void FQuestGroupEditor::DeleteSelectedDuplicatableNodes()
{
	// Cache off the old selection
	const FGraphPanelSelectionSet OldSelectedNodes = GetSelectedNodes();

	// Clear the selection and only select the nodes that can be duplicated
	FGraphPanelSelectionSet RemainingNodes;
	QuestGraphEditor->ClearSelectionSet();

	for (FGraphPanelSelectionSet::TConstIterator SelectedIter(OldSelectedNodes); SelectedIter; ++SelectedIter)
	{
		UEdGraphNode* Node = Cast<UEdGraphNode>(*SelectedIter);
		if ((Node != nullptr) && Node->CanDuplicateNode())
		{
			QuestGraphEditor->SetNodeSelection(Node, true);
		}
		else
		{
			RemainingNodes.Add(Node);
		}
	}

	// Delete the duplicable nodes
	DeleteSelectedNodes();

	// Reselect whatever's left from the original selection after the deletion
	QuestGraphEditor->ClearSelectionSet();

	for (FGraphPanelSelectionSet::TConstIterator SelectedIter(RemainingNodes); SelectedIter; ++SelectedIter)
	{
		if (UEdGraphNode* Node = Cast<UEdGraphNode>(*SelectedIter))
		{
			QuestGraphEditor->SetNodeSelection(Node, true);
		}
	}
}

void FQuestGroupEditor::CutSelectedNodes()
{
	CopySelectedNodes();
	// Cut should only delete nodes that can be duplicated
	DeleteSelectedDuplicatableNodes();
}

bool FQuestGroupEditor::CanCutNodes() const
{
	return CanCopyNodes() && CanDeleteNodes();
}

void FQuestGroupEditor::CopySelectedNodes()
{
	// Export the selected nodes and place the text on the clipboard
	const FGraphPanelSelectionSet SelectedNodes = GetSelectedNodes();

	FString ExportedText;

	for (FGraphPanelSelectionSet::TConstIterator SelectedIter(SelectedNodes); SelectedIter; ++SelectedIter)
	{
		if(UQuestGroupNode_Base* Node = Cast<UQuestGroupNode_Base>(*SelectedIter))
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
		if (UQuestGroupNode* Node = Cast<UQuestGroupNode>(*SelectedIter))
		{
			Node->PostCopyNode();
		}
	}
}

bool FQuestGroupEditor::CanCopyNodes() const
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

void FQuestGroupEditor::PasteNodes()
{
	PasteNodesHere(QuestGraphEditor->GetPasteLocation());
}

void FQuestGroupEditor::PasteNodesHere(const FVector2D& Location)
{
	// Undo/Redo support
	const FScopedTransaction Transaction( NSLOCTEXT("UnrealEd", "QuestEditorPaste", "Paste Quest Node") );
	Quest->GetGraph()->Modify();
	Quest->Modify();

	// Clear the selection set (newly pasted stuff will be selected)
	QuestGraphEditor->ClearSelectionSet();

	// Grab the text to paste from the clipboard.
	FString TextToImport;

#if ENGINE_MINOR_VERSION >= 18
	FPlatformApplicationMisc::ClipboardPaste(TextToImport);
#else
	FPlatformMisc::ClipboardPaste(TextToImport);
#endif

	// Import the nodes
	TSet<UEdGraphNode*> PastedNodes;
	FEdGraphUtilities::ImportNodesFromText(Quest->GetGraph(), TextToImport, /*out*/ PastedNodes);

	//Average position of nodes so we can move them while still maintaining relative distances to each other
	FVector2D AvgNodePosition(0.0f,0.0f);

	for (TSet<UEdGraphNode*>::TIterator It(PastedNodes); It; ++It)
	{
		UEdGraphNode* Node = *It;
		AvgNodePosition.X += Node->NodePosX;
		AvgNodePosition.Y += Node->NodePosY;
	}

	if ( PastedNodes.Num() > 0 )
	{
		float InvNumNodes = 1.0f/float(PastedNodes.Num());
		AvgNodePosition.X *= InvNumNodes;
		AvgNodePosition.Y *= InvNumNodes;
	}

	for (TSet<UEdGraphNode*>::TIterator It(PastedNodes); It; ++It)
	{
		UEdGraphNode* Node = *It;

		if (UQuestGroupNode* QGNode = Cast<UQuestGroupNode>(Node))
		{
			//Duplicate Execution Node
			UQGNode* ReferenceNode = QGNode->QuestNode;
			QGNode->QuestNode = DuplicateObject<UQGNode>(ReferenceNode, ReferenceNode->GetOuter());

			Quest->AllNodes.Add(QGNode->QuestNode);
		}

		// Select the newly pasted stuff
		QuestGraphEditor->SetNodeSelection(Node, true);

		Node->NodePosX = (Node->NodePosX - AvgNodePosition.X) + Location.X ;
		Node->NodePosY = (Node->NodePosY - AvgNodePosition.Y) + Location.Y ;

		Node->SnapToGrid(SNodePanel::GetSnapGridSize());

		// Give new node a different Guid from the old one
		Node->CreateNewGuid();
	}

	// Force new pasted SoundNodes to have same connections as graph nodes
	Quest->CompileQuestNodesFromGraphNodes();

	// Update UI
	QuestGraphEditor->NotifyGraphChanged();

	Quest->PostEditChange();
	Quest->MarkPackageDirty();
}

bool FQuestGroupEditor::CanPasteNodes() const
{
	FString ClipboardContent;
#if ENGINE_MINOR_VERSION >= 18
	FPlatformApplicationMisc::ClipboardPaste(ClipboardContent);
#else
	FPlatformMisc::ClipboardPaste(ClipboardContent);
#endif

	return FEdGraphUtilities::CanImportNodesFromText(Quest->QuestGraph, ClipboardContent);
}

void FQuestGroupEditor::DuplicateNodes()
{
	// Copy and paste current selection
	CopySelectedNodes();
	PasteNodes();
}

bool FQuestGroupEditor::CanDuplicateNodes() const
{
	return CanCopyNodes();
}

void FQuestGroupEditor::UndoGraphAction()
{
	GEditor->UndoTransaction();
}

void FQuestGroupEditor::RedoGraphAction()
{
	// Clear selection, to avoid holding refs to nodes that go away
	QuestGraphEditor->ClearSelectionSet();

	GEditor->RedoTransaction();
}

#undef LOCTEXT_NAMESPACE
