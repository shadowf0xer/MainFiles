// Copyright Dmitrii Labadin 2019

#include "LogViewer.h"
#include "LogViewerStyle.h"
#include "LogViewerCommands.h"
#include "LogViewerWidgetMain.h"
#include "Widgets/Docking/SDockTab.h"
#include "EditorStyleSet.h"
#include "LogViewerOutputDevice.h"
#include "LevelEditor.h"
#include "Framework/Commands/UICommandList.h"
#include "DesktopPlatform/Public/IDesktopPlatform.h"
#include "Misc/FileHelper.h"
#include "DesktopPlatform/Public/DesktopPlatformModule.h"
#include "MainFrame/Public/Interfaces/IMainFrameModule.h"
#include "LogViewerStructs.h"
#include "Widgets/Input/SHyperlink.h"

static const FName LogViewerTabName("LogViewer");

#define LOCTEXT_NAMESPACE "FLogViewerModule"

FName FLogViewerModule::TabNameOpenNewTab(TEXT("TabNameOpenNewTab"));
FName FLogViewerModule::TabNameDefaultEngineOutput(TEXT("TabNameDefaultEngineOutput"));

void FLogViewerModule::StartupModule()
{
	OutputLogHistory = MakeShareable(new FOutputLogHistory);

	FLogViewerStyle::Initialize();
	FLogViewerStyle::ReloadTextures();


	FLogViewerCommands::Register();

	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FLogViewerCommands::Get().OpenPluginWindow,
		FExecuteAction::CreateRaw(this, &FLogViewerModule::PluginButtonClicked),
		FCanExecuteAction());
		
	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
	
	{
		TSharedPtr<FExtender> MenuExtender = MakeShareable(new FExtender());
		MenuExtender->AddMenuExtension("Log", EExtensionHook::After, PluginCommands, FMenuExtensionDelegate::CreateRaw(this, &FLogViewerModule::AddMenuExtension));

		LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(MenuExtender);
	}
	
	//{
	//	TSharedPtr<FExtender> ToolbarExtender = MakeShareable(new FExtender);
	//	ToolbarExtender->AddToolBarExtension("Settings", EExtensionHook::After, PluginCommands, FToolBarExtensionDelegate::CreateRaw(this, &FLogViewerModule::AddToolbarExtension));
	//	
	//	LevelEditorModule.GetToolBarExtensibilityManager()->AddExtender(ToolbarExtender);
	//}
	
	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(LogViewerTabName, FOnSpawnTab::CreateRaw(this, &FLogViewerModule::CreateLogViewerPluginTab))
		.SetDisplayName(LOCTEXT("FLogViewerTabTitle", "LogViewer"))
		.SetMenuType(ETabSpawnerMenuType::Hidden);
}

void FLogViewerModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	FLogViewerStyle::Shutdown();

	FLogViewerCommands::Unregister();

	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(LogViewerTabName);
}

void FLogViewerModule::PluginButtonClicked()
{
	FGlobalTabmanager::Get()->InvokeTab(LogViewerTabName);
}

void FLogViewerModule::AddMenuExtension(FMenuBuilder& Builder)
{
	Builder.AddMenuEntry(FLogViewerCommands::Get().OpenPluginWindow);
}

void FLogViewerModule::AddToolbarExtension(FToolBarBuilder& Builder)
{
	Builder.AddToolBarButton(FLogViewerCommands::Get().OpenPluginWindow);
}

TSharedRef<SDockTab> FLogViewerModule::CreateLogViewerPluginTab(const FSpawnTabArgs& SpawnTabArgs)
{
	TSharedPtr<SDockTab> NomadTab = SNew(SDockTab)
		.TabRole(ETabRole::NomadTab)
		.Label(NSLOCTEXT("LogViewer", "MainTabTitle", "Log Viewer"));
	PluginTab = NomadTab;

	if (!TabManager.IsValid())
	{
		TabManager = FGlobalTabmanager::Get()->NewTabManager(NomadTab.ToSharedRef());
	}


	TWeakPtr<FTabManager> TabManagerWeak = TabManager;
	// On tab close will save the layout if the debugging window itself is closed,
	// this handler also cleans up any floating debugging controls. If we don't close
	// all areas we need to add some logic to the tab manager to reuse existing tabs:
	
	NomadTab->SetOnTabClosed(SDockTab::FOnTabClosedCallback::CreateStatic(
		[](TSharedRef<SDockTab> Self, TWeakPtr<FTabManager> TabManager)
		{
			TSharedPtr<FTabManager> OwningTabManager = TabManager.Pin();
			if (OwningTabManager.IsValid())
			{
				FLayoutSaveRestore::SaveToConfig(GEditorLayoutIni, OwningTabManager->PersistLayout());
				OwningTabManager->CloseAllAreas();
			}
		}
		, TabManagerWeak
		));
	
	//NomadTab->SetOnTabClosed(SDockTab::FOnTabClosedCallback::CreateRaw(this, &FLogViewerModule::CloseLogViewer));
	

	if (!TabManagerLayout.IsValid())
	{
		TabManager->RegisterTabSpawner(TabNameOpenNewTab, FOnSpawnTab::CreateRaw(this, &FLogViewerModule::OnSpawnTabNewDocument));
		RegisterDefaultLogViewerTab(*TabManager);

		TabManagerLayout = FTabManager::NewLayout("LogViewerLayout")
			->AddArea
			(
				FTabManager::NewPrimaryArea()
				->SetOrientation(Orient_Vertical)
				->Split
				(
					FTabManager::NewStack()
					->SetSizeCoefficient(.4f)
					->SetHideTabWell(false)
					->AddTab(TabNameOpenNewTab, ETabState::OpenedTab)
					->AddTab(TabNameDefaultEngineOutput, ETabState::OpenedTab)
					->SetForegroundTab(TabNameDefaultEngineOutput)
				)
			);

	}

	TSharedRef<SWidget> TabContents = TabManager->RestoreFrom(TabManagerLayout.ToSharedRef(), TSharedPtr<SWindow>()).ToSharedRef();

	NomadTab->SetContent(
		TabContents
	);

	return NomadTab.ToSharedRef();
}

void FLogViewerModule::RegisterDefaultLogViewerTab(FTabManager& InTabManager)
{
	const auto SpawnDefaultLogViewerTab = [](const FSpawnTabArgs& Args)
	{
		TSharedRef<SLogViewerWidgetMain> Widget = SNew(SLogViewerWidgetMain).Messages(OutputLogHistory->GetMessages());
		TSharedRef<SDockTab> Tab = SNew(SDockTab)
			.TabRole(ETabRole::DocumentTab)
			.Label(NSLOCTEXT("LogViewer", "EngineOutputTabTitle", "Engine Output"))
			[
				Widget
			];
		Widget->SetParentTab(Tab);
		return Tab;
	};

	InTabManager.RegisterTabSpawner(TabNameDefaultEngineOutput, FOnSpawnTab::CreateStatic(SpawnDefaultLogViewerTab))
		.SetDisplayName(NSLOCTEXT("LogViewer", "EngineOutputTabTitle", "Engine Output"))
		.SetTooltipText(NSLOCTEXT("LogViewer", "EngineOutputTabTitle", "Engine Output"));
}

void FLogViewerModule::OnSpecialTabClosed(TSharedRef<SDockTab> Tab)
{
	if (SpecialTab.IsValid())
	{
		//Clear callback so we are not in the loop
		SpecialTab.Pin()->SetOnTabClosed(SDockTab::FOnTabClosedCallback());
	}
	if (PluginTab.IsValid())
	{
		TSharedPtr<SWindow> ParentWindowPtr = PluginTab.Pin()->GetParentWindow();
		ParentWindowPtr->RequestDestroyWindow();
	}
}

TSharedRef<SDockTab> FLogViewerModule::OnSpawnTabNewDocument(const FSpawnTabArgs& Args)
{
	
	return SpawnSpecialTab();
};

TSharedRef<SDockTab> FLogViewerModule::SpawnSpecialTab()
{
	const FString Link = TEXT("https://www.unrealengine.com/marketplace/en-US/product/log-viewer-pro");
	TSharedRef<SDockTab> NewTab = SNew(SDockTab)
		.TabRole(ETabRole::DocumentTab)
		.OnCanCloseTab(SDockTab::FCanCloseTab::CreateRaw(this, &FLogViewerModule::OnSpecialTabTryClose))
		.OnTabClosed(SDockTab::FOnTabClosedCallback::CreateRaw(this, &FLogViewerModule::OnSpecialTabClosed))
		.Label(NSLOCTEXT("LogVeiwer", "NewTabTabTitle", "Create New Tab"))
		.ToolTipText(NSLOCTEXT("LogVeiwer", "NewLogTabTitleToolTip", "Creates new empty log viewer tab"))
		[
			SNew(SBox)
			.HAlign(HAlign_Right)
			.VAlign(VAlign_Bottom)
			.Padding(FMargin(0.0f, 0.0f, 8.0f, 0.0f))
			[
				SNew(SHyperlink)
				.OnNavigate_Lambda([=]() { FPlatformProcess::LaunchURL(*Link, nullptr, nullptr); })
			.Text(NSLOCTEXT("LogViewer", "LinkToProText", "If you want to support me, please buy LogViewerPro from Epic Marketplace"))
			.ToolTipText(FText::FromString(Link))
			]
		];
	SpecialTab = NewTab;
	NewTab->SetOnTabActivated(SDockTab::FOnTabActivatedCallback::CreateRaw(this, &FLogViewerModule::OnOpenNewTabClicked));
	return NewTab;
}

bool FLogViewerModule::OnSpecialTabTryClose()
{
	return true;
}

TSharedRef<SDockTab> FLogViewerModule::SpawnEmptyLogViewerTab()
{
	TSharedRef<SLogViewerWidgetMain> Widget = SNew(SLogViewerWidgetMain);
	TSharedRef<SDockTab> Tab = SNew(SDockTab)
		.TabRole(ETabRole::DocumentTab)
		.Label(NSLOCTEXT("LogViewer", "EngineOutputTabTitle", "Engine Output"))
		[
			Widget
		];
	Widget->SetParentTab(Tab);
	return Tab;
}

void FLogViewerModule::OnOpenNewTabClicked(TSharedRef<SDockTab> DockTab, ETabActivationCause InActivationCause)
{
	if (InActivationCause == UserClickedOnTab)
	{
		TabManager->InsertNewDocumentTab(TabNameOpenNewTab, FTabManager::ESearchPreference::PreferLiveTab, SpawnEmptyLogViewerTab());
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FLogViewerModule, LogViewer)