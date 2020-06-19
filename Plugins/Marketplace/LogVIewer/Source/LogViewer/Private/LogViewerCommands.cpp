// Copyright Dmitrii Labadin 2019

#include "LogViewerCommands.h"

#define LOCTEXT_NAMESPACE "FLogViewerModule"

void FLogViewerCommands::RegisterCommands()
{
	UI_COMMAND(OpenPluginWindow, "LogViewer", "Bring up LogViewer window", EUserInterfaceActionType::Button, FInputGesture());
}

#undef LOCTEXT_NAMESPACE
