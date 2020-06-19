/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
///			Copyright 2020 (C) Bruno Xavier B. Leite
//////////////////////////////////////////////////////////////

#include "ILightExplorer.h"
#include "LevelEditor.h"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define LOCTEXT_NAMESPACE "Synaptech"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void FLightExplorer::StartupModule() {
	FLE_EditorStyle::Initialize();
	FLE_Command::Register();
	//
	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(TAB,FOnSpawnTab::CreateRaw(this,&FLightExplorer::OnSpawnLightExplorerTab))
	.SetDisplayName(LOCTEXT("LightExplorerTab_Title","Light Explorer"))
	.SetMenuType(ETabSpawnerMenuType::Hidden);
	//
	Commands = MakeShareable(new FUICommandList);
	Commands->MapAction(FLE_Command::Get().LightExplorerTab,FExecuteAction::CreateRaw(this,&FLightExplorer::OnToolbarButtonClicked),FCanExecuteAction());
	//
	FLevelEditorModule &LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
	{
		TSharedPtr<FExtender>ToolbarExtender = MakeShareable(new FExtender);
		ToolbarExtender->AddToolBarExtension("Settings",EExtensionHook::After,Commands,FToolBarExtensionDelegate::CreateRaw(this,&FLightExplorer::AddToolBarButton));
		LevelEditorModule.GetToolBarExtensibilityManager()->AddExtender(ToolbarExtender);
	}
	//
	//
	LE_Extender = MakeShareable(new FExtender());
	LE_Extender->AddMenuExtension("General",EExtensionHook::After,TSharedPtr<FUICommandList>(),FMenuExtensionDelegate::CreateStatic(&FLightExplorer::ExtendMenu));
	LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(LE_Extender);
}

void FLightExplorer::ShutdownModule() {
	FLE_Command::Unregister();
	FLE_EditorStyle::Shutdown();
	//
	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(TAB);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

TSharedRef<SDockTab>FLightExplorer::OnSpawnLightExplorerTab(const FSpawnTabArgs &SpawnTabArgs) {
	TSharedRef<SDockTab>LEAB = SNew(SDockTab).TabRole(ETabRole::NomadTab);
	//
	LEAB->SetTabIcon(FLE_EditorStyle::Get()->GetBrush(TEXT("LightExplorer.Icon")));
	LEAB->SetContent(SNew(SLE_MainWidget));
	//
	return LEAB;
}

void FLightExplorer::InvokeTab() {
	TSharedRef<SDockTab>LEAB = FGlobalTabmanager::Get()->InvokeTab(TAB);
}

void FLightExplorer::OnToolbarButtonClicked() {
	FLightExplorer::InvokeTab();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void FLE_Command::RegisterCommands() {
	UI_COMMAND(LightExplorerTab,"Light Explorer","Light Explorer Tool",EUserInterfaceActionType::Button,FInputGesture());
}

void FLightExplorer::AddToolBarButton(FToolBarBuilder &Builder) {
	Builder.AddToolBarButton(FLE_Command::Get().LightExplorerTab);
}

void FLightExplorer::ExtendMenu(FMenuBuilder &MenuBuilder) {
	MenuBuilder.AddMenuEntry (
		LOCTEXT("LE_InvokeTab","Light Explorer..." ),
		LOCTEXT("LE_InvokeTab_Tooltip", "Light Explorer tool"),
		FSlateIcon(FLE_EditorStyle::Get().Get()->GetStyleSetName(),"LightExplorer.LightExplorerTab"),
		FUIAction(FExecuteAction::CreateStatic(&FLightExplorer::InvokeTab))
	);///
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef LOCTEXT_NAMESPACE

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

IMPLEMENT_MODULE(FLightExplorer,LightExplorer);

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////