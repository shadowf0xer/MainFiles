/*
 * ****************************************************************************************************************
 * Copyright (c) 2016-2020 edddison technologies, inbox@edddison.com. All rights reserved.
 * Unauthorized copying of this file, via any medium is strictly prohibited.
 * edddison technologies and edddison is protected by copyright and trademarks and is proprietary and confidential.
 * ****************************************************************************************************************
 */

#pragma once

#include "EdddisonSocketInterface.h"

class FEdddisonSocket 
{
	private:
		// Handle to the DLL we will load
		static void* _library_handle;

		static bool _is_connected_to_eddd;

		static void loadLibraryMethods();
		static void unloadLibraryMethods();

	public:
		// DLL handlers
		static bool _is_library_loaded();
		static void loadLibrary();
		static void unloadLibrary();
		static FString getLibraryPath();

		// Edddison
		static void Open();
		static void Open(FString project_root_file_path);
		static void Open(FString edddison_project_key, FString edddison_project_title, FString user_project_filepath, FString user_project_unique_id);
		static void Close();
		static bool IsConnected();

#if PLATFORM_WINDOWS
		static void __stdcall DisconnectCb();
		static void __stdcall ConnectCb();
#endif

		static FString _library_path_relative;
		static FString _library_start_param_plugin_field;
		static FString _library_start_param_plugin_value;

		static FString _edddison_project_key;
		static FString _user_project_title;
		static FString _user_project_filepath;
		static FString _user_project_unique_id;

		static void EmptyLists();

		static void SubscribeGlobalBBox(
			std::string scene_id,
			std::string gui_name,
			float po_x, float po_y, float po_z,
			float vx_x, float vx_y, float vx_z,
			float vy_x, float vy_y, float vy_z,
			float vz_x, float vz_y, float vz_z);
};
