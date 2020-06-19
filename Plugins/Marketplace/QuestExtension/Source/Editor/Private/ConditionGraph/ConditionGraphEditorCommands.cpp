// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "ConditionGraphEditorCommands.h"

#define LOCTEXT_NAMESPACE "ConditionGraphEditorCommands"

void FConditionGraphEditorCommands::RegisterCommands()
{
	UI_COMMAND(BrowserSync, "Sync to Browser", "Selects the Quest in the content browser", EUserInterfaceActionType::Button, FInputChord());
	UI_COMMAND(AddInput, "Add Input", "Adds an input to the node", EUserInterfaceActionType::Button, FInputChord());
	UI_COMMAND(DeleteInput, "Delete Input", "Removes an input from the node", EUserInterfaceActionType::Button, FInputChord());
}

#undef LOCTEXT_NAMESPACE
