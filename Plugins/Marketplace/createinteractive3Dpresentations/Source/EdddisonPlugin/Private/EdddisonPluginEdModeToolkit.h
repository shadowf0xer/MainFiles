/*
 * ****************************************************************************************************************
 * Copyright (c) 2016-2020 edddison technologies, inbox@edddison.com. All rights reserved.
 * Unauthorized copying of this file, via any medium is strictly prohibited.
 * edddison technologies and edddison is protected by copyright and trademarks and is proprietary and confidential.
 * ****************************************************************************************************************
 */


#if WITH_EDITOR

#pragma once

#include "EdddisonPluginPrivatePCH.h"
#include "EdddisonPluginCamera.h"
#include "EdddisonPluginBBox.h"
#include "EdddisonPluginMoveable.h"


#define LOCTEXT_NAMESPACE "EdddisonPlugin"





class FEdddisonPluginEdModeToolkit : public FModeToolkit
{

	public:
		FEdddisonPluginEdModeToolkit();
		~FEdddisonPluginEdModeToolkit();



		/************************************************************************/
		/* FModeToolkit interface                                               */
		/************************************************************************/

		virtual void Init(const TSharedPtr<IToolkitHost>& InitToolkitHost) override;

		

		/************************************************************************/
		/* IToolkit interface                                                   */
		/************************************************************************/

		virtual FName GetToolkitFName() const override;
		virtual FText GetBaseToolkitName() const override;
		virtual class FEdMode* GetEditorMode() const override;
		virtual FText GetToolkitToolTipText() const override;
		virtual TSharedPtr<class SWidget> GetInlineContent() const override;



	private:
		TSharedPtr<SWidget> _toolkit_widget;



		/************************************************************************/
		/* edddison handling                                                    */
		/************************************************************************/

		FReply OnEdddisonOpen();

#ifdef USE_EDDDISON_CLOSE_BUTTON
		FReply OnEdddisonClose();
#endif

#ifdef USE_EDDDISON_UPDATE_BUTTON
		FReply OnEdddisonUpdate();
#endif

#ifdef USE_EDDDISON_CLEAR_BUTTON
		FReply OnEdddisonClear();
#endif



		/************************************************************************/
		/* Settings                                                             */
		/************************************************************************/

		SCheckBox _autostart_with_editor_checkbox;
		ECheckBoxState isAutostartWithEditorChecked();
		void OnAutostartWithEditorCheckStateChanged(ECheckBoxState newState) const;

		//ECheckBoxState::Type isAutostartWithGameChecked();
		void OnAutostartWithGameCheckStateChanged(ECheckBoxState newState) const;
	
		void OnEnableViewportRealtimeStateChanged(ECheckBoxState newState) const;


		/************************************************************************/
		/* Camera components                                                    */
		/************************************************************************/

		TSharedPtr< SListView< TSharedPtr<PluginCamera> > > _listview_cameras;
		TSharedRef<ITableRow> OnGenerateRowForListCameras(TSharedPtr<PluginCamera> Item, const TSharedRef<STableViewBase>& OwnerTable);
		void UpdateListViewCameras() const;
		FReply OnAddCamera() const;
		FReply OnRemoveCamera(TSharedPtr<PluginCamera> Item) const;



		/************************************************************************/
		/* Boundingbox components                                               */
		/************************************************************************/

		TSharedPtr< SListView< TSharedPtr<PluginBoundingbox> > > _listview_bboxes;
		TSharedRef<ITableRow> OnGenerateRowForListBBoxes(TSharedPtr<PluginBoundingbox> Item, const TSharedRef<STableViewBase>& OwnerTable);
		void UpdateListViewBBoxes() const;
		FReply OnAddBBox() const;
		FReply OnRemoveBBox(TSharedPtr<PluginBoundingbox> Item) const;
#ifdef USE_SUBSCRIBE_GLOBAL_BBOX_BUTTON
		FReply OnSubscribeGlobalBBox();
#endif



		/************************************************************************/
		/* Moveable object components                                           */
		/************************************************************************/

		TSharedPtr< SListView< TSharedPtr<PluginMoveableObject> > > _listview_moveables;		
		TSharedRef<ITableRow> OnGenerateRowForListMoveables(TSharedPtr<PluginMoveableObject> Item, const TSharedRef<STableViewBase>& OwnerTable);
		void UpdateListViewMoveables() const;
		FReply OnAddMoveable() const;
		FReply OnRemoveMoveable(TSharedPtr<PluginMoveableObject> Item) const;


};

#undef LOCTEXT_NAMESPACE

#endif