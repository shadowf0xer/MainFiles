// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include <CoreMinimal.h>
#include <Modules/ModuleManager.h>
#include <Runtime/Launch/Resources/Version.h>

#if WITH_EDITOR
#include "ISettingsModule.h"
#include "ISettingsSection.h"
#include "ISettingsContainer.h"

#include "Developer/AssetTools/Public/IAssetTools.h"
#include "Developer/AssetTools/Public/AssetToolsModule.h"
#endif //WITH_EDITOR

DECLARE_LOG_CATEGORY_EXTERN(LogNarrative, All, All);

class FQuestExtensionModule : public IModuleInterface
{
public:

	// Get Narrative Extension module instance
	FORCEINLINE static FQuestExtensionModule* GetInstance() {
		return &FModuleManager::LoadModuleChecked<FQuestExtensionModule>("QuestExtension");
	}

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	virtual bool SupportsDynamicReloading() override { return true; }

	DECLARE_DELEGATE_RetVal(void, FOnModifiedSettings)
	FOnModifiedSettings& OnModifiedSettings()
	{
		return ModifiedSettingsDelegate;
	}

private:
	/** Holds a delegate that is executed after the settings section has been modified. */
	FOnModifiedSettings ModifiedSettingsDelegate;

	void RegisterSettings();
	void UnregisterSettings();

	// Callbacks for when the settings were saved.
	bool HandleSettingsSaved();


#if WITH_EDITOR
private:
	EAssetTypeCategories::Type AssetCategoryBit;
public:
	EAssetTypeCategories::Type GetAssetCategoryBit() const { return AssetCategoryBit; }
#endif
};