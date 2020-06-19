// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/GCObject.h"
#include "Toolkits/IToolkitHost.h"
#include "IQuestGroupEditor.h"
#include "Misc/NotifyHook.h"
#include "EditorUndoClient.h"
#include "PropertyEditorDelegates.h"

#include "QuestManagerComponent.h"

class IDetailsView;
class SDockableTab;
class SGraphEditor;
class SQuestPalette;
class UEdGraphNode;
class UQuestGroup;
struct FPropertyChangedEvent;
struct Rect;
struct FGraphAppearanceInfo;


/*-----------------------------------------------------------------------------
   FQuestGroupEditor
-----------------------------------------------------------------------------*/

class FQuestGroupEditor : public IQuestGroupEditor, public FGCObject, public FNotifyHook, public FEditorUndoClient
{
public:
	FQuestGroupEditor();
	/** Destructor */
	virtual ~FQuestGroupEditor();

	virtual void RegisterTabSpawners(const TSharedRef<class FTabManager>& TabManager) override;
	virtual void UnregisterTabSpawners(const TSharedRef<class FTabManager>& TabManager) override;


	/** Edits the specified Quest object */
	void InitQuestGroupEditor(const EToolkitMode::Type Mode, const TSharedPtr< class IToolkitHost >& InitToolkitHost, UObject* ObjectToEdit);

	/** IQuestEditor interface */
	virtual UQuestGroup* GetQuest() const override;
	virtual void SetSelection(TArray<UObject*> SelectedObjects) override;
	virtual bool GetBoundsForSelectedNodes(class FSlateRect& Rect, float Padding) override;
	virtual int32 GetNumberOfSelectedNodes() const override;
	virtual TSet<UObject*> GetSelectedNodes() const override;
	virtual void InitializeDebuggerState(class FQuestGroupDebugger* ParentDebugger) const override;
	
	/** IToolkit interface */
	virtual FName GetToolkitFName() const override;
	virtual FText GetBaseToolkitName() const override;
	virtual FString GetWorldCentricTabPrefix() const override;
	virtual FLinearColor GetWorldCentricTabColorScale() const override;

	/** FGCObject interface */
	virtual void AddReferencedObjects(FReferenceCollector& Collector) override;

	//~ Begin FEditorUndoClient Interface
	virtual void PostUndo(bool bSuccess) override;
	virtual void PostRedo(bool bSuccess) override { PostUndo(bSuccess); }
	// End of FEditorUndoClient

	// Delegates

	bool IsDebuggerReady() const;

	/** Get whether the debugger is currently running and the PIE session is paused */
	bool IsDebuggerPaused() const;


	/** Get whether we can edit the quest group with the debugger active */
	bool CanEditWithDebuggerActive() const;
	FGraphAppearanceInfo GetGraphAppearance() const;

	EVisibility GetDebuggerVisibility() const;

	TSharedRef<class SWidget> OnGetDebuggerActorsMenu();
	void OnDebuggerActorSelected(TWeakObjectPtr<UQuestManagerComponent> InstanceToDebug);
	FText GetDebuggerActorDesc() const;

	void DebuggerSwitchAsset(UQuestGroup* NewAsset);

	void JumpToNode(const UEdGraphNode* Node);

	bool IsPropertyVisible(const FPropertyAndParent& PropertyAndParent) const;
	bool IsPropertyEditable() const;

private:

	TSharedRef<SDockTab> SpawnTab_GraphCanvas(const FSpawnTabArgs& Args);
	TSharedRef<SDockTab> SpawnTab_Properties(const FSpawnTabArgs& Args);
	TSharedRef<SDockTab> SpawnTab_Palette(const FSpawnTabArgs& Args);

protected:

	/** Called when the preview text changes */
	void OnPreviewTextChanged(const FString& Text);

	/** Called when the selection changes in the GraphEditor */
	void OnSelectedNodesChanged(const TSet<class UObject*>& NewSelection);

	/**
	 * Called when a node's title is committed for a rename
	 *
	 * @param	NewText				New title text
	 * @param	CommitInfo			How text was committed
	 * @param	NodeBeingChanged	The node being changed
	 */
	void OnNodeTitleCommitted(const FText& NewText, ETextCommit::Type CommitInfo, UEdGraphNode* NodeBeingChanged);

	/** Executes an action when a node gets double clicked */
	void OnNodeDoubleClicked(UEdGraphNode* Node);

	/** Select every node in the graph */
	void SelectAllNodes();
	/** Whether we can select every node */
	bool CanSelectAllNodes() const;

	/** Delete the currently selected nodes */
	void DeleteSelectedNodes();
	/** Whether we are able to delete the currently selected nodes */
	bool CanDeleteNodes() const;
	/** Delete only the currently selected nodes that can be duplicated */
	void DeleteSelectedDuplicatableNodes();

	/** Cut the currently selected nodes */
	void CutSelectedNodes();
	/** Whether we are able to cut the currently selected nodes */
	bool CanCutNodes() const;

	/** Copy the currently selected nodes */
	void CopySelectedNodes();
	/** Whether we are able to copy the currently selected nodes */
	bool CanCopyNodes() const;

	/** Paste the contents of the clipboard */
	void PasteNodes();
	/** Paste the contents of the clipboard at a specific location */
	virtual void PasteNodesHere(const FVector2D& Location) override;
	/** Whether we are able to paste the contents of the clipboard */
	virtual bool CanPasteNodes() const override;

	/** Duplicate the currently selected nodes */
	void DuplicateNodes();
	/** Whether we are able to duplicate the currently selected nodes */
	bool CanDuplicateNodes() const;

	/** Called to undo the last action */
	void UndoGraphAction();

	/** Called to redo the last undone action */
	void RedoGraphAction();


private:
	/** FNotifyHook interface */
	virtual void NotifyPostChange( const FPropertyChangedEvent& PropertyChangedEvent, FProperty* PropertyThatChanged) override;

	/** Creates all internal widgets for the tabs to point at */
	void CreateInternalWidgets();

	/** Builds the toolbar widget for the Quest editor */
	void ExtendToolbar();
	
	/** Binds new graph commands to delegates */
	void BindGraphCommands();

	void BindDebuggerToolbarCommands();

	/** Sync the content browser to the current selection of nodes */
	void SyncInBrowser();
	/** Whether we can sync the content browser to the current selection of nodes */
	bool CanSyncInBrowser() const;

	/* Create comment node on graph */
	void OnCreateComment();

	/** Create new graph editor widget */
	TSharedRef<SGraphEditor> CreateGraphEditorWidget();
	bool InEditingMode(bool bGraphIsEditable) const;

private:
	/** The Quest asset being inspected */
	UQuestGroup * Quest;

	TSharedPtr<class FQuestGroupDebugger> Debugger;

	/** List of open tool panels; used to ensure only one exists at any one time */
	TMap< FName, TWeakPtr<SDockableTab> > SpawnedToolPanels;

	/** New Graph Editor */
	TSharedPtr<SGraphEditor> QuestGraphEditor;

	/** Properties tab */
	TSharedPtr<class IDetailsView> QuestProperties;

	/** Palette of Quest Node types */
	TSharedPtr<class SQuestPalette> Palette;

	/** Command list for this editor */
	TSharedPtr<FUICommandList> GraphEditorCommands;

	/**	The tab ids for all the tabs used */
	static const FName GraphCanvasTabId;
	static const FName PropertiesTabId;
	static const FName PaletteTabId;
};
