// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "ActionsEditor.h"
#include <Kismet2/KismetEditorUtilities.h>

#include "Action.h"


#define LOCTEXT_NAMESPACE "UMapComponent"

DEFINE_LOG_CATEGORY(LogActionsEd)

void FActionsEditorModule::StartupModule()
{
	UE_LOG(LogActionsEd, Log, TEXT("UMapComponent: Log Started"));

	RegisterPropertyTypeCustomizations();
	PrepareAutoGeneratedDefaultEvents();
}

void FActionsEditorModule::ShutdownModule()
{
	UE_LOG(LogActionsEd, Log, TEXT("UMapComponent: Log Ended"));

	CreatedAssetTypeActions.Empty();

	// Cleanup all information for auto generated default event nodes by this module
	FKismetEditorUtilities::UnregisterAutoBlueprintNodeCreation(this);
}


void FActionsEditorModule::RegisterPropertyTypeCustomizations()
{
}

void FActionsEditorModule::PrepareAutoGeneratedDefaultEvents()
{
	//Task events
	RegisterDefaultEvent(UAction, ReceiveActivate);
	RegisterDefaultEvent(UAction, ReceiveTick);
	RegisterDefaultEvent(UAction, ReceiveFinished);
}


void FActionsEditorModule::RegisterCustomPropertyTypeLayout(FName PropertyTypeName, FOnGetPropertyTypeCustomizationInstance PropertyTypeLayoutDelegate)
{
	check(PropertyTypeName != NAME_None);

	static FName PropertyEditor("PropertyEditor");
	FPropertyEditorModule& PropertyModule = FModuleManager::GetModuleChecked<FPropertyEditorModule>(PropertyEditor);
	PropertyModule.RegisterCustomPropertyTypeLayout(PropertyTypeName, PropertyTypeLayoutDelegate);
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_GAME_MODULE(FActionsEditorModule, ActionsEditor);