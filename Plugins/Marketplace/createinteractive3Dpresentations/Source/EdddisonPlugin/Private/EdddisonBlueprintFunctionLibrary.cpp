/*
 * ****************************************************************************************************************
 * Copyright (c) 2016-2020 edddison technologies, inbox@edddison.com. All rights reserved.
 * Unauthorized copying of this file, via any medium is strictly prohibited.
 * edddison technologies and edddison is protected by copyright and trademarks and is proprietary and confidential.
 * ****************************************************************************************************************
 */


#include "EdddisonBlueprintFunctionLibrary.h"
#include "EdddisonPluginPrivatePCH.h"
#include "EdddisonPlugin.h"





/**
* Start edddison editor. Only one instance of edddison editor can run on one client.
*	If one edddison editor instance is running already, this call gets ignored.
*/
void UEdddisonBlueprintFunctionLibrary::EdddisonOpen() {

	FEdddisonPluginModule::EdddisonOpen(false);
}



/**
* Quit edddison editor.
*/
void UEdddisonBlueprintFunctionLibrary::EdddisonClose() {

	FEdddisonPluginModule::EdddisonClose(false);

}