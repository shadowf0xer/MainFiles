// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include <CoreMinimal.h>
#include <UObject/ObjectMacros.h>

#include "ConditionGraphNode_Base.h"
#include "ConditionGraphNode_Root.generated.h"


UCLASS(MinimalAPI)
class UConditionGraphNode_Root : public UConditionGraphNode_Base
{
	GENERATED_UCLASS_BODY()

public:

	static const FName RootOutputPin;


	// UEdGraphNode interface
	virtual FLinearColor GetNodeTitleColor() const override;
private:
	virtual FText GetTooltipText() const override;
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	virtual bool CanUserDeleteNode() const override { return false; }
	virtual bool CanDuplicateNode() const override { return false; }
	virtual void GetNodeContextMenuActions(class UToolMenu* Menu, UGraphNodeContextMenuContext* Context) const override;

public:

	virtual void AllocateDefaultPins() override;
	// End of UEdGraphNode interface


	// UConditionGraphNode_Base interface
	virtual bool IsRootNode() const override { return true; }
	virtual bool IsCompactNode() const { return false; }
	// End of UConditionGraphNode_Base interface

	FORCEINLINE UEdGraphPin* GetOutputPin() const {
		return FindPinChecked(RootOutputPin);
	}
};
