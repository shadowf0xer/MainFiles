// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Stats/Stats.h"
#include "UObject/ObjectMacros.h"
#include "UObject/Object.h"
#include "UObject/Class.h"
#include "InputCoreTypes.h"
#include "Templates/SubclassOf.h"

// QuestGroup debugger in editor
#define USE_QUESTGROUP_DEBUGGER	(1 && WITH_EDITORONLY_DATA)

class UQuestGroup;
class UQuestManagerComponent;
class UQGNode;

// Visual logging helper
#define QE_VLOG(Context, Verbosity, Format, ...) UE_VLOG(Context->OwnerComp.IsValid() ? Context->OwnerComp->GetOwner() : nullptr, LogQuestExtension, Verbosity, Format, ##__VA_ARGS__)
#define QE_SEARCHLOG(SearchData, Verbosity, Format, ...) UE_VLOG(SearchData.OwnerComp.GetOwner(), LogQuestExtension, Verbosity, Format, ##__VA_ARGS__)


namespace EQGExecutionSnap
{
	enum Type
	{
		Regular,
		OutOfNodes,
	};
}

/** debugger data about subtree instance */
struct FQuestGroupDebuggerInstance
{
	struct FNodeFlowData
	{
		FGuid NodeId;
		uint16 bPassed : 1;
		uint16 bTrigger : 1;
		uint16 bDiscardedTrigger : 1;

		FNodeFlowData() : NodeId({}), bPassed(0), bTrigger(0), bDiscardedTrigger(0) {}
	};

	FQuestGroupDebuggerInstance() : QGAsset(nullptr) {}

	/** Quest group asset */
	UQuestGroup* QGAsset;

	/** Root nodes in template */
	TArray<UQGNode*> RootNodes;

	/** Ids of running nodes */
	TArray<FGuid> RunningNodes;

	/** Ids of completed and succeeded nodes */
	TArray<FGuid> SucceededNodes;
	TArray<FGuid> FailedNodes;

	/** Ids of connected nodes being executed */
	TMap<FGuid, FGuid> ActiveConnections;

	/** search flow from previous state */
	TArray<FNodeFlowData> PathFromPrevious;

	/** runtime descriptions for each execution index */
	TArray<FString> RuntimeDesc;

	FORCEINLINE bool IsValid() const { return QGAsset && RootNodes.Num(); }
};

/** debugger data about current execution step */
struct FQuestGroupExecutionStep
{
	FQuestGroupExecutionStep() : TimeStamp(0.f), StepIndex(INDEX_NONE) {}

	/** subtree instance stack */
	FQuestGroupDebuggerInstance Instance;

	/** Game world's time stamp of this step */
	float TimeStamp;

	/** index of execution step */
	int32 StepIndex;
};
