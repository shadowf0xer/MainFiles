// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "QuestGraphEditorCommands.h"
#include "QuestExtensionEditorStyle.h"

#define LOCTEXT_NAMESPACE "QuestGraphEditorCommands"

void FQuestGraphEditorCommands::RegisterCommands()
{
	UI_COMMAND(BrowserSync, "Sync to Browser", "Selects the Quest in the content browser", EUserInterfaceActionType::Button, FInputChord());
	UI_COMMAND(AddInput, "Add Input", "Adds an input to the node", EUserInterfaceActionType::Button, FInputChord());
	UI_COMMAND(DeleteInput, "Delete Input", "Removes an input from the node", EUserInterfaceActionType::Button, FInputChord());
}


FQGDebuggerCommands::FQGDebuggerCommands()
	: TCommands<FQGDebuggerCommands>("QGEditor.Debugger", LOCTEXT("Debugger", "Debugger"), NAME_None, FQuestExtensionEditorStyle::GetStyleSetName())
{
}

void FQGDebuggerCommands::RegisterCommands()
{
	UI_COMMAND(BackEnd,	"First", "Show first step",			  EUserInterfaceActionType::Button, FInputChord(EKeys::A, EModifierKey::Control));
	UI_COMMAND(Back,	   "Back", "Show state from previous step", EUserInterfaceActionType::Button, FInputChord(EKeys::A));
	UI_COMMAND(Forward,	"Forward", "Show state from next step",  EUserInterfaceActionType::Button, FInputChord(EKeys::D));
	UI_COMMAND(ForwardEnd, "Last", "Show last step",				EUserInterfaceActionType::Button, FInputChord(EKeys::D, EModifierKey::Control));

	UI_COMMAND(PausePlaySession, "Pause", "Pause simulation", EUserInterfaceActionType::Button, FInputChord());
	UI_COMMAND(ResumePlaySession, "Resume", "Resume simulation", EUserInterfaceActionType::Button, FInputChord());
	UI_COMMAND(StopPlaySession, "Stop", "Stop simulation", EUserInterfaceActionType::Button, FInputChord());
}

#undef LOCTEXT_NAMESPACE