// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "Asset/AssetTypeAction_QuestBase.h"

class QUESTEXTENSIONEDITOR_API FAssetTypeAction_QuestGroup : public FAssetTypeAction_QuestBase
{
public:
	// IAssetTypeActions interface
	virtual FText GetName() const override;
	virtual FColor GetTypeColor() const override;
	virtual UClass* GetSupportedClass() const override;
	virtual void OpenAssetEditor(const TArray<UObject*>& InObjects, TSharedPtr<IToolkitHost> EditWithinLevelEditor) override;
	// End of IAssetTypeActions interface

};
