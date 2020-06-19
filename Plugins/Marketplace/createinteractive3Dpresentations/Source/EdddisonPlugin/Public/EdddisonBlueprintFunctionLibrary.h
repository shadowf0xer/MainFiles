/*
 * ****************************************************************************************************************
 * Copyright (c) 2016-2020 edddison technologies, inbox@edddison.com. All rights reserved.
 * Unauthorized copying of this file, via any medium is strictly prohibited.
 * edddison technologies and edddison is protected by copyright and trademarks and is proprietary and confidential.
 * ****************************************************************************************************************
 */

#pragma once


#include "EdddisonPluginPrivatePCH.h"
//#include "Private/EdddisonPluginPrivatePCH.h"
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EdddisonBlueprintFunctionLibrary.generated.h"









/**
 * Plubic access to edddison plugin with Blueprint functions
 */
UCLASS()
class EDDDISONPLUGIN_API UEdddisonBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()


		/************************************************************************/
		/* Start/Stop eddddison                                                 */
		/************************************************************************/
public:

	UFUNCTION(BlueprintCallable, Category = "edddison plugin")
		static void EdddisonOpen();

	UFUNCTION(BlueprintCallable, Category = "edddison plugin")
		static void EdddisonClose();


};
