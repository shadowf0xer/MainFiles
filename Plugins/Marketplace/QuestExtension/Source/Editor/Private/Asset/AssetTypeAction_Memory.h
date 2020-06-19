// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "AssetTypeActions_Base.h"

class QUESTEXTENSIONEDITOR_API FAssetTypeAction_Memory : public FAssetTypeActions_Base
{
public:
	// IAssetTypeActions interface
	virtual FText GetName() const override;
	virtual FColor GetTypeColor() const override;
	virtual UClass* GetSupportedClass() const override;
	virtual bool HasActions(const TArray<UObject*>& InObjects) const override { return false; }
	virtual void GetActions(const TArray<UObject*>& InObjects, FMenuBuilder& MenuBuilder) override;
	virtual uint32 GetCategories() override;
	// End of IAssetTypeActions interface

};
