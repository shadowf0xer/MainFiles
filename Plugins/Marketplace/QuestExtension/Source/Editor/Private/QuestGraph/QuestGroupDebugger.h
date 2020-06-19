// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Stats/Stats.h"
#include "QuestManagerComponent.h"
#include "Tickable.h"

class AActor;
class APawn;
class FQuestGroupEditor;
class UQuestGroup;
class UQuestManagerComponent;
class UQuestGroupNode_Base;
class UQuestGroupNode_Root;


class FQuestGroupDebugger : public FTickableGameObject
{
public:
	FQuestGroupDebugger();
	~FQuestGroupDebugger();

	virtual void Tick(float DeltaTime) override;
	virtual bool IsTickable() const override;
	virtual bool IsTickableWhenPaused() const override { return true; }
	virtual bool IsTickableInEditor() const override { return true; }
	virtual TStatId GetStatId() const override { RETURN_QUICK_DECLARE_CYCLE_STAT(FQuestGroupEditorTickHelper, STATGROUP_Tickables); }

	/** Refresh the debugging information we are displaying (only when paused, as Tick() updates when running) */
	void Refresh();

	void Setup(UQuestGroup* InTreeAsset, TSharedRef<class FQuestGroupEditor> InEditorOwner);

	/** Store the root node for easy access if we have not already */
	void CacheRootNode();

	bool IsDebuggerReady() const;
	bool IsDebuggerRunning() const;
	bool IsShowingCurrentState() const;
	FQuestGroupDebuggerInstance* GetPreviousStepData();
	int32 GetShownStateIndex() const;

	void OnObjectSelected(UObject* Object);
	void OnAIDebugSelected(const APawn* Pawn);
	void OnQGStarted(const UQuestManagerComponent& OwnerComp, const UQuestGroup& InTreeAsset);
	void OnPostBeginPIE(const bool bIsSimulating);
	void OnEndPIE(const bool bIsSimulating);
	void OnPausePIE(const bool bIsSimulating);
	void OnResumePIE(const bool bIsSimulating);

	//void OnBreakpointAdded(UQuestGroupNode* Node);
	//void OnBreakpointRemoved(UQuestGroupNode* Node);

	void StepBackEnd();
	void StepBack();
	void StepForward();
	void StepForwardEnd();
	bool CanStepBack() const;
	bool CanStepForward() const;

	static void StopPlaySession();
	static void PausePlaySession();
	static void ResumePlaySession();
	static bool IsPlaySessionPaused();
	static bool IsPlaySessionRunning();
	static bool IsPIESimulating();
	static bool IsPIENotSimulating();

	FString GetDebuggedInstanceDesc() const;
	FString DescribeInstance(const UQuestManagerComponent& InstanceToDescribe) const;
	void OnInstanceSelectedInDropdown(UQuestManagerComponent* SelectedInstance);
	void GetMatchingInstances(TArray<UQuestManagerComponent*>& MatchingInstances);

	void InitializeFromParent(class FQuestGroupDebugger* ParentDebugger);
	bool HasContinuousNextStep() const;
	bool HasContinuousPrevStep() const;

	/** Gets the timestamp to be displayed, either current or saved */
	float GetTimeStamp(bool bUseCurrentState) const;

private:

	/** owning editor */
	TWeakPtr<FQuestGroupEditor> EditorOwner;

	/** asset for debugging */
	UQuestGroup* QuestGroupAsset;

	/** root node in asset's graph */
	TWeakObjectPtr<UQuestGroupNode_Root> RootNode;

	/** instance for debugging */
	TWeakObjectPtr<const UQuestManagerComponent> QuestManager;

	/** index of state from buffer to show */
	int32 ActiveStepIndex;

	/** index of selected step */
	int32 SelectedStepIndex;

	/** index of displayed step, used to detect changes */
	int32 DisplayedStepIndex;

	/** id of last valid step */
	int32 LastActiveStepIndex;

	/** indices of display steps for different step actions */
	int32 StepBackEndIdx;
	int32 StepBackIdx;
	int32 StepForwardIdx;
	int32 StepForwardEndIdx;

	/** execution indices of currently active breakpoints */
	TArray<uint16> ActiveBreakpoints;

	/** all known BT instances, cached for dropdown list */
	TArray<TWeakObjectPtr<UQuestManagerComponent> > KnownInstances;

	/** cached PIE state */
	uint32 bIsPIEActive : 1;

	/** set when debugger instance is currently active one */
	uint32 bIsCurrentSubtree : 1;

	/** execution index of node that caused activated the breakpoint */
	uint16 StoppedOnBreakpointExecutionIndex;

	/** Debugger timestamps */
	float SavedTimestamp;
	float CurrentTimestamp;


	UQuestGroup* GetDebuggedQuestGroup() const;

	/** clear all runtime variables */
	void ClearDebuggerState(bool bKeepSubtree = false);

	/** try using breakpoints on node change */
	void OnActiveNodeChanged(const TArray<uint16>& ActivePath, const TArray<uint16>& PrevStepPath);

	/** scan all actors and try to find matching BT component
	  * used only when user starts PIE before opening editor */
	void FindMatchingQuestManagers();

	/** find index on execution instance stack of matching tree asset */
	bool HasMatchingDebuggerQuestGroup(UQuestManagerComponent& TestInstance) const;

	/** find BT component in given actor */
	UQuestManagerComponent* FindInstanceInActor(AActor* TestActor);

	/** try to find pawn currently locked by ai debug tool */
	void FindLockedDebugActor(class UWorld* World);

	/** recursively collect all breakpoint indices from child nodes */
	void CollectBreakpointsFromAsset(class UQuestGroupNode_Base* Node);

	/** recursively update node flags on all child nodes */
	void UpdateAssetFlags(const struct FQuestGroupDebuggerInstance& Data, class UQuestGroupNode_Base* Node, int32 StepIdx);

	/** set debugger flags on GraphNode */
	void SetNodeFlags(const struct FQuestGroupDebuggerInstance& Data, class UQuestGroupNode_Base* Node, class UQGNode* AssetNode);

	/** recursively update node flags on all child nodes */
	void UpdateAssetRuntimeDescription(const TArray<FString>& RuntimeDescriptions, class UQuestGroupNode_Base* Node);

	/** set debugger flags on GraphNode */
	void SetNodeRuntimeDescription(const TArray<FString>& RuntimeDescriptions, class UQuestGroupNode_Base* Node, class UQGNode* NodeInstance);

	void UpdateDebuggerViewOnStepChange();
	void UpdateDebuggerViewOnTick();

	/** updates currently displayed execution step */
	void UpdateCurrentStep(int32 NewStepIdx);

	/** updates button states */
	void UpdateAvailableActions();

	const int32 GetCurrentStepIndex() const {
		return SelectedStepIndex != INDEX_NONE ? SelectedStepIndex : ActiveStepIndex;
	}
};
