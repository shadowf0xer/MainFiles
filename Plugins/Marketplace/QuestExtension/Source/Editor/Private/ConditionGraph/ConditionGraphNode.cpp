// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "ConditionGraphNode.h"
#include <Framework/Commands/GenericCommands.h>
#include <Framework/MultiBox/MultiBoxBuilder.h>
#include <Toolkits/AssetEditorManager.h>
#include <Logging/TokenizedMessage.h>
#include <ScopedTransaction.h>
#include <ToolMenu.h>

#include "ConditionGraph.h"
#include "ConditionGraphSchema.h"
#include "ConditionGraphEditorCommands.h"

#include "Conditions/ConditionOutput.h"
#include "Conditions/ConditionContainer.h"

#define LOCTEXT_NAMESPACE "ConditionGraphNode"


//////////////////////////////////////////////////////////////////////////
// ConditionGraphNode

const FName UConditionGraphNode::ExecPin   { "Execution" };
const FName UConditionGraphNode::RejectPin { "Rejection" };

void UConditionGraphNode::SetConditionNode(UQuestCondition* InConditionNode)
{
	ConditionNode = InConditionNode;
	InConditionNode->GraphNode = this;

	if (!InConditionNode)
		return;

	//Update node on bp compiles
	{
		FString ClassPath = InConditionNode->GetClass()->GetPathName();
		ClassPath.RemoveFromEnd(TEXT("_C"), ESearchCase::CaseSensitive);
		const FString BPPath = FString::Printf(TEXT("Blueprint'%s'"), *ClassPath);

		UObject* FoundBP = StaticFindObject(UBlueprint::StaticClass(), nullptr, *BPPath);

		if (!FoundBP)
		{
			NodeBlueprint = nullptr;
			return;
		}

		NodeBlueprint = CastChecked<UBlueprint>(FoundBP);
		NodeBlueprint->OnCompiled().AddUObject(this, &UConditionGraphNode::OnConditionNodeCompiled);
	}
}

void UConditionGraphNode::PostCopyNode()
{
	// Make sure the QuestCondition goes back to being owned by the QuestGroup after copying.
	ResetConditionNodeOwner();
}

void UConditionGraphNode::AllocateDefaultPins()
{
	InternalPinCreation(nullptr);
}

void UConditionGraphNode::AddOutputPin()
{
	const FScopedTransaction Transaction(NSLOCTEXT("UnrealEd", "ConditionEditorAddInput", "Add Output"));

	//Generate a random Output name
	FName NameId = FName(*FGuid::NewGuid().ToString());
	ConditionNode->Modify();
	ConditionNode->AddOutput({ NameId, FName(" ") });
	ConditionNode->PostEditChange();

	ReconstructNode();
}

void UConditionGraphNode::RemoveOutputPin(const UEdGraphPin& Pin)
{
	const FScopedTransaction Transaction(NSLOCTEXT("UnrealEd", "ConditionEditorRemoveInput", "Remove Output"));
	ConditionNode->Modify();
	ConditionNode->RemoveOutput({ *Pin.GetName() });
	ConditionNode->PostEditChange();

	ReconstructNode();
}

void UConditionGraphNode::OnDoubleClicked()
{
	UObject* blueprint = ConditionNode->GetClass()->ClassGeneratedBy;

	if (blueprint) {
		auto* AssetEditor = GEditor->GetEditorSubsystem<UAssetEditorSubsystem>();
		AssetEditor->OpenEditorForAssets({ blueprint });
	}
}

void UConditionGraphNode::InternalPinCreation(TArray<UEdGraphPin*>* OldPins)
{
	CheckForErrors();


	UEdGraphPin* ExecPinPtr = CreatePin(EGPD_Input, FCGPins::PC_Exec, ExecPin);
	if (ExecPinPtr)
	{
		// Shows an empty input label
		ExecPinPtr->PinFriendlyName = FText::FromString(TEXT(" "));
	}

	if (CanExecuteNodes()) {
		for (const auto& Output : *ConditionNode->GetOutputs()) {
			CreatePin(EGPD_Output, FCGPins::PC_Exec, Output.Name)
				->PinFriendlyName = FText::FromName(Output.GetDisplayName());
		}
	}
}

void UConditionGraphNode::ResetConditionNodeOwner()
{
	if (ConditionNode)
	{
		UConditionContainer* Container = CastChecked<UConditionGraph>(GetGraph())->GetContainer();

		if (ConditionNode->GetOuter() != Container)
		{
			// Ensures QuestCondition is owned by the QuestGroup
			ConditionNode->Rename(nullptr, Container, REN_DontCreateRedirectors);
		}

		// Set up the back pointer for newly created sound nodes
		ConditionNode->GraphNode = this;

		CheckForErrors();
	}
}

void UConditionGraphNode::CheckForErrors()
{
	// Clear previously set messages
	bHasCompilerMessage = false;
	ErrorMsg.Reset();

	if (IsLatent() && !ConditionNode->GetContainer()->bAllowsLatentExecution)
	{
		bHasCompilerMessage = true;
		ErrorMsg = FString::Format(TEXT("Instant graphs don't allow{0}latent conditions"), { LINE_TERMINATOR });
		ErrorType = EMessageSeverity::Error;
	}
}

void UConditionGraphNode::OnConditionNodeCompiled(class UBlueprint* Blueprint)
{
	ConditionNode->SanitizeOutputs();

	ReconstructNode();
}

bool UConditionGraphNode::IsConnectedForExecution() const
{
	UConditionContainer* Container = CastChecked<UConditionGraph>(GetGraph())->GetContainer();
	UConditionGraphNode* FirstNode = CastChecked<UConditionGraphNode>(Container->FirstCondition->GraphNode);

	return Container->FirstCondition && this->IsChildOf(FirstNode);
}

bool UConditionGraphNode::IsChildOf(const UConditionGraphNode* OtherNode) const
{
	if (!ConditionNode)
		return false;

	if (!OtherNode || !OtherNode->ConditionNode)
		return false;

	// Grab all child nodes. We can't just test the input because
	// the loop could happen from any additional child nodes.
	TArray<UQuestCondition*> Nodes;
	OtherNode->ConditionNode->GetAllNodes(Nodes);

	// If our test output is in that set, return true.
	return Nodes.Contains(ConditionNode);
}

void UConditionGraphNode::ReconstructNode()
{
	Modify();

	const UEdGraphSchema* Schema = GetSchema();

	// Break any links to 'orphan' pins
	for (int32 PinIndex = 0; PinIndex < Pins.Num(); ++PinIndex)
	{
		UEdGraphPin* Pin = Pins[PinIndex];
		TArray<class UEdGraphPin*> LinkedToCopy = Pin->LinkedTo;
		for (int32 LinkIdx = 0; LinkIdx < LinkedToCopy.Num(); LinkIdx++)
		{
			UEdGraphPin* OtherPin = LinkedToCopy[LinkIdx];
			// If we are linked to a pin that its owner doesn't know about, break that link
			if ((OtherPin == nullptr) || !OtherPin->GetOwningNodeUnchecked() || !OtherPin->GetOwningNode()->Pins.Contains(OtherPin))
			{
				Pin->LinkedTo.Remove(OtherPin);
			}
		}
	}

	// Move the existing pins to a saved array
	TArray<UEdGraphPin*> OldPins(Pins);
	Pins.Reset();

	// Recreate the new pins
	ReallocatePinsDuringReconstruction(OldPins);
	RewireOldPinsToNewPins(OldPins, Pins);

	// Let subclasses do any additional work
	PostReconstructNode();

	GetGraph()->NotifyGraphChanged();
}

FText UConditionGraphNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	if (ConditionNode)
	{
		return ConditionNode->GetTitle();
	}
	else
	{
		return Super::GetNodeTitle(TitleType);
	}
}

FLinearColor UConditionGraphNode::GetNodeTitleColor() const
{
	if (ConditionNode)
	{
		return ConditionNode->GetTitleColor();
	}
	else
	{
		return Super::GetNodeTitleColor();
	}
}

FText UConditionGraphNode::GetTooltipText() const
{
	FText Tooltip;
	if (ConditionNode)
	{
		Tooltip = ConditionNode->GetClass()->GetToolTipText();
	}
	if (Tooltip.IsEmpty())
	{
		Tooltip = GetNodeTitle(ENodeTitleType::ListView);
	}
	return Tooltip;
}

void UConditionGraphNode::PrepareForCopying()
{
	if (ConditionNode)
	{
		// Temporarily take ownership of the SoundNode, so that it is not deleted when cutting
		ConditionNode->Rename(nullptr, this, REN_DontCreateRedirectors);
	}
}

void UConditionGraphNode::GetNodeContextMenuActions(UToolMenu* Menu, UGraphNodeContextMenuContext* Context) const
{
	if (Context->Pin)
	{
	}
	else if (Context->Node)
	{
		auto& Section = Menu->AddSection("QuestGroupGraphNodeEdit");
		Section.AddMenuEntry(FGenericCommands::Get().Delete);
		Section.AddMenuEntry(FGenericCommands::Get().Cut);
		Section.AddMenuEntry(FGenericCommands::Get().Copy);
		Section.AddMenuEntry(FGenericCommands::Get().Duplicate);
	}
}

void UConditionGraphNode::AutowireNewNode(UEdGraphPin* FromPin)
{
	if (!FromPin)
		return;

	if (FromPin->Direction == EEdGraphPinDirection::EGPD_Output) {
		UEdGraphPin* InputPin = GetInputPin();
		if (InputPin)
		{
			GetSchema()->TryCreateConnection(FromPin, InputPin);
		}
	}
	else
	{
		//TODO: Support for multiple outputs
		UEdGraphPin* OutputPin = GetDefaultOutputPin();
		if (OutputPin)
		{
			GetSchema()->TryCreateConnection(FromPin, OutputPin);
		}
	}
}



void UConditionGraphNode::PostLoad()
{
	Super::PostLoad();

	// Fixup any ConditionNode back pointers that may be out of date
	if (ConditionNode)
	{
		ConditionNode->GraphNode = this;
	}

	for (int32 Index = 0; Index < Pins.Num(); ++Index)
	{
		UEdGraphPin* Pin = Pins[Index];
		if (Pin->PinName.IsNone())
		{
			// Makes sure pin has a name for lookup purposes but user will never see it
			if (Pin->Direction == EGPD_Input)
			{
				Pin->PinName = CreateUniquePinName(TEXT("Input"));
			}
			else
			{
				Pin->PinName = CreateUniquePinName(TEXT("Output"));
			}
			Pin->PinFriendlyName = FText::FromString(TEXT(" "));
		}
	}
}

void UConditionGraphNode::PostEditImport()
{
	// Make sure this QuestCondition is owned by the QuestGroup it's being pasted into.
	ResetConditionNodeOwner();
}

void UConditionGraphNode::PostDuplicate(bool bDuplicateForPIE)
{
	Super::PostDuplicate(bDuplicateForPIE);

	if (!bDuplicateForPIE)
	{
		CreateNewGuid();
	}
}

void UConditionGraphNode::PostInitProperties()
{
	Super::PostInitProperties();

	if (NodeBlueprint)
	{
		NodeBlueprint->OnCompiled().AddUObject(this, &UConditionGraphNode::OnConditionNodeCompiled);
	}
}

void UConditionGraphNode::ReallocatePinsDuringReconstruction(TArray<UEdGraphPin*>& OldPins)
{
	InternalPinCreation(&OldPins);
}

void UConditionGraphNode::PostReconstructNode()
{
	if (!IsTemplate())
	{
		// Make sure we're not dealing with a menu node
		UEdGraph* OuterGraph = GetGraph();
		if (OuterGraph && OuterGraph->Schema)
		{
			const UConditionGraphSchema* Schema = Cast<const UConditionGraphSchema>(GetSchema());
			// fix up any pin data if it needs to
			for (UEdGraphPin* CurrentPin : Pins)
			{
				const FName& PinCategory = CurrentPin->PinType.PinCategory;
				//
			}
		}
	}
}

void UConditionGraphNode::ReconstructSinglePin(UEdGraphPin* NewPin, UEdGraphPin* OldPin, ERedirectType RedirectType)
{
	DECLARE_SCOPE_CYCLE_COUNTER(TEXT("UConditionGraphNode::ReconstructSinglePin"), STAT_LinkerLoad_ReconstructSinglePin, STATGROUP_LoadTimeVerbose);

	check(NewPin && OldPin);

	// Copy over modified persistent data
	NewPin->MovePersistentDataFromOldPin(*OldPin);
}

void UConditionGraphNode::RewireOldPinsToNewPins(TArray<UEdGraphPin*>& InOldPins, TArray<UEdGraphPin*>& InNewPins)
{
	TArray<UEdGraphPin*> OrphanedOldPins;
	TMap<UEdGraphPin*, UEdGraphPin*> MatchedPins; // Old to New

	// Rewire any connection to pins that are matched by name (O(N^2) right now)
	// NOTE: we iterate backwards through the list because ReconstructSinglePin()
	//	   destroys pins as we go along (clearing out parent pointers, etc.);
	//	   we need the parent pin chain intact for DoPinsMatchForReconstruction();
	//	   we want to destroy old pins from the split children (leafs) up, so
	//	   we do this since split child pins are ordered later in the list
	//	   (after their parents)
	for (int32 OldPinIndex = InOldPins.Num() - 1; OldPinIndex >= 0; --OldPinIndex)
	{
		UEdGraphPin* OldPin = InOldPins[OldPinIndex];

		// common case is for InOldPins and InNewPins to match, so we start searching from the current index:
		bool bMatched = false;
		const int32 NumNewPins = InNewPins.Num();
		int32 NewPinIndex = (NumNewPins ? OldPinIndex % NumNewPins : 0);
		for (int32 NewPinCount = NumNewPins - 1; NewPinCount >= 0; --NewPinCount)
		{
			// if InNewPins grows in this loop then we may skip entries and fail to find a match:
			check(NumNewPins == InNewPins.Num());
			UEdGraphPin* NewPin = InNewPins[NewPinIndex];

			const ERedirectType RedirectType = DoPinsMatchForReconstruction(NewPin, NewPinIndex, OldPin, OldPinIndex);
			if (RedirectType != ERedirectType_None)
			{
				ReconstructSinglePin(NewPin, OldPin, RedirectType);
				MatchedPins.Add(OldPin, NewPin);
				bMatched = true;
				break;
			}

			NewPinIndex = (NewPinIndex + 1) % InNewPins.Num();
		}

		// Orphaned pins are those that existed in the OldPins array but do not in the NewPins.
		// We will save these pins and add the to the NewPins array if they are linked to other pins or have non-default value unless:
		// * The node has been flagged to not save orphaned pins
		// * The pin has been flagged not be saved if orphaned
		// * The pin is hidden and not a split pin
		const bool bVisibleOrSplitPin = (!OldPin->bHidden || (OldPin->SubPins.Num() > 0));
		if (UEdGraphPin::AreOrphanPinsEnabled() && !bMatched && bVisibleOrSplitPin && OldPin->ShouldSavePinIfOrphaned())
		{
			// The node can specify to save no pins, all pins, or all but exec pins. However, even if all is specified Execute and Then are never saved
			const bool bSaveOrphanedPin = ((OrphanedPinSaveMode == ESaveOrphanPinMode::SaveAll) ||
				((OrphanedPinSaveMode == ESaveOrphanPinMode::SaveAllButExec) && !FCGPins::IsExecPin(*OldPin)));

			if (bSaveOrphanedPin)
			{
				bool bSavePin = OldPin->LinkedTo.Num() > 0;

				if (!bSavePin && OldPin->SubPins.Num() > 0)
				{
					// If this is a split pin then we need to save it if any of its children are being saved
					for (UEdGraphPin* OldSubPin : OldPin->SubPins)
					{
						if (OldSubPin->bOrphanedPin)
						{
							bSavePin = true;
							break;
						}
					}
					// Once we know we are going to be saving it we need to clean up the SubPins list to be only pins being saved
					if (bSavePin)
					{
						for (int32 SubPinIndex = OldPin->SubPins.Num() - 1; SubPinIndex >= 0; --SubPinIndex)
						{
							UEdGraphPin* SubPin = OldPin->SubPins[SubPinIndex];
							if (!SubPin->bOrphanedPin)
							{
								OldPin->SubPins.RemoveAt(SubPinIndex, 1, false);
								SubPin->MarkPendingKill();
							}
						}
					}
				}

				// Input pins with non-default value should be saved
				if (!bSavePin && OldPin->Direction == EGPD_Input && !OldPin->DoesDefaultValueMatchAutogenerated())
				{
					bSavePin = true;
				}

				if (bSavePin)
				{
					OldPin->bOrphanedPin = true;
					OldPin->bNotConnectable = true;
					OrphanedOldPins.Add(OldPin);
					InOldPins.RemoveAt(OldPinIndex, 1, false);
				}
			}
		}
	}

	// The orphaned pins get placed after the rest of the new pins unless it is a child of a split pin and other
	// children of that split pin were matched in which case it will be at the end of the list of its former siblings
	for (int32 OrphanedIndex = OrphanedOldPins.Num() - 1; OrphanedIndex >= 0; --OrphanedIndex)
	{
		UEdGraphPin* OrphanedPin = OrphanedOldPins[OrphanedIndex];
		if (OrphanedPin->ParentPin == nullptr)
		{
			InNewPins.Add(OrphanedPin);
		}
		// Otherwise we need to work out where we fit in the list
		else
		{
			UEdGraphPin* ParentPin = OrphanedPin->ParentPin;
			if (!ParentPin->bOrphanedPin)
			{
				// Our parent pin was matched, so we need to go to the end of the new pins sub pin section
				ParentPin->SubPins.Remove(OrphanedPin);
				ParentPin = MatchedPins.FindChecked(ParentPin);
				ParentPin->SubPins.Add(OrphanedPin);
				OrphanedPin->ParentPin = ParentPin;
			}
			int32 InsertIndex = InNewPins.Find(ParentPin);
			while (++InsertIndex < InNewPins.Num())
			{
				UEdGraphPin* PinToConsider = InNewPins[InsertIndex];
				if (PinToConsider->ParentPin != ParentPin)
				{
					break;
				}
				int32 WalkOffIndex = InsertIndex + PinToConsider->SubPins.Num();
				for (; InsertIndex < WalkOffIndex; ++InsertIndex)
				{
					WalkOffIndex += InNewPins[WalkOffIndex]->SubPins.Num();
				}
			};

			InNewPins.Insert(OrphanedPin, InsertIndex);
		}
	}

	// Throw away the original pins
	for (UEdGraphPin* Pin : InOldPins)
	{
		Pin->Modify();
		Pin->BreakAllPinLinks();

		UEdGraphNode::DestroyPin(Pin);
	}
}

UConditionGraphNode::ERedirectType UConditionGraphNode::DoPinsMatchForReconstruction(const UEdGraphPin* NewPin, int32 NewPinIndex, const UEdGraphPin* OldPin, int32 OldPinIndex) const
{
	ERedirectType RedirectType = ERedirectType_None;

	// if the pin names do match
	if (NewPin->PinName == OldPin->PinName)
	{
		// Make sure we're not dealing with a menu node
		UEdGraph* OuterGraph = GetGraph();
		if (OuterGraph && OuterGraph->Schema)
		{
			const UConditionGraphSchema* Schema = Cast<const UConditionGraphSchema>(GetSchema());
			if (!Schema || Schema->IsSelfPin(*NewPin) || FCGPins::ArePinTypesCompatible(OldPin->PinType, NewPin->PinType))
			{
				RedirectType = ERedirectType_Name;
			}
			else
			{
				RedirectType = ERedirectType_None;
			}
		}
	}
	else
	{
		// try looking for a redirect if it's a K2 node
		if (UConditionGraphNode* Node = Cast<UConditionGraphNode>(NewPin->GetOwningNode()))
		{
			if (OldPin->ParentPin == nullptr)
			{
				RedirectType = ERedirectType_None;
			}
			else
			{
				// make sure they match
				RedirectType = ERedirectType_Name;
			}
		}
	}

	return RedirectType;
}

#undef LOCTEXT_NAMESPACE
