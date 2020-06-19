// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "QuestGroupNode_Base.h"
#include "QuestGroupNode_Root.generated.h"

UCLASS(MinimalAPI)
class UQuestGroupNode_Root : public UQuestGroupNode_Base
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


	// UQuestGroupNode_Base interface
	virtual bool IsRootNode() const override { return true; }
	// End of UQuestGroupNode_Base interface

	FORCEINLINE UEdGraphPin* GetOutputPin() const {
		return FindPinChecked(RootOutputPin);
	}
};
