// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "ContentBrowserExtensions.h"
#include <Engine/Blueprint.h>
#include <Runtime/Launch/Resources/Version.h>

#include <ContentBrowserModule.h>
#include <IContentBrowserSingleton.h>
#include <Framework/MultiBox/MultiBoxBuilder.h>
#include <Framework/Commands/UIAction.h>
#include <EditorStyleSet.h>


#include <AssetToolsModule.h>
#include <AssetRegistryModule.h>

#include "Quest.h"
#include "Asset/QuestFactory.h"


#define LOCTEXT_NAMESPACE "QuestExtension"

//////////////////////////////////////////////////////////////////////////

FContentBrowserMenuExtender_SelectedAssets ContentBrowserExtenderDelegate;
FDelegateHandle ContentBrowserExtenderDelegateHandle;

//////////////////////////////////////////////////////////////////////////
// FContentBrowserSelectedAssetExtensionBase

struct FContentBrowserSelectedAssetExtensionBase
{
public:
	TArray<struct FAssetData> SelectedAssets;

public:
	virtual void Execute() {}
	virtual ~FContentBrowserSelectedAssetExtensionBase() {}
};

//////////////////////////////////////////////////////////////////////////
// FCreateQuestFromQuestClassExtension


struct FCreateQuestFromQuestClassExtension : public FContentBrowserSelectedAssetExtensionBase
{
	FCreateQuestFromQuestClassExtension()
	{
	}

	void CreateQuestFromQuestClasses(TArray<UBlueprint*>& BPClasses)
	{
		FAssetToolsModule& AssetToolsModule = FModuleManager::Get().LoadModuleChecked<FAssetToolsModule>("AssetTools");
		FContentBrowserModule& ContentBrowserModule = FModuleManager::LoadModuleChecked<FContentBrowserModule>("ContentBrowser");

		TArray<UObject*> ObjectsToSync;

		for (auto BPClassIt = BPClasses.CreateConstIterator(); BPClassIt; ++BPClassIt)
		{
			UBlueprint* Blueprint = *BPClassIt;
			TSubclassOf<UQuestBase> Class = *Blueprint->GeneratedClass;

			// Create the factory used to generate the quote
			UQuestFactory* QuestFactory = NewObject<UQuestFactory>();
			QuestFactory->QuestClass = Class;


			FString Name;
			FString PackageName;

			// Get a unique name for the quote
			const FString DefaultPreffix = TEXT("Q_");
			const FString DefaultSuffix = TEXT("");

			// Begin Generate Name
			{
				FString ClassName = Blueprint->GetOutermost()->GetName();

				int32 PreffixIndex = ClassName.Find("BP_");
				if (PreffixIndex != INDEX_NONE)
					ClassName.RemoveAt(PreffixIndex, 3);

				ClassName.FindLastChar('/', PreffixIndex);
				if(PreffixIndex != INDEX_NONE)
					ClassName.InsertAt(PreffixIndex+1, DefaultPreffix);
				else
					ClassName.InsertAt(0, DefaultPreffix);


				AssetToolsModule.Get().CreateUniqueAssetName(ClassName, DefaultSuffix, /*out*/ PackageName, /*out*/ Name);
			}
			// End Generate Name

			const FString PackagePath = FPackageName::GetLongPackagePath(PackageName);

			if (UObject* NewAsset = AssetToolsModule.Get().CreateAsset(Name, PackagePath, UQuest::StaticClass(), QuestFactory))
			{
				ObjectsToSync.Add(NewAsset);
			}
		}

		if (ObjectsToSync.Num() > 0)
		{
			ContentBrowserModule.Get().SyncBrowserToAssets(ObjectsToSync);
		}
	}

	virtual void Execute() override
	{
		// Create sprites for any selected textures
		TArray<UBlueprint*> BPClasses;
		for (auto AssetIt = SelectedAssets.CreateConstIterator(); AssetIt; ++AssetIt)
		{
			const FAssetData& AssetData = *AssetIt;

			UBlueprint* BP = Cast<UBlueprint>(AssetIt->GetAsset());
			if (BP && BP->GeneratedClass->IsChildOf<UQuest>())
			{
				BPClasses.Add(BP);
			}
		}

		CreateQuestFromQuestClasses(BPClasses);
	}
};

//////////////////////////////////////////////////////////////////////////
// FQuestContentBrowserExtensions_Impl

class FQuestContentBrowserExtensions_Impl
{
public:
	static void ExecuteSelectedContentFunctor(TSharedPtr<FContentBrowserSelectedAssetExtensionBase> SelectedAssetFunctor)
	{
		SelectedAssetFunctor->Execute();
	}

	static void CreateQuestClassActionsSubMenu(FMenuBuilder& MenuBuilder, TArray<FAssetData> SelectedAssets)
	{
		// Create quotes
		TSharedPtr<FCreateQuestFromQuestClassExtension> QuestClassICreatorFunctor = MakeShareable(new FCreateQuestFromQuestClassExtension());
		QuestClassICreatorFunctor->SelectedAssets = SelectedAssets;

		FUIAction Action_CreateQuestsFromQuestClasses(
			FExecuteAction::CreateStatic(&FQuestContentBrowserExtensions_Impl::ExecuteSelectedContentFunctor, StaticCastSharedPtr<FContentBrowserSelectedAssetExtensionBase>(QuestClassICreatorFunctor)));

		const FName JCStyleSetName = FEditorStyle::Get().GetStyleSetName();

		MenuBuilder.AddMenuEntry(
			LOCTEXT("CreateQuest", "Create Quest"),
			LOCTEXT("CreateQuest_Tooltip", "Create quest assets from selected Quest Classes"),
			FSlateIcon(FEditorStyle::GetStyleSetName(), "ClassIcon.Note"),
			Action_CreateQuestsFromQuestClasses,
			NAME_None,
			EUserInterfaceActionType::Button);
	}

	static TSharedRef<FExtender> OnExtendContentBrowserAssetSelectionMenu(const TArray<FAssetData>& SelectedAssets)
	{
		// Run through the assets to determine if any meet our criteria
		bool bAnyQuestClass = false;
		for (auto AssetIt = SelectedAssets.CreateConstIterator(); AssetIt; ++AssetIt)
		{
			UBlueprint* BP = Cast<UBlueprint>(AssetIt->GetAsset());
			if (BP)
			{
				bAnyQuestClass |= BP->GeneratedClass->IsChildOf<UQuest>();
			}
		}

		TSharedRef<FExtender> Extender(new FExtender());

		if (bAnyQuestClass)
		{
			// Add the sprite actions sub-menu extender
			Extender->AddMenuExtension(
				"CommonAssetActions",
				EExtensionHook::First,
				nullptr,
				FMenuExtensionDelegate::CreateStatic(&FQuestContentBrowserExtensions_Impl::CreateQuestClassActionsSubMenu, SelectedAssets));
		}

		return Extender;
	}

	static TArray<FContentBrowserMenuExtender_SelectedAssets>& GetExtenderDelegates()
	{
		FContentBrowserModule& ContentBrowserModule = FModuleManager::LoadModuleChecked<FContentBrowserModule>(TEXT("ContentBrowser"));
		return ContentBrowserModule.GetAllAssetViewContextMenuExtenders();
	}
};

//////////////////////////////////////////////////////////////////////////
// FQuestContentBrowserExtensions

void FQuestContentBrowserExtensions::InstallHooks()
{
	ContentBrowserExtenderDelegate = FContentBrowserMenuExtender_SelectedAssets::CreateStatic(&FQuestContentBrowserExtensions_Impl::OnExtendContentBrowserAssetSelectionMenu);

	TArray<FContentBrowserMenuExtender_SelectedAssets>& CBMenuExtenderDelegates = FQuestContentBrowserExtensions_Impl::GetExtenderDelegates();
	CBMenuExtenderDelegates.Add(ContentBrowserExtenderDelegate);
	ContentBrowserExtenderDelegateHandle = CBMenuExtenderDelegates.Last().GetHandle();
}

void FQuestContentBrowserExtensions::RemoveHooks()
{
	TArray<FContentBrowserMenuExtender_SelectedAssets>& CBMenuExtenderDelegates = FQuestContentBrowserExtensions_Impl::GetExtenderDelegates();
	CBMenuExtenderDelegates.RemoveAll([](const FContentBrowserMenuExtender_SelectedAssets& Delegate) { return Delegate.GetHandle() == ContentBrowserExtenderDelegateHandle; });
}

//////////////////////////////////////////////////////////////////////////

#undef LOCTEXT_NAMESPACE
