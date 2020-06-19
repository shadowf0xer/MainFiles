/*
 * ****************************************************************************************************************
 * Copyright (c) 2016-2020 edddison technologies, inbox@edddison.com. All rights reserved.
 * Unauthorized copying of this file, via any medium is strictly prohibited.
 * edddison technologies and edddison is protected by copyright and trademarks and is proprietary and confidential.
 * ****************************************************************************************************************
 */


#include "EdddisonSocketCamera.h"
#include "EdddisonPluginPrivatePCH.h"
#include "EdddisonSocket.h"





SocketCamera::SocketCamera() : _scene_id(""), _gui_name("")
{
}


/**
* CTOR edddison Camera.
*
* @param scene_id Id in your scene. Has to be unique.
* @param gui_name The name which is shown in the edddison gui.
*/
SocketCamera::SocketCamera(std::string scene_id, std::string gui_name) :
	_scene_id(scene_id),
	_gui_name(gui_name)
{
}



SocketCamera::~SocketCamera(){}
