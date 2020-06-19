// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "QGPins.h"
#include "EdGraph/EdGraphSchema.h"
#include "QuestGroupNode_Base.generated.h"

UCLASS( )
class UQuestGroupNode_Base : public UEdGraphNode
{
	GENERATED_UCLASS_BODY()

public:


	/** debugger flag: mark node as running (current state) */
	uint8 bDebuggerMarkRunning : 1;

	/** debugger flag: mark node as running (browsing previous states) */
	uint8 bDebuggerMarkPreviouslyRunning : 1;

	/** debugger flag: mark node as succeeded (current state) */
	uint8 bDebuggerMarkSucceeded : 1;

	/** debugger flag: mark node as failed (current state) */
	uint8 bDebuggerMarkFailed : 1;

	/** debugger flag: mark node with active connection (current state) */
	FGuid DebuggerMarkActiveParent;


	/** Is this the non deletable root node */
	virtual bool IsRootNode() const { return false; }

	// UEdGraphNode implementation
	virtual FLinearColor GetNodeTitleColor() const override;
	virtual void AllocateDefaultPins() override;
	virtual bool CanCreateUnderSpecifiedSchema(const UEdGraphSchema* Schema) const override;
	// End UEdGraphNode implementation
};
