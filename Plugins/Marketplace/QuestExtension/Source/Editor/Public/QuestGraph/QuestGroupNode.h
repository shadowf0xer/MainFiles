// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "QuestGroupNode_Base.h"
#include "QGNodes/QGNode.h"
#include "EdGraph/EdGraphPin.h"
#include "QuestGroupNode.generated.h"


UCLASS()
class UQuestGroupNode : public UQuestGroupNode_Base
{
	GENERATED_UCLASS_BODY()

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

	/** The SoundNode this represents */
	UPROPERTY(VisibleAnywhere, Instanced, Category = Quest)
	UQGNode* QuestNode;


	/** Set the Quest Node this represents (also assigns this to the Quest Node in Editor)*/
	void SetQuestNode(UQGNode* InQuestNode);

	/** Fix up the node's owner after being copied */
	void PostCopyNode();

	virtual void AllocateDefaultPins() override;

	virtual void OnDoubleClicked();

private:

	void InternalPinCreation(TArray<UEdGraphPin*>* OldPins);

	/** Make sure the QGNode is owned by the QuestGroup */
	void ResetQuestNodeOwner();

	virtual const bool CanExecuteNodes() const { return QuestNode ? QuestNode->CanExecuteNodes() : false; }
	virtual const bool CanRejectNodes()  const { return QuestNode ? QuestNode->CanRejectNodes()  : false; }
	virtual const bool CanBeRejected()   const { return QuestNode ? QuestNode->CanBeRejected() : false; }

public:


	virtual UEdGraphPin* GetExecPin() const { return FindPinChecked(ExecPin); }
	virtual UEdGraphPin* GetRejectPin() const { return FindPin(RejectPin); }
	virtual UEdGraphPin* GetDefaultOutputPin() const {
		return GetOutputPin((*QuestNode->GetOutputs())[0]);
	}
	virtual UEdGraphPin* GetOutputPin(const FQGNodeOutput& Output) const {
		return FindPin(Output.Name.ToString());
	}
	virtual UEdGraphPin* CreateOutputPin(const FQGNodeOutput& Output) {
		const FName DName = Output.GetDisplayName();

		UEdGraphPin* Pin = CreatePin(EGPD_Output, FQGPins::PC_Exec, Output.Name);
		Pin->PinFriendlyName = FText::FromName(DName.IsNone() ? FName(" ") : DName);

		return Pin;
	}

	/** Estimate the width of this Node from the length of its title */
	QUESTEXTENSIONEDITOR_API int32 EstimateNodeWidth() const;


	virtual void OnQuestNodeCompiled(class UBlueprint* Blueprint);

	inline bool IsChildOf(const UQuestGroupNode* OtherNode) const;

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
