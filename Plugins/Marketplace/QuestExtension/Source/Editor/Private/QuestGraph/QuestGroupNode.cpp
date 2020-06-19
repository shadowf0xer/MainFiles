// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "QuestGroupNode.h"

#include <Engine/Font.h>
#include <Engine/Blueprint.h>
#include <Toolkits/AssetEditorManager.h>
#include <Framework/Commands/GenericCommands.h>
#include <Framework/MultiBox/MultiBoxBuilder.h>
#include <Editor.h>

#include "QuestGraph/QuestGroupGraph.h"
#include "QuestGraphEditorCommands.h"
#include "QuestGroupGraphSchema.h"

#include "QGNodes/QGNodeOutput.h"
#include "QGNodes/Execution/QGNode_Finish.h"
#include "QGNodes/Content/QGNode_QuestFromAsset.h"

#define LOCTEXT_NAMESPACE "QuestGroupNode"


//////////////////////////////////////////////////////////////////////////
// QuestGroupNode

const FName UQuestGroupNode::ExecPin   { "Execution" };
const FName UQuestGroupNode::RejectPin { "Rejection" };


UQuestGroupNode::UQuestGroupNode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UQuestGroupNode::SetQuestNode(UQGNode* InQuestNode)
{
	QuestNode = InQuestNode;
	InQuestNode->GraphNode = this;

	if (!InQuestNode)
		return;

	FString ClassPath = InQuestNode->GetClass()->GetPathName();
	ClassPath.RemoveFromEnd(TEXT("_C"), ESearchCase::CaseSensitive);
	const FString BPPath = FString::Printf(TEXT("Blueprint'%s'"), *ClassPath);

	UObject* FoundBP = StaticFindObject(UBlueprint::StaticClass(), nullptr, *BPPath);

	if (!FoundBP)
	{
		NodeBlueprint = nullptr;
		return;
	}

	NodeBlueprint = CastChecked<UBlueprint>(FoundBP);
	NodeBlueprint->OnCompiled().AddUObject(this, &UQuestGroupNode::OnQuestNodeCompiled);
}

void UQuestGroupNode::PostCopyNode()
{
	// Make sure the QGNode goes back to being owned by the QuestGroup after copying.
	ResetQuestNodeOwner();
}

void UQuestGroupNode::AllocateDefaultPins()
{
	InternalPinCreation(nullptr);
}

void UQuestGroupNode::OnDoubleClicked()
{
	auto* QuestFromAssetNode = Cast<UQGNode_QuestFromAsset>(QuestNode);
	if (QuestFromAssetNode)
	{
		if (QuestFromAssetNode->QuestAsset)
		{
			auto* AssetEditor = GEditor->GetEditorSubsystem<UAssetEditorSubsystem>();
			AssetEditor->OpenEditorForAssets({ QuestFromAssetNode->QuestAsset });
		}
	}
	else
	{
		UObject* Blueprint = QuestNode->GetClass()->ClassGeneratedBy;

		if (Blueprint)
		{
			auto* AssetEditor = GEditor->GetEditorSubsystem<UAssetEditorSubsystem>();
			AssetEditor->OpenEditorForAssets({ Blueprint });
		}
	}
}

void UQuestGroupNode::InternalPinCreation(TArray<UEdGraphPin*>* OldPins)
{
	UEdGraphPin* ExecPinPtr = CreatePin(EGPD_Input, FQGPins::PC_Exec, ExecPin);

	if (ExecPinPtr)
	{
		// Shows an empty input label
		ExecPinPtr->PinFriendlyName = FText::FromString(TEXT(" "));
	}

	if (CanExecuteNodes())
	{
		for (const auto& Output : *QuestNode->GetOutputs())
		{
			CreatePin(EGPD_Output, FQGPins::PC_Exec, Output.Name)
				->PinFriendlyName = FText::FromName(Output.GetDisplayName());
		}
	}

	if (CanBeRejected())
	{
		CreatePin(EGPD_Input, FQGPins::PC_Reject, RejectPin)
			->PinFriendlyName = FText::FromString(TEXT(" "));
	}
}

void UQuestGroupNode::ResetQuestNodeOwner()
{
	UQuestGroupGraph* Graph = Cast<UQuestGroupGraph>(GetGraph());
	if (QuestNode && Graph)
	{
		UQuestGroup* QuestGroup = Graph->GetQuest();

		if (QuestNode->GetOuter() != QuestGroup)
		{
			// Ensures QGNode is owned by the QuestGroup
			QuestNode->Rename(nullptr, QuestGroup, REN_DontCreateRedirectors);
		}

		// Set up the back pointer for newly created sound nodes
		QuestNode->GraphNode = this;
	}
}

QUESTEXTENSIONEDITOR_API int32 UQuestGroupNode::EstimateNodeWidth() const
{
	const int32 EstimatedCharWidth = 6;
	FString NodeTitle = GetNodeTitle(ENodeTitleType::FullTitle).ToString();
	UFont* Font = GEditor->EditorFont;
	int32 Result = NodeTitle.Len()*EstimatedCharWidth;

	if (Font)
	{
		Result = Font->GetStringSize(*NodeTitle);
	}

	return Result;
}

void UQuestGroupNode::OnQuestNodeCompiled(class UBlueprint* Blueprint)
{
	QuestNode->SanitizeOutputs();

	ReconstructNode();
}

bool UQuestGroupNode::IsChildOf(const UQuestGroupNode* OtherNode) const
{
	if (!QuestNode)
		return false;

	if (!OtherNode || !OtherNode->QuestNode)
		return false;

	// Grab all child nodes. We can't just test the input because
	// the loop could happen from any additional child nodes.
	TArray<UQGNode*> Nodes;
	OtherNode->QuestNode->GetAllNodes(Nodes);

	// If our test output is in that set, return true.
	return Nodes.Contains(QuestNode);
}

void UQuestGroupNode::ReconstructNode()
{
	Modify();

	// Clear previously set messages
	ErrorMsg.Reset();

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

FText UQuestGroupNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	if (QuestNode)
	{
		return QuestNode->GetTitle();
	}
	else
	{
		return Super::GetNodeTitle(TitleType);
	}
}

FLinearColor UQuestGroupNode::GetNodeTitleColor() const
{
	if (QuestNode)
	{
		return QuestNode->GetTitleColor();
	}
	else
	{
		return Super::GetNodeTitleColor();
	}
}

FText UQuestGroupNode::GetTooltipText() const
{
	FText Tooltip;
	if (QuestNode)
	{
		Tooltip = QuestNode->GetClass()->GetToolTipText();
	}
	if (Tooltip.IsEmpty())
	{
		Tooltip = GetNodeTitle(ENodeTitleType::ListView);
	}
	return Tooltip;
}

void UQuestGroupNode::PrepareForCopying()
{
	if (QuestNode)
	{
		// Temporarily take ownership of the SoundNode, so that it is not deleted when cutting
		QuestNode->Rename(nullptr, this, REN_DontCreateRedirectors);
	}
}

void UQuestGroupNode::GetNodeContextMenuActions(UToolMenu* Menu, UGraphNodeContextMenuContext* Context) const
{
	if (Context->Pin)
	{
	}
	else if (Context->Node)
	{
		auto& SectionEdit = Menu->AddSection("QuestGroupGraphNodeEdit");
		SectionEdit.AddMenuEntry(FGenericCommands::Get().Delete);
		SectionEdit.AddMenuEntry(FGenericCommands::Get().Cut);
		SectionEdit.AddMenuEntry(FGenericCommands::Get().Copy);
		SectionEdit.AddMenuEntry(FGenericCommands::Get().Duplicate);

		auto& SectionBrowser = Menu->AddSection("QuestGroupGraphNodeBrowserSync");
		if (Cast<UQGNode_QuestFromAsset>(QuestNode))
		{
			SectionBrowser.AddMenuEntry(FQuestGraphEditorCommands::Get().BrowserSync);
		}
		else if (Cast<UQGNode_Finish>(QuestNode))
		{
			SectionBrowser.AddMenuEntry(FQuestGraphEditorCommands::Get().BrowserSync);
		}
		if (Cast<UQGNode_QuestFromAsset>(QuestNode))
		{
			SectionBrowser.AddMenuEntry(FQuestGraphEditorCommands::Get().BrowserSync);
		}
		else if (Cast<UQGNode_Finish>(QuestNode))
		{
			SectionBrowser.AddMenuEntry(FQuestGraphEditorCommands::Get().BrowserSync);
		}
	}
}

void UQuestGroupNode::AutowireNewNode(UEdGraphPin* FromPin)
{
	if (!FromPin)
		return;

	if (FromPin->Direction == EEdGraphPinDirection::EGPD_Output) {
		UEdGraphPin* InputPin = GetExecPin();
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



void UQuestGroupNode::PostLoad()
{
	Super::PostLoad();

	// Fixup any QuestNode back pointers that may be out of date
	if (QuestNode)
	{
		QuestNode->GraphNode = this;
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

void UQuestGroupNode::PostEditImport()
{
	// Make sure this QGNode is owned by the QuestGroup it's being pasted into.
	ResetQuestNodeOwner();
}

void UQuestGroupNode::PostDuplicate(bool bDuplicateForPIE)
{
	Super::PostDuplicate(bDuplicateForPIE);

	if (!bDuplicateForPIE)
	{
		CreateNewGuid();
	}
}

void UQuestGroupNode::PostInitProperties()
{
	Super::PostInitProperties();

	if (NodeBlueprint)
	{
		NodeBlueprint->OnCompiled().AddUObject(this, &UQuestGroupNode::OnQuestNodeCompiled);
	}
}

void UQuestGroupNode::ReallocatePinsDuringReconstruction(TArray<UEdGraphPin*>& OldPins)
{
	InternalPinCreation(&OldPins);
}

void UQuestGroupNode::PostReconstructNode()
{
	if (!IsTemplate())
	{
		// Make sure we're not dealing with a menu node
		UEdGraph* OuterGraph = GetGraph();
		if (OuterGraph && OuterGraph->Schema)
		{
			const UQuestGroupGraphSchema* Schema = Cast<const UQuestGroupGraphSchema>(GetSchema());
			// fix up any pin data if it needs to
			for (UEdGraphPin* CurrentPin : Pins)
			{
				const FName& PinCategory = CurrentPin->PinType.PinCategory;
				//
			}
		}
	}
}

void UQuestGroupNode::ReconstructSinglePin(UEdGraphPin* NewPin, UEdGraphPin* OldPin, ERedirectType RedirectType)
{
	DECLARE_SCOPE_CYCLE_COUNTER(TEXT("UQuestGroupNode::ReconstructSinglePin"), STAT_LinkerLoad_ReconstructSinglePin, STATGROUP_LoadTimeVerbose);

	check(NewPin && OldPin);

	// Copy over modified persistent data
	NewPin->MovePersistentDataFromOldPin(*OldPin);
}

void UQuestGroupNode::RewireOldPinsToNewPins(TArray<UEdGraphPin*>& InOldPins, TArray<UEdGraphPin*>& InNewPins)
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
				((OrphanedPinSaveMode == ESaveOrphanPinMode::SaveAllButExec) && !FQGPins::IsExecPin(*OldPin)));

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

UQuestGroupNode::ERedirectType UQuestGroupNode::DoPinsMatchForReconstruction(const UEdGraphPin* NewPin, int32 NewPinIndex, const UEdGraphPin* OldPin, int32 OldPinIndex) const
{
	ERedirectType RedirectType = ERedirectType_None;

	// if the pin names do match
	if (NewPin->PinName == OldPin->PinName)
	{
		// Make sure we're not dealing with a menu node
		UEdGraph* OuterGraph = GetGraph();
		if (OuterGraph && OuterGraph->Schema)
		{
			const UQuestGroupGraphSchema* Schema = Cast<const UQuestGroupGraphSchema>(GetSchema());
			if (!Schema || Schema->IsSelfPin(*NewPin) || FQGPins::ArePinTypesCompatible(OldPin->PinType, NewPin->PinType))
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
		if (UQuestGroupNode* Node = Cast<UQuestGroupNode>(NewPin->GetOwningNode()))
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
