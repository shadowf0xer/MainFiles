// Copyright 2018 GiM s.r.o. All Rights Reserved.

#include "FurSplines.h"
#include "GFur.h"
#include "FurSkinData.h"

UFurSplines::UFurSplines(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UFurSplines::Refresh()
{
	FFurSkinData::ReloadFurSplines(this);
}
