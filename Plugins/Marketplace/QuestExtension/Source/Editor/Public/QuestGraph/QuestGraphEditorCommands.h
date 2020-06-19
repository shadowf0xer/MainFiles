// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "EditorStyleSet.h"

/*-----------------------------------------------------------------------------
   FSoundCueGraphEditorCommands
-----------------------------------------------------------------------------*/

class FQuestGraphEditorCommands : public TCommands<FQuestGraphEditorCommands>
{
public:
	/** Constructor */
	FQuestGraphEditorCommands() 
		: TCommands<FQuestGraphEditorCommands>("QuestGraphEditor", NSLOCTEXT("Contexts", "QuestGraphEditor", "Quest Graph Editor"), NAME_None, FEditorStyle::GetStyleSetName())
	{
	}

	/** Selects the SoundWave in the content browser */
	TSharedPtr<FUICommandInfo> BrowserSync;

	/** Adds an input to the node */
	TSharedPtr<FUICommandInfo> AddInput;

	/** Removes an input from the node */
	TSharedPtr<FUICommandInfo> DeleteInput;

	/** Initialize commands */
	virtual void RegisterCommands() override;
};

class FQGDebuggerCommands : public TCommands<FQGDebuggerCommands>
{
public:
	FQGDebuggerCommands();

	TSharedPtr<FUICommandInfo> BackEnd;
	TSharedPtr<FUICommandInfo> Back;
	TSharedPtr<FUICommandInfo> Forward;
	TSharedPtr<FUICommandInfo> ForwardEnd;

	TSharedPtr<FUICommandInfo> PausePlaySession;
	TSharedPtr<FUICommandInfo> ResumePlaySession;
	TSharedPtr<FUICommandInfo> StopPlaySession;

	/** Initialize commands */
	virtual void RegisterCommands() override;
};
