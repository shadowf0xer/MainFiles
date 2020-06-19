/*
 * ****************************************************************************************************************
 * Copyright (c) 2016-2020 edddison technologies, inbox@edddison.com. All rights reserved.
 * Unauthorized copying of this file, via any medium is strictly prohibited.
 * edddison technologies and edddison is protected by copyright and trademarks and is proprietary and confidential.
 * ****************************************************************************************************************
 */

#pragma once

#include "EdddisonSocketInterface.h"

class SocketCamera
{
	public:

		std::string _scene_id;
		std::string _gui_name;		

	public:

		SocketCamera();
		SocketCamera(
			std::string scene_id, 
			std::string gui_name);

		virtual ~SocketCamera();

		virtual void move(
			const float x, const float y, const float z,
			const float ya, const float pa, const float ra,
			const float fov,
			const float fx, const float fy, const float fz,
			const float ux, const float uy, const float uz) = 0;

		virtual void subscribe() = 0;
		virtual void unsubscribe() = 0;

		inline std::string getSceneId() { return _scene_id; }
};
