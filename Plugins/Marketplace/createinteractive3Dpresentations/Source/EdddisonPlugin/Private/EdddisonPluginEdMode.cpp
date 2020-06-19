/*
 * ****************************************************************************************************************
 * Copyright (c) 2016-2020 edddison technologies, inbox@edddison.com. All rights reserved.
 * Unauthorized copying of this file, via any medium is strictly prohibited.
 * edddison technologies and edddison is protected by copyright and trademarks and is proprietary and confidential.
 * ****************************************************************************************************************
 */

#if WITH_EDITOR

#include "EdddisonPluginEdMode.h"
#include "EdddisonPluginPrivatePCH.h"
#include "EdddisonPluginEdModeToolkit.h"





const FEditorModeID FEdddisonPluginEdMode::EM_EdddisonPluginEdModeId = EDDDCLASS_EDIT_MODE_ID;

FEdddisonPluginEdMode::FEdddisonPluginEdMode()
{

}

FEdddisonPluginEdMode::~FEdddisonPluginEdMode()
{

}

void FEdddisonPluginEdMode::Enter()
{
	FEdMode::Enter();

	if (!Toolkit.IsValid() && UsesToolkits())
	{
		Toolkit = MakeShareable(new FEdddisonPluginEdModeToolkit);
		Toolkit->Init(Owner->GetToolkitHost());
	}
}

void FEdddisonPluginEdMode::Exit()
{
	if (Toolkit.IsValid())
	{
		FToolkitManager::Get().CloseToolkit(Toolkit.ToSharedRef());
		Toolkit.Reset();
	}

	// Call base Exit method to ensure proper cleanup
	FEdMode::Exit();
}

bool FEdddisonPluginEdMode::UsesToolkits() const
{
	return true;
}




#endif