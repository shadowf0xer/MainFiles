// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include <Engine/Blueprint.h>
#include <EdGraph/EdGraphPin.h>

#include "ConditionGraphNode_Base.h"
#include "Conditions/QuestCondition.h"
#include "Conditions/ConditionOutput.h"
#include <EdGraph/EdGraphNode.h>
#include "ConditionGraphNode.generated.h"


UCLASS()
class UConditionGraphNode : public UConditionGraphNode_Base
{
	GENERATED_BODY()

protected:

	enum ERedirectType
	{
		ERedirectType_None,
		ERedirectType_Name,
		ERedirectType_Value
	};

private:

	static const FName ExecPin;
	static const FName RejectPin;

	UPROPERTY()
	UBlueprint* NodeBlueprint;

public:

	/** The Condition Node this represents */
	UPROPERTY(VisibleAnywhere, Instanced, Category = Quest)
	UQuestCondition* ConditionNode;


	/** Set the Quest Node this represents (also assigns this to the Quest Node in Editor)*/
	void SetConditionNode(UQuestCondition* InConditionNode);

	/** Fix up the node's owner after being copied */
	void PostCopyNode();

	virtual void AllocateDefaultPins() override;

	virtual const bool CanExecuteNodes() const { return ConditionNode && ConditionNode->CanExecuteNodes(); }
	virtual const bool CanAddOutputPin() const { return ConditionNode && ConditionNode->HasDynamicOutputs(); }

	virtual void AddOutputPin();
	virtual void RemoveOutputPin(const UEdGraphPin& Pin);

	virtual bool IsCompactNode() const override	   { return ConditionNode && ConditionNode->IsCompactNode(); }
	virtual const bool IsLatent() const override	  { return ConditionNode && ConditionNode->IsLatent(); }
	virtual FText GetNodeDescription() const override { return ConditionNode? ConditionNode->GetDescription() : FText::GetEmpty(); }

	const int32 GetMaxConnections(const UEdGraphPin& Pin) const {
		return ConditionNode ? ConditionNode->FindOutputByName(*Pin.GetName())->GetMaxConnections() : 0;
	}

	virtual void OnDoubleClicked();

private:

	void InternalPinCreation(TArray<UEdGraphPin*>* OldPins);

	/** Make sure the CGNode is owned by the Condition */
	void ResetConditionNodeOwner();

	void CheckForErrors();

public:


	virtual UEdGraphPin* GetInputPin() const { return FindPinChecked(ExecPin); }
	virtual UEdGraphPin* GetDefaultOutputPin() const {
		return GetOutputPin((*ConditionNode->GetOutputs())[0]);
	}
	virtual UEdGraphPin* GetOutputPin(const FConditionOutput& Output) const {
		return FindPin(Output.Name.ToString());
	}
	virtual UEdGraphPin* CreateOutputPin(const FConditionOutput& Output) {
		const FName DName = Output.GetDisplayName();

		UEdGraphPin* Pin = CreatePin(EGPD_Output, FCGPins::PC_Exec, Output.Name);
		Pin->PinFriendlyName = FText::FromName(DName.IsNone() ? FName(" ") : DName);

		return Pin;
	}

	virtual void OnConditionNodeCompiled(class UBlueprint* Blueprint);

	bool IsConnectedForExecution() const;
	inline bool IsChildOf(const UConditionGraphNode* OtherNode) const;

	UBlueprint* const GetBlueprint() { return NodeBlueprint; }


	// UEdGraphNode interface
	virtual void ReconstructNode() override;
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	virtual FLinearColor GetNodeTitleColor() const override;
	virtual FText GetTooltipText() const override;
	virtual void PrepareForCopying() override;
	virtual void GetNodeContextMenuActions(class UToolMenu* Menu, UGraphNodeContextMenuContext* Context) const override;
	virtual void AutowireNewNode(UEdGraphPin* FromPin) override;
	// End of UEdGraphNode interface


	// UObject interface
	virtual void PostLoad() override;
	virtual void PostEditImport() override;
	virtual void PostDuplicate(bool bDuplicateForPIE) override;
	virtual void PostInitProperties() override;
	// End of UObject interface


	/**
	* Reallocate pins during reconstruction; by default ignores the old pins and calls AllocateDefaultPins()
	* If you override this to create additional pins you likely need to call RestoreSplitPins to restore any
	* pins that have been split (e.g. a vector pin split into its components)
	*/
	virtual void ReallocatePinsDuringReconstruction(TArray<UEdGraphPin*>& OldPins);

	/** Called at the end of ReconstructNode, allows node specific work to be performed */
	virtual void PostReconstructNode();

	// Handles the actual reconstruction (copying data, links, name, etc...) from two pins that have already been matched together
	void ReconstructSinglePin(UEdGraphPin* NewPin, UEdGraphPin* OldPin, ERedirectType RedirectType);

	// Helper function to rewire old pins to new pins during node reconstruction (or other regeneration of pins)
	void RewireOldPinsToNewPins(TArray<UEdGraphPin*>& InOldPins, TArray<UEdGraphPin*>& InNewPins);

	/** Whether or not two pins match for purposes of reconnection after reconstruction.  This allows pins that may have had their names changed via reconstruction to be matched to their old values on a node-by-node basis, if needed*/
	virtual ERedirectType DoPinsMatchForReconstruction(const UEdGraphPin* NewPin, int32 NewPinIndex, const UEdGraphPin* OldPin, int32 OldPinIndex) const;
};
