// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "BpPrimaryDataAsset.h"

#include <UObject/Package.h>
#include <UObject/Class.h>
#include <Misc/PackageName.h>


// By Ben Zeigler - https://forums.unrealengine.com/unreal-engine/feedback-for-epic/1363013-allow-blueprint-classes-to-derive-from-uprimarydataasset
FPrimaryAssetId UBpPrimaryDataAsset::GetPrimaryAssetId() const
{
	if (HasAnyFlags(RF_ClassDefaultObject))
	{
		UClass* BestPrimaryAssetTypeClass = nullptr;
		UClass* SearchPrimaryAssetTypeClass = GetClass()->GetSuperClass();

		// If this is a native class or immediate child of PrimaryDataAsset, return invalid as we are a type ourselves
		if (GetClass()->HasAnyClassFlags(CLASS_Native | CLASS_Intrinsic) || SearchPrimaryAssetTypeClass == UPrimaryDataAsset::StaticClass())
		{
			return FPrimaryAssetId();
		}

		// Starting with parent, look up the hierarchy for a class that is either native, or a blueprint class immediately below PrimaryDataAsset
		while (SearchPrimaryAssetTypeClass)
		{
			if (SearchPrimaryAssetTypeClass->GetSuperClass() == UPrimaryDataAsset::StaticClass())
			{
				// If our parent is this base class, return this as the best class
				BestPrimaryAssetTypeClass = SearchPrimaryAssetTypeClass;
				break;
			}
			else if (SearchPrimaryAssetTypeClass->HasAnyClassFlags(CLASS_Native | CLASS_Intrinsic))
			{
				// Our parent is the first native class found, use that
				BestPrimaryAssetTypeClass = SearchPrimaryAssetTypeClass;
				break;
			}
			else
			{
				SearchPrimaryAssetTypeClass = SearchPrimaryAssetTypeClass->GetSuperClass();
			}
		}

		if (BestPrimaryAssetTypeClass)
		{
			// If this is a native class use the raw name if it's a blueprint use the package name as it will be missing _C
			FName PrimaryAssetType = BestPrimaryAssetTypeClass->HasAnyClassFlags(CLASS_Native | CLASS_Intrinsic) ? BestPrimaryAssetTypeClass->GetFName() : FPackageName::GetShortFName(BestPrimaryAssetTypeClass->GetOutermost()->GetFName());

			return FPrimaryAssetId(PrimaryAssetType, FPackageName::GetShortFName(GetOutermost()->GetFName()));
		}

		// No valid parent class found, return invalid
		return FPrimaryAssetId();
	}


	// Data assets use Class and ShortName by default, there's no inheritance so class works fine
	return FPrimaryAssetId(GetClass()->GetFName(), GetFName());
}
