// Copyright 2019 The Reallusion Authors. All Rights Reserved.

#include "RLLiveLinkCommands.h"

#define LOCTEXT_NAMESPACE "FRLLiveLink"

void FRLLiveLinkCommands::RegisterCommands()
{
    UI_COMMAND( PluginAction, "RL LiveLink", "Execute RL LiveLink action", EUserInterfaceActionType::Button, FInputGesture() );
}

#undef LOCTEXT_NAMESPACE
