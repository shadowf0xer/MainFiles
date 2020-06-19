// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "QuestBase.h"
#include "QGNodes/QGNode.h"
#include "QuestGroupDebugging.h"
#include "QuestGroup.generated.h"

class UQuestCondition;
class UQuestManagerComponent;
class FQuestGroupDebugger;

#if WITH_EDITOR
class UQuestGroup;
class UEdGraph;

/** Interface for quest group graph interaction with the AudioEditor module. */
class IQuestEditor
{
public:
	virtual ~IQuestEditor() {}

	/** Called when creating a new quest group graph. */
	virtual UEdGraph* CreateNewQuestGroupGraph(UQuestGroup* InQuest) = 0;

	/** Sets up a quest node. */
	virtual void SetupQuestNode(UEdGraph* QuestGraph, UQGNode* QuestNode, bool bSelectNewNode) = 0;

	/** Links graph nodes from quest nodes. */
	virtual void LinkGraphNodesFromQuestNodes(UQuestGroup* QuestGroup) = 0;

	/** Compiles quest nodes from graph nodes. */
	virtual void CompileQuestNodesFromGraphNodes(UQuestGroup* QuestGroup) = 0;

	/** Removes nodes which are null from the quest group graph. */
	virtual void RemoveNullNodes(UQuestGroup* QuestGroup) = 0;

	/** Removes nodes which are null from the quest group graph. */
	virtual void OnQGNodeChanged(UQGNode* QGNode, FPropertyChangedEvent& PropertyChangedEvent, const bool bChangedOutputs) = 0;

	/** Renames all pins in a quest group node */
	//virtual void RenameNodePins(UQGNode* QGNode) = 0;
};
#endif

/**
 * Quest Group
 * A Quest Group is a tree of sub-quests related to each other.
 * Sub-quests can be optional, be rejected or have custom logic.
 */
UCLASS(hidecategories = object, EditInlineNew)
class QUESTEXTENSION_API UQuestGroup : public UQuestBase
{
	GENERATED_BODY()

public:

	UQuestGroup();


	UPROPERTY(SaveGame)
	TArray<UQGNode*> FirstNodes;

#if WITH_EDITORONLY_DATA
	UPROPERTY()
	TArray<UQGNode*> AllNodes;

	UPROPERTY()
	class UEdGraph* QuestGraph;
#endif


	// Called when the game starts or this quest is started
	virtual void BeginPlay() override;

	/** Called when the quest is started */
	virtual void PostStartQuest() override;

	/** Called when the quest is finished */
	virtual void PostFinishQuest(const EQuestCompletionState State) override;

	/** Construct and initialize a node within this Quest Group */
	UQGNode* ConstructQuestNode(TSubclassOf<UQGNode> QuestNodeClass = UQGNode::StaticClass(), bool bSelectNewNode = true);

	UQGNode* FindNodeById(FGuid Id);

	void GetAllNodes(TArray<UQGNode*>& QGNodes) const;

	UFUNCTION(BlueprintCallable, Category = "Quest|Group")
	void GetAllQuestNodes(TArray<class UQGNode_QuestFromAsset*>& QuestNodes) const;

	UFUNCTION(BlueprintCallable, Category = "Quest|Group")
	void GetAllRunningQuestNodes(TArray<UQGNode_QuestFromAsset*>& QuestNodes) const;


	/************************************************************************/
	/* EDITOR															   */
	/************************************************************************/

	//~ Begin UObject Interface.
	virtual void Serialize(FArchive& Ar) override;
#if WITH_EDITOR
	virtual void PostInitProperties() override;
	static void AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector);
	//~ End UObject Interface.


	/** Create the basic quest graph */
	void CreateGraph();

	/** Clears all nodes from the graph (for old editor's buffer quest group) */
	void ClearGraph();

	/** Set up EdGraph parts of a QuestNode */
	void SetupQuestNode(class UQGNode* InQuestNode, bool bSelectNewNode = true);

	/** Use the QuestGroup's children to link EdGraph Nodes together */
	void LinkGraphNodesFromQuestNodes();

	/** Use the EdGraph representation to compile the QuestGroup */
	void CompileQuestNodesFromGraphNodes();

	void OnQGNodeChanged(UQGNode* QGNode, FPropertyChangedEvent& PropertyChangedEvent, const bool bChangedOutputs);

	/** Get the EdGraph of QGNodes */
	class UEdGraph* GetGraph();


	/** Sets the quest group graph editor implementation.* */
	static void SetQuestEditor(TSharedPtr<IQuestEditor> InQuestEditor);

	/** Gets the quest group graph editor implementation. */
	static TSharedPtr<IQuestEditor> GetQuestEditor();


private:

	/** Ptr to interface to quest group editor operations. */
	static TSharedPtr<IQuestEditor> QuestEditor;
#endif


	/************************************************************************/
	/* DEBUGGER															 */
	/************************************************************************/
public:

	/** make a snapshot for debugger */
	void StoreDebuggerExecutionStep(EQGExecutionSnap::Type SnapType);

protected:

	/** make a snapshot for debugger from given subtree instance */
	void StoreDebuggerInstance(FQuestGroupDebuggerInstance& InstanceInfo, EQGExecutionSnap::Type SnapType) const;
	void StoreDebuggerRemovedInstance() const;

	/** store search step for debugger */
	//void StoreDebuggerSearchStep(const UQGNode* Node, EQGNodeFinishReason NodeResult) const;
	//void StoreDebuggerSearchStep(const UQGNode* Node, bool bPassed) const;

	/** store restarting node for debugger */
	void StoreDebuggerRestart(const UQGNode* Node, bool bAllowed);

	/** gather nodes runtime descriptions */
	void StoreDebuggerRuntimeValues(TArray<FString>& RuntimeDescriptions, UQGNode* RootNode) const;

	/** check if debugger is currently running and can gather data */
	static bool IsDebuggerActive();

#if USE_QUESTGROUP_DEBUGGER
	/** search flow for debugger */
	mutable TArray<FQuestGroupDebuggerInstance::FNodeFlowData> CurrentSearchFlow;
	mutable TArray<FQuestGroupDebuggerInstance::FNodeFlowData> CurrentRestart;
	mutable FQuestGroupDebuggerInstance RemovedInstance;

	/** debugger's recorded data */
	mutable TArray<FQuestGroupExecutionStep> DebuggerSteps;

	/** set when at least one debugger window is opened */
	static int32 ActiveDebuggerCounter;
#endif

	friend FQuestGroupDebugger;
};
