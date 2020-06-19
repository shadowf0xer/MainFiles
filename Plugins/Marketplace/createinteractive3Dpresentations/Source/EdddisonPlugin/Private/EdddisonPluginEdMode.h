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

class FEdddisonPluginEdMode : public FEdMode
{
	public:
		const static FEditorModeID EM_EdddisonPluginEdModeId;

	public:
		FEdddisonPluginEdMode();
		virtual ~FEdddisonPluginEdMode();

		virtual void Enter() override;
		virtual void Exit() override;
		//virtual void Tick(FEditorViewportClient* ViewportClient, float DeltaTime) override;
		//virtual void Render(const FSceneView* View, FViewport* Viewport, FPrimitiveDrawInterface* PDI) override;
		//virtual void ActorSelectionChangeNotify() override;
		bool UsesToolkits() const override;
};

#endif
