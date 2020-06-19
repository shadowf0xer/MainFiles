// Copyright 2015-2019 Piperift. All Rights Reserved.
#pragma once

#include "PropertyEditorModule.h"
#include "IAssetTools.h"

DECLARE_LOG_CATEGORY_EXTERN(LogActionsEd, All, All)

class FActionsEditorModule: public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;


private:
	void RegisterPropertyTypeCustomizations();
	void PrepareAutoGeneratedDefaultEvents();

	/**
	* Registers a custom struct
	*
	* @param StructName				The name of the struct to register for property customization
	* @param StructLayoutDelegate	The delegate to call to get the custom detail layout instance
	*/
	void RegisterCustomPropertyTypeLayout(FName PropertyTypeName, FOnGetPropertyTypeCustomizationInstance PropertyTypeLayoutDelegate);

	void RegisterAssetTypeAction(IAssetTools& AssetTools, TSharedRef<IAssetTypeActions> Action)
	{
		AssetTools.RegisterAssetTypeActions(Action);
		CreatedAssetTypeActions.Add(Action);
	}

	//Simplify Registering generated default events
#define RegisterDefaultEventChecked(Class, FuncName) \
	(FKismetEditorUtilities::RegisterAutoGeneratedDefaultEvent(this, Class::StaticClass(), GET_FUNCTION_NAME_CHECKED(Class, FuncName)))

#define RegisterDefaultEvent(Class, FuncName) \
	(FKismetEditorUtilities::RegisterAutoGeneratedDefaultEvent(this, Class::StaticClass(), FName(TEXT(#FuncName))))


	/** All created asset type actions.  Cached here so that we can unregister them during shutdown. */
	TArray< TSharedPtr<IAssetTypeActions> > CreatedAssetTypeActions;
};