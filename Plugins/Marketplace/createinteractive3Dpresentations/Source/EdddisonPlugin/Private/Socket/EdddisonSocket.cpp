/*
 * ****************************************************************************************************************
 * Copyright (c) 2016-2020 edddison technologies, inbox@edddison.com. All rights reserved.
 * Unauthorized copying of this file, via any medium is strictly prohibited.
 * edddison technologies and edddison is protected by copyright and trademarks and is proprietary and confidential.
 * ****************************************************************************************************************
 */


#include "EdddisonSocket.h"
#include "EdddisonPluginPrivatePCH.h"
#include "EdddisonVersion.h"
#include <string>


#if PLATFORM_WINDOWS

#include "Windows/AllowWindowsPlatformTypes.h"
// https://answers.unrealengine.com/questions/27560/trouble-using-windows-includes-with-dword-int.html
#include <winreg.h>





/**
 * Get key from windows registry value.
 */
LONG GetStringRegKey(HKEY hKey, const std::wstring &strValueName, std::wstring &strValue, const std::wstring &strDefaultValue)
{
	strValue = strDefaultValue;
	WCHAR szBuffer[512];
	DWORD dwBufferSize = sizeof(szBuffer);
	ULONG nError;
	nError = RegQueryValueExW(hKey, strValueName.c_str(), 0, NULL, (LPBYTE)szBuffer, &dwBufferSize);
	if (ERROR_SUCCESS == nError)
	{
		strValue = szBuffer;
	}
	return nError;
}


#endif





#define LOCTEXT_NAMESPACE "EdddisonPlugin"







void* FEdddisonSocket::_library_handle = nullptr;
bool FEdddisonSocket::_is_connected_to_eddd = false;


/* edddison start parameter */
FString FEdddisonSocket::_library_start_param_plugin_field = "--plugin=";
FString FEdddisonSocket::_library_start_param_plugin_value = "UNREAL";
FString FEdddisonSocket::_edddison_project_key = "";
FString FEdddisonSocket::_user_project_title = "";
FString FEdddisonSocket::_user_project_filepath = "";
FString FEdddisonSocket::_user_project_unique_id = "";


FString _library_file_name = "EdddisonSocket.dll";//EdddisonSocket_v15.dll";
#if defined(_WIN64)
FString FEdddisonSocket::_library_path_relative = TEXT("/app/bin/x64/")+_library_file_name;
#else
//#ifdef WIN32
FString FEdddisonSocket::_library_path_relative = TEXT("/app/bin/Win32/") + _library_file_name;
#endif





bool FEdddisonSocket::_is_library_loaded()
{
	return _library_handle != nullptr;
}



bool FEdddisonSocket::IsConnected()
{
	return _is_connected_to_eddd;
}



/**
 * Get path to edddison library from windows registry.
 *
 * @return Path to edddison library.
 */
FString FEdddisonSocket::getLibraryPath()
{
	FString LibraryPath = TEXT("");

#if PLATFORM_WINDOWS
	HKEY key;
	if (ERROR_SUCCESS == RegOpenKey(HKEY_LOCAL_MACHINE, TEXT("Software\\edddison\\editor"), &key))
	{
		std::wstring strValueName = TEXT("location");
		std::wstring strValue = TEXT("");
		std::wstring strDefaultValue = TEXT("");
		if (ERROR_SUCCESS == GetStringRegKey(key, strValueName, strValue, strDefaultValue))
		{
			FString ExePath = FString(strValue.c_str());
			FString BaseDir = FPaths::GetPath(ExePath);
			LibraryPath = FPaths::Combine(*BaseDir, *_library_path_relative);
		}
		else
		{
			// Unable to open registry value
		}
	}
	else
	{
		// Unable to open registry key
	}
	RegCloseKey(key);
#endif

	return LibraryPath;
}



/**
 * Load edddison library.
 */
void FEdddisonSocket::loadLibrary()
{
	FString LibraryPath = getLibraryPath();

	FEdddisonLog::Log(FString::Printf(EDDDLOG_LIBRARY_PATH, *LibraryPath));

#if PLATFORM_WINDOWS
	_library_handle = !LibraryPath.IsEmpty() ? FPlatformProcess::GetDllHandle(*LibraryPath) : nullptr;
#endif
	if(!_library_handle)
		FMessageDialog::Open(EAppMsgType::Ok, EDDDGUI_DLL_MISSING);

	loadLibraryMethods();
}



/**
 * Unload edddison library.
 */
void FEdddisonSocket::unloadLibrary()
{
	unloadLibraryMethods();

	// Free the library handle
	if (_library_handle)
	{
#if PLATFORM_WINDOWS
		FPlatformProcess::FreeDllHandle(_library_handle);
#endif
	}

	_library_handle = nullptr;
}



/**
 * Register edddison library methods.
 */
void FEdddisonSocket::loadLibraryMethods()
{
	if (!_is_library_loaded())
		return;

	bool is_func_missing_error = false;

#if PLATFORM_WINDOWS

	is_func_missing_error = (nullptr == (getVersion_edddDll = (getVersion)FPlatformProcess::GetDllExport(_library_handle, TEXT("getVersion")))) || is_func_missing_error;
	is_func_missing_error = (nullptr == (connect_edddDll = (CbConnect)FPlatformProcess::GetDllExport(_library_handle, TEXT("connect")))) || is_func_missing_error;
	is_func_missing_error = (nullptr == (connectEdddisonWithParameter_edddDll = (CbConnectEdddisonWithParameter)FPlatformProcess::GetDllExport(_library_handle, TEXT("connectEdddisonWithParameter")))) || is_func_missing_error;
	is_func_missing_error = (nullptr == (disconnect_edddDll = (CbDisconnect)FPlatformProcess::GetDllExport(_library_handle, TEXT("disconnect")))) || is_func_missing_error;
	is_func_missing_error = (nullptr == (setUpdateSection_edddDll = (setUpdateSection)FPlatformProcess::GetDllExport(_library_handle, TEXT("setUpdateSection")))) || is_func_missing_error;
	is_func_missing_error = (nullptr == (initSystem_edddDll = (initSystem)FPlatformProcess::GetDllExport(_library_handle, TEXT("initSystem")))) || is_func_missing_error;
	is_func_missing_error = (nullptr == (startEdddison_edddDll = (startEdddison)FPlatformProcess::GetDllExport(_library_handle, TEXT("startEdddison")))) || is_func_missing_error;
	is_func_missing_error = (nullptr == (startEdddisonWithParameter_edddDll = (startEdddisonWithParameter)FPlatformProcess::GetDllExport(_library_handle, TEXT("startEdddisonWithParameter")))) || is_func_missing_error;
	is_func_missing_error = (nullptr == (showDebug_edddDll = (showDebug)FPlatformProcess::GetDllExport(_library_handle, TEXT("showDebug")))) || is_func_missing_error;
	is_func_missing_error = (nullptr == (emptyLists_edddDll = (emptyLists)FPlatformProcess::GetDllExport(_library_handle, TEXT("emptyLists")))) || is_func_missing_error;
	is_func_missing_error = (nullptr == (isConnectedToEdddison_edddDll = (isConnectedToEdddison)FPlatformProcess::GetDllExport(_library_handle, TEXT("isConnectedToEdddison")))) || is_func_missing_error;
	is_func_missing_error = (nullptr == (addDisconnectionCallBack_edddDll = (addDisconnectionCallBack)FPlatformProcess::GetDllExport(_library_handle, TEXT("addDisconnectionCallBack")))) || is_func_missing_error;
	is_func_missing_error = (nullptr == (addConnectionCallBack_edddDll = (addConnectionCallBack)FPlatformProcess::GetDllExport(_library_handle, TEXT("addConnectionCallBack")))) || is_func_missing_error;
	is_func_missing_error = (nullptr == (getExePath_edddDll = (getExePath)FPlatformProcess::GetDllExport(_library_handle, TEXT("getExePath")))) || is_func_missing_error;
	is_func_missing_error = (nullptr == (getDllPath_edddDll = (getDllPath)FPlatformProcess::GetDllExport(_library_handle, TEXT("getDllPath")))) || is_func_missing_error;
	is_func_missing_error = (nullptr == (subscribeChannel_edddDll = (subscribeChannel)FPlatformProcess::GetDllExport(_library_handle, TEXT("subscribeChannel")))) || is_func_missing_error;
	is_func_missing_error = (nullptr == (subscribeCamera_edddDll = (subscribeCamera)FPlatformProcess::GetDllExport(_library_handle, TEXT("subscribeCameraWithID")))) || is_func_missing_error;
	is_func_missing_error = (nullptr == (unSubscribeCamera_edddDll = (unSubscribeCamera)FPlatformProcess::GetDllExport(_library_handle, TEXT("unSubscribeCamera")))) || is_func_missing_error;
	is_func_missing_error = (nullptr == (subscribeBoundingBox_edddDll = (subscribeBoundingBox)FPlatformProcess::GetDllExport(_library_handle, TEXT("subscribeBoundingBox")))) || is_func_missing_error;
	is_func_missing_error = (nullptr == (unSubscribeBoundingBox_edddDll = (unSubscribeBoundingBox)FPlatformProcess::GetDllExport(_library_handle, TEXT("unSubscribeBoundingBox")))) || is_func_missing_error;
	is_func_missing_error = (nullptr == (subscribeModel_edddDll = (subscribeModel)FPlatformProcess::GetDllExport(_library_handle, TEXT("subscribeModelWithID")))) || is_func_missing_error;
	is_func_missing_error = (nullptr == (unSubscribeModel_edddDll = (unSubscribeModel)FPlatformProcess::GetDllExport(_library_handle, TEXT("unSubscribeModel")))) || is_func_missing_error;

#endif
	if (is_func_missing_error)
	{
		// inform the user
		FMessageDialog::Open(EAppMsgType::Ok, EDDDGUI_SOCKET_FUNC_MISS);
	}
}



void FEdddisonSocket::unloadLibraryMethods()
{

#if PLATFORM_WINDOWS
	getVersion_edddDll = nullptr;
	connect_edddDll = nullptr;
	connectEdddisonWithParameter_edddDll = nullptr;
	disconnect_edddDll = nullptr;
	setUpdateSection_edddDll = nullptr;
	initSystem_edddDll = nullptr;
	startEdddison_edddDll = nullptr;
	startEdddisonWithParameter_edddDll = nullptr;
	showDebug_edddDll = nullptr;
	emptyLists_edddDll = nullptr;
	isConnectedToEdddison_edddDll = nullptr;
	addDisconnectionCallBack_edddDll = nullptr;
	addConnectionCallBack_edddDll = nullptr;
	getExePath_edddDll = nullptr;
	getDllPath_edddDll = nullptr;
	subscribeChannel_edddDll = nullptr;
	subscribeCamera_edddDll = nullptr;
	unSubscribeCamera_edddDll = nullptr;
	subscribeBoundingBox_edddDll = nullptr;
	unSubscribeBoundingBox_edddDll = nullptr;
	subscribeModel_edddDll = nullptr;
	unSubscribeModel_edddDll = nullptr;
#endif
}



void FEdddisonSocket::Open()
{
	FEdddisonSocket::Open("", "","","");
}


/** 
 * Start the edddison. Tell it your project root folder and the project id
 *
 * @param project_root_file_path Path to root folder of the 3d application project.
 * @param project_unique_id A unique id of the 3d application project. If non, use an empty string.
 */
void FEdddisonSocket::Open(FString edddison_project_key, FString edddison_project_title, FString user_project_filepath, FString user_project_unique_id)
{

	// returns in three number format like: 1.2.9
	EdddisonVersion eddd_version(getVersion_edddDll());


	// check if we have an older edddison
	if (eddd_version.isLessThan("1.3.0")) {
		FEdddisonSocket::Open(user_project_filepath);
		return;
	}



	FEdddisonLog::Log(FString::Printf(EDDDLOG_OPEN_EDDDISON,
		*(_library_start_param_plugin_field + _library_start_param_plugin_value)));

	if (!_is_library_loaded())
	{
		FEdddisonLog::Log(EDDDLOG_LIB_NOT_LOADED);
		return;
	}

	if (IsConnected())
	{
		FEdddisonLog::Log(EDDDLOG_ALREADY_CONNECT);
		return;
	}


	_edddison_project_key = edddison_project_key;
	_user_project_title = edddison_project_title;


	if (user_project_filepath.IsEmpty()) {

		/* Get path for current project. Use path to project root folder or project config file! */
		_user_project_filepath = FPaths::GetProjectFilePath();
		_user_project_filepath = FPaths::ConvertRelativePathToFull(FEdddisonSocket::_user_project_filepath);
	}
	else {
		_user_project_filepath = user_project_filepath;
	}


	if (user_project_unique_id.IsEmpty()) {

		/* Get the projects unique id from config */
		FString uid;
		GConfig->GetString(
			TEXT("/Script/EngineSettings.GeneralProjectSettings"),
			TEXT("ProjectID"),
			uid,
			GGameIni
		);

		_user_project_unique_id = uid;

	}
	else {
		_user_project_unique_id = user_project_unique_id;
	}



#if PLATFORM_WINDOWS
#ifdef EDDDISON_LOG_SOCKET
	showDebug_edddDll();
#endif

	setUpdateSection_edddDll(TCHAR_TO_ANSI(*_library_start_param_plugin_value));

	// start the edddison editor application
	startEdddisonWithParameter_edddDll(
		TCHAR_TO_ANSI(*_library_start_param_plugin_value),
		TCHAR_TO_ANSI(*_edddison_project_key),
		TCHAR_TO_ANSI(*_user_project_title),
		TCHAR_TO_ANSI(*_user_project_filepath),
		TCHAR_TO_ANSI(*_user_project_unique_id));


	FEdddisonLog::Log(EDDDLOG_CONNECTING);

	/* for debugging only */
#ifdef EMPTY_EDDDISON_LISTS_AFTER_START_EDDDISON
	_emptyLists();
#endif

	// Unity : edddDll_initSystem("x", "z", "-y");
	// Unreal: edddDll_initSystem("x", "y", "z");

	addDisconnectionCallBack_edddDll(DisconnectCb);
	addConnectionCallBack_edddDll(ConnectCb);
#endif

	
	

	FEdddisonLog::Log(FString::Printf(EDDDLOG_PROJECT_ID, *_user_project_filepath, *_user_project_unique_id));

#if PLATFORM_WINDOWS
	connectEdddisonWithParameter_edddDll(
		TCHAR_TO_ANSI(*_library_start_param_plugin_value),
		TCHAR_TO_ANSI(*_edddison_project_key),
		TCHAR_TO_ANSI(*_user_project_title),
		TCHAR_TO_ANSI(*_user_project_filepath),
		TCHAR_TO_ANSI(*_user_project_unique_id));
#endif

	FEdddisonLog::Log(EDDDLOG_CONNECTED);
}





/** 
 * Deprecated since edddison 1.3.1
 */
void FEdddisonSocket::Open(FString project_root_file_path)
{
	FEdddisonLog::Log(FString::Printf(EDDDLOG_OPEN_EDDDISON,
		*(_library_start_param_plugin_field + _library_start_param_plugin_value)));

	if (!_is_library_loaded())
	{
		FEdddisonLog::Log(EDDDLOG_LIB_NOT_LOADED);
		return;
	}

	if (IsConnected())
	{
		FEdddisonLog::Log(EDDDLOG_ALREADY_CONNECT);
		return;
	}

#if PLATFORM_WINDOWS
#ifdef EDDDISON_LOG_SOCKET
	showDebug_edddDll();
#endif

	setUpdateSection_edddDll(TCHAR_TO_ANSI(*_library_start_param_plugin_value));

	startEdddison_edddDll(TCHAR_TO_ANSI(*(_library_start_param_plugin_field + _library_start_param_plugin_value)));


	FEdddisonLog::Log(EDDDLOG_CONNECTING);

	/* for debuggin only */
#ifdef EMPTY_EDDDISON_LISTS_AFTER_START_EDDDISON
	_emptyLists();
#endif

	// Unity : edddDll_initSystem("x", "z", "-y");
	// Unreal: edddDll_initSystem("x", "y", "z");

	addDisconnectionCallBack_edddDll(DisconnectCb);
	addConnectionCallBack_edddDll(ConnectCb);
#endif

	if (project_root_file_path.IsEmpty()) {

		/* Get path for current project. Use path to project root folder or project config file! */
		_user_project_filepath = FPaths::GetProjectFilePath();
		_user_project_filepath = FPaths::ConvertRelativePathToFull(FEdddisonSocket::_user_project_filepath);
	}
	else {
		_user_project_filepath = project_root_file_path;
	}

	FEdddisonLog::Log(FString::Printf(EDDDLOG_PROJECT_ID, *_user_project_filepath));

#if PLATFORM_WINDOWS
	connect_edddDll(TCHAR_TO_ANSI(*_library_start_param_plugin_value), TCHAR_TO_ANSI(*_user_project_filepath));
#endif

	_is_connected_to_eddd = true;

	FEdddisonLog::Log(EDDDLOG_CONNECTED);
}





void FEdddisonSocket::Close()
{
	FEdddisonLog::Log(EDDDLOG_CLOSING);

	if (!_is_library_loaded())
	{
		FEdddisonLog::Log(EDDDLOG_LIB_NOT_LOADED);
		return;
	}

	if (!IsConnected())
	{
		return;
	}


	FEdddisonLog::Log(EDDDLOG_DISCONNECTING);

#if PLATFORM_WINDOWS
	disconnect_edddDll();
#endif

#ifdef SLEEP_WHEN_EDDDISON_DISCONNECT
	// avoid crash if unload plugin when edddison is still on
	FPlatformProcess::Sleep(EDDDSLEEP_SECS_WHEN_EDDDISON_DISCONNECT); // seconds
#endif

	// override callback
	_is_connected_to_eddd = false;

	FEdddisonLog::Log(EDDDLOG_DISCONNECTED);

}




void FEdddisonSocket::DisconnectCb()
{
	_is_connected_to_eddd = false;

	FEdddisonLog::Log(EDDDLOG_CALLBACK_DISCONN);
}



void FEdddisonSocket::ConnectCb()
{
	_is_connected_to_eddd = true;

	FEdddisonLog::Log(EDDDLOG_CALLBACK_CONN);
}



void FEdddisonSocket::EmptyLists()
{
#if PLATFORM_WINDOWS
	emptyLists_edddDll();
#endif
}



void FEdddisonSocket::SubscribeGlobalBBox(
	std::string scene_id,
	std::string gui_name,
	float po_x, float po_y, float po_z,
	float vx_x, float vx_y, float vx_z,
	float vy_x, float vy_y, float vy_z,
	float vz_x, float vz_y, float vz_z)
{
	if (!_is_library_loaded())
	{
		FEdddisonLog::Log(EDDDLOG_LIB_NOT_LOADED);
		return;
	}

#if PLATFORM_WINDOWS
	subscribeBoundingBox_edddDll(
		scene_id.c_str(),
		gui_name.c_str(),
		po_x, po_y, po_z,
		vx_x, vx_y, vx_z,
		vy_x, vy_y, vy_z,
		vz_x, vz_y, vz_z);
#endif
}

#undef LOCTEXT_NAMESPACE
