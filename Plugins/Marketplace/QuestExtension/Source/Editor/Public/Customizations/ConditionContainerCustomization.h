// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "IPropertyTypeCustomization.h"
#include "CoreMinimal.h"
#include "UObject/GCObject.h"
#include "Toolkits/IToolkitHost.h"
#include "Misc/NotifyHook.h"
#include "EditorUndoClient.h"
#include "Framework/Commands/UICommandList.h"

class IDetailsView;
class SDockableTab;
class SGraphEditor;
class UEdGraphNode;
class UConditionContainer;
struct FPropertyChangedEvent;
struct Rect;


class FConditionContainerCustomization : public IPropertyTypeCustomization, public FNotifyHook, public FEditorUndoClient
{
public:

	static TSharedRef<IPropertyTypeCustomization> MakeInstance()
	{
		return MakeShareable(new FConditionContainerCustomization());
	}

	//~ Begin IPropertyTypeCustomization Interface
	virtual void CustomizeHeader(TSharedRef<class IPropertyHandle> StructPropertyHandle, class FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& StructCustomizationUtils) override;
	virtual void CustomizeChildren(TSharedRef<class IPropertyHandle> StructPropertyHandle, class IDetailChildrenBuilder& StructBuilder, IPropertyTypeCustomizationUtils& StructCustomizationUtils) override;
	// End of IPropertyTypeCustomization

	//~ Begin FEditorUndoClient Interface
	virtual void PostUndo(bool bSuccess) override;
	virtual void PostRedo(bool bSuccess) override { PostUndo(bSuccess); }
	// End of FEditorUndoClient

	UConditionContainer* GetContainer() const;

	/** Get the bounding area for the currently selected nodes
	*
	* @param Rect Final output bounding area, including padding
	* @param Padding An amount of padding to add to all sides of the bounds
	*
	* @return false if nothing is selected*/
	virtual bool GetBoundsForSelectedNodes(class FSlateRect& Rect, float Padding);

	/** Gets the number of nodes that are currently selected */
	virtual int32 GetNumberOfSelectedNodes() const;

	/** Get the currently selected set of nodes */
	virtual TSet<UObject*> GetSelectedNodes() const;

	/** Assigns the currently selected nodes to the property control */
	virtual void SetSelection(TArray<UObject*> SelectedObjects);

	/** Paste the contents of the clipboard at a specific location */
	virtual void PasteNodesHere(const FVector2D& Location);
	/** Whether we are able to paste the contents of the clipboard */
	virtual bool CanPasteNodes() const;

private:

	void InitializeContainer();

	void CreateInternalWidgets();

	/** Create new graph editor widget */
	void CreateGraphEditorWidget();

	/* Create comment node on graph */
	void OnCreateComment();

	FText GetInformationText() const;

protected:

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

	/** Duplicate the currently selected nodes */
	void DuplicateNodes();
	/** Whether we are able to duplicate the currently selected nodes */
	bool CanDuplicateNodes() const;

	/** Called to undo the last action */
	void UndoGraphAction();

	/** Called to redo the last undone action */
	void RedoGraphAction();

private:

	TSharedPtr<IPropertyHandle> ContainerHandle;

	/** New Graph Editor */
	TSharedPtr<SGraphEditor> ConditionGraphEditor;

	/** Details tab */
	TSharedPtr<class IDetailsView> GraphDetails;

	/** Command list for the graph */
	TSharedPtr<FUICommandList> GraphEditorCommands;
};