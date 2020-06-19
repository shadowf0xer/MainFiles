// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "EditorStyleSet.h"

/*-----------------------------------------------------------------------------
FSoundCueGraphEditorCommands
-----------------------------------------------------------------------------*/

class FConditionGraphEditorCommands : public TCommands<FConditionGraphEditorCommands>
{
public:
	/** Constructor */
	FConditionGraphEditorCommands()
		: TCommands<FConditionGraphEditorCommands>("ConditionGraphEditor", NSLOCTEXT("Contexts", "ConditionGraphEditor", "Condition Graph Editor"), NAME_None, FEditorStyle::GetStyleSetName())
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
