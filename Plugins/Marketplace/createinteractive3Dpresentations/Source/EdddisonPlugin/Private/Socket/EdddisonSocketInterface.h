/*
 * ****************************************************************************************************************
 * Copyright (c) 2016-2020 edddison technologies, inbox@edddison.com. All rights reserved.
 * Unauthorized copying of this file, via any medium is strictly prohibited.
 * edddison technologies and edddison is protected by copyright and trademarks and is proprietary and confidential.
 * ****************************************************************************************************************
 */

#ifndef __EDDD__EDDDISONSOCKETINTERFACE_H__
#define __EDDD__EDDDISONSOCKETINTERFACE_H__

#include <string>
#include <functional>
#include <vector>

#if PLATFORM_WINDOWS
// use Unreals MinWindows.h to include Windows.h
#include "Windows/MinWindows.h"

extern "C" {
	
	
	/**
	* Deprecated since EdddisonSocket.dll 1.3.1. Use startEdddisonWithParameter.
	*
	* Start the edddison with plugin type.
	*/
	typedef void(__stdcall *startEdddison)(const char*);// "--plugin=SKETCHUP" for prototype
	startEdddison startEdddison_edddDll;



	/**
	* Start the edddison with parameter.
	*
	* @param edddison_plugin_type Mandatory, the type of the edddison plugin. Case sensitive! "INTER3D" for Interviews3D, "TPS" for Tecnomatix Plant Simulation
	* @param edddison_project_key Optional, the edddison project key. Use empty String if none.
	* @param user_project_title Optional, the user project title. Use empty String if none.
	* @param user_project_filepath Optional, the user's project root folder path, executable filepath or config filepath. Use empty String if none.
	* @param user_project_unique_id Optional, the unique id of the user's project. Use empty String if none.
	*/
	typedef void(__stdcall *startEdddisonWithParameter)(const char*, const char*, const char*, const char*, const char*);
	startEdddisonWithParameter startEdddisonWithParameter_edddDll;



	/**
	* Get edddison version number. E.g. 1.3.1
	*/
	typedef LPCSTR(__stdcall *getVersion)();
	getVersion getVersion_edddDll;



	/**
	*Is connected to edddison?
	*/
	typedef BOOL(__stdcall *isConnectedToEdddison)();
	isConnectedToEdddison isConnectedToEdddison_edddDll;



	/**
	* Deprecated since EdddisonSocket.dll 1.3.1. Use CbConnectEdddisonWithParameter!
	* Connect to edddison.
	*/
	typedef void(__stdcall *CbConnect)(const char*, const char*); // plugin type, project root folder path (or project config file path in root folder)
	CbConnect connect_edddDll = NULL;



	/**
	* Connect to the edddison with parameter.
	*
	* @param edddison_plugin_type Mandatory, the type of the edddison plugin. Case sensitive! "INTER3D" for Interviews3D, "TPS" for Tecnomatix Plant Simulation
	* @param edddison_project_key Optional, the edddison project key. Use empty String if none.
	* @param user_project_title Optional, the user project title. Use empty String if none.
	* @param user_project_filepath Optional, the user's project root folder path, executable filepath or config filepath. Use empty String if none.
	* @param user_project_unique_id Optional, the unique id of the user's project. Use empty String if none.
	*/
	typedef void(__stdcall *CbConnectEdddisonWithParameter)(const char*, const char*, const char*, const char*, const char*);
	CbConnectEdddisonWithParameter connectEdddisonWithParameter_edddDll = NULL;



	/**
	* Connect callback.
	*/
	typedef void(__stdcall *CbConnection)();



	/**
	* Disconnect callback.
	*/
	typedef void(__stdcall *CbDisconnect)();
	CbDisconnect disconnect_edddDll = NULL;




	/**
	* Add callback to on connect to edddison.
	*/
	typedef void(__stdcall *addDisconnectionCallBack)(CbConnection);//ConnectionCallBack onDisconnect
	addDisconnectionCallBack addDisconnectionCallBack_edddDll;



	/**
	* Add callback to on disconnect from edddison.
	*/
	typedef void(__stdcall *addConnectionCallBack)(CbConnection);//ConnectionCallBack onDisconnect
	addConnectionCallBack addConnectionCallBack_edddDll;



	/** Subscribe a boundingbox to edddison. */
	typedef void(__stdcall *subscribeBoundingBox)(LPCSTR, LPCSTR, float, float, float, float, float, float, float, float, float, float, float, float);
	subscribeBoundingBox subscribeBoundingBox_edddDll;



	/** Unsubscribe a boundingbox from edddison. */
	typedef void(__stdcall *unSubscribeBoundingBox)(LPCSTR);// boundingbox id
	unSubscribeBoundingBox unSubscribeBoundingBox_edddDll;



	/** Subscribe a boundingbox to edddison. */
	typedef void(__stdcall *subscribeCamera)(LPCSTR, LPCSTR, void(LPCSTR, float, float, float, float, float, float, float, float, float, float, float, float, float)); // camera scene id, camera gui name, camera move function
	subscribeCamera subscribeCamera_edddDll;


	/** Unsubscribe a boundingbox from edddison. */
	typedef void(__stdcall *unSubscribeCamera)(LPCSTR);// camera id
	unSubscribeCamera unSubscribeCamera_edddDll;



	/** Subscribe a moveable to edddison. */
	typedef void(__stdcall *subscribeModel)(LPCSTR, LPCSTR, float, float, float, float, float, float, float, float, float, float, float, float, void(LPCSTR, int, float, float, float, float, float, float, float, float, float, float, float, float));
	subscribeModel subscribeModel_edddDll;



	/** Unsubscribe a moveable from edddison. */
	typedef void(__stdcall *unSubscribeModel)(LPCSTR);// moveable object id
	unSubscribeModel unSubscribeModel_edddDll;


	//procedure sendMRIMarker(mriName: PAnsiCHAR; mriType : PAnsiCHAR; markerNr : integer; timeStamp : integer; x : single; y : single; xh : single; yh : single; angle : single; visible : integer; mriNr : integer ; value1 : single; value2 : single; value3 : single; exclude : integer); StdCall;



	/** For debugging. */
	typedef void(__stdcall *setUpdateSection)(const char*);  // plugin type  DUMMY, SKETCHUP, STINGRAY, NAVISWORKS, UNITY, UNREAL (Epic Unreal Engine), TPS (Tecnomatix Plant Simulation), INTER3D (Interviews3D), WEBGL
	setUpdateSection setUpdateSection_edddDll;



	/** For debugging. Init coordinate system. */
	typedef void(__stdcall *initSystem)(LPCSTR, LPCSTR, LPCSTR); // forwardVec, upVec, rightVec
	initSystem initSystem_edddDll;



	/** Show debug window of EdddisonSocket.dll. */
	typedef void(__stdcall *showDebug)();
	showDebug showDebug_edddDll;



	/** For debugging. Clear lists of boundingboxes, cameras, moveables and unsubscribe them from edddison. */
	typedef void(__stdcall *emptyLists)();
	emptyLists emptyLists_edddDll;



	typedef LPCSTR(__stdcall *getExePath)();
	getExePath getExePath_edddDll;



	typedef LPCSTR(__stdcall *getDllPath)();
	getDllPath getDllPath_edddDll;



	/** Subscribe to event channels. */
	typedef void(__stdcall *subscribeChannel)(LPCSTR);
	subscribeChannel subscribeChannel_edddDll;

}
#endif

#endif //__EDDD__EDDDISONSOCKETINTERFACE_H__