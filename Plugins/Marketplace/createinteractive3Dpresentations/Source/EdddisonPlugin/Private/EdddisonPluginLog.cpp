/*
 * ****************************************************************************************************************
 * Copyright (c) 2016-2020 edddison technologies, inbox@edddison.com. All rights reserved.
 * Unauthorized copying of this file, via any medium is strictly prohibited.
 * edddison technologies and edddison is protected by copyright and trademarks and is proprietary and confidential.
 * ****************************************************************************************************************
 */


#include "EdddisonPluginLog.h"
#include "EdddisonPluginPrivatePCH.h"





#define LOCTEXT_NAMESPACE "EdddisonPlugin"

DEFINE_LOG_CATEGORY(EdddisonLog);

void FEdddisonLog::Log(FString str)
{
#ifdef EDDDISON_LOG_OUTPUT
	UE_LOG(EdddisonLog, Log, TEXT("%s"), *str);
#endif

#ifdef EDDDISON_LOG_3D
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::White, str);
#endif
}


void FEdddisonLog::Warning(FString str)
{
#ifdef EDDDISON_LOG_OUTPUT
	UE_LOG(EdddisonLog, Warning, TEXT("%s"), *str);
#endif

#ifdef EDDDISON_LOG_3D
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Yellow, str);
#endif
}


void FEdddisonLog::Error(FString str)
{
#ifdef EDDDISON_LOG_OUTPUT
	UE_LOG(EdddisonLog, Error, TEXT("%s"), *str);
#endif

#ifdef EDDDISON_LOG_3D
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Red, str);
#endif
}

#undef LOCTEXT_NAMESPACE
