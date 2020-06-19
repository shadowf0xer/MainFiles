// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "QuestExtensionEditor.h"
#include <UnrealEdGlobals.h>
#include <Editor/UnrealEdEngine.h>
#include <Kismet2/KismetEditorUtilities.h>
#include <Editor/AIGraph/Classes/AIGraphTypes.h>

#include "QuestExtensionEditorStyle.h"

#include "Asset/AssetTypeAction_QuestBase.h"
#include "Asset/AssetTypeAction_QuestGroup.h"
#include "Asset/AssetTypeAction_Memory.h"
#include "Asset/QuestVolumeActorFactory.h"

#include "QuestTextArgumentCustomization.h"
#include "ConditionContainerCustomization.h"

#include "Quest.h"
#include "QuestSubScript.h"
#include "Conditions/QuestCondition.h"
#include "QGNodes/QGNode.h"
#include "QGNodes/QGNode_Logic.h"

#include "QuestGraph/QuestGroupEditor.h"

#include "ContentBrowserExtensions/ContentBrowserExtensions.h"


DEFINE_LOG_CATEGORY(LogQuestEd)

#define LOCTEXT_NAMESPACE "QuestExtensionEditor"

void FQuestExtensionEditorModule::StartupModule()
{
	UE_LOG(LogQuestEd, Warning, TEXT("QuestExtensionEditor: Log Started"));

	//Initialize Editor Style
	FQuestExtensionEditorStyle::Initialize();

	RegisterPropertyTypeCustomizations();
	PrepareAutoGeneratedDefaultEvents();

	// Register asset types
	IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
	RegisterAssetTypeAction(AssetTools, MakeShareable(new FAssetTypeAction_QuestBase));
	RegisterAssetTypeAction(AssetTools, MakeShareable(new FAssetTypeAction_QuestGroup));
	RegisterAssetTypeAction(AssetTools, MakeShareable(new FAssetTypeAction_Memory));

	// Add actor factories
	GEditor->ActorFactories.Add(NewObject<UQuestVolumeActorFactory>());

	// Initialize Graphs
	{
		if (!ConditionClassCache.IsValid())
		{
			ConditionClassCache = MakeShareable(new FGraphNodeClassHelper(UQuestCondition::StaticClass()));
			FGraphNodeClassHelper::AddObservedBlueprintClasses(ULatentCondition::StaticClass());
			FGraphNodeClassHelper::AddObservedBlueprintClasses(UInstantCondition::StaticClass());
			ConditionClassCache->UpdateAvailableBlueprintClasses();
		}

		ConditionGraphPanelNodeFactory = MakeShareable(new FConditionGraphPanelNodeFactory());
		FEdGraphUtilities::RegisterVisualNodeFactory(ConditionGraphPanelNodeFactory);

		QuestGroupPanelNodeFactory = MakeShareable(new FQuestGroupPanelNodeFactory());
		FEdGraphUtilities::RegisterVisualNodeFactory(QuestGroupPanelNodeFactory);
	}


	// Integrate QuestExtension actions into existing editor context menus
	if (!IsRunningCommandlet())
	{
		FQuestContentBrowserExtensions::InstallHooks();
	}
}

void FQuestExtensionEditorModule::ShutdownModule()
{
	UE_LOG(LogQuestEd, Warning, TEXT("QuestExtensionEditor: Log Ended"));

	QGClassCache.Reset();
	ConditionClassCache.Reset();

	// Unregister all the asset types
	if (FModuleManager::Get().IsModuleLoaded("AssetTools"))
	{
		IAssetTools& AssetTools = FModuleManager::GetModuleChecked<FAssetToolsModule>("AssetTools").Get();
		for (int32 Index = 0; Index < CreatedAssetTypeActions.Num(); ++Index)
		{
			AssetTools.UnregisterAssetTypeActions(CreatedAssetTypeActions[Index].ToSharedRef());
		}
	}
	CreatedAssetTypeActions.Empty();

	// Cleanup all information for auto generated default event nodes by this module
	FKismetEditorUtilities::UnregisterAutoBlueprintNodeCreation(this);

	// Unregister all pin customizations
	for (auto& FactoryPtr : CreatedPinFactories)
	{
		FEdGraphUtilities::UnregisterVisualPinFactory(FactoryPtr);
	}
	CreatedPinFactories.Empty();


	//Unregister all component visualizers
	if (GUnrealEd != nullptr)
	{
		// Iterate over all class names we registered for
		for (FName ClassName : RegisteredComponentClassNames)
		{
			GUnrealEd->UnregisterComponentVisualizer(ClassName);
		}
	}


	FEdGraphUtilities::UnregisterVisualPinConnectionFactory(GraphConnectionFactory);

	FEdGraphUtilities::UnregisterVisualNodeFactory(QuestGroupPanelNodeFactory);
	FEdGraphUtilities::UnregisterVisualNodeFactory(ConditionGraphPanelNodeFactory);


	if (UObjectInitialized())
	{
		FQuestContentBrowserExtensions::RemoveHooks();
	}

	//Shutdown Editor Style
	FQuestExtensionEditorStyle::Shutdown();
}


void FQuestExtensionEditorModule::RegisterPropertyTypeCustomizations()
{
	RegisterCustomPropertyTypeLayout("QuestTextArgument", FOnGetPropertyTypeCustomizationInstance::CreateStatic(&FQuestTextArgumentCustomization::MakeInstance));
	RegisterCustomPropertyTypeLayout("ConditionContainer", FOnGetPropertyTypeCustomizationInstance::CreateStatic(&FConditionContainerCustomization::MakeInstance));
}

void FQuestExtensionEditorModule::PrepareAutoGeneratedDefaultEvents()
{
	//RegisterDefaultEvent(Class, FunctionEvent);
	RegisterDefaultEvent(UQuest, ReceiveStart);
	RegisterDefaultEvent(UQuest, ReceiveFinish);

	RegisterDefaultEvent(ULatentCondition, ReceiveCheck);
	RegisterDefaultEvent(ULatentCondition, ReceiveTick);
	RegisterDefaultEvent(UInstantCondition, ReceiveTick);

	RegisterDefaultEvent(UQGNode_Logic, ReceiveStart);
	RegisterDefaultEvent(UQGNode_Logic, ReceiveFinish);

	RegisterDefaultEvent(UQuestSubScript, ReceiveStart);
	RegisterDefaultEvent(UQuestSubScript, ReceiveFinish);
}

void FQuestExtensionEditorModule::RegisterComponentVisualizer(FName ComponentClassName, TSharedPtr<FComponentVisualizer> Visualizer)
{
	if (GUnrealEd != nullptr)
	{
		GUnrealEd->RegisterComponentVisualizer(ComponentClassName, Visualizer);
	}

	RegisteredComponentClassNames.Add(ComponentClassName);

	if (Visualizer.IsValid())
	{
		Visualizer->OnRegister();
	}
}

void FQuestExtensionEditorModule::RegisterCustomPropertyTypeLayout(FName PropertyTypeName, FOnGetPropertyTypeCustomizationInstance PropertyTypeLayoutDelegate)
{
	check(PropertyTypeName != NAME_None);

	static FName PropertyEditor("PropertyEditor");
	FPropertyEditorModule& PropertyModule = FModuleManager::GetModuleChecked<FPropertyEditorModule>(PropertyEditor);
	PropertyModule.RegisterCustomPropertyTypeLayout(PropertyTypeName, PropertyTypeLayoutDelegate);
}

template<class T>
void FQuestExtensionEditorModule::RegisterCustomPinFactory()
{
	TSharedPtr<T> PinFactory = MakeShareable(new T());
	FEdGraphUtilities::RegisterVisualPinFactory(PinFactory);
	CreatedPinFactories.Add(PinFactory);
}

TSharedRef<IQuestGroupEditor> FQuestExtensionEditorModule::CreateQuestGroupEditor(const EToolkitMode::Type Mode, const TSharedPtr< IToolkitHost >& InitToolkitHost, UQuestGroup* QuestGroup)
{
	if (!QGClassCache.IsValid())
	{
		QGClassCache = MakeShareable(new FGraphNodeClassHelper(UQGNode::StaticClass()));
		FGraphNodeClassHelper::AddObservedBlueprintClasses(UQGNode_Logic::StaticClass());
		QGClassCache->UpdateAvailableBlueprintClasses();
	}

	TSharedRef<FQuestGroupEditor> NewQuestGroupEditor(new FQuestGroupEditor());
	NewQuestGroupEditor->InitQuestGroupEditor(Mode, InitToolkitHost, QuestGroup);
	return NewQuestGroupEditor;
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_GAME_MODULE(FQuestExtensionEditorModule, QuestExtensionEditor);