/*
 * ****************************************************************************************************************
 * Copyright (c) 2016-2020 edddison technologies, inbox@edddison.com. All rights reserved.
 * Unauthorized copying of this file, via any medium is strictly prohibited.
 * edddison technologies and edddison is protected by copyright and trademarks and is proprietary and confidential.
 * ****************************************************************************************************************
 */


#if WITH_EDITOR

#include "EdddisonPluginEdModeToolkit.h"
#include "EdddisonPluginPrivatePCH.h"
#include "EdddisonPlugin.h"
#include "EdddisonSettings.h"
#include "EdddisonPluginEdMode.h"





#define LOCTEXT_NAMESPACE "EdddisonPlugin"


FEdddisonPluginEdModeToolkit::FEdddisonPluginEdModeToolkit()
{
	// Note!!! Called every time the user switches to this tab
}

FEdddisonPluginEdModeToolkit::~FEdddisonPluginEdModeToolkit()
{
	// Note!!! Called every time the user switches to another tab
}

FName FEdddisonPluginEdModeToolkit::GetToolkitFName() const
{
	return FName(EDDDCLASS_TOOLKIT_FNAME);
}

FText FEdddisonPluginEdModeToolkit::GetBaseToolkitName() const
{
	return EDDDCLASS_TOOLKIT_NAME;
}

FText FEdddisonPluginEdModeToolkit::GetToolkitToolTipText() const
{
	return EDDDGUI_TOOLKIT_TOOLTIP;
}

TSharedPtr<class SWidget> FEdddisonPluginEdModeToolkit::GetInlineContent() const
{
	return _toolkit_widget;
}

class FEdMode* FEdddisonPluginEdModeToolkit::GetEditorMode() const
{
	return GLevelEditorModeTools().GetActiveMode(FEdddisonPluginEdMode::EM_EdddisonPluginEdModeId);
}

void FEdddisonPluginEdModeToolkit::Init(const TSharedPtr<IToolkitHost>& InitToolkitHost)
{
	FSlateIcon icon_add("EdddisonEditorStyle", "EdddisonEditor.Add");
	FSlateIcon icon_clear("EdddisonEditorStyle", "EdddisonEditor.Clear");
	FSlateIcon icon_green("EdddisonEditorStyle", "EdddisonEditor.Open");
	FSlateIcon icon_red("EdddisonEditorStyle", "EdddisonEditor.Close");
	FSlateIcon icon_update("EdddisonEditorStyle", "EdddisonEditor.Update");
	FSlateIcon icon_bbox("EdddisonEditorStyle", "EdddisonEditor.BBox");


	
	/* init autostart with editor checkbox */
	ECheckBoxState autostart_with_editor_checkbox_init_state = ECheckBoxState::Checked;
	//if (EdddisonConfig::getInstance().getAutostartWithEditor()) {
	UEdddisonSettings* settings = GetMutableDefault<UEdddisonSettings>();
		if (settings->GetAutostartWithEditor()) {
		autostart_with_editor_checkbox_init_state = ECheckBoxState::Checked;
	}
	else {
		autostart_with_editor_checkbox_init_state = ECheckBoxState::Unchecked;
	}

	

	/* init autostart with game checkbox */
	ECheckBoxState autostart_with_game_checkbox_init_state = ECheckBoxState::Checked;
	if(settings->GetAutostartWithGame()) {
		autostart_with_game_checkbox_init_state = ECheckBoxState::Checked;
	}
	else {
		autostart_with_game_checkbox_init_state = ECheckBoxState::Unchecked;
	}



	/* init enable viewport realtime */
	ECheckBoxState enable_viewport_realtime_checkbox_init_state = ECheckBoxState::Checked;
	if (settings->GetEnableViewportRealtime()) {
		enable_viewport_realtime_checkbox_init_state = ECheckBoxState::Checked;
		FEdddisonPluginModule::SetAllViewportsRealtime(true, false);
	}
	else {
		enable_viewport_realtime_checkbox_init_state = ECheckBoxState::Unchecked;
	}




	SAssignNew(_toolkit_widget, SBorder) //SBorder
	.HAlign(HAlign_Fill)
	.IsEnabled(true)
    
	[
		SNew(SScrollBox)

		+SScrollBox::Slot()
		.HAlign(HAlign_Fill)
		.Padding(5.0f)
		[
			SNew(SBorder)
			.HAlign(HAlign_Fill)
			[
				SNew(SVerticalBox)

				+ SVerticalBox::Slot().HAlign(HAlign_Left).AutoHeight()
				[
					SNew(SHorizontalBox)

					+ SHorizontalBox::Slot().AutoWidth().Padding(4.0f, 4.0f, 4.0f, 4.0f)
					[
						SNew(STextBlock).AutoWrapText(true).Text(EDDDGUI_EDDDISON)
						.ColorAndOpacity(FLinearColor(1.f, 1.f, 0.f))
					]
				]

				+ SVerticalBox::Slot().HAlign(HAlign_Left).AutoHeight()
				[
					SNew(SHorizontalBox)

					+ SHorizontalBox::Slot().AutoWidth().Padding(4.0f, 2.0f, 2.0f, 4.0f)
					.HAlign(HAlign_Left).VAlign(VAlign_Center)
					[
						SNew(SButton).ToolTipText(EDDDGUI_OPEN_EDDDISON)
						.OnClicked(this, &FEdddisonPluginEdModeToolkit::OnEdddisonOpen)
						.ContentPadding(0.0f).Content()
						[
							SNew(SImage).Image(icon_green.GetIcon())
						]
					]
#ifdef USE_EDDDISON_CLOSE_BUTTON
					+ SHorizontalBox::Slot().AutoWidth().Padding(2.0f, 2.0f, 2.0f, 4.0f)
					.HAlign(HAlign_Left).VAlign(VAlign_Center)
					[
						SNew(SButton).ToolTipText(EDDDGUI_CLOSE_EDDDISON)
						.OnClicked(this, &FEdddisonPluginEdModeToolkit::OnEdddisonClose)
						.ContentPadding(0.0f).Content()
						[
							SNew(SImage).Image(icon_red.GetIcon())
						]
					]
#endif
#ifdef USE_EDDDISON_UPDATE_BUTTON
					+ SHorizontalBox::Slot().AutoWidth().Padding(2.0f, 2.0f, 2.0f, 4.0f)
					.HAlign(HAlign_Left).VAlign(VAlign_Center)
					[
						SNew(SButton).ToolTipText(EDDDGUI_UPDATE_EDDDISON)
						.OnClicked(this, &FEdddisonPluginEdModeToolkit::OnEdddisonUpdate)
						.ContentPadding(0.0f).Content()
						[
							SNew(SImage).Image(icon_update.GetIcon())
						]
					]
#endif
#ifdef USE_EDDDISON_CLEAR_BUTTON
					+ SHorizontalBox::Slot().AutoWidth().Padding(2.0f, 2.0f, 4.0f, 4.0f)
					.HAlign(HAlign_Left).VAlign(VAlign_Center)
					[
						SNew(SButton).ToolTipText(EDDDGUI_CLEAR)
						.OnClicked(this, &FEdddisonPluginEdModeToolkit::OnEdddisonClear)
						.ContentPadding(0.0f).Content()
						[
							SNew(SImage)
							.Image(icon_clear.GetIcon())
						]
					]
#endif
					
				]
#pragma  region autostart settings

				// enable autostart of edddison in editor
				+ SVerticalBox::Slot().HAlign(HAlign_Left).AutoHeight().Padding(6.0f, 4.0f, 4.0f, 4.0f)
					[

						SNew(SCheckBox).ToolTipText(EDDDGUI_AUTOSTART_WITH_EDITOR_TOOLTIP)
						.OnCheckStateChanged(this, &FEdddisonPluginEdModeToolkit::OnAutostartWithEditorCheckStateChanged)
					.IsChecked(autostart_with_editor_checkbox_init_state)
					[
						SNew(STextBlock).AutoWrapText(true)
						.Text(EDDDGUI_AUTOSTART_WITH_EDITOR_TEXT)
					]
					]

				// enable auto start of edddison in game
				+ SVerticalBox::Slot().HAlign(HAlign_Left).AutoHeight().Padding(6.0f, 2.0f, 4.0f, 4.0f)
					[

						SNew(SCheckBox).ToolTipText(EDDDGUI_AUTOSTART_WITH_GAME_TOOLTIP)
						.OnCheckStateChanged(this, &FEdddisonPluginEdModeToolkit::OnAutostartWithGameCheckStateChanged)
					.IsChecked(autostart_with_game_checkbox_init_state)
					[
						SNew(STextBlock).AutoWrapText(true)
						.Text(EDDDGUI_AUTOSTART_WITH_GAME_TEXT)
					]
					]

				// enable viewport realtime checkbox
				+ SVerticalBox::Slot().HAlign(HAlign_Left).AutoHeight().Padding(6.0f, 4.0f, 4.0f, 4.0f)
					[

						SNew(SCheckBox).ToolTipText(EDDDGUI_ENABLE_VIEWPORT_REALTIME_TOOLTIP)
						.OnCheckStateChanged(this, &FEdddisonPluginEdModeToolkit::OnEnableViewportRealtimeStateChanged)
					.IsChecked(enable_viewport_realtime_checkbox_init_state)
					[
						SNew(STextBlock).AutoWrapText(true)
						.Text(EDDDGUI_ENABLE_VIEWPORT_REALTIME_TEXT)
					]
					]
#pragma  endregion
					
			]
		]

		// Info
		+ SScrollBox::Slot().HAlign(HAlign_Center).Padding(5)
		[
			SNew(STextBlock).AutoWrapText(true).Text(EDDDGUI_HELPER)
		]

#pragma region cameras
		// Cameras
		+ SScrollBox::Slot().HAlign(HAlign_Fill).Padding(5)
		[
			SNew(SBorder).HAlign(HAlign_Fill)
			[
				SNew(SScrollBox)

				+ SScrollBox::Slot().HAlign(HAlign_Left)
				[
					SNew(SHorizontalBox)

					+ SHorizontalBox::Slot().Padding(4.0f, 4.0f, 4.0f, 4.0f).AutoWidth()
					[
						SNew(STextBlock).AutoWrapText(true).Text(EDDDGUI_CAMERAS)
						.ColorAndOpacity(FLinearColor(1.f, 1.f, 0.f))
					]
				]

				+ SScrollBox::Slot().HAlign(HAlign_Left)
				[
					SNew(SHorizontalBox)

					+ SHorizontalBox::Slot().AutoWidth().Padding(4.0f, 2.0f, 2.0f, 4.0f)
					.HAlign(HAlign_Left).VAlign(VAlign_Center)
					[
						SNew(SButton).ToolTipText(EDDDGUI_ADD_CAMERA)
						.OnClicked(this, &FEdddisonPluginEdModeToolkit::OnAddCamera)
						.ContentPadding(0.0f).Content()
						[
							SNew(SImage).Image(icon_add.GetIcon())
						]
					]
				]

				+ SScrollBox::Slot().HAlign(HAlign_Left).Padding(0.0f, 2.0f, 0.0f, 4.0f)
				[
					SNew(SScrollBox)

					+ SScrollBox::Slot()
					[
						SAssignNew(_listview_cameras, SListView<TSharedPtr<PluginCamera>>)
						.ListItemsSource(&FEdddisonPluginModule::_plugin_cameras) //The Items array is the source of this listview
						.OnGenerateRow(this, &FEdddisonPluginEdModeToolkit::OnGenerateRowForListCameras)
					]
				]
			]
		]
#pragma endregion

#pragma region boundingboxes
		// BBoxes
		+ SScrollBox::Slot().HAlign(HAlign_Fill).Padding(5)
		[
			SNew(SBorder).HAlign(HAlign_Fill)
			[
				SNew(SScrollBox)

				+ SScrollBox::Slot().HAlign(HAlign_Left)
				[
					SNew(SHorizontalBox)

					+ SHorizontalBox::Slot().Padding(4.0f, 4.0f, 4.0f, 4.0f).AutoWidth()
					[
						SNew(STextBlock).AutoWrapText(true).Text(EDDDGUI_BBOXES)
						.ColorAndOpacity(FLinearColor(1.f, 1.f, 0.f))
					]
				]

				+ SScrollBox::Slot().HAlign(HAlign_Left)
				[
					SNew(SHorizontalBox)

					+ SHorizontalBox::Slot().AutoWidth().Padding(4.0f, 2.0f, 2.0f, 4.0f)
					.HAlign(HAlign_Left).VAlign(VAlign_Center)
					[
						SNew(SButton).ToolTipText(EDDDGUI_ADD_BBOX)
						.OnClicked(this, &FEdddisonPluginEdModeToolkit::OnAddBBox)
						.ContentPadding(0.0f).Content()
						[
							SNew(SImage).Image(icon_add.GetIcon())
						]
					]
#ifdef USE_SUBSCRIBE_GLOBAL_BBOX_BUTTON
					+ SHorizontalBox::Slot().AutoWidth().Padding(2.0f, 2.0f, 2.0f, 4.0f)
					.HAlign(HAlign_Left).VAlign(VAlign_Center)
					[
						SNew(SButton).ToolTipText(EDDDGUI_GLOBAL_BBOX)
						.OnClicked(this, &FEdddisonPluginEdModeToolkit::OnSubscribeGlobalBBox)
						.ContentPadding(0.0f).Content()
						[
							SNew(SImage).Image(icon_bbox.GetIcon())
						]
					]
#endif
				]
					
				+ SScrollBox::Slot().HAlign(HAlign_Left).Padding(0.0f, 2.0f, 0.0f, 4.0f)
				[
					SNew(SScrollBox)

					+ SScrollBox::Slot()
					[
						SAssignNew(_listview_bboxes, SListView<TSharedPtr<PluginBoundingbox>>)
						.ListItemsSource(&FEdddisonPluginModule::_plugin_boundingboxes) //The Items array is the source of this listview
						.OnGenerateRow(this, &FEdddisonPluginEdModeToolkit::OnGenerateRowForListBBoxes)
					]
				]
			]
		]
#pragma endregion

#pragma region moveable

		+ SScrollBox::Slot().HAlign(HAlign_Fill).Padding(5)
		[
			SNew(SBorder).HAlign(HAlign_Fill)
			[
				SNew(SScrollBox)

				+ SScrollBox::Slot().HAlign(HAlign_Left)
				[
					SNew(SHorizontalBox)

					+ SHorizontalBox::Slot().Padding(4.0f, 4.0f, 4.0f, 4.0f).AutoWidth()
					[
						SNew(STextBlock).AutoWrapText(true).Text(EDDDGUI_MOVEABLES)
						.ColorAndOpacity(FLinearColor(1.f, 1.f, 0.f))
					]
				]

				+ SScrollBox::Slot().HAlign(HAlign_Left)
				[
					SNew(SHorizontalBox)

					+ SHorizontalBox::Slot().AutoWidth().Padding(4.0f, 2.0f, 2.0f, 4.0f)
					.HAlign(HAlign_Left).VAlign(VAlign_Center)
					[
						SNew(SButton).ToolTipText(EDDDGUI_ADD_MOVEABLE)
						.OnClicked(this, &FEdddisonPluginEdModeToolkit::OnAddMoveable)
						.ContentPadding(0.0f).Content()
						[
							SNew(SImage).Image(icon_add.GetIcon())
						]
					]
				]

				+ SScrollBox::Slot().HAlign(HAlign_Left).Padding(0.0f, 2.0f, 0.0f, 4.0f)	
				[
					SNew(SScrollBox)

					+ SScrollBox::Slot()
					[
						SAssignNew(_listview_moveables, SListView<TSharedPtr<PluginMoveableObject>>)
						.ListItemsSource(&FEdddisonPluginModule::_plugin_moveables) // The Items array is the source of this listview
						.OnGenerateRow(this, &FEdddisonPluginEdModeToolkit::OnGenerateRowForListMoveables)
					]
				]
			]
		]
#pragma endregion

#pragma region testing
		// TEST
		//+SVerticalBox::Slot()
		//	.HAlign(HAlign_Fill)
		//	.AutoHeight()
		//	.Padding(5)
		//    // set height of box!!!!
		//	[
		//		SNew(SBorder)
		//		.HAlign(HAlign_Fill)
		//		[
		//			SNew(SScrollBox)
		//				+ SScrollBox::Slot()
		//				.HAlign(HAlign_Left)

		//				[
		//					SNew(SHorizontalBox)
		//						+ SHorizontalBox::Slot()
		//						.AutoWidth()
		//						[
		//							SNew(STextBlock)
		//							.AutoWrapText(true)
		//							.Text(EDDDGUI_MOVEABLES)
		//							.ColorAndOpacity(FLinearColor(1.f, 1.f, 0.f))
		//						]
		//				]

		//				+ SScrollBox::Slot()
		//				.HAlign(HAlign_Left)

		//				[
		//					SNew(SHorizontalBox)
		//						+ SHorizontalBox::Slot()
		//						.AutoWidth()
		//						.Padding(0.0f, 0.0f, 4.0f, 0.0f)
		//						.HAlign(HAlign_Left)
		//						.VAlign(VAlign_Center)
		//						[
		//							SNew(SButton)
		//							.ToolTipText(EDDDGUI_ADD)
		//							.OnClicked(this, &FEdddisonPluginEdModeToolkit::OnAddMoveable)
		//							.ContentPadding(0.0f)
		//							.Content()
		//							[
		//								SNew(SImage)
		//								.Image(icon_add.GetIcon())
		//							]
		//						]
		//				]
		//				
		//		
		//			+ SScrollBox::Slot()
		//			.HAlign(HAlign_Left)
		//			[
		//				SNew(SScrollBox)
		//				+ SScrollBox::Slot()
		//				[
		//					SAssignNew(_listview_moveables, SListView<TSharedPtr<PluginMoveableObject>>)
		//					.ListItemsSource(&FEdddisonPluginModule::_plugin_moveables) // The Items array is the source of this listview
		//					.OnGenerateRow(this, &FEdddisonPluginEdModeToolkit::OnGenerateRowForListMoveables)
		//				]
		//			]
		//		]
		//	
		//	]
#pragma endregion

	];
		
	FModeToolkit::Init(InitToolkitHost);

	UpdateListViewCameras();
	UpdateListViewBBoxes();
	UpdateListViewMoveables();
}








/************************************************************************/
#pragma region edddison handling
/************************************************************************/

FReply FEdddisonPluginEdModeToolkit::OnEdddisonOpen()
{
	FEdddisonPluginModule::EdddisonOpen(true);

	return FReply::Handled();
}



#ifdef USE_EDDDISON_CLOSE_BUTTON
FReply FEdddisonPluginEdModeToolkit::OnEdddisonClose()
{
	FEdddisonPluginModule::EdddisonClose(true);

	return FReply::Handled();
}
#endif



#ifdef USE_EDDDISON_UPDATE_BUTTON
FReply FEdddisonPluginEdModeToolkit::OnEdddisonUpdate()
{
	FEdddisonPluginModule::EdddisonUpdate();

	return FReply::Handled();
}
#endif



#ifdef USE_EDDDISON_CLEAR_BUTTON
FReply FEdddisonPluginEdModeToolkit::OnEdddisonClear()
{
	FEdddisonPluginModule::EdddisonClear();

	UpdateListViewCameras();
	UpdateListViewBBoxes();
	UpdateListViewMoveables();

	return FReply::Handled();
}
#endif

#pragma endregion



/************************************************************************/
#pragma region Autostart settings events
/************************************************************************/
void FEdddisonPluginEdModeToolkit::OnAutostartWithEditorCheckStateChanged(ECheckBoxState newState) const
{
	UEdddisonSettings* settings = GetMutableDefault<UEdddisonSettings>();
	settings->SetAutoStartWithEditor(newState == ECheckBoxState::Checked);
}


void FEdddisonPluginEdModeToolkit::OnAutostartWithGameCheckStateChanged(ECheckBoxState newState) const
{
	UEdddisonSettings* settings = GetMutableDefault<UEdddisonSettings>();
	settings->SetAutostartWithGame(newState == ECheckBoxState::Checked);
}




void FEdddisonPluginEdModeToolkit::OnEnableViewportRealtimeStateChanged(ECheckBoxState newState) const
{
	const bool state = (newState == ECheckBoxState::Checked);
	UEdddisonSettings* settings = GetMutableDefault<UEdddisonSettings>();
	settings->SetEnableViewportRealtime(state);
	if (state) {
		FEdddisonPluginModule::SetAllViewportsRealtime(state, false);
	}
	else
	{
		FEdddisonPluginModule::RestoreViewportsRealtime(false);
	}
}

#pragma endregion



/************************************************************************/
#pragma region Camera components
/************************************************************************/

TSharedRef<ITableRow> FEdddisonPluginEdModeToolkit::OnGenerateRowForListCameras(TSharedPtr<PluginCamera> Item, const TSharedRef<STableViewBase>& OwnerTable)
{
	FString item_actor_label = "Camera has no label!";
	if (Item.IsValid()) {

		if(Item->MyActor != nullptr)
		{
			item_actor_label = *Item->MyActor->GetActorLabel();
		}
		else
		{
			// das sollte eher nicht passieren. isStale waere eine andere moeglichkeit.
			if(Item->MyActorBackup != nullptr)
			{
				item_actor_label = *Item->MyActorBackup->GetActorLabel();
			}
			else
			{
				item_actor_label = "Error! Camera does not exist.\nPlease delete and link a new one.";
			}
		}
		
	}


	FSlateIcon icon_remove("EdddisonEditorStyle", "EdddisonEditor.Remove");

	// Create the row
	return
		SNew(STableRow< TSharedPtr<FString> >, OwnerTable)
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
		.AutoWidth()
		.HAlign(HAlign_Right)
		.VAlign(VAlign_Center)
		.Padding(4.0f, 2.0f, 2.0f, 0.0f)
		[
			SNew(SButton)
			.ToolTipText(EDDDGUI_REMOVE)
		.OnClicked_Raw(this, &FEdddisonPluginEdModeToolkit::OnRemoveCamera, Item)
		.ContentPadding(0.0f)
		.Content()
		[
			SNew(SImage)
			.Image(icon_remove.GetIcon())
		]
		]
	+ SHorizontalBox::Slot()
		.AutoWidth()
		.Padding(2.0f, 2.0f, 4.0f, 0.0f)
		.HAlign(HAlign_Left)
		.VAlign(VAlign_Center)
		[
			SNew(STextBlock).Text(FText::FromString(item_actor_label))
		]
		];
}



void FEdddisonPluginEdModeToolkit::UpdateListViewCameras() const
{
	//Update the listview
	_listview_cameras->RequestListRefresh();
}



FReply FEdddisonPluginEdModeToolkit::OnAddCamera() const
{
	FEdddisonPluginModule::EdddisonAddCamera();

	UpdateListViewCameras();
	return FReply::Handled();
}



FReply FEdddisonPluginEdModeToolkit::OnRemoveCamera(TSharedPtr<PluginCamera> Item) const
{
	if (Item.IsValid()) {

		FEdddisonPluginModule::EdddisonRemoveCamera(Item);

		UpdateListViewCameras();
	}

	return FReply::Handled();
}

#pragma endregion



/************************************************************************/
#pragma region Boundingbox components
/************************************************************************/

TSharedRef<ITableRow> FEdddisonPluginEdModeToolkit::OnGenerateRowForListBBoxes(TSharedPtr<PluginBoundingbox> Item, const TSharedRef<STableViewBase>& OwnerTable)
{

	FString item_actor_label = "Bounding box has no label!";
	if (Item.IsValid()) {

		if (Item->MyActor != nullptr)
		{
			item_actor_label = *Item->MyActor->GetActorLabel();
		}
		else
		{
			// das sollte eher nicht passieren. isStale waere eine andere moeglichkeit.
			if (Item->MyActorBackup != nullptr)
			{
				item_actor_label = *Item->MyActorBackup->GetActorLabel();
			}
			else
			{
				item_actor_label = "Error! Bounding box does not exist.\nPlease delete and link a new one.";
			}
		}

	}



	FSlateIcon icon_remove("EdddisonEditorStyle", "EdddisonEditor.Remove");

	// Create the row
	return
		SNew(STableRow< TSharedPtr<FString> >, OwnerTable)
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
		.AutoWidth()
		.HAlign(HAlign_Right)
		.VAlign(VAlign_Center)
		.Padding(4.0f, 2.0f, 2.0f, 0.0f)
		[
			SNew(SButton)
			.ToolTipText(EDDDGUI_REMOVE)
		.OnClicked_Raw(this, &FEdddisonPluginEdModeToolkit::OnRemoveBBox, Item)
		.ContentPadding(0.0f)
		.Content()
		[
			SNew(SImage)
			.Image(icon_remove.GetIcon())
		]
		]
	+ SHorizontalBox::Slot()
		.AutoWidth()
		.Padding(2.0f, 2.0f, 4.0f, 0.0f)
		.HAlign(HAlign_Left)
		.VAlign(VAlign_Center)
		[
			SNew(STextBlock).Text(FText::FromString(item_actor_label))
		]
		];
}



void FEdddisonPluginEdModeToolkit::UpdateListViewBBoxes() const
{
	//Update the listview
	_listview_bboxes->RequestListRefresh();


}



FReply FEdddisonPluginEdModeToolkit::OnAddBBox() const
{
	FEdddisonPluginModule::EdddisonAddBBox();

	UpdateListViewBBoxes();
	return FReply::Handled();
}



FReply FEdddisonPluginEdModeToolkit::OnRemoveBBox(TSharedPtr<PluginBoundingbox> Item) const
{
	if (Item.IsValid()) {
		FEdddisonPluginModule::EdddisonRemoveBBox(Item);

		UpdateListViewBBoxes();
	}

	return FReply::Handled();
}



#ifdef USE_SUBSCRIBE_GLOBAL_BBOX_BUTTON
FReply FEdddisonPluginEdModeToolkit::OnSubscribeGlobalBBox()
{
	FEdddisonPluginModule::EdddisonSubscribeGlobalBBox();

	return FReply::Handled();
}
#endif

#pragma endregion



/************************************************************************/
#pragma region Moveable components
/************************************************************************/

TSharedRef<ITableRow> FEdddisonPluginEdModeToolkit::OnGenerateRowForListMoveables(TSharedPtr<PluginMoveableObject> Item, const TSharedRef<STableViewBase>& OwnerTable)
{

	FString item_actor_label = "Object has no label!";
	if (Item.IsValid()) {

		if (Item->MyActor != nullptr)
		{
			item_actor_label = *Item->MyActor->GetActorLabel();
		}
		else
		{
			// das sollte eher nicht passieren. isStale waere eine andere moeglichkeit.
			if (Item->MyActorBackup != nullptr)
			{
				item_actor_label = *Item->MyActorBackup->GetActorLabel();
			}
			else
			{
				item_actor_label = "Error! Object does not exist.\nPlease delete and link a new one.";
			}
		}

	}


	FSlateIcon icon_remove("EdddisonEditorStyle", "EdddisonEditor.Remove");

	// Create the row
	return
		SNew(STableRow< TSharedPtr<FString> >, OwnerTable)
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
		.AutoWidth()
		.HAlign(HAlign_Right)
		.VAlign(VAlign_Center)
		.Padding(4.0f, 2.0f, 2.0f, 0.0f)
		[
			SNew(SButton)
			.ToolTipText(EDDDGUI_REMOVE)
		.OnClicked_Raw(this, &FEdddisonPluginEdModeToolkit::OnRemoveMoveable, Item)
		.ContentPadding(0.0f)
		.Content()
		[
			SNew(SImage)
			.Image(icon_remove.GetIcon())
		]
		]
	+ SHorizontalBox::Slot()
		.AutoWidth()
		.Padding(2.0f, 2.0f, 4.0f, 0.0f)
		.HAlign(HAlign_Left)
		.VAlign(VAlign_Center)
		[
			SNew(STextBlock).Text(FText::FromString(item_actor_label))
		]
		];
}



void FEdddisonPluginEdModeToolkit::UpdateListViewMoveables() const
{
	//Update the listview
	_listview_moveables->RequestListRefresh();
}



FReply FEdddisonPluginEdModeToolkit::OnAddMoveable() const
{
	FEdddisonPluginModule::EdddisonAddMoveable();

	UpdateListViewMoveables();
	return FReply::Handled();
}



FReply FEdddisonPluginEdModeToolkit::OnRemoveMoveable(TSharedPtr<PluginMoveableObject> Item) const
{

	if (Item.IsValid()) {
		FEdddisonPluginModule::EdddisonRemoveMoveable(Item);

		UpdateListViewMoveables();
	}

	return FReply::Handled();
}

#pragma endregion


#undef LOCTEXT_NAMESPACE

#endif