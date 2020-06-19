// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "QuestGroupDebugger.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/Controller.h"
#include "EngineGlobals.h"
#include "Editor/EditorEngine.h"
#include "Editor.h"
#include "QGNodes/QGNode.h"
#include "QuestGroupEditor.h"
#include "Editor/UnrealEdEngine.h"
#include "Engine/Selection.h"
#include "GameFramework/PlayerController.h"
#include "EngineUtils.h"
#include "UnrealEdGlobals.h"

#include "Quests/QuestGroup.h"
#include "QuestGraph/QuestGroupNode_Base.h"
#include "QuestGraph/QuestGroupNode_Root.h"
#include "QuestGraph/QuestGroupNode.h"


FQuestGroupDebugger::FQuestGroupDebugger()
{
	QuestGroupAsset = nullptr;
	bIsPIEActive = false;
	bIsCurrentSubtree = false;
	StepBackEndIdx = INDEX_NONE;
	StepBackIdx = INDEX_NONE;
	StepForwardIdx = INDEX_NONE;
	StepForwardEndIdx = INDEX_NONE;
	SavedTimestamp = 0.0f;
	CurrentTimestamp = 0.0f;

	FEditorDelegates::PostPIEStarted.AddRaw(this, &FQuestGroupDebugger::OnPostBeginPIE);
	FEditorDelegates::EndPIE.AddRaw(this, &FQuestGroupDebugger::OnEndPIE);
	FEditorDelegates::PausePIE.AddRaw(this, &FQuestGroupDebugger::OnPausePIE);
	FEditorDelegates::ResumePIE.AddRaw(this, &FQuestGroupDebugger::OnResumePIE);

#if USE_QUESTGROUP_DEBUGGER
	UQuestGroup::ActiveDebuggerCounter++;
#endif
}

FQuestGroupDebugger::~FQuestGroupDebugger()
{
	FEditorDelegates::PostPIEStarted.RemoveAll(this);
	FEditorDelegates::EndPIE.RemoveAll(this);
	FEditorDelegates::PausePIE.RemoveAll(this);
	FEditorDelegates::ResumePIE.RemoveAll(this);
	USelection::SelectObjectEvent.RemoveAll(this);

#if USE_QUESTGROUP_DEBUGGER
	--UQuestGroup::ActiveDebuggerCounter;
#endif
}

void FQuestGroupDebugger::CacheRootNode()
{
	if(RootNode.IsValid() || QuestGroupAsset == nullptr || QuestGroupAsset->GetGraph() == nullptr)
	{
		return;
	}

	for (const auto& Node : QuestGroupAsset->GetGraph()->Nodes)
	{
		RootNode = Cast<UQuestGroupNode_Root>(Node);
		if (RootNode.IsValid())
		{
			break;
		}
	}
}

void FQuestGroupDebugger::Setup(UQuestGroup* InQGAsset, TSharedRef<class FQuestGroupEditor> InEditorOwner)
{
	EditorOwner = InEditorOwner;
	QuestGroupAsset = InQGAsset;
	ActiveStepIndex = 0;
	SelectedStepIndex = INDEX_NONE;
	DisplayedStepIndex = INDEX_NONE;
	LastActiveStepIndex = INDEX_NONE;
	ActiveBreakpoints.Reset();
	KnownInstances.Reset();

	CacheRootNode();

#if USE_QUESTGROUP_DEBUGGER
	if (IsPIESimulating())
	{
		OnPostBeginPIE(GEditor->bIsSimulatingInEditor);
		Refresh();
	}
#endif
}

void FQuestGroupDebugger::Refresh()
{
	CacheRootNode();

	if (IsPIESimulating() && IsDebuggerReady())
	{
		UQuestGroup* QuestGroup = GetDebuggedQuestGroup();

		// make sure is grabs data if currently paused
		if (IsPlaySessionPaused() && QuestGroup)
		{
			FindLockedDebugActor(GEditor->PlayWorld);

			UpdateAvailableActions();

			{
				UpdateDebuggerViewOnStepChange();
				UpdateDebuggerViewOnTick();

				const FQuestGroupDebuggerInstance& ShowInstance = QuestGroup->DebuggerSteps[ActiveStepIndex].Instance;
				//OnActiveNodeChanged(ShowInstance.ActivePath, HasContinuousPrevStep() ?
					//QuestGroup->DebuggerSteps[ActiveStepIndex - 1].Instance.ActivePath :
					//TArray<uint16>());

				UpdateAssetFlags(ShowInstance, RootNode.Get(), ActiveStepIndex);
			}
		}
	}
}

void FQuestGroupDebugger::Tick(float DeltaTime)
{
	if (QuestGroupAsset == nullptr || IsPlaySessionPaused())
	{
		return;
	}

	UQuestGroup* QuestGroup = GetDebuggedQuestGroup();

	if (!QuestManager.IsValid() || !QuestGroup)
	{
		// Clear state when quest group is not running or completed is lost
		{
			ClearDebuggerState();
		}

		return;
	}

#if USE_QUESTGROUP_DEBUGGER

	const bool bUsingSelectedStep = SelectedStepIndex != INDEX_NONE && SelectedStepIndex != ActiveStepIndex;

	if (!bUsingSelectedStep)
	{
		int32 TestStepIndex = 0;
		for (int32 Idx = QuestGroup->DebuggerSteps.Num() - 1; Idx >= 0; Idx--)
		{
			if (Idx == LastActiveStepIndex)
			{
				TestStepIndex = Idx;
				break;
			}
		}

		for (int32 i = TestStepIndex; i < QuestGroup->DebuggerSteps.Num(); i++)
		{
			LastActiveStepIndex = ActiveStepIndex;
			ActiveStepIndex = i;

			UpdateAvailableActions();

			if (QuestGroup->DebuggerSteps.IsValidIndex(ActiveStepIndex))
			{
				UpdateDebuggerViewOnStepChange();

				const FQuestGroupDebuggerInstance& ShowInstance = QuestGroup->DebuggerSteps[ActiveStepIndex].Instance;
				//OnActiveNodeChanged(ShowInstance.ActivePath, HasContinuousPrevStep() ?
				//QuestGroup->DebuggerSteps[ActiveStepIndex - 1].Instance.ActivePath :
				//EmptyPath);
			}

			// skip rest of them if breakpoint hit
			if (IsPlaySessionPaused())
			{
				break;
			}
		}

		if (ActiveStepIndex != INDEX_NONE && QuestGroup->DebuggerSteps.IsValidIndex(ActiveStepIndex))
		{
			const FQuestGroupDebuggerInstance& ShowInstance = QuestGroup->DebuggerSteps[ActiveStepIndex].Instance;

			if (DisplayedStepIndex != QuestGroup->DebuggerSteps[ActiveStepIndex].StepIndex)
			{
				UpdateAssetFlags(ShowInstance, RootNode.Get(), ActiveStepIndex);
			}
		}
	}

	UpdateDebuggerViewOnTick();
#endif
}

bool FQuestGroupDebugger::IsTickable() const
{
	return IsDebuggerReady();
}

void FQuestGroupDebugger::OnPostBeginPIE(const bool bIsSimulating)
{
	bIsPIEActive = true;

	if(EditorOwner.IsValid())
	{
		TSharedPtr<FQuestGroupEditor> EditorOwnerPtr = EditorOwner.Pin();
		EditorOwnerPtr->RegenerateMenusAndToolbars();
		//EditorOwnerPtr->DebuggerUpdateGraph();
	}

	ActiveBreakpoints.Reset();
	CollectBreakpointsFromAsset(RootNode.Get());

	FindMatchingQuestManagers();

	// remove these delegates first as we can get multiple calls to OnPostBeginPIE()
	USelection::SelectObjectEvent.RemoveAll(this);
	USelection::SelectObjectEvent.AddRaw(this, &FQuestGroupDebugger::OnObjectSelected);
}

void FQuestGroupDebugger::OnEndPIE(const bool bIsSimulating)
{
	bIsPIEActive = false;
	if(EditorOwner.IsValid())
	{
		EditorOwner.Pin()->RegenerateMenusAndToolbars();
	}

	USelection::SelectObjectEvent.RemoveAll(this);

	ClearDebuggerState();
	ActiveBreakpoints.Reset();

	FQuestGroupDebuggerInstance EmptyData;
	UpdateAssetFlags(EmptyData, RootNode.Get(), INDEX_NONE);
}

void FQuestGroupDebugger::OnPausePIE(const bool bIsSimulating)
{
#if USE_QUESTGROUP_DEBUGGER
	SelectedStepIndex = ActiveStepIndex;
	UpdateAvailableActions();
#endif
}

void FQuestGroupDebugger::OnResumePIE(const bool bIsSimulating)
{
#if USE_QUESTGROUP_DEBUGGER
	SelectedStepIndex = INDEX_NONE;
	UpdateAvailableActions();
	UpdateCurrentStep(ActiveStepIndex);
#endif
}

void FQuestGroupDebugger::OnObjectSelected(UObject* Object)
{
	if (Object && Object->IsSelected())
	{
		UQuestManagerComponent* InstanceComp = FindInstanceInActor(Cast<AActor>(Object));
		if (InstanceComp)
		{
			ClearDebuggerState();
			QuestManager = InstanceComp;

			Refresh();
		}
	}
}

void FQuestGroupDebugger::OnAIDebugSelected(const APawn* Pawn)
{
	UQuestManagerComponent* TestComp = FindInstanceInActor((APawn*)Pawn);
	if (TestComp)
	{
		ClearDebuggerState();
		QuestManager = TestComp;

		//UpdateDebuggerViewOnInstanceChange();
	}
}

void FQuestGroupDebugger::OnQGStarted(const UQuestManagerComponent& OwnerComp, const UQuestGroup& InQGAsset)
{
	// start debugging if tree asset matches, and no other actor was selected
	if (!QuestManager.IsValid() && QuestGroupAsset && QuestGroupAsset == &InQGAsset)
	{
		ClearDebuggerState();
		QuestManager = &OwnerComp;

		//UpdateDebuggerViewOnInstanceChange();
	}

	// update known instances
	TWeakObjectPtr<UQuestManagerComponent> KnownComp = const_cast<UQuestManagerComponent*>(&OwnerComp);
	KnownInstances.AddUnique(KnownComp);
}

void FQuestGroupDebugger::ClearDebuggerState(bool bKeepSubtree)
{
	LastActiveStepIndex = bKeepSubtree ? LastActiveStepIndex : INDEX_NONE;

	ActiveStepIndex = 0;
	DisplayedStepIndex = INDEX_NONE;

	if (QuestGroupAsset && RootNode.IsValid())
	{
		FQuestGroupDebuggerInstance EmptyData;
		UpdateAssetFlags(EmptyData, RootNode.Get(), INDEX_NONE);
	}
}

UQuestGroup* FQuestGroupDebugger::GetDebuggedQuestGroup() const
{
	if (!QuestManager.IsValid())
		return nullptr;

	return Cast<UQuestGroup>(QuestManager->GetQuestScript(QuestGroupAsset));
}

void FQuestGroupDebugger::SetNodeFlags(const struct FQuestGroupDebuggerInstance& Data, class UQuestGroupNode_Base* Node, class UQGNode* AssetNode)
{
	const FGuid& NodeId = AssetNode->GetNodeId();


	const bool bIsActive = Data.IsValid();
	const bool bIsNodeRunning = bIsActive && Data.RunningNodes.Contains(NodeId);
	const bool bIsNodeSucceeded = !bIsNodeRunning && Data.SucceededNodes.Contains(NodeId);
	const bool bIsNodeFailed = !bIsNodeRunning && Data.FailedNodes.Contains(NodeId);
	const FGuid* ActiveParentGuid = Data.ActiveConnections.Find(NodeId);

	FQuestGroupDebuggerInstance* PreviousData = GetPreviousStepData();
	const bool bWasNodeRunning = PreviousData && PreviousData->IsValid() && PreviousData->RunningNodes.Contains(NodeId);


	Node->bDebuggerMarkRunning = bIsNodeRunning;
	Node->bDebuggerMarkPreviouslyRunning = bWasNodeRunning;
	Node->bDebuggerMarkSucceeded = bIsNodeSucceeded;
	Node->bDebuggerMarkFailed = bIsNodeFailed;
	Node->DebuggerMarkActiveParent = ActiveParentGuid != nullptr ? *ActiveParentGuid : FGuid();

	/*Node->bDebuggerMarkBreakpointTrigger = NodeInstance->GetNodeId() == StoppedOnBreakpointExecutionIndex;
	if (Node->bDebuggerMarkBreakpointTrigger)
	{
		if(EditorOwner.IsValid())
		{
			EditorOwner.Pin()->JumpToNode(Node);
		}
	}*/
}

void FQuestGroupDebugger::UpdateAssetFlags(const struct FQuestGroupDebuggerInstance& Data, class UQuestGroupNode_Base* Node, int32 StepIdx)
{
	if (Node == nullptr)
	{
		return;
	}

	UQuestGroup* RuntimeQG = GetDebuggedQuestGroup();

	// special case for marking root when out of nodes
	if (Node == RootNode.Get())
	{
		int32 CurrentStepIndex = GetCurrentStepIndex();
		const bool bIsActive = StepIdx >= 0 && Data.IsValid();
		const bool bIsFirstStep  = bIsActive && CurrentStepIndex == 0;
		const bool bIsSecondStep = bIsActive && CurrentStepIndex == 1;

		Node->bDebuggerMarkRunning		   = bIsFirstStep;
		Node->bDebuggerMarkPreviouslyRunning = bIsSecondStep;
		Node->bDebuggerMarkSucceeded		 = bIsSecondStep;
		DisplayedStepIndex = StepIdx;
	}

	for (int32 PinIdx { 0 }; PinIdx < Node->Pins.Num(); PinIdx++)
	{
		// For each pin in node
		UEdGraphPin* Pin = Node->Pins[PinIdx];

		if (Pin->Direction != EGPD_Output)
		{
			continue;
		}

		for (int32 i { 0 }; i < Pin->LinkedTo.Num(); i++)
		{
			// For each connected node to pin
			UQuestGroupNode* LinkedNode = Cast<UQuestGroupNode>(Pin->LinkedTo[i]->GetOwningNode());

			if (LinkedNode)
			{
				UQGNode* LinkedQGNode = Cast<UQGNode>(LinkedNode->QuestNode);

				//Find the pair node in runtime

				if (LinkedQGNode)
				{
					SetNodeFlags(Data, LinkedNode, LinkedQGNode);
					//SetNodeRuntimeDescription(Data.RuntimeDesc, LinkedNode, QGNode);
				}

				UpdateAssetFlags(Data, LinkedNode, StepIdx);
			}
		}
	}
}

void FQuestGroupDebugger::UpdateAssetRuntimeDescription(const TArray<FString>& RuntimeDescriptions, class UQuestGroupNode_Base* Node)
{
	if (Node == nullptr)
	{
		return;
	}

	for (int32 PinIdx = 0; PinIdx < Node->Pins.Num(); PinIdx++)
	{
		UEdGraphPin* Pin = Node->Pins[PinIdx];
		if (Pin->Direction != EGPD_Output)
		{
			continue;
		}

		for (int32 i = 0; i < Pin->LinkedTo.Num(); i++)
		{
			UQuestGroupNode* LinkedNode = Cast<UQuestGroupNode>(Pin->LinkedTo[i]->GetOwningNode());
			if (LinkedNode)
			{
				UQGNode* BTNode = LinkedNode->QuestNode;
				if (BTNode)
				{
					SetNodeRuntimeDescription(RuntimeDescriptions, LinkedNode, BTNode);
				}

				UpdateAssetRuntimeDescription(RuntimeDescriptions, LinkedNode);
			}
		}
	}
}

void FQuestGroupDebugger::SetNodeRuntimeDescription(const TArray<FString>& RuntimeDescriptions, class UQuestGroupNode_Base* Node, class UQGNode* NodeInstance)
{
	/*Node->DebuggerRuntimeDescription = RuntimeDescriptions.IsValidIndex(NodeInstance->GetExecutionIndex()) ?
		RuntimeDescriptions[NodeInstance->GetExecutionIndex()] : FString();*/
}

void FQuestGroupDebugger::CollectBreakpointsFromAsset(class UQuestGroupNode_Base* Node)
{
	if (Node == nullptr)
	{
		return;
	}

	for (int32 PinIdx = 0; PinIdx < Node->Pins.Num(); PinIdx++)
	{
		UEdGraphPin* Pin = Node->Pins[PinIdx];
		if (Pin->Direction != EGPD_Output)
		{
			continue;
		}

		for (int32 i = 0; i < Pin->LinkedTo.Num(); i++)
		{
			UQuestGroupNode* LinkedNode = Cast<UQuestGroupNode>(Pin->LinkedTo[i]->GetOwningNode());
			if (LinkedNode)
			{
				/*UQGNode* QGNode = Cast<UQGNode>(LinkedNode->NodeInstance);
				if (QGNode && LinkedNode->bHasBreakpoint && LinkedNode->bIsBreakpointEnabled)
				{
					ActiveBreakpoints.Add(QGNode->GetExecutionIndex());
				}

				CollectBreakpointsFromAsset(LinkedNode);*/
			}
		}
	}
}

bool FQuestGroupDebugger::HasMatchingDebuggerQuestGroup(UQuestManagerComponent& TestInstance) const
{
#if USE_QUESTGROUP_DEBUGGER

	UQuestGroup* QuestGroup = Cast<UQuestGroup>(TestInstance.GetQuestScript(QuestGroupAsset));

	if (QuestGroup && QuestGroup->DebuggerSteps.Num())
	{
		const FQuestGroupExecutionStep& StepInfo = QuestGroup->DebuggerSteps.Last();
		if (StepInfo.Instance.QGAsset == QuestGroupAsset)
		{
			return true;
		}
	}
#endif

	return false;
}

UQuestManagerComponent* FQuestGroupDebugger::FindInstanceInActor(AActor* TestActor)
{
	UQuestManagerComponent* FoundQuestManager = nullptr;
	if (TestActor)
	{
		APawn* TestPawn = Cast<APawn>(TestActor);
		if (TestPawn && TestPawn->GetController())
		{
			FoundQuestManager = TestPawn->GetController()->FindComponentByClass<UQuestManagerComponent>();
		}

		if (FoundQuestManager == nullptr)
		{
			FoundQuestManager = TestActor->FindComponentByClass<UQuestManagerComponent>();
		}
	}

	return FoundQuestManager;
}

void FQuestGroupDebugger::FindLockedDebugActor(UWorld* World)
{
	APlayerController* LocalPC = GEngine->GetFirstLocalPlayerController(World);
	if (LocalPC && LocalPC->GetHUD() && LocalPC->GetPawnOrSpectator())
	{
		APawn* SelectedPawn = nullptr;
#if WITH_ENGINE
		const UEditorEngine* EEngine = Cast<UEditorEngine>(GEngine);
		for (FSelectionIterator It = EEngine->GetSelectedActorIterator(); It; ++It)
		{
			SelectedPawn = Cast<APawn>(*It);
			if (SelectedPawn)
			{
				break;
			}
		}
#endif //WITH_ENGINE

		UQuestManagerComponent* TestInstance = FindInstanceInActor((APawn*)SelectedPawn);
		if (TestInstance)
		{
			QuestManager = TestInstance;

#if USE_QUESTGROUP_DEBUGGER
			if (UQuestGroup* QuestGroup = GetDebuggedQuestGroup())
			{
				ActiveStepIndex = QuestGroup->DebuggerSteps.Num() - 1;
			}
#endif
		}
	}
}

void FQuestGroupDebugger::FindMatchingQuestManagers()
{
	KnownInstances.Reset();
	if (GEditor->PlayWorld == nullptr)
	{
		return;
	}

	UQuestManagerComponent* MatchingComp = nullptr;
	for (FActorIterator It(GEditor->PlayWorld); It; ++It)
	{
		AActor* TestActor = *It;
		UQuestManagerComponent* TestComp = TestActor ? TestActor->FindComponentByClass<UQuestManagerComponent>() : nullptr;

		if (TestComp)
		{
			KnownInstances.Add(TestComp);

			if (HasMatchingDebuggerQuestGroup(*TestComp))
			{
				MatchingComp = TestComp;

				if (TestActor->IsSelected())
				{
					QuestManager = TestComp;
					return;
				}
			}
		}
	}

	if (MatchingComp != QuestManager)
	{
		QuestManager = MatchingComp;
		//UpdateDebuggerViewOnInstanceChange();
	}
}

bool FQuestGroupDebugger::IsDebuggerReady() const
{
	return bIsPIEActive;
}

bool FQuestGroupDebugger::IsDebuggerRunning() const
{
	return QuestManager.IsValid() && (ActiveStepIndex != INDEX_NONE);
}

bool FQuestGroupDebugger::IsShowingCurrentState() const
{
#if USE_QUESTGROUP_DEBUGGER
	UQuestGroup* QuestGroup = GetDebuggedQuestGroup();
	if (QuestGroup && QuestGroup->DebuggerSteps.Num())
	{
		return (QuestGroup->DebuggerSteps.Num() - 1) == GetCurrentStepIndex();
	}
#endif

	return false;
}

FQuestGroupDebuggerInstance* FQuestGroupDebugger::GetPreviousStepData()
{
#if USE_QUESTGROUP_DEBUGGER
	int32 CurrentStepIndex = GetCurrentStepIndex();
	UQuestGroup* QuestGroup = GetDebuggedQuestGroup();

	if (QuestGroup && QuestGroup->DebuggerSteps.IsValidIndex(CurrentStepIndex - 1))
	{
		return &QuestGroup->DebuggerSteps[CurrentStepIndex - 1].Instance;
	}
#endif
	return nullptr;
}

int32 FQuestGroupDebugger::GetShownStateIndex() const
{
#if USE_QUESTGROUP_DEBUGGER
	UQuestGroup* QuestGroup = GetDebuggedQuestGroup();
	if (QuestGroup)
	{
		return (QuestGroup->DebuggerSteps.Num() - 1) - GetCurrentStepIndex();
	}
#endif

	return 0;
}

void FQuestGroupDebugger::StepForwardEnd()
{
#if USE_QUESTGROUP_DEBUGGER
	UpdateCurrentStep(StepForwardEndIdx);
#endif
}

void FQuestGroupDebugger::StepForward()
{
#if USE_QUESTGROUP_DEBUGGER
	UpdateCurrentStep(StepForwardIdx);
#endif
}

void FQuestGroupDebugger::StepBack()
{
#if USE_QUESTGROUP_DEBUGGER
	UpdateCurrentStep(StepBackIdx);
#endif
}

void FQuestGroupDebugger::StepBackEnd()
{
#if USE_QUESTGROUP_DEBUGGER
	UpdateCurrentStep(StepBackEndIdx);
#endif
}

bool FQuestGroupDebugger::CanStepForward() const
{
	return GUnrealEd->PlayWorld && GUnrealEd->PlayWorld->bDebugPauseExecution && (StepForwardIdx != INDEX_NONE);
}

bool FQuestGroupDebugger::CanStepBack() const
{
	return GUnrealEd->PlayWorld && GUnrealEd->PlayWorld->bDebugPauseExecution && (StepBackIdx != INDEX_NONE);
}

void FQuestGroupDebugger::UpdateCurrentStep(int32 NewStepIdx)
{
#if USE_QUESTGROUP_DEBUGGER
	UQuestGroup* QuestGroup = GetDebuggedQuestGroup();
	if (QuestGroup && QuestGroup->DebuggerSteps.IsValidIndex(NewStepIdx))
	{
		const FQuestGroupExecutionStep& NewStepInfo = QuestGroup->DebuggerSteps[NewStepIdx];

		if (NewStepInfo.Instance.IsValid())
		{
			if(SelectedStepIndex != INDEX_NONE)
				SelectedStepIndex = NewStepIdx;

			const FQuestGroupDebuggerInstance& ShowInstance = NewStepInfo.Instance;
			UpdateAssetFlags(ShowInstance, RootNode.Get(), ActiveStepIndex);
		}
		else
		{
			ActiveStepIndex = INDEX_NONE;

			FQuestGroupDebuggerInstance EmptyData;
			UpdateAssetFlags(EmptyData, RootNode.Get(), INDEX_NONE);
		}

		UpdateDebuggerViewOnStepChange();
		UpdateAvailableActions();
	}
#endif
}

bool FQuestGroupDebugger::HasContinuousNextStep() const
{
#if USE_QUESTGROUP_DEBUGGER
	UQuestGroup* QuestGroup = GetDebuggedQuestGroup();
	if (QuestGroup && QuestGroup->DebuggerSteps.IsValidIndex(DisplayedStepIndex + 1))
	{
		const FQuestGroupExecutionStep& NextStepInfo = QuestGroup->DebuggerSteps[DisplayedStepIndex + 1];
		const FQuestGroupExecutionStep& CurStepInfo  = QuestGroup->DebuggerSteps[DisplayedStepIndex];

		if (CurStepInfo.Instance.QGAsset == NextStepInfo.Instance.QGAsset)
		{
			return true;
		}
	}
#endif
	return false;
}

bool FQuestGroupDebugger::HasContinuousPrevStep() const
{
#if USE_QUESTGROUP_DEBUGGER
	UQuestGroup* QuestGroup = GetDebuggedQuestGroup();
	if (QuestGroup && QuestGroup->DebuggerSteps.IsValidIndex(DisplayedStepIndex - 1))
	{
		const FQuestGroupExecutionStep& PrevStepInfo = QuestGroup->DebuggerSteps[DisplayedStepIndex - 1];
		const FQuestGroupExecutionStep& CurStepInfo = QuestGroup->DebuggerSteps[DisplayedStepIndex];

		if (CurStepInfo.Instance.QGAsset == PrevStepInfo.Instance.QGAsset)
		{
			return true;
		}
	}
#endif
	return false;
}

void FQuestGroupDebugger::OnActiveNodeChanged(const TArray<uint16>& ActivePath, const TArray<uint16>& PrevStepPath)
{
	bool bShouldPause = false;
	StoppedOnBreakpointExecutionIndex = MAX_uint16;

	// breakpoints: check only nodes, that have changed from previous state
	// (e.g. breakpoint on sequence, it would break multiple times for every child
	// but we want only once: when it becomes active)

	for (int32 i = 0; i < ActivePath.Num(); i++)
	{
		const uint16 TestExecutionIndex = ActivePath[i];
		if (!PrevStepPath.Contains(TestExecutionIndex))
		{
			if (ActiveBreakpoints.Contains(TestExecutionIndex))
			{
				bShouldPause = true;
				StoppedOnBreakpointExecutionIndex = TestExecutionIndex;
				break;
			}
		}
	}

	if (bShouldPause)
	{
		PausePlaySession();
	}
}

void FQuestGroupDebugger::StopPlaySession()
{
	if (GUnrealEd->PlayWorld)
	{
		GEditor->RequestEndPlayMap();
	}
}

void FQuestGroupDebugger::PausePlaySession()
{
	if (GUnrealEd->PlayWorld && !GUnrealEd->PlayWorld->bDebugPauseExecution)
	{
		GUnrealEd->PlayWorld->bDebugPauseExecution = true;
		GUnrealEd->PlaySessionPaused();
	}
}

void FQuestGroupDebugger::ResumePlaySession()
{
	if (GUnrealEd->PlayWorld && GUnrealEd->PlayWorld->bDebugPauseExecution)
	{
		GUnrealEd->PlayWorld->bDebugPauseExecution = false;
		GUnrealEd->PlaySessionResumed();
	}
}

bool FQuestGroupDebugger::IsPlaySessionPaused()
{
	return GUnrealEd->PlayWorld && GUnrealEd->PlayWorld->bDebugPauseExecution;
}

bool FQuestGroupDebugger::IsPlaySessionRunning()
{
	return GUnrealEd->PlayWorld && !GUnrealEd->PlayWorld->bDebugPauseExecution;
}

bool FQuestGroupDebugger::IsPIESimulating()
{
	return GEditor->bIsSimulatingInEditor || GEditor->PlayWorld;
}

bool FQuestGroupDebugger::IsPIENotSimulating()
{
	return !GEditor->bIsSimulatingInEditor && (GEditor->PlayWorld == nullptr);
}

/*void FQuestGroupDebugger::OnBreakpointAdded(UQuestGroupNode_Base* Node)
{
	UQuestGroupNode* GraphNode = Cast<UQuestGroupNode>(Node);
	if (GraphNode && IsDebuggerReady())
	{
		UQGNode* QGNode = Cast<UQGNode>(GraphNode->NodeInstance);
		if (QGNode)
		{
			ActiveBreakpoints.AddUnique(QGNode->GetExecutionIndex());
		}
	}
}*/

/*void FQuestGroupDebugger::OnBreakpointRemoved(UQuestGroupNode_Base* Node)
{
	UQuestGroupNode* GraphNode = Cast<UQuestGroupNode>(Node);
	if (GraphNode && IsDebuggerReady())
	{
		UQGNode* QGNode = GraphNode->QuestNode;
		if (QGNode)
		{
			ActiveBreakpoints.RemoveSingleSwap(QGNode->GetExecutionIndex());
		}
	}
}*/

void FQuestGroupDebugger::UpdateDebuggerViewOnStepChange()
{
#if USE_QUESTGROUP_DEBUGGER
	UQuestGroup* QuestGroup = GetDebuggedQuestGroup();
	if (IsDebuggerRunning() &&
		QuestGroup &&
		QuestGroup->DebuggerSteps.IsValidIndex(ActiveStepIndex))
	{
		const FQuestGroupExecutionStep& ShowStep = QuestGroup->DebuggerSteps[ActiveStepIndex];

		SavedTimestamp = ShowStep.TimeStamp;
	}
#endif
}

void FQuestGroupDebugger::UpdateDebuggerViewOnTick()
{
#if USE_QUESTGROUP_DEBUGGER
	if (IsDebuggerRunning() && QuestManager.IsValid())
	{
		const float GameTime = GEditor && GEditor->PlayWorld ? GEditor->PlayWorld->GetTimeSeconds() : 0.0f;
		CurrentTimestamp = GameTime;
	}
#endif
}

float FQuestGroupDebugger::GetTimeStamp(bool bUseCurrentState) const
{
	return bUseCurrentState ? CurrentTimestamp : SavedTimestamp;
}

FString FQuestGroupDebugger::GetDebuggedInstanceDesc() const
{
	const UQuestManagerComponent* QMComponent = QuestManager.Get();
	return QMComponent ? DescribeInstance(*QMComponent) : NSLOCTEXT("BlueprintEditor", "DebugActorNothingSelected", "No debug object selected").ToString();
}

FString FQuestGroupDebugger::DescribeInstance(const UQuestManagerComponent& InstanceToDescribe) const
{
	FString ActorDesc;
	if (InstanceToDescribe.GetOwner())
	{
		AController* TestController = Cast<AController>(InstanceToDescribe.GetOwner());
		ActorDesc = TestController ?
			TestController->GetName() :
			InstanceToDescribe.GetOwner()->GetActorLabel();
	}

	return ActorDesc;
}

void FQuestGroupDebugger::OnInstanceSelectedInDropdown(UQuestManagerComponent* SelectedInstance)
{
	if (SelectedInstance)
	{
		ClearDebuggerState();

		AActor* OldActor = QuestManager.IsValid() ? QuestManager->GetOwner() : nullptr;
		USelection* SelectedActors = GEditor ? GEditor->GetSelectedActors() : nullptr;
		if (SelectedActors)
		{
			SelectedActors->DeselectAll();
		}

		QuestManager = SelectedInstance;

		if (SelectedActors && SelectedInstance && SelectedInstance->GetOwner())
		{
			SelectedActors->Select(SelectedInstance->GetOwner());
		}

		Refresh();
	}
}

void FQuestGroupDebugger::GetMatchingInstances(TArray<UQuestManagerComponent*>& MatchingInstances)
{
	for (int32 i = KnownInstances.Num() - 1; i >= 0; i--)
	{
		UQuestManagerComponent* TestInstance = KnownInstances[i].Get();
		if (TestInstance == nullptr)
		{
			KnownInstances.RemoveAt(i);
			continue;
		}

		MatchingInstances.Add(TestInstance);
	}
}

void FQuestGroupDebugger::InitializeFromParent(class FQuestGroupDebugger* ParentDebugger)
{
	ClearDebuggerState();

#if USE_QUESTGROUP_DEBUGGER
	QuestManager = ParentDebugger->QuestManager;
	ActiveStepIndex = ParentDebugger->ActiveStepIndex;

	UpdateAvailableActions();

	UQuestGroup* QuestGroup = GetDebuggedQuestGroup();
	if (QuestGroup &&
		QuestGroup->DebuggerSteps.IsValidIndex(ActiveStepIndex))
	{
		const FQuestGroupDebuggerInstance& ShowInstance = QuestGroup->DebuggerSteps[ActiveStepIndex].Instance;
		UpdateAssetFlags(ShowInstance, RootNode.Get(), ActiveStepIndex);
	}
#endif
}

void FQuestGroupDebugger::UpdateAvailableActions()
{
	StepBackEndIdx = INDEX_NONE;
	StepBackIdx = INDEX_NONE;
	StepForwardIdx = INDEX_NONE;
	StepForwardEndIdx = INDEX_NONE;

#if USE_QUESTGROUP_DEBUGGER
	UQuestGroup* QuestGroup = GetDebuggedQuestGroup();
	if (QuestGroup && QuestGroup->DebuggerSteps.IsValidIndex(SelectedStepIndex))
	{
		const FQuestGroupExecutionStep& CurStepInfo = QuestGroup->DebuggerSteps[SelectedStepIndex];

		//If there's a debugger step behind
		if (QuestGroup->DebuggerSteps.IsValidIndex(SelectedStepIndex - 1))
		{
			//Previous step Id
			StepBackIdx = SelectedStepIndex - 1;
			//First step Id
			StepBackEndIdx = 0;
		}

		//If there's a debugger step in front
		if (QuestGroup->DebuggerSteps.IsValidIndex(SelectedStepIndex + 1))
		{
			//Next step Id
			StepForwardIdx = SelectedStepIndex + 1;
			//Last step Id
			StepForwardEndIdx = ActiveStepIndex;
		}
	}
#endif
}
