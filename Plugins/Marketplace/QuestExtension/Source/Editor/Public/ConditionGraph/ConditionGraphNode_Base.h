// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "EdGraph/EdGraphSchema.h"
#include "CGPins.h"
#include "ConditionGraphNode_Base.generated.h"


UCLASS()
class UConditionGraphNode_Base : public UEdGraphNode
{
	GENERATED_UCLASS_BODY()

public:
	/** Is this the non deletable root node */
	virtual bool IsRootNode() const { return false; }
	virtual bool IsCompactNode() const { return true; }
	virtual const bool IsLatent() const { return false; }
	virtual FText GetNodeDescription() const { return FText::GetEmpty(); }

	// UEdGraphNode implementation
	virtual FLinearColor GetNodeTitleColor() const override;
	virtual void AllocateDefaultPins() override;
	virtual bool CanCreateUnderSpecifiedSchema(const UEdGraphSchema* Schema) const override;
	// End UEdGraphNode implementation
};
