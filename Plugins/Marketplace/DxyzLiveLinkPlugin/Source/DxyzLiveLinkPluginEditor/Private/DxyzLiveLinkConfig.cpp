/*************************************************************************
* Copyright [2010] - [2020] Dynamixyz
* All Rights Reserved.
*
* Authors:
* Flora Jullien (flora.jullien@dynamixyz.com)
**************************************************************************/

#include "DxyzLiveLinkConfig.h"

#include "DxyzLiveLinkPlugin/Private/DxyzLiveLinkRetargetAsset.h"

#include "Interfaces/IPluginManager.h"
#include "Widgets/Input/SSearchBox.h"
#include "Widgets/Input/SHyperlink.h"
#include "Widgets/Input/SComboBox.h"
#include "Widgets/Input/SCheckBox.h"
#include "Widgets/Input/SSlider.h"
#include "Widgets/Layout/SSeparator.h"
#include "Widgets/Images/SImage.h"
#include "PropertyCustomizationHelpers.h"

//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
// FDxyzBoneModifyCustomization represents a line in the table, for one ESC bone    //
//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////

TSharedRef<IPropertyTypeCustomization> FDxyzBoneModifyCustomization::MakeInstance()
{
    return MakeShareable(new FDxyzBoneModifyCustomization());
}

/** IPropertyTypeCustomization interface */
void FDxyzBoneModifyCustomization::CustomizeHeader(TSharedRef<class IPropertyHandle> StructPropertyHandle, class FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& StructCustomizationUtils)
{
}

void FDxyzBoneModifyCustomization::CustomizeChildren(TSharedRef<class IPropertyHandle> StructPropertyHandle, class IDetailChildrenBuilder& StructBuilder, IPropertyTypeCustomizationUtils& StructCustomizationUtils)
{
    uint32 NumChildren;
    StructPropertyHandle->GetNumChildren(NumChildren);

    TSharedPtr<IPropertyHandle> FullArrayHandle;
    TSharedPtr<IPropertyHandleArray> BonesPropertyHandle;

    // Get the skeleton bone names for remapping
    FString vArr;
    TArray<FString> BoneNames;
    TArray<TSharedRef<IPropertyHandle>> ChildrenProps;
    StructBuilder.GetParentCategory().GetDefaultProperties(ChildrenProps);
    for (int i = 0; i < ChildrenProps.Num(); ++i)
    {
        if (ChildrenProps[i]->GetProperty()->GetName() == TEXT("MeshBoneNames"))
        {
            ChildrenProps[i]->GetValueAsDisplayString(vArr);
            vArr.ParseIntoArray(BoneNames, *FString(";"));

            BoneKeys.Empty();
            for (int j = 0; j < BoneNames.Num(); ++j)
            {
                BoneKeys.Add(MakeShareable(new FName(*BoneNames[j])));
            }
        }
    }

    FString vBoneName = "";
    mLayoutBuilder = nullptr;

    for (uint32 i = 0; i < NumChildren; ++i)
    {
        const TSharedRef<IPropertyHandle> ChildHandle = StructPropertyHandle->GetChildHandle(i).ToSharedRef();

        // Get array of bones
        if (ChildHandle->GetProperty()->GetName() == TEXT("MappedBones"))
        {
            FullArrayHandle = ChildHandle;
        }
        // Get source bone name
        else if (ChildHandle->GetProperty()->GetName() == TEXT("BoneName"))
        {
            ChildHandle->GetValueAsDisplayString(vBoneName);
        }
        else if (ChildHandle->GetProperty()->GetName() == TEXT("HasError"))
        {
            HasErrorPropertyHandle = ChildHandle;
            ChildHandle.Get().MarkHiddenByCustomization();
        }
    }

    // Get parent layout (for refresh)
    mLayoutBuilder = &StructBuilder.GetParentCategory().GetParentLayout();

    if (FullArrayHandle.IsValid() && FullArrayHandle->GetProperty())
    {
        // Hide reset button
        FullArrayHandle.Get()->MarkResetToDefaultCustomized(true);

        FString vHasErrorValue;
        HasErrorPropertyHandle->GetValueAsDisplayString(vHasErrorValue);
        bool vHasError = vHasErrorValue == "true";

        // Get the number of bones
        BonesPropertyHandle = FullArrayHandle->AsArray();
        uint32 vNumBones;
        BonesPropertyHandle->GetNumElements(vNumBones);

        // Should always be true
        if(vNumBones > 0)
        {
            const TSharedRef<IPropertyHandle> BoneHandle = BonesPropertyHandle->GetElement(0);
            uint32 vNumChildren;
            BoneHandle->GetNumChildren(vNumChildren);

            for (uint32 i = 0; i < vNumChildren; ++i)
            {
                const TSharedRef<IPropertyHandle> ChildHandle = BoneHandle->GetChildHandle(i).ToSharedRef();

                // Get the name of the remapped bone
                if (ChildHandle->GetProperty()->GetName() == TEXT("RemapName"))
                {
                    SelectedBonePropertyHandle = ChildHandle;
                }
            }
        }

        if (SelectedBonePropertyHandle.IsValid() && SelectedBonePropertyHandle->GetProperty())
        {
            FString vSelectedBoneName;
            SelectedBonePropertyHandle.Get()->GetValueAsDisplayString(vSelectedBoneName);

            // Adds the array property...
            IDetailPropertyRow& PropertyArrayRow = StructBuilder.AddProperty(FullArrayHandle.ToSharedRef());

            TSharedPtr<SHorizontalBox> Box = SNew(SHorizontalBox);

            // ...But customize it
            PropertyArrayRow.CustomWidget(true)
                .NameContent()
                [
                    SNew(SHorizontalBox)
                    + SHorizontalBox::Slot()
                [
                    // Source bone name
                    SNew(STextBlock).Text(FText::FromString(vBoneName))
                    .Font(IDetailLayoutBuilder::GetDetailFont())
                    .ColorAndOpacity(vHasError ? FLinearColor(1.0f, 0.0f, 0.0f, 1.0f) : FLinearColor(1.0f, 1.0f, 1.0f, 1.0f))
                ]
            ]
            .ValueContent()
            .MinDesiredWidth(600)
            [
                // Construct the combo box
                SNew(SVerticalBox)
                + SVerticalBox::Slot()
                .AutoHeight()
                [
                    SAssignNew(Box, SHorizontalBox)
                    + SHorizontalBox::Slot()
                    .MaxWidth(200)
                    [
                        SNew(SComboBox<TSharedPtr<FName>>)
                        .OptionsSource(&BoneKeys)
                        .OnGenerateWidget(this, &FDxyzBoneModifyCustomization::GenerateBoneItem)
                        .OnSelectionChanged(this, &FDxyzBoneModifyCustomization::HandleBoneChanged)
                        .Content()
                        [
                            SNew(STextBlock)
                            .Font(IDetailLayoutBuilder::GetDetailFont())
                        .Text(FText::FromString(vSelectedBoneName))
                        ]
                    ]
                    // Construct the add button
                    + SHorizontalBox::Slot()
                    .MaxWidth(20)
                    .HAlign(HAlign_Left)
                    [
                        PropertyCustomizationHelpers::MakeAddButton(FSimpleDelegate::CreateSP(this,
                        &FDxyzBoneModifyCustomization::AddAdditionalBone, FullArrayHandle.ToSharedRef()),
                        FText::FromString(FString("Map additionnal bone")))
                    ]
                ]
            ];

            if (vNumBones > 1)
            {
                // Add the delete button
                Box->AddSlot()
                    .MaxWidth(20)
                    .HAlign(HAlign_Left)
                    [
                        PropertyCustomizationHelpers::MakeRemoveButton(FSimpleDelegate::CreateSP(this,
                        &FDxyzBoneModifyCustomization::EmptyAdditionalBones, FullArrayHandle.ToSharedRef()),
                        FText::FromString(FString("Removes last additionnal bone")))
                    ];
            }

            PropertyArrayRow.ShouldAutoExpand(false);

            // Filter (based on the search)
            if (UDxyzLiveLinkRetargetAsset::sBoneSearchFilter.IsEmpty() || vBoneName.Contains(UDxyzLiveLinkRetargetAsset::sBoneSearchFilter))
            {
                PropertyArrayRow.Visibility(EVisibility::Visible);

                // Create a line separator
                StructBuilder.AddCustomRow(FText::FromString(FString("Separator")))
                    .WholeRowContent()
                    [
                        SNew(SVerticalBox)
                        + SVerticalBox::Slot()
                    .AutoHeight()
                    [
                        SNew(SHorizontalBox)
                        + SHorizontalBox::Slot()
                    .MaxWidth(600)
                    [
                        SNew(SSeparator)
                        .ColorAndOpacity(FLinearColor(0.8f, 0.8f, 0.8f, 0.8f))
                    ]
                    ]
                    ];
            }
            else
            {
                PropertyArrayRow.Visibility(EVisibility::Hidden);
            }
                
        }
    }
}

void FDxyzBoneModifyCustomization::AddAdditionalBone(TSharedRef<IPropertyHandle> FullArrayHandle)
{
    TSharedPtr<IPropertyHandleArray> BonesHandle = FullArrayHandle->AsArray();
    BonesHandle->AddItem();
    mLayoutBuilder->ForceRefreshDetails();
}

void FDxyzBoneModifyCustomization::EmptyAdditionalBones(TSharedRef<IPropertyHandle> FullArrayHandle)
{
    TSharedPtr<IPropertyHandleArray> BonesHandle = FullArrayHandle->AsArray();

    uint32 vNumBones;
    BonesHandle->GetNumElements(vNumBones);

    uint32 vIdx = vNumBones - 1;
    if(vIdx > 0)
        FPropertyAccess::Result Res = BonesHandle->DeleteItem(vIdx);

    mLayoutBuilder->ForceRefreshDetails();

    // Empty all
    //for(uint32 i=vNumBones-1; i>0; --i)
    //{
    //    FPropertyAccess::Result Res = BonesHandle->DeleteItem(i);
    //    //if (Res != FPropertyAccess::Success)
    //    //{
    //    //    UE_LOG(LogTemp, Log, TEXT("PAS COOL"));
    //    //}
    //}
}

TSharedRef<SWidget> FDxyzBoneModifyCustomization::GenerateBoneItem(TSharedPtr<FName> InItem)
{
    return SNew(STextBlock)
        .Font(IDetailLayoutBuilder::GetDetailFont())
        .Text(FText::FromName(*InItem));
}

void FDxyzBoneModifyCustomization::HandleBoneChanged(TSharedPtr<FName> Item, ESelectInfo::Type SelectInfo)
{
    if (SelectInfo == ESelectInfo::OnMouseClick)
    {
        SelectedBonePropertyHandle->SetValue(*Item);
        mLayoutBuilder->ForceRefreshDetails();
    }
}

//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
// FDxyzBoneSettingsCustomization represents a set of settings for a mapped bone    //
// Contains a RemapName, a set of values for translation, and a set of values for   //
// rotation                                                                         //
//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////

TSharedRef<IPropertyTypeCustomization> FDxyzBoneSettingsCustomization::MakeInstance()
{
    return MakeShareable(new FDxyzBoneSettingsCustomization());
}

/** IPropertyTypeCustomization interface */
void FDxyzBoneSettingsCustomization::CustomizeHeader(TSharedRef<class IPropertyHandle> StructPropertyHandle, class FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& StructCustomizationUtils)
{
}

void FDxyzBoneSettingsCustomization::CustomizeChildren(TSharedRef<class IPropertyHandle> StructPropertyHandle, class IDetailChildrenBuilder& StructBuilder, IPropertyTypeCustomizationUtils& StructCustomizationUtils)
{
    uint32 NumChildren;
    StructPropertyHandle->GetNumChildren(NumChildren);

    // Get the skeleton bone names for remapping
    FString vArr;
    TArray<FString> BoneNames;
    TArray<TSharedRef<IPropertyHandle>> ChildrenProps;
    StructBuilder.GetParentCategory().GetDefaultProperties(ChildrenProps);
    for (int i = 0; i < ChildrenProps.Num(); ++i)
    {
        if (ChildrenProps[i]->GetProperty()->GetName() == TEXT("MeshBoneNames"))
        {
            ChildrenProps[i]->GetValueAsDisplayString(vArr);
            vArr.ParseIntoArray(BoneNames, *FString(";"));

            BoneKeys.Empty();
            for (int j = 0; j < BoneNames.Num(); ++j)
            {
                BoneKeys.Add(MakeShareable(new FName(*BoneNames[j])));
            }
        }
    }
    
    TSharedPtr<IPropertyHandle> IsDefaultHandle;
    TSharedPtr<IPropertyHandle> TransHandle;
    TSharedPtr<IPropertyHandle> RotaHandle;

    FString vBoneName = "";
    mLayoutBuilder = nullptr;

    for (uint32 i = 0; i < NumChildren; ++i)
    {
        const TSharedRef<IPropertyHandle> ChildHandle = StructPropertyHandle->GetChildHandle(i).ToSharedRef();

        if (ChildHandle->GetProperty()->GetName() == TEXT("IsDefault"))
        {
            IsDefaultHandle = ChildHandle;
            ChildHandle.Get().MarkHiddenByCustomization();
        }
        else if (ChildHandle->GetProperty()->GetName() == TEXT("RemapName"))
        {
            SelectedBonePropertyHandle = ChildHandle;
            ChildHandle.Get().MarkHiddenByCustomization();
        }
        else if (ChildHandle->GetProperty()->GetName() == TEXT("ApplyTranslation"))
        {
            TransHandle = ChildHandle;
        }
        else if (ChildHandle->GetProperty()->GetName() == TEXT("ApplyRotation"))
        {
            RotaHandle = ChildHandle;
        }
    }

    mLayoutBuilder = &StructBuilder.GetParentCategory().GetParentLayout();

    if (SelectedBonePropertyHandle.IsValid() && SelectedBonePropertyHandle->GetProperty())
    {
        FString vSelectedBoneName;
        SelectedBonePropertyHandle.Get()->GetValueAsDisplayString(vSelectedBoneName);

        FString vIsDefaultValue;
        IsDefaultHandle->GetValueAsDisplayString(vIsDefaultValue);
        bool vIsDefault = vIsDefaultValue == "true";

        // Show Combo box line only if not default bone (because for default it will be on the first line)
        if (!vIsDefault)
        {
            StructBuilder.AddCustomRow(FText())
            .ValueContent()
            .MinDesiredWidth(200)
            [
                SNew(SHorizontalBox)
                + SHorizontalBox::Slot()
                .MaxWidth(200)
            [
                // Construct the bones combo box
                SNew(SComboBox<TSharedPtr<FName>>)
                .OptionsSource(&BoneKeys)
                .OnGenerateWidget(this, &FDxyzBoneSettingsCustomization::GenerateBoneItem)
                .OnSelectionChanged(this, &FDxyzBoneSettingsCustomization::HandleBoneChanged)
                .Content()
                [
                    SNew(STextBlock)
                    .Font(IDetailLayoutBuilder::GetDetailFont())
                    .Text(FText::FromString(vSelectedBoneName))
                ]
            ]];
        }

        // Add the child properties
        StructBuilder.AddProperty(TransHandle.ToSharedRef());
        StructBuilder.AddProperty(RotaHandle.ToSharedRef());
    }

}

TSharedRef<SWidget> FDxyzBoneSettingsCustomization::GenerateBoneItem(TSharedPtr<FName> InItem)
{
    return SNew(STextBlock)
        .Font(IDetailLayoutBuilder::GetDetailFont())
        .Text(FText::FromName(*InItem));
}

void FDxyzBoneSettingsCustomization::HandleBoneChanged(TSharedPtr<FName> Item, ESelectInfo::Type SelectInfo)
{
    if (SelectInfo == ESelectInfo::OnMouseClick)
    {
        SelectedBonePropertyHandle->SetValue(*Item);
        mLayoutBuilder->ForceRefreshDetails();
    }
}


//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
// FDxyzCurveModifyCustomization represents a line in the list of curves            //
//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////

TSharedRef<IPropertyTypeCustomization> FDxyzCurveModifyCustomization::MakeInstance()
{
    return MakeShareable(new FDxyzCurveModifyCustomization());
}

/** IPropertyTypeCustomization interface */
void FDxyzCurveModifyCustomization::CustomizeHeader(TSharedRef<class IPropertyHandle> StructPropertyHandle, class FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& StructCustomizationUtils)
{
}

void FDxyzCurveModifyCustomization::CustomizeChildren(TSharedRef<class IPropertyHandle> StructPropertyHandle, class IDetailChildrenBuilder& StructBuilder, IPropertyTypeCustomizationUtils& StructCustomizationUtils)
{
    uint32 NumChildren;
    StructPropertyHandle->GetNumChildren(NumChildren);

    TSharedPtr<IPropertyHandle> FullArrayHandle;
    TSharedPtr<IPropertyHandleArray> CurvesPropertyHandle;

    // Get the skeleton curve names for remapping
    FString vArr;
    TArray<FString> CurveNames;
    TArray<TSharedRef<IPropertyHandle>> ChildrenProps;
    StructBuilder.GetParentCategory().GetDefaultProperties(ChildrenProps);
    for (int i = 0; i < ChildrenProps.Num(); ++i)
    {
        if (ChildrenProps[i]->GetProperty()->GetName() == TEXT("MeshCurveNames"))
        {
            ChildrenProps[i]->GetValueAsDisplayString(vArr);
            vArr.ParseIntoArray(CurveNames, *FString(";"));

            CurveKeys.Empty();
            for (int j = 0; j < CurveNames.Num(); ++j)
            {
                CurveKeys.Add(MakeShareable(new FName(*CurveNames[j])));
            }
        }
    }

    FString vCurveName = "";
    FString vMultValue = "";
    mLayoutBuilder = nullptr;

    for (uint32 i = 0; i < NumChildren; ++i)
    {
        const TSharedRef<IPropertyHandle> ChildHandle = StructPropertyHandle->GetChildHandle(i).ToSharedRef();

        //// Get multiplicator property
        //if (ChildHandle->GetProperty()->GetName() == TEXT("ValueMultiplier"))
        //{
        //    MultPropertyHandle = ChildHandle;
        //    ChildHandle->GetValueAsDisplayString(vMultValue);
        //}
        // Get array of curves
        if (ChildHandle->GetProperty()->GetName() == TEXT("MappedCurves"))
        {
            FullArrayHandle = ChildHandle;
        }
        // Get source curve name
        else if (ChildHandle->GetProperty()->GetName() == TEXT("CurveName"))
        {
            ChildHandle->GetValueAsDisplayString(vCurveName);
        }
        else if (ChildHandle->GetProperty()->GetName() == TEXT("HasError"))
        {
            HasErrorPropertyHandle = ChildHandle;
            ChildHandle.Get().MarkHiddenByCustomization();
        }
    }

    mLayoutBuilder = &StructBuilder.GetParentCategory().GetParentLayout();

    //if (MultPropertyHandle.IsValid() && MultPropertyHandle->GetProperty())
    if (FullArrayHandle.IsValid() && FullArrayHandle->GetProperty())
    {
        // Hide reset button
        FullArrayHandle.Get()->MarkResetToDefaultCustomized(true);

        FString vHasErrorValue;
        HasErrorPropertyHandle->GetValueAsDisplayString(vHasErrorValue);
        bool vHasError = vHasErrorValue == "true";

        // Get the number of bones
        CurvesPropertyHandle = FullArrayHandle->AsArray();
        uint32 vNumCurves;
        CurvesPropertyHandle->GetNumElements(vNumCurves);

        // Should always be true
        if (vNumCurves > 0)
        {
            const TSharedRef<IPropertyHandle> CurveHandle = CurvesPropertyHandle->GetElement(0);
            uint32 vNumChildren;
            CurveHandle->GetNumChildren(vNumChildren);

            for (uint32 i = 0; i < vNumChildren; ++i)
            {
                const TSharedRef<IPropertyHandle> ChildHandle = CurveHandle->GetChildHandle(i).ToSharedRef();

                // Get the name of the remapped curve
                if (ChildHandle->GetProperty()->GetName() == TEXT("RemapName"))
                {
                    SelectedCurvePropertyHandle = ChildHandle;
                }
            }
        }

        if (SelectedCurvePropertyHandle.IsValid() && SelectedCurvePropertyHandle->GetProperty())
        {
            FString vSelectedCurveName;
            SelectedCurvePropertyHandle.Get()->GetValueAsDisplayString(vSelectedCurveName);

            // Adds the array property...
            IDetailPropertyRow& PropertyArrayRow = StructBuilder.AddProperty(FullArrayHandle.ToSharedRef());

            TSharedPtr<SHorizontalBox> Box = SNew(SHorizontalBox);

            // ...But customize it
            PropertyArrayRow.CustomWidget(true)
                .NameContent()
                [
                    SNew(SHorizontalBox)
                    + SHorizontalBox::Slot()
                [
                    // Source bone name
                    SNew(STextBlock).Text(FText::FromString(vCurveName))
                    .Font(IDetailLayoutBuilder::GetDetailFont())
                    .ColorAndOpacity(vHasError ? FLinearColor(1.0f, 0.0f, 0.0f, 1.0f) : FLinearColor(1.0f, 1.0f, 1.0f, 1.0f))
                ]
                ]
                .ValueContent()
                    .MinDesiredWidth(600)
                    [
                        // Construct the combo box
                        SNew(SVerticalBox)
                        + SVerticalBox::Slot()
                    .AutoHeight()
                    [
                        SAssignNew(Box, SHorizontalBox)
                        + SHorizontalBox::Slot()
                    .MaxWidth(200)
                    [
                        SNew(SComboBox<TSharedPtr<FName>>)
                        .OptionsSource(&CurveKeys)
                    .OnGenerateWidget(this, &FDxyzCurveModifyCustomization::GenerateCurveItem)
                    .OnSelectionChanged(this, &FDxyzCurveModifyCustomization::HandleCurveChanged)
                    .Content()
                    [
                        SNew(STextBlock)
                        .Font(IDetailLayoutBuilder::GetDetailFont())
                    .Text(FText::FromString(vSelectedCurveName))
                    ]
                    ]
                // Construct the add button
                + SHorizontalBox::Slot()
                    .MaxWidth(20)
                    .HAlign(HAlign_Left)
                    [
                        PropertyCustomizationHelpers::MakeAddButton(FSimpleDelegate::CreateSP(this,
                        &FDxyzCurveModifyCustomization::AddAdditionalCurve, FullArrayHandle.ToSharedRef()),
                        FText::FromString(FString("Map additionnal curve")))
                    ]
                    ]
                    ];

                if (vNumCurves > 1)
                {
                    // Add the delete button
                    Box->AddSlot()
                        .MaxWidth(20)
                        .HAlign(HAlign_Left)
                        [
                            PropertyCustomizationHelpers::MakeRemoveButton(FSimpleDelegate::CreateSP(this,
                            &FDxyzCurveModifyCustomization::EmptyAdditionalCurves, FullArrayHandle.ToSharedRef()),
                            FText::FromString(FString("Removes last additionnal curve")))
                        ];
                }

                PropertyArrayRow.ShouldAutoExpand(false);

                // Filter (based on the search)
                if (UDxyzLiveLinkRetargetAsset::sCurveSearchFilter.IsEmpty() || vCurveName.Contains(UDxyzLiveLinkRetargetAsset::sCurveSearchFilter))
                {
                    PropertyArrayRow.Visibility(EVisibility::Visible);

                    // Create a line separator
                    StructBuilder.AddCustomRow(FText::FromString(FString("Separator")))
                        .WholeRowContent()
                        [
                            SNew(SVerticalBox)
                            + SVerticalBox::Slot()
                        .AutoHeight()
                        [
                            SNew(SHorizontalBox)
                            + SHorizontalBox::Slot()
                        .MaxWidth(600)
                        [
                            SNew(SSeparator)
                            .ColorAndOpacity(FLinearColor(0.8f, 0.8f, 0.8f, 0.8f))
                        ]
                        ]
                        ];
                }
                else
                {
                    PropertyArrayRow.Visibility(EVisibility::Hidden);
                }
        }




        //// Adds the struct BoneSettings
        //IDetailPropertyRow& PropertyArrayRow = StructBuilder.AddProperty(MultPropertyHandle.ToSharedRef());

        //float vVal = 0.5 * (FCString::Atof(*vMultValue) + 1);

        //// Create a FResetToDefaultOverride to reset the slider
        //FResetToDefaultOverride ResetToDefaultOverride = FResetToDefaultOverride::Create(
        //    FIsResetToDefaultVisible::CreateSP(this, &FDxyzCurveModifyCustomization::GetReplaceVisibility, vVal),
        //    FResetToDefaultHandler::CreateSP(this, &FDxyzCurveModifyCustomization::OnResetToBaseClicked)
        //);

        //// Change property name and add combo box
        //PropertyArrayRow.CustomWidget(true)
        //    .NameContent()
        //    [
        //        SNew(SHorizontalBox)
        //        + SHorizontalBox::Slot()
        //    [
        //        // Source bone name
        //        SNew(STextBlock).Text(FText::FromString(vCurveName))
        //        .Font(IDetailLayoutBuilder::GetDetailFont())
        //    ]
        //    ]
        //.ValueContent()
        //    [
        //        SNew(SHorizontalBox)
        //        + SHorizontalBox::Slot()
        //    [
        //        SNew(SSlider)
        //        .Value(vVal)
        //        .ToolTipText(FText::FromString(*FString("Blendshape factor")))
        //        .OnValueChanged(this, &FDxyzCurveModifyCustomization::OnMultValueChanged)
        //        .OnMouseCaptureEnd(this, &FDxyzCurveModifyCustomization::OnMultValueEndChanged)
        //    ]];

        //PropertyArrayRow.OverrideResetToDefault(ResetToDefaultOverride);

        //PropertyArrayRow.ShouldAutoExpand(false);
        //if (UDxyzLiveLinkRetargetAsset::sCurveSearchFilter.IsEmpty() || vCurveName.Contains(UDxyzLiveLinkRetargetAsset::sCurveSearchFilter))
        //    PropertyArrayRow.Visibility(EVisibility::Visible);
        //else
        //    PropertyArrayRow.Visibility(EVisibility::Hidden);
    }
}

// Show/Hide reset pin
bool FDxyzCurveModifyCustomization::GetReplaceVisibility(TSharedPtr<IPropertyHandle> PropertyHandle, float iValue) const
{
    return iValue != 0.5;
}

void FDxyzCurveModifyCustomization::OnResetToBaseClicked(TSharedPtr<IPropertyHandle> PropertyHandle)
{
    MultPropertyHandle->ResetToDefault();
    mLayoutBuilder->ForceRefreshDetails();
}

void FDxyzCurveModifyCustomization::OnMultValueChanged(float NewValue)
{
    // By default the slider is between 0 and 1, we put it between -1 and 1
    float vVal = NewValue * 2 - 1;
    MultPropertyHandle->SetValue(vVal);
}

// When slider has stop moving, refresh details so that the reset pin appears
void FDxyzCurveModifyCustomization::OnMultValueEndChanged()
{
    mLayoutBuilder->ForceRefreshDetails();
}


void FDxyzCurveModifyCustomization::AddAdditionalCurve(TSharedRef<IPropertyHandle> FullArrayHandle)
{
    TSharedPtr<IPropertyHandleArray> CurvesHandle = FullArrayHandle->AsArray();
    CurvesHandle->AddItem();
    mLayoutBuilder->ForceRefreshDetails();
}

void FDxyzCurveModifyCustomization::EmptyAdditionalCurves(TSharedRef<IPropertyHandle> FullArrayHandle)
{
    TSharedPtr<IPropertyHandleArray> CurvesHandle = FullArrayHandle->AsArray();

    uint32 vNumCurves;
    CurvesHandle->GetNumElements(vNumCurves);

    uint32 vIdx = vNumCurves - 1;
    if(vIdx > 0)
        FPropertyAccess::Result Res = CurvesHandle->DeleteItem(vIdx);

    mLayoutBuilder->ForceRefreshDetails();
    // Empty all
    //for(uint32 i=vNumBones-1; i>0; --i)
    //{
    //    FPropertyAccess::Result Res = BonesHandle->DeleteItem(i);
    //    //if (Res != FPropertyAccess::Success)
    //    //{
    //    //    UE_LOG(LogTemp, Log, TEXT("PAS COOL"));
    //    //}
    //}
}

TSharedRef<SWidget> FDxyzCurveModifyCustomization::GenerateCurveItem(TSharedPtr<FName> InItem)
{
    return SNew(STextBlock)
        .Font(IDetailLayoutBuilder::GetDetailFont())
        .Text(FText::FromName(*InItem));
}

void FDxyzCurveModifyCustomization::HandleCurveChanged(TSharedPtr<FName> Item, ESelectInfo::Type SelectInfo)
{
    if (SelectInfo == ESelectInfo::OnMouseClick)
    {
        SelectedCurvePropertyHandle->SetValue(*Item);
        mLayoutBuilder->ForceRefreshDetails();
    }
}

//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
// FDxyzCurveSettingsCustomization represents a set of settings for a mapped curve  //
// Contains a RemapName, and a multiplier                                           //
//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////

TSharedRef<IPropertyTypeCustomization> FDxyzCurveSettingsCustomization::MakeInstance()
{
    return MakeShareable(new FDxyzCurveSettingsCustomization());
}

/** IPropertyTypeCustomization interface */
void FDxyzCurveSettingsCustomization::CustomizeHeader(TSharedRef<class IPropertyHandle> StructPropertyHandle, class FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& StructCustomizationUtils)
{
}

void FDxyzCurveSettingsCustomization::CustomizeChildren(TSharedRef<class IPropertyHandle> StructPropertyHandle, class IDetailChildrenBuilder& StructBuilder, IPropertyTypeCustomizationUtils& StructCustomizationUtils)
{
    uint32 NumChildren;
    StructPropertyHandle->GetNumChildren(NumChildren);

    TSharedPtr<IPropertyHandle> MinClampPropertyHandle;
    TSharedPtr<IPropertyHandle> MaxClampPropertyHandle;

    static FString DirPath = IPluginManager::Get().FindPlugin(TEXT("DxyzLiveLinkPlugin"))->GetBaseDir();
    FString vResPath = FPaths::Combine(FPaths::ConvertRelativePathToFull(DirPath), FString("Resources"));

    FString vClamp = FPaths::Combine(vResPath, FString("clamp.png"));
    mClampBrush = FSlateDynamicImageBrush(FName(*vClamp), FVector2D(12.0f, 12.0f));

    FString vUnClamp = FPaths::Combine(vResPath, FString("unclamp.png"));
    mUnClampBrush = FSlateDynamicImageBrush(FName(*vUnClamp), FVector2D(12.0f, 12.0f));

    TSharedPtr<IPropertyHandle> IsDefaultHandle;

    // Get the skeleton curve names for remapping
    FString vArr;
    TArray<FString> CurveNames;
    TArray<TSharedRef<IPropertyHandle>> ChildrenProps;
    StructBuilder.GetParentCategory().GetDefaultProperties(ChildrenProps);
    for (int i = 0; i < ChildrenProps.Num(); ++i)
    {
        if (ChildrenProps[i]->GetProperty()->GetName() == TEXT("MeshCurveNames"))
        {
            ChildrenProps[i]->GetValueAsDisplayString(vArr);
            vArr.ParseIntoArray(CurveNames, *FString(";"));

            CurveKeys.Empty();
            for (int j = 0; j < CurveNames.Num(); ++j)
            {
                CurveKeys.Add(MakeShareable(new FName(*CurveNames[j])));
            }
        }
    }

    FString vCurveName = "";
    FString vMultValue = "";
    mLayoutBuilder = nullptr;

    for (uint32 i = 0; i < NumChildren; ++i)
    {
        const TSharedRef<IPropertyHandle> ChildHandle = StructPropertyHandle->GetChildHandle(i).ToSharedRef();

        if (ChildHandle->GetProperty()->GetName() == TEXT("IsDefault"))
        {
            IsDefaultHandle = ChildHandle;
            ChildHandle.Get().MarkHiddenByCustomization();
        }
        else if (ChildHandle->GetProperty()->GetName() == TEXT("RemapName"))
        {
            SelectedCurvePropertyHandle = ChildHandle;
            ChildHandle.Get().MarkHiddenByCustomization();
        }
        // Get multiplicator property
        else if (ChildHandle->GetProperty()->GetName() == TEXT("ValueMultiplier"))
        {
            MultPropertyHandle = ChildHandle;
            ChildHandle->GetValueAsDisplayString(vMultValue);
            MultPropertyHandle->MarkResetToDefaultCustomized(true);
        }
        else if (ChildHandle->GetProperty()->GetName() == TEXT("Clamp"))
        {
            mClampPropertyHandle = ChildHandle;
        }
        else if (ChildHandle->GetProperty()->GetName() == TEXT("MinClamp"))
        {
            MinClampPropertyHandle = ChildHandle;
        }
        else if (ChildHandle->GetProperty()->GetName() == TEXT("MaxClamp"))
        {
            MaxClampPropertyHandle = ChildHandle;
        }
    }

    mLayoutBuilder = &StructBuilder.GetParentCategory().GetParentLayout();

    if (SelectedCurvePropertyHandle.IsValid() && SelectedCurvePropertyHandle->GetProperty()
        && mClampPropertyHandle.IsValid() && mClampPropertyHandle->GetProperty()
        && MinClampPropertyHandle.IsValid() && MinClampPropertyHandle->GetProperty()
        && MaxClampPropertyHandle.IsValid() && MaxClampPropertyHandle->GetProperty())
    {
        FString vSelectedCurveName;
        SelectedCurvePropertyHandle.Get()->GetValueAsDisplayString(vSelectedCurveName);

        FString vIsDefaultValue;
        IsDefaultHandle->GetValueAsDisplayString(vIsDefaultValue);
        bool vIsDefault = vIsDefaultValue == "true";

        FString vClampEnabledValue;
        mClampPropertyHandle->GetValueAsDisplayString(vClampEnabledValue);
        bool vIsClampEnabled = vClampEnabledValue == "true";

        // Show Combo box line only if not default bone (because for default it will be on the first line)
        if (!vIsDefault)
        {
            StructBuilder.AddCustomRow(FText())
                .ValueContent()
                .MinDesiredWidth(200)
                [
                    SNew(SHorizontalBox)
                    + SHorizontalBox::Slot()
                .MaxWidth(200)
                [
                    // Construct the bones combo box
                    SNew(SComboBox<TSharedPtr<FName>>)
                    .OptionsSource(&CurveKeys)
                .OnGenerateWidget(this, &FDxyzCurveSettingsCustomization::GenerateCurveItem)
                .OnSelectionChanged(this, &FDxyzCurveSettingsCustomization::HandleCurveChanged)
                .Content()
                [
                    SNew(STextBlock)
                    .Font(IDetailLayoutBuilder::GetDetailFont())
                .Text(FText::FromString(vSelectedCurveName))
                ]
                ]];
        }

        // Adds the struct BoneSettings
        IDetailPropertyRow& PropertyArrayRow = StructBuilder.AddProperty(MultPropertyHandle.ToSharedRef());

        float vVal = 0.5 * (FCString::Atof(*vMultValue) + 1);

        // Change property name and add combo box
        PropertyArrayRow.CustomWidget(true)
        .ValueContent()
        .MinDesiredWidth(300)
            [
                SNew(SHorizontalBox)
                + SHorizontalBox::Slot()
            [
                SNew(SSlider)
                .Value(vVal)
                .ToolTipText(FText::FromString(*FString("Blendshape factor")))
                .OnValueChanged(this, &FDxyzCurveSettingsCustomization::OnMultValueChanged)
                .OnMouseCaptureEnd(this, &FDxyzCurveSettingsCustomization::OnMultValueEndChanged)
            ]
        // Construct the clamp button
        + SHorizontalBox::Slot()
            .Padding(4, 6, 0, 6)
            .MaxWidth(20)
            .HAlign(HAlign_Left)
            .VAlign(VAlign_Center)
            [
                SNew(SButton)
                .ButtonStyle(FEditorStyle::Get(), "HoverHintOnly")
            .OnClicked(this, &FDxyzCurveSettingsCustomization::OnToggleButton, vIsClampEnabled)
            .ToolTipText(vIsClampEnabled ? FText::FromString(FString("Unclamp value")) : FText::FromString(FString("Clamp value")))
            .ForegroundColor(FSlateColor::UseForeground())
            .Content()[
                SNew(SImage)
                    .Image(vIsClampEnabled ? &mUnClampBrush : &mClampBrush)
                    .ColorAndOpacity(FSlateColor::UseForeground())
            ]
            ]
        +SHorizontalBox::Slot()
            .AutoWidth()
            .VAlign(VAlign_Center)
            [
                PropertyCustomizationHelpers::MakeResetButton(FSimpleDelegate::CreateSP(this,
                &FDxyzCurveSettingsCustomization::OnResetToBaseClicked, MultPropertyHandle), FText(), vVal != 0.5)
            ]];

        if (vIsClampEnabled)
        {
            StructBuilder.AddCustomRow(FText::FromString(FString("Clamping")))
                .ValueContent()
                .MinDesiredWidth(250)
                [
                    SNew(SHorizontalBox)
                + SHorizontalBox::Slot()
                    .Padding(0, 3, 2, 6)
                    .MaxWidth(50)
                    [
                        SNew(SProperty, MinClampPropertyHandle)
                        .ShouldDisplayName(false)
                    .Visibility(vIsClampEnabled ? EVisibility::Visible : EVisibility::Hidden)
                    ]
                + SHorizontalBox::Slot()
                    .Padding(0, 3, 2, 6)
                    .MaxWidth(50)
                    [
                        SNew(SProperty, MaxClampPropertyHandle)
                        .ShouldDisplayName(false)
                    .Visibility(vIsClampEnabled ? EVisibility::Visible : EVisibility::Hidden)

                    ]
                ];
        }

        //PropertyArrayRow.ShouldAutoExpand(false);
        //if (UDxyzLiveLinkRetargetAsset::sCurveSearchFilter.IsEmpty() || vCurveName.Contains(UDxyzLiveLinkRetargetAsset::sCurveSearchFilter))
        //    PropertyArrayRow.Visibility(EVisibility::Visible);
        //else
        //    PropertyArrayRow.Visibility(EVisibility::Hidden);
    }

}

TSharedRef<SWidget> FDxyzCurveSettingsCustomization::GenerateCurveItem(TSharedPtr<FName> InItem)
{
    return SNew(STextBlock)
        .Font(IDetailLayoutBuilder::GetDetailFont())
        .Text(FText::FromName(*InItem));
}

void FDxyzCurveSettingsCustomization::HandleCurveChanged(TSharedPtr<FName> Item, ESelectInfo::Type SelectInfo)
{
    if (SelectInfo == ESelectInfo::OnMouseClick)
    {
        SelectedCurvePropertyHandle->SetValue(*Item);
        mLayoutBuilder->ForceRefreshDetails();
    }
}

void FDxyzCurveSettingsCustomization::OnResetToBaseClicked(TSharedPtr<IPropertyHandle> PropertyHandle)
{
    MultPropertyHandle->ResetToDefault();
    mLayoutBuilder->ForceRefreshDetails();
}

void FDxyzCurveSettingsCustomization::OnMultValueChanged(float NewValue)
{
    // By default the slider is between 0 and 1, we put it between -1 and 1
    float vVal = NewValue * 2 - 1;
    MultPropertyHandle->SetValue(vVal);
}

// When slider has stop moving, refresh details so that the reset pin appears
void FDxyzCurveSettingsCustomization::OnMultValueEndChanged()
{
    mLayoutBuilder->ForceRefreshDetails();
}

FReply FDxyzCurveSettingsCustomization::OnToggleButton(bool CurrentlyVisible)
{
    mClampPropertyHandle->SetValue(!CurrentlyVisible);
    mLayoutBuilder->ForceRefreshDetails();
    return FReply::Handled();
}


//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
// FTranslationSettingsCustomization represents the global translation settings     //
// (last category in the Details panel)                                             //
//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////


TSharedRef<IPropertyTypeCustomization> FTranslationSettingsCustomization::MakeInstance()
{
    return MakeShareable(new FTranslationSettingsCustomization());
}

/** IPropertyTypeCustomization interface */
void FTranslationSettingsCustomization::CustomizeHeader(TSharedRef<class IPropertyHandle> StructPropertyHandle, class FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& StructCustomizationUtils)
{
    HeaderRow.NameContent()
        [
            SNew(SHorizontalBox)
            + SHorizontalBox::Slot()
        [
            SNew(STextBlock).Text(FText::FromString(FString("Translation Settings")))
            .Font(IDetailLayoutBuilder::GetDetailFont())
        ]];
}

void FTranslationSettingsCustomization::CustomizeChildren(TSharedRef<class IPropertyHandle> StructPropertyHandle, class IDetailChildrenBuilder& StructBuilder, IPropertyTypeCustomizationUtils& StructCustomizationUtils)
{
    uint32 NumChildren;
    StructPropertyHandle->GetNumChildren(NumChildren);

    TSharedPtr<IPropertyHandle> HeadXPropertyHandle;
    TSharedPtr<IPropertyHandle> HeadYPropertyHandle;
    TSharedPtr<IPropertyHandle> HeadZPropertyHandle;
    TSharedPtr<IPropertyHandle> HeadScalePropertyHandle;
    TSharedPtr<IPropertyHandle> BoneXPropertyHandle;
    TSharedPtr<IPropertyHandle> BoneYPropertyHandle;
    TSharedPtr<IPropertyHandle> BoneZPropertyHandle;
    TSharedPtr<IPropertyHandle> BoneScalePropertyHandle;

    for (uint32 i = 0; i < NumChildren; ++i)
    {
        const TSharedRef<IPropertyHandle> ChildHandle = StructPropertyHandle->GetChildHandle(i).ToSharedRef();

        if (ChildHandle->GetProperty()->GetName() == TEXT("HeadInvertXAxis"))
        {
            HeadXPropertyHandle = ChildHandle;
        }
        else if (ChildHandle->GetProperty()->GetName() == TEXT("HeadInvertYAxis"))
        {
            HeadYPropertyHandle = ChildHandle;
        }
        else if (ChildHandle->GetProperty()->GetName() == TEXT("HeadInvertZAxis"))
        {
            HeadZPropertyHandle = ChildHandle;
        }
        else if (ChildHandle->GetProperty()->GetName() == TEXT("HeadPositionScale"))
        {
            HeadScalePropertyHandle = ChildHandle;
        }
        else if (ChildHandle->GetProperty()->GetName() == TEXT("InvertXAxis"))
        {
            BoneXPropertyHandle = ChildHandle;
        }
        else if (ChildHandle->GetProperty()->GetName() == TEXT("InvertYAxis"))
        {
            BoneYPropertyHandle = ChildHandle;
        }
        else if (ChildHandle->GetProperty()->GetName() == TEXT("InvertZAxis"))
        {
            BoneZPropertyHandle = ChildHandle;
        }
        else if (ChildHandle->GetProperty()->GetName() == TEXT("PositionScale"))
        {
            BoneScalePropertyHandle = ChildHandle;
        }
    }

    if (HeadXPropertyHandle.IsValid() && HeadXPropertyHandle->GetProperty()
        && HeadYPropertyHandle.IsValid() && HeadYPropertyHandle->GetProperty()
        && HeadZPropertyHandle.IsValid() && HeadZPropertyHandle->GetProperty()
        && HeadScalePropertyHandle.IsValid() && HeadScalePropertyHandle->GetProperty()
        && BoneXPropertyHandle.IsValid() && BoneXPropertyHandle->GetProperty()
        && BoneYPropertyHandle.IsValid() && BoneYPropertyHandle->GetProperty()
        && BoneZPropertyHandle.IsValid() && BoneZPropertyHandle->GetProperty()
        && BoneScalePropertyHandle.IsValid() && BoneScalePropertyHandle->GetProperty())
    {
        // Hide reset button
        HeadXPropertyHandle.Get()->MarkResetToDefaultCustomized(true);
        HeadYPropertyHandle.Get()->MarkResetToDefaultCustomized(true);
        HeadZPropertyHandle.Get()->MarkResetToDefaultCustomized(true);
        HeadScalePropertyHandle.Get()->MarkResetToDefaultCustomized(true);
        BoneXPropertyHandle.Get()->MarkResetToDefaultCustomized(true);
        BoneYPropertyHandle.Get()->MarkResetToDefaultCustomized(true);
        BoneZPropertyHandle.Get()->MarkResetToDefaultCustomized(true);
        BoneScalePropertyHandle.Get()->MarkResetToDefaultCustomized(true);

        StructBuilder.AddCustomRow(FText::FromString(FString("Head")))
            .NameContent()
            [
                SNew(SHorizontalBox)
                + SHorizontalBox::Slot()
            [
                // Source bone name
                SNew(STextBlock).Text(FText::FromString(FString("Head")))
                .Font(IDetailLayoutBuilder::GetDetailFont())
            ]]
        .ValueContent()
            .MinDesiredWidth(350)
            [
                SNew(SHorizontalBox)
                + SHorizontalBox::Slot()
                
            [
                SNew(SProperty, HeadXPropertyHandle)
                .DisplayName(FText::FromString(FString("Invert X")))
            ]
            + SHorizontalBox::Slot()
            [
                SNew(SProperty, HeadYPropertyHandle)
                .DisplayName(FText::FromString(FString("Invert Y")))
            ]
            + SHorizontalBox::Slot()
            [
                SNew(SProperty, HeadZPropertyHandle)
                .DisplayName(FText::FromString(FString("Invert Z")))
            ]
            + SHorizontalBox::Slot()
                [
                    SNew(SProperty, HeadScalePropertyHandle)
                    .DisplayName(FText::FromString(FString("Scale")))
                ]];

        StructBuilder.AddCustomRow(FText::FromString(FString("Other bones")))
            .NameContent()
            [
                SNew(SHorizontalBox)
                + SHorizontalBox::Slot()
            [
                // Source bone name
                SNew(STextBlock).Text(FText::FromString(FString("Other bones")))
                .Font(IDetailLayoutBuilder::GetDetailFont())
            ]]
        .ValueContent()
            .MinDesiredWidth(350)
            [
                SNew(SHorizontalBox)
                + SHorizontalBox::Slot()
            [
                SNew(SProperty, BoneXPropertyHandle)
                .DisplayName(FText::FromString(FString("Invert X")))
            ]
        + SHorizontalBox::Slot()
            [
                SNew(SProperty, BoneYPropertyHandle)
                .DisplayName(FText::FromString(FString("Invert Y")))
            ]
        + SHorizontalBox::Slot()
            [
                SNew(SProperty, BoneZPropertyHandle)
                .DisplayName(FText::FromString(FString("Invert Z")))
            ]
        + SHorizontalBox::Slot()
            [
                SNew(SProperty, BoneScalePropertyHandle)
                .DisplayName(FText::FromString(FString("Scale")))
            ]];
    }
}

//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
// FRotationSettingsCustomization represents the global rotation settings           //
// (last category in the Details panel)                                             //
//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////


TSharedRef<IPropertyTypeCustomization> FRotationSettingsCustomization::MakeInstance()
{
    return MakeShareable(new FRotationSettingsCustomization());
}

/** IPropertyTypeCustomization interface */
void FRotationSettingsCustomization::CustomizeHeader(TSharedRef<class IPropertyHandle> StructPropertyHandle, class FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& StructCustomizationUtils)
{
    HeaderRow.NameContent()
        [
            SNew(SHorizontalBox)
            + SHorizontalBox::Slot()
        [
            SNew(STextBlock).Text(FText::FromString(FString("Rotation Settings")))
            .Font(IDetailLayoutBuilder::GetDetailFont())
        ]];
}

void FRotationSettingsCustomization::CustomizeChildren(TSharedRef<class IPropertyHandle> StructPropertyHandle, class IDetailChildrenBuilder& StructBuilder, IPropertyTypeCustomizationUtils& StructCustomizationUtils)
{
    uint32 NumChildren;
    StructPropertyHandle->GetNumChildren(NumChildren);

    TSharedPtr<IPropertyHandle> HeadXPropertyHandle;
    TSharedPtr<IPropertyHandle> HeadYPropertyHandle;
    TSharedPtr<IPropertyHandle> HeadZPropertyHandle;
    TSharedPtr<IPropertyHandle> BoneXPropertyHandle;
    TSharedPtr<IPropertyHandle> BoneYPropertyHandle;
    TSharedPtr<IPropertyHandle> BoneZPropertyHandle;

    for (uint32 i = 0; i < NumChildren; ++i)
    {
        const TSharedRef<IPropertyHandle> ChildHandle = StructPropertyHandle->GetChildHandle(i).ToSharedRef();

        if (ChildHandle->GetProperty()->GetName() == TEXT("HeadInvertXAxis"))
        {
            HeadXPropertyHandle = ChildHandle;
        }
        else if (ChildHandle->GetProperty()->GetName() == TEXT("HeadInvertYAxis"))
        {
            HeadYPropertyHandle = ChildHandle;
        }
        else if (ChildHandle->GetProperty()->GetName() == TEXT("HeadInvertZAxis"))
        {
            HeadZPropertyHandle = ChildHandle;
        }
        else if (ChildHandle->GetProperty()->GetName() == TEXT("InvertXAxis"))
        {
            BoneXPropertyHandle = ChildHandle;
        }
        else if (ChildHandle->GetProperty()->GetName() == TEXT("InvertYAxis"))
        {
            BoneYPropertyHandle = ChildHandle;
        }
        else if (ChildHandle->GetProperty()->GetName() == TEXT("InvertZAxis"))
        {
            BoneZPropertyHandle = ChildHandle;
        }
    }

    if (HeadXPropertyHandle.IsValid() && HeadXPropertyHandle->GetProperty()
        && HeadYPropertyHandle.IsValid() && HeadYPropertyHandle->GetProperty()
        && HeadZPropertyHandle.IsValid() && HeadZPropertyHandle->GetProperty()
        && BoneXPropertyHandle.IsValid() && BoneXPropertyHandle->GetProperty()
        && BoneYPropertyHandle.IsValid() && BoneYPropertyHandle->GetProperty()
        && BoneZPropertyHandle.IsValid() && BoneZPropertyHandle->GetProperty())
    {
        // Hide reset button
        HeadXPropertyHandle.Get()->MarkResetToDefaultCustomized(true);
        HeadYPropertyHandle.Get()->MarkResetToDefaultCustomized(true);
        HeadZPropertyHandle.Get()->MarkResetToDefaultCustomized(true);
        BoneXPropertyHandle.Get()->MarkResetToDefaultCustomized(true);
        BoneYPropertyHandle.Get()->MarkResetToDefaultCustomized(true);
        BoneZPropertyHandle.Get()->MarkResetToDefaultCustomized(true);

        StructBuilder.AddCustomRow(FText::FromString(FString("Head")))
            .NameContent()
            [
                SNew(SHorizontalBox)
                + SHorizontalBox::Slot()
            [
                // Source bone name
                SNew(STextBlock).Text(FText::FromString(FString("Head")))
                .Font(IDetailLayoutBuilder::GetDetailFont())
            ]]
        .ValueContent()
            .MinDesiredWidth(300)
            [
                SNew(SHorizontalBox)
                + SHorizontalBox::Slot()

            [
                SNew(SProperty, HeadXPropertyHandle)
                .DisplayName(FText::FromString(FString("Invert X")))
            ]
        + SHorizontalBox::Slot()
            [
                SNew(SProperty, HeadYPropertyHandle)
                .DisplayName(FText::FromString(FString("Invert Y")))
            ]
        + SHorizontalBox::Slot()
            [
                SNew(SProperty, HeadZPropertyHandle)
                .DisplayName(FText::FromString(FString("Invert Z")))
            ]];

        StructBuilder.AddCustomRow(FText::FromString(FString("Other bones")))
            .NameContent()
            [
                SNew(SHorizontalBox)
                + SHorizontalBox::Slot()
            [
                // Source bone name
                SNew(STextBlock).Text(FText::FromString(FString("Other bones")))
                .Font(IDetailLayoutBuilder::GetDetailFont())
            ]]
        .ValueContent()
            .MinDesiredWidth(300)
            [
                SNew(SHorizontalBox)
                + SHorizontalBox::Slot()
            [
                SNew(SProperty, BoneXPropertyHandle)
                .DisplayName(FText::FromString(FString("Invert X")))
            ]
        + SHorizontalBox::Slot()
            [
                SNew(SProperty, BoneYPropertyHandle)
                .DisplayName(FText::FromString(FString("Invert Y")))
            ]
        + SHorizontalBox::Slot()
            [
                SNew(SProperty, BoneZPropertyHandle)
                .DisplayName(FText::FromString(FString("Invert Z")))
            ]];
    }
}

//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
// FBoneTransSettingsCustomization represents the translation settings for one      //
// bone, so for one line in the list of bones.                                      //
//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////


TSharedRef<IPropertyTypeCustomization> FBoneTransSettingsCustomization::MakeInstance()
{
    return MakeShareable(new FBoneTransSettingsCustomization());
}

/** IPropertyTypeCustomization interface */
void FBoneTransSettingsCustomization::CustomizeHeader(TSharedRef<class IPropertyHandle> StructPropertyHandle, class FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& StructCustomizationUtils)
{
}

void FBoneTransSettingsCustomization::CustomizeChildren(TSharedRef<class IPropertyHandle> StructPropertyHandle, class IDetailChildrenBuilder& StructBuilder, IPropertyTypeCustomizationUtils& StructCustomizationUtils)
{
    uint32 NumChildren;
    StructPropertyHandle->GetNumChildren(NumChildren);

    TSharedPtr<IPropertyHandle> XPropertyHandle;
    TSharedPtr<IPropertyHandle> YPropertyHandle;
    TSharedPtr<IPropertyHandle> ZPropertyHandle;
    TSharedPtr<IPropertyHandle> XMinClampPropertyHandle;
    TSharedPtr<IPropertyHandle> XMaxClampPropertyHandle;
    TSharedPtr<IPropertyHandle> YMinClampPropertyHandle;
    TSharedPtr<IPropertyHandle> YMaxClampPropertyHandle;
    TSharedPtr<IPropertyHandle> ZMinClampPropertyHandle;
    TSharedPtr<IPropertyHandle> ZMaxClampPropertyHandle;

    static FString DirPath = IPluginManager::Get().FindPlugin(TEXT("DxyzLiveLinkPlugin"))->GetBaseDir();
    FString vResPath = FPaths::Combine(FPaths::ConvertRelativePathToFull(DirPath), FString("Resources"));

    FString vClamp = FPaths::Combine(vResPath, FString("clamp.png"));
    mClampBrush = FSlateDynamicImageBrush(FName(*vClamp), FVector2D(12.0f, 12.0f));

    FString vUnClamp = FPaths::Combine(vResPath, FString("unclamp.png"));
    mUnClampBrush = FSlateDynamicImageBrush(FName(*vUnClamp), FVector2D(12.0f, 12.0f));

    mLayoutBuilder = nullptr;

    for (uint32 i = 0; i < NumChildren; ++i)
    {
        const TSharedRef<IPropertyHandle> ChildHandle = StructPropertyHandle->GetChildHandle(i).ToSharedRef();

        if (ChildHandle->GetProperty()->GetName() == TEXT("Enabled"))
        {
            mEnabledPropertyHandle = ChildHandle;
        }
        else if (ChildHandle->GetProperty()->GetName() == TEXT("XPercent"))
        {
            XPropertyHandle = ChildHandle;
        }
        else if (ChildHandle->GetProperty()->GetName() == TEXT("XClamp"))
        {
            mXClampPropertyHandle = ChildHandle;
        }
        else if (ChildHandle->GetProperty()->GetName() == TEXT("XMinClamp"))
        {
            XMinClampPropertyHandle = ChildHandle;
        }
        else if (ChildHandle->GetProperty()->GetName() == TEXT("XMaxClamp"))
        {
            XMaxClampPropertyHandle = ChildHandle;
        }
        else if (ChildHandle->GetProperty()->GetName() == TEXT("YPercent"))
        {
            YPropertyHandle = ChildHandle;
        }
        else if (ChildHandle->GetProperty()->GetName() == TEXT("YClamp"))
        {
            mYClampPropertyHandle = ChildHandle;
        }
        else if (ChildHandle->GetProperty()->GetName() == TEXT("YMinClamp"))
        {
            YMinClampPropertyHandle = ChildHandle;
        }
        else if (ChildHandle->GetProperty()->GetName() == TEXT("YMaxClamp"))
        {
            YMaxClampPropertyHandle = ChildHandle;
        }
        else if (ChildHandle->GetProperty()->GetName() == TEXT("ZPercent"))
        {
            ZPropertyHandle = ChildHandle;
        }
        else if (ChildHandle->GetProperty()->GetName() == TEXT("ZClamp"))
        {
            mZClampPropertyHandle = ChildHandle;
        }
        else if (ChildHandle->GetProperty()->GetName() == TEXT("ZMinClamp"))
        {
            ZMinClampPropertyHandle = ChildHandle;
        }
        else if (ChildHandle->GetProperty()->GetName() == TEXT("ZMaxClamp"))
        {
            ZMaxClampPropertyHandle = ChildHandle;
        }
    }

    mLayoutBuilder = &StructBuilder.GetParentCategory().GetParentLayout();

    if (mEnabledPropertyHandle.IsValid() && mEnabledPropertyHandle->GetProperty()
        && XPropertyHandle.IsValid() && XPropertyHandle->GetProperty()
        && mXClampPropertyHandle.IsValid() && mXClampPropertyHandle->GetProperty()
        && XMinClampPropertyHandle.IsValid() && XMinClampPropertyHandle->GetProperty()
        && XMaxClampPropertyHandle.IsValid() && XMaxClampPropertyHandle->GetProperty()
        && YPropertyHandle.IsValid() && YPropertyHandle->GetProperty()
        && mYClampPropertyHandle.IsValid() && mYClampPropertyHandle->GetProperty()
        && YMinClampPropertyHandle.IsValid() && YMinClampPropertyHandle->GetProperty()
        && YMaxClampPropertyHandle.IsValid() && YMaxClampPropertyHandle->GetProperty()
        && ZPropertyHandle.IsValid() && ZPropertyHandle->GetProperty()
        && mZClampPropertyHandle.IsValid() && mZClampPropertyHandle->GetProperty()
        && ZMinClampPropertyHandle.IsValid() && ZMinClampPropertyHandle->GetProperty()
        && ZMaxClampPropertyHandle.IsValid() && ZMaxClampPropertyHandle->GetProperty())
    {
        mEnabledPropertyHandle.Get()->MarkHiddenByCustomization();

        FString vXEnabledValue;
        mXClampPropertyHandle->GetValueAsDisplayString(vXEnabledValue);
        bool vIsXEnabled = vXEnabledValue == "true";

        FString vYEnabledValue;
        mYClampPropertyHandle->GetValueAsDisplayString(vYEnabledValue);
        bool vIsYEnabled = vYEnabledValue == "true";

        FString vZEnabledValue;
        mZClampPropertyHandle->GetValueAsDisplayString(vZEnabledValue);
        bool vIsZEnabled = vZEnabledValue == "true";

        FString vEnabledValue;
        mEnabledPropertyHandle->GetValueAsDisplayString(vEnabledValue);
        bool vIsEnabled = vEnabledValue == "true";

        StructBuilder.AddCustomRow(FText::FromString(FString("Apply Translation")))
            .NameContent()
            [
                SNew(SHorizontalBox)
                + SHorizontalBox::Slot()
            .Padding(10, 3, 0, 0)
            [
                SNew(SCheckBox)
                .OnCheckStateChanged(this, &FBoneTransSettingsCustomization::OnCheckStateChanged)
            .IsChecked(vIsEnabled ? ECheckBoxState::Checked : ECheckBoxState::Unchecked)
            .Content()
            [
                SNew(STextBlock).Text(FText::FromString(FString("Apply Translation")))
                .Font(IDetailLayoutBuilder::GetDetailFont())
            ]]]
        .ValueContent()
            .HAlign(HAlign_Left)
            .MinDesiredWidth(650)
            [
                SNew(SHorizontalBox)
                + SHorizontalBox::Slot()
            .Padding(0, 3, 0, 0)
            [
                SNew(SProperty, XPropertyHandle)
                .DisplayName(FText::FromString(FString("X(%)")))
            .IsEnabled(vIsEnabled)
            ]

        // Construct the clamp button
        + SHorizontalBox::Slot()
            .Padding(4, 8, 4, 6)
            .MaxWidth(20)
            .HAlign(HAlign_Left)
            .VAlign(VAlign_Center)
            [
                SNew(SButton)
                .ButtonStyle(FEditorStyle::Get(), "HoverHintOnly")
                .OnClicked(this, &FBoneTransSettingsCustomization::OnToggleButton, 0, vIsXEnabled)
                .ToolTipText(vIsXEnabled ? FText::FromString(FString("Unclamp X value")) : FText::FromString(FString("Clamp X value")))
                .ForegroundColor(FSlateColor::UseForeground())
                .IsEnabled(vIsEnabled)
                .Content()[
                    SNew(SImage)
                        .Image(vIsXEnabled ? &mUnClampBrush : &mClampBrush)
                        .ColorAndOpacity(FSlateColor::UseForeground())
                ]
            ]
        + SHorizontalBox::Slot()
            .Padding(0, 3, 0, 0)
            [
                SNew(SProperty, YPropertyHandle)
                .DisplayName(FText::FromString(FString("Y(%)")))
            .IsEnabled(vIsEnabled)
            ]
        // Construct the clamp button
        + SHorizontalBox::Slot()
            .Padding(4, 8, 4, 6)
            .MaxWidth(20)
            .HAlign(HAlign_Left)
            .VAlign(VAlign_Center)
            [
                SNew(SButton)
                .ButtonStyle(FEditorStyle::Get(), "HoverHintOnly")
                .OnClicked(this, &FBoneTransSettingsCustomization::OnToggleButton, 1, vIsYEnabled)
                .ToolTipText(vIsYEnabled ? FText::FromString(FString("Unclamp Y value")) : FText::FromString(FString("Clamp Y value")))
                .ForegroundColor(FSlateColor::UseForeground())
                .IsEnabled(vIsEnabled)
                .Content()[
                    SNew(SImage)
                        .Image(vIsYEnabled ? &mUnClampBrush : &mClampBrush)
                        .ColorAndOpacity(FSlateColor::UseForeground())
                ]
            ]
        + SHorizontalBox::Slot()
            .Padding(0, 3, 0, 0)
            [
                SNew(SProperty, ZPropertyHandle)
                .DisplayName(FText::FromString(FString("Z(%)")))
            .IsEnabled(vIsEnabled)
            ]
        // Construct the clamp button
        + SHorizontalBox::Slot()
            .Padding(4, 8, 4, 6)
            .MaxWidth(20)
            .HAlign(HAlign_Left)
            .VAlign(VAlign_Center)
            [
                SNew(SButton)
                .ButtonStyle(FEditorStyle::Get(), "HoverHintOnly")
                .OnClicked(this, &FBoneTransSettingsCustomization::OnToggleButton, 2, vIsZEnabled)
                .ToolTipText(vIsZEnabled ? FText::FromString(FString("Unclamp Z value")) : FText::FromString(FString("Clamp Z value")))
                .ForegroundColor(FSlateColor::UseForeground())
                .IsEnabled(vIsEnabled)
                .Content()[
                    SNew(SImage)
                        .Image(vIsZEnabled ? &mUnClampBrush : &mClampBrush)
                        .ColorAndOpacity(FSlateColor::UseForeground())
                ]
            ]];

        if (vIsXEnabled || vIsYEnabled || vIsZEnabled)
        {
            StructBuilder.AddCustomRow(FText::FromString(FString("Clamping")))
                .ValueContent()
                .MinDesiredWidth(800)
                [
                    SNew(SHorizontalBox)
                    + SHorizontalBox::Slot()
                .Padding(20, 3, 2, 6)
                .MaxWidth(10)
                [
                    SNew(STextBlock)
                    .Text(FText::FromString(FString("X")))
                .IsEnabled(vIsEnabled)
                .Visibility(vIsXEnabled ? EVisibility::Visible : EVisibility::Hidden)
                ]
                    + SHorizontalBox::Slot()
                .Padding(0, 3, 2, 6)
                .MaxWidth(50)
                [
                    SNew(SProperty, XMinClampPropertyHandle)
                .ShouldDisplayName(false)
                .IsEnabled(vIsEnabled)
                .Visibility(vIsXEnabled ? EVisibility::Visible : EVisibility::Hidden)
                ]
            + SHorizontalBox::Slot()
                .Padding(0, 3, 2, 6)
                .MaxWidth(50)
                [
                    SNew(SProperty, XMaxClampPropertyHandle)
                    .ShouldDisplayName(false)
                .IsEnabled(vIsEnabled)
                .Visibility(vIsXEnabled ? EVisibility::Visible : EVisibility::Hidden)

                ]
            +SHorizontalBox::Slot()
                .Padding(20, 3, 2, 6)
                .MaxWidth(10)
                [
                    SNew(STextBlock)
                    .Text(FText::FromString(FString("Y")))
                    .IsEnabled(vIsEnabled)
                    .Visibility(vIsYEnabled ? EVisibility::Visible : EVisibility::Hidden)
                ]
            + SHorizontalBox::Slot()
                .Padding(0, 3, 2, 6)
                .MaxWidth(50)
                [
                    SNew(SProperty, YMinClampPropertyHandle)
                    .ShouldDisplayName(false)
                .IsEnabled(vIsEnabled)
                .Visibility(vIsYEnabled ? EVisibility::Visible : EVisibility::Hidden)
                ]
            + SHorizontalBox::Slot()
                .Padding(0, 3, 2, 6)
                .MaxWidth(50)
                [
                    SNew(SProperty, YMaxClampPropertyHandle)
                    .ShouldDisplayName(false)
                .IsEnabled(vIsEnabled)
                .Visibility(vIsYEnabled ? EVisibility::Visible : EVisibility::Hidden)
                ]
            +SHorizontalBox::Slot()
                .Padding(20, 3, 2, 6)
                .MaxWidth(10)
                [
                    SNew(STextBlock)
                    .Text(FText::FromString(FString("Z")))
                .IsEnabled(vIsEnabled)
                .Visibility(vIsZEnabled ? EVisibility::Visible : EVisibility::Hidden)
                ]
            + SHorizontalBox::Slot()
                .Padding(0, 3, 2, 6)
                .MaxWidth(50)
                [
                    SNew(SProperty, ZMinClampPropertyHandle)
                 .ShouldDisplayName(false)
                .IsEnabled(vIsEnabled)
                .Visibility(vIsZEnabled ? EVisibility::Visible : EVisibility::Hidden)
                ]
            + SHorizontalBox::Slot()
                .Padding(0, 3, 2, 6)
                .MaxWidth(50)
                [
                    SNew(SProperty, ZMaxClampPropertyHandle)
                    .ShouldDisplayName(false)
                .IsEnabled(vIsEnabled)
                .Visibility(vIsZEnabled ? EVisibility::Visible : EVisibility::Hidden)
                ]
                ];
        }
    }
}

FReply FBoneTransSettingsCustomization::OnToggleButton(int Axis, bool CurrentlyVisible)
{
    switch (Axis)
    {
    case 0:
        mXClampPropertyHandle->SetValue(!CurrentlyVisible);
    default:
        break;
    case 1:
        mYClampPropertyHandle->SetValue(!CurrentlyVisible);
        break;
    case 2:
        mZClampPropertyHandle->SetValue(!CurrentlyVisible);
        break;
    }

    mLayoutBuilder->ForceRefreshDetails();
    return FReply::Handled();
}

void FBoneTransSettingsCustomization::OnCheckStateChanged(ECheckBoxState NewState)
{
    mEnabledPropertyHandle->SetValue(NewState == ECheckBoxState::Checked);
    mLayoutBuilder->ForceRefreshDetails();
}

//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
// FBoneRotaSettingsCustomization represents the rotation settings for one bone,    //
// so for one line in the list of bones.                                            //
//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////


TSharedRef<IPropertyTypeCustomization> FBoneRotaSettingsCustomization::MakeInstance()
{
    return MakeShareable(new FBoneRotaSettingsCustomization());
}

/** IPropertyTypeCustomization interface */
void FBoneRotaSettingsCustomization::CustomizeHeader(TSharedRef<class IPropertyHandle> StructPropertyHandle, class FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& StructCustomizationUtils)
{
}

void FBoneRotaSettingsCustomization::CustomizeChildren(TSharedRef<class IPropertyHandle> StructPropertyHandle, class IDetailChildrenBuilder& StructBuilder, IPropertyTypeCustomizationUtils& StructCustomizationUtils)
{
    uint32 NumChildren;
    StructPropertyHandle->GetNumChildren(NumChildren);

    TSharedPtr<IPropertyHandle> XPropertyHandle;
    TSharedPtr<IPropertyHandle> YPropertyHandle;
    TSharedPtr<IPropertyHandle> ZPropertyHandle;
    TSharedPtr<IPropertyHandle> XMinClampPropertyHandle;
    TSharedPtr<IPropertyHandle> XMaxClampPropertyHandle;
    TSharedPtr<IPropertyHandle> YMinClampPropertyHandle;
    TSharedPtr<IPropertyHandle> YMaxClampPropertyHandle;
    TSharedPtr<IPropertyHandle> ZMinClampPropertyHandle;
    TSharedPtr<IPropertyHandle> ZMaxClampPropertyHandle;

    static FString DirPath = IPluginManager::Get().FindPlugin(TEXT("DxyzLiveLinkPlugin"))->GetBaseDir();
    FString vResPath = FPaths::Combine(FPaths::ConvertRelativePathToFull(DirPath), FString("Resources"));

    FString vClamp = FPaths::Combine(vResPath, FString("clamp.png"));
    mClampBrush = FSlateDynamicImageBrush(FName(*vClamp), FVector2D(12.0f, 12.0f));

    FString vUnClamp = FPaths::Combine(vResPath, FString("unclamp.png"));
    mUnClampBrush = FSlateDynamicImageBrush(FName(*vUnClamp), FVector2D(12.0f, 12.0f));

    mLayoutBuilder = nullptr;

    for (uint32 i = 0; i < NumChildren; ++i)
    {
        const TSharedRef<IPropertyHandle> ChildHandle = StructPropertyHandle->GetChildHandle(i).ToSharedRef();

        if (ChildHandle->GetProperty()->GetName() == TEXT("Enabled"))
        {
            mEnabledPropertyHandle = ChildHandle;
        }
        if (ChildHandle->GetProperty()->GetName() == TEXT("XPercent"))
        {
            XPropertyHandle = ChildHandle;
        }
        else if (ChildHandle->GetProperty()->GetName() == TEXT("XClamp"))
        {
            mXClampPropertyHandle = ChildHandle;
        }
        else if (ChildHandle->GetProperty()->GetName() == TEXT("XMinClamp"))
        {
            XMinClampPropertyHandle = ChildHandle;
        }
        else if (ChildHandle->GetProperty()->GetName() == TEXT("XMaxClamp"))
        {
            XMaxClampPropertyHandle = ChildHandle;
        }
        else if (ChildHandle->GetProperty()->GetName() == TEXT("YPercent"))
        {
            YPropertyHandle = ChildHandle;
        }
        else if (ChildHandle->GetProperty()->GetName() == TEXT("YClamp"))
        {
            mYClampPropertyHandle = ChildHandle;
        }
        else if (ChildHandle->GetProperty()->GetName() == TEXT("YMinClamp"))
        {
            YMinClampPropertyHandle = ChildHandle;
        }
        else if (ChildHandle->GetProperty()->GetName() == TEXT("YMaxClamp"))
        {
            YMaxClampPropertyHandle = ChildHandle;
        }
        else if (ChildHandle->GetProperty()->GetName() == TEXT("ZPercent"))
        {
            ZPropertyHandle = ChildHandle;
        }
        else if (ChildHandle->GetProperty()->GetName() == TEXT("ZClamp"))
        {
            mZClampPropertyHandle = ChildHandle;
        }
        else if (ChildHandle->GetProperty()->GetName() == TEXT("ZMinClamp"))
        {
            ZMinClampPropertyHandle = ChildHandle;
        }
        else if (ChildHandle->GetProperty()->GetName() == TEXT("ZMaxClamp"))
        {
            ZMaxClampPropertyHandle = ChildHandle;
        }
    }

    mLayoutBuilder = &StructBuilder.GetParentCategory().GetParentLayout();

    if (mEnabledPropertyHandle.IsValid() && mEnabledPropertyHandle->GetProperty()
        && XPropertyHandle.IsValid() && XPropertyHandle->GetProperty()
        && mXClampPropertyHandle.IsValid() && mXClampPropertyHandle->GetProperty()
        && XMinClampPropertyHandle.IsValid() && XMinClampPropertyHandle->GetProperty()
        && XMaxClampPropertyHandle.IsValid() && XMaxClampPropertyHandle->GetProperty()
        && YPropertyHandle.IsValid() && YPropertyHandle->GetProperty()
        && mYClampPropertyHandle.IsValid() && mYClampPropertyHandle->GetProperty()
        && YMinClampPropertyHandle.IsValid() && YMinClampPropertyHandle->GetProperty()
        && YMaxClampPropertyHandle.IsValid() && YMaxClampPropertyHandle->GetProperty()
        && ZPropertyHandle.IsValid() && ZPropertyHandle->GetProperty()
        && mZClampPropertyHandle.IsValid() && mZClampPropertyHandle->GetProperty()
        && ZMinClampPropertyHandle.IsValid() && ZMinClampPropertyHandle->GetProperty()
        && ZMaxClampPropertyHandle.IsValid() && ZMaxClampPropertyHandle->GetProperty())
    {
        mEnabledPropertyHandle.Get()->MarkHiddenByCustomization();

        FString vXEnabledValue;
        mXClampPropertyHandle->GetValueAsDisplayString(vXEnabledValue);
        bool vIsXEnabled = vXEnabledValue == "true";

        FString vYEnabledValue;
        mYClampPropertyHandle->GetValueAsDisplayString(vYEnabledValue);
        bool vIsYEnabled = vYEnabledValue == "true";

        FString vZEnabledValue;
        mZClampPropertyHandle->GetValueAsDisplayString(vZEnabledValue);
        bool vIsZEnabled = vZEnabledValue == "true";

        FString vEnabledValue;
        mEnabledPropertyHandle->GetValueAsDisplayString(vEnabledValue);
        bool vIsEnabled = vEnabledValue == "true";

        StructBuilder.AddCustomRow(FText::FromString(FString("Apply Rotation")))
            .NameContent()
            [
                SNew(SHorizontalBox)
                + SHorizontalBox::Slot()
                .Padding(10, 0, 0, 0)
            [
                SNew(SCheckBox)
                .OnCheckStateChanged(this, &FBoneRotaSettingsCustomization::OnCheckStateChanged)
            .IsChecked(vIsEnabled ? ECheckBoxState::Checked : ECheckBoxState::Unchecked)
            .Content()
            [
                SNew(STextBlock).Text(FText::FromString(FString("Apply Rotation")))
                .Font(IDetailLayoutBuilder::GetDetailFont())
            ]]]
        .ValueContent()
            .HAlign(HAlign_Left)
            .MinDesiredWidth(650)
            [
                SNew(SHorizontalBox)
                + SHorizontalBox::Slot()
            .Padding(0, 3, 0, 0)
            [
                SNew(SProperty, XPropertyHandle)
                .DisplayName(FText::FromString(FString("X(%)")))
            .IsEnabled(vIsEnabled)
            ]

        // Construct the clamp button
        + SHorizontalBox::Slot()
            .Padding(4, 8, 4, 6)
            .MaxWidth(20)
            .HAlign(HAlign_Left)
            .VAlign(VAlign_Center)
            [
                SNew(SButton)
                .ButtonStyle(FEditorStyle::Get(), "HoverHintOnly")
            .OnClicked(this, &FBoneRotaSettingsCustomization::OnToggleButton, 0, vIsXEnabled)
            .ToolTipText(vIsXEnabled ? FText::FromString(FString("Unclamp X value")) : FText::FromString(FString("Clamp X value")))
            .ForegroundColor(FSlateColor::UseForeground())
            .IsEnabled(vIsEnabled)
            .Content()[
                SNew(SImage)
                    .Image(vIsXEnabled ? &mUnClampBrush : &mClampBrush)
                    .ColorAndOpacity(FSlateColor::UseForeground())
            ]
            ]
        + SHorizontalBox::Slot()
            .Padding(0, 3, 0, 0)
            [
                SNew(SProperty, YPropertyHandle)
                .DisplayName(FText::FromString(FString("Y(%)")))
            .IsEnabled(vIsEnabled)
            ]
        // Construct the clamp button
        + SHorizontalBox::Slot()
            .Padding(4, 8, 4, 6)
            .MaxWidth(20)
            .HAlign(HAlign_Left)
            .VAlign(VAlign_Center)
            [
                SNew(SButton)
                .ButtonStyle(FEditorStyle::Get(), "HoverHintOnly")
            .OnClicked(this, &FBoneRotaSettingsCustomization::OnToggleButton, 1, vIsYEnabled)
            .ToolTipText(vIsYEnabled ? FText::FromString(FString("Unclamp Y value")) : FText::FromString(FString("Clamp Y value")))
            .ForegroundColor(FSlateColor::UseForeground())
            .IsEnabled(vIsEnabled)
            .Content()[
                SNew(SImage)
                    .Image(vIsYEnabled ? &mUnClampBrush : &mClampBrush)
                    .ColorAndOpacity(FSlateColor::UseForeground())
            ]
            ]
        + SHorizontalBox::Slot()
            .Padding(0, 3, 0, 0)
            [
                SNew(SProperty, ZPropertyHandle)
                .DisplayName(FText::FromString(FString("Z(%)")))
            .IsEnabled(vIsEnabled)
            ]
        // Construct the clamp button
        + SHorizontalBox::Slot()
            .Padding(4, 8, 4, 6)
            .MaxWidth(20)
            .HAlign(HAlign_Left)
            .VAlign(VAlign_Center)
            [
                SNew(SButton)
                .ButtonStyle(FEditorStyle::Get(), "HoverHintOnly")
            .OnClicked(this, &FBoneRotaSettingsCustomization::OnToggleButton, 2, vIsZEnabled)
            .ToolTipText(vIsZEnabled ? FText::FromString(FString("Unclamp Z value")) : FText::FromString(FString("Clamp Z value")))
            .ForegroundColor(FSlateColor::UseForeground())
            .IsEnabled(vIsEnabled)
            .Content()[
                SNew(SImage)
                    .Image(vIsZEnabled ? &mUnClampBrush : &mClampBrush)
                    .ColorAndOpacity(FSlateColor::UseForeground())
            ]
            ]];

        if (vIsXEnabled || vIsYEnabled || vIsZEnabled)
        {
            StructBuilder.AddCustomRow(FText::FromString(FString("Clamping")))
                .ValueContent()
                .MinDesiredWidth(800)
                [
                    SNew(SHorizontalBox)
                    + SHorizontalBox::Slot()
                .Padding(20, 3, 2, 6)
                .MaxWidth(10)
                [
                    SNew(STextBlock)
                    .Text(FText::FromString(FString("X")))
                .IsEnabled(vIsEnabled)
                .Visibility(vIsXEnabled ? EVisibility::Visible : EVisibility::Hidden)
                ]
            + SHorizontalBox::Slot()
                .Padding(0, 3, 2, 6)
                .MaxWidth(50)
                [
                    SNew(SProperty, XMinClampPropertyHandle)
                    .ShouldDisplayName(false)
                .IsEnabled(vIsEnabled)
                .Visibility(vIsXEnabled ? EVisibility::Visible : EVisibility::Hidden)
                ]
            + SHorizontalBox::Slot()
                .Padding(0, 3, 2, 6)
                .MaxWidth(50)
                [
                    SNew(SProperty, XMaxClampPropertyHandle)
                    .ShouldDisplayName(false)
                .IsEnabled(vIsEnabled)
                .Visibility(vIsXEnabled ? EVisibility::Visible : EVisibility::Hidden)

                ]
            + SHorizontalBox::Slot()
                .Padding(20, 3, 2, 6)
                .MaxWidth(10)
                [
                    SNew(STextBlock)
                    .Text(FText::FromString(FString("Y")))
                .IsEnabled(vIsEnabled)
                .Visibility(vIsYEnabled ? EVisibility::Visible : EVisibility::Hidden)
                ]
            + SHorizontalBox::Slot()
                .Padding(0, 3, 2, 6)
                .MaxWidth(50)
                [
                    SNew(SProperty, YMinClampPropertyHandle)
                    .ShouldDisplayName(false)
                .IsEnabled(vIsEnabled)
                .Visibility(vIsYEnabled ? EVisibility::Visible : EVisibility::Hidden)
                ]
            + SHorizontalBox::Slot()
                .Padding(0, 3, 2, 6)
                .MaxWidth(50)
                [
                    SNew(SProperty, YMaxClampPropertyHandle)
                    .ShouldDisplayName(false)
                .IsEnabled(vIsEnabled)
                .Visibility(vIsYEnabled ? EVisibility::Visible : EVisibility::Hidden)
                ]
            + SHorizontalBox::Slot()
                .Padding(20, 3, 2, 6)
                .MaxWidth(10)
                [
                    SNew(STextBlock)
                    .Text(FText::FromString(FString("Z")))
                .IsEnabled(vIsEnabled)
                .Visibility(vIsZEnabled ? EVisibility::Visible : EVisibility::Hidden)
                ]
            + SHorizontalBox::Slot()
                .Padding(0, 3, 2, 6)
                .MaxWidth(50)
                [
                    SNew(SProperty, ZMinClampPropertyHandle)
                    .ShouldDisplayName(false)
                .IsEnabled(vIsEnabled)
                .Visibility(vIsZEnabled ? EVisibility::Visible : EVisibility::Hidden)
                ]
            + SHorizontalBox::Slot()
                .Padding(0, 3, 2, 6)
                .MaxWidth(50)
                [
                    SNew(SProperty, ZMaxClampPropertyHandle)
                    .ShouldDisplayName(false)
                .IsEnabled(vIsEnabled)
                .Visibility(vIsZEnabled ? EVisibility::Visible : EVisibility::Hidden)
                ]
                ];
        }
    }
}

FReply FBoneRotaSettingsCustomization::OnToggleButton(int Axis, bool CurrentlyVisible)
{
    switch (Axis)
    {
    case 0:
        mXClampPropertyHandle->SetValue(!CurrentlyVisible);
    default:
        break;
    case 1:
        mYClampPropertyHandle->SetValue(!CurrentlyVisible);
        break;
    case 2:
        mZClampPropertyHandle->SetValue(!CurrentlyVisible);
        break;
    }

    mLayoutBuilder->ForceRefreshDetails();
    return FReply::Handled();
}


void FBoneRotaSettingsCustomization::OnCheckStateChanged(ECheckBoxState NewState)
{
    mEnabledPropertyHandle->SetValue(NewState == ECheckBoxState::Checked);
    mLayoutBuilder->ForceRefreshDetails();
}

//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
// FDxyzLiveLinkRetargetAssetDetails represents the entire Detail panel of the      //
// class DxyzLiveLinkRetargetAsset                                                  //
//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////


TSharedRef<IDetailCustomization> FDxyzLiveLinkRetargetAssetDetails::MakeInstance()
{
    return MakeShareable(new FDxyzLiveLinkRetargetAssetDetails());
}

void FDxyzLiveLinkRetargetAssetDetails::CustomizeDetails(IDetailLayoutBuilder& DetailBuilder)
{
    TSharedRef< IPropertyHandle > BoneWarningProp = DetailBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(UDxyzLiveLinkRetargetAsset, WarningBonesText));
    TSharedRef< IPropertyHandle > CurveWarningProp = DetailBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(UDxyzLiveLinkRetargetAsset, WarningCurvesText));
    TSharedRef< IPropertyHandle > SkeletalMeshProp = DetailBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(UDxyzLiveLinkRetargetAsset, SkeletalMesh));
    TSharedRef< IPropertyHandle > ESCProp = DetailBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(UDxyzLiveLinkRetargetAsset, ESCPath.FilePath));
    TSharedRef<IPropertyHandle> MeshBoneNamesPropHandle = DetailBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(UDxyzLiveLinkRetargetAsset, MeshBoneNames));
    TSharedRef<IPropertyHandle> MeshCurveNamesPropHandle = DetailBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(UDxyzLiveLinkRetargetAsset, MeshCurveNames));

    FSimpleDelegate OnNeedToRefreshDelegate = FSimpleDelegate::CreateSP(this, &FDxyzLiveLinkRetargetAssetDetails::OnNeedToRefresh, &DetailBuilder);
    BoneWarningProp->SetOnPropertyValueChanged(OnNeedToRefreshDelegate);
    CurveWarningProp->SetOnPropertyValueChanged(OnNeedToRefreshDelegate);
    SkeletalMeshProp->SetOnPropertyValueChanged(OnNeedToRefreshDelegate);
    ESCProp->SetOnPropertyValueChanged(OnNeedToRefreshDelegate);

    BoneWarningProp->MarkHiddenByCustomization();
    CurveWarningProp->MarkHiddenByCustomization();
    MeshBoneNamesPropHandle->MarkHiddenByCustomization();
    MeshCurveNamesPropHandle->MarkHiddenByCustomization();

    TSharedPtr<IPropertyHandle> EnableBonesPropHandle = DetailBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(UDxyzLiveLinkRetargetAsset, EnableAllBones));
    TSharedPtr<IPropertyHandle> DisableBonesPropHandle = DetailBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(UDxyzLiveLinkRetargetAsset, DisableAllBones));
    TSharedPtr<IPropertyHandle> EnableTransPropHandle = DetailBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(UDxyzLiveLinkRetargetAsset, EnableAllTranslations));
    TSharedPtr<IPropertyHandle> DisableTransPropHandle = DetailBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(UDxyzLiveLinkRetargetAsset, DisableAllTranslations));
    TSharedPtr<IPropertyHandle> EnableRotaPropHandle = DetailBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(UDxyzLiveLinkRetargetAsset, EnableAllRotations));
    TSharedPtr<IPropertyHandle> DisableRotaPropHandle = DetailBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(UDxyzLiveLinkRetargetAsset, DisableAllRotations));
    TSharedPtr<IPropertyHandle> EnableCurvesPropHandle = DetailBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(UDxyzLiveLinkRetargetAsset, EnableAllMorphTargets));
    TSharedPtr<IPropertyHandle> DisableCurvesPropHandle = DetailBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(UDxyzLiveLinkRetargetAsset, DisableAllMorphTargets));
    TSharedPtr<IPropertyHandle> BoostCurvesPropHandle = DetailBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(UDxyzLiveLinkRetargetAsset, BoostAllMorphTargets));
    TSharedPtr<IPropertyHandle> EaseCurvesPropHandle = DetailBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(UDxyzLiveLinkRetargetAsset, EaseAllMorphTargets));
    TSharedPtr<IPropertyHandle> ResetCurvesPropHandle = DetailBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(UDxyzLiveLinkRetargetAsset, ResetAllMorphTargets));

    EnableBonesPropHandle->MarkHiddenByCustomization();
    DisableBonesPropHandle->MarkHiddenByCustomization();
    EnableTransPropHandle->MarkHiddenByCustomization();
    DisableTransPropHandle->MarkHiddenByCustomization();
    EnableRotaPropHandle->MarkHiddenByCustomization();
    DisableRotaPropHandle->MarkHiddenByCustomization();
    EnableCurvesPropHandle->MarkHiddenByCustomization();
    DisableCurvesPropHandle->MarkHiddenByCustomization();
    BoostCurvesPropHandle->MarkHiddenByCustomization();
    EaseCurvesPropHandle->MarkHiddenByCustomization();
    ResetCurvesPropHandle->MarkHiddenByCustomization();

    static FString DirPath = IPluginManager::Get().FindPlugin(TEXT("DxyzLiveLinkPlugin"))->GetBaseDir();
    FString vResPath = FPaths::Combine(FPaths::ConvertRelativePathToFull(DirPath), FString("Resources"));

    FString vEnableBones = FPaths::Combine(vResPath, FString("enable_bones.png"));
    FString vEnableBonesHovered = FPaths::Combine(vResPath, FString("enable_bones_hovered.png"));
    FString vDisableBones = FPaths::Combine(vResPath, FString("disable_bones.png"));
    FString vDisableBonesHovered = FPaths::Combine(vResPath, FString("disable_bones_hovered.png"));
    FString vEnableTrans = FPaths::Combine(vResPath, FString("enable_trans.png"));
    FString vEnableTransHovered = FPaths::Combine(vResPath, FString("enable_trans_hovered.png"));
    FString vDisableTrans = FPaths::Combine(vResPath, FString("disable_trans.png"));
    FString vDisableTransHovered = FPaths::Combine(vResPath, FString("disable_trans_hovered.png"));
    FString vEnableRota = FPaths::Combine(vResPath, FString("enable_rota.png"));
    FString vEnableRotaHovered = FPaths::Combine(vResPath, FString("enable_rota_hovered.png"));
    FString vDisableRota = FPaths::Combine(vResPath, FString("disable_rota.png"));
    FString vDisableRotaHovered = FPaths::Combine(vResPath, FString("disable_rota_hovered.png"));

    FString vEnableCurves = FPaths::Combine(vResPath, FString("enable_curves.png"));
    FString vEnableCurvesHovered = FPaths::Combine(vResPath, FString("enable_curves_hovered.png"));
    FString vDisableCurves = FPaths::Combine(vResPath, FString("disable_curves.png"));
    FString vDisableCurvesHovered = FPaths::Combine(vResPath, FString("disable_curves_hovered.png"));
    FString vBoostCurves = FPaths::Combine(vResPath, FString("boost_curves.png"));
    FString vBoostCurvesHovered = FPaths::Combine(vResPath, FString("boost_curves_hovered.png"));
    FString vEaseCurves = FPaths::Combine(vResPath, FString("ease_curves.png"));
    FString vEaseCurvesHovered = FPaths::Combine(vResPath, FString("ease_curves_hovered.png"));
    FString vResetCurves = FPaths::Combine(vResPath, FString("reset_curves.png"));
    FString vResetCurvesHovered = FPaths::Combine(vResPath, FString("reset_curves_hovered.png"));

    const FSlateDynamicImageBrush vEnableBonesBrush(FName(*vEnableBones), FVector2D(32, 32));
    const FSlateDynamicImageBrush vEnableBonesHoveredBrush(FName(*vEnableBonesHovered), FVector2D(32, 32));
    const FSlateDynamicImageBrush vDisableBonesBrush(FName(*vDisableBones), FVector2D(32, 32));
    const FSlateDynamicImageBrush vDisableBonesHoveredBrush(FName(*vDisableBonesHovered), FVector2D(32, 32));
    const FSlateDynamicImageBrush vEnableTransBrush(FName(*vEnableTrans), FVector2D(32, 32));
    const FSlateDynamicImageBrush vEnableTransHoveredBrush(FName(*vEnableTransHovered), FVector2D(32, 32));
    const FSlateDynamicImageBrush vDisableTransBrush(FName(*vDisableTrans), FVector2D(32, 32));
    const FSlateDynamicImageBrush vDisableTransHoveredBrush(FName(*vDisableTransHovered), FVector2D(32, 32));
    const FSlateDynamicImageBrush vEnableRotaBrush(FName(*vEnableRota), FVector2D(32, 32));
    const FSlateDynamicImageBrush vEnableRotaHoveredBrush(FName(*vEnableRotaHovered), FVector2D(32, 32));
    const FSlateDynamicImageBrush vDisableRotaBrush(FName(*vDisableRota), FVector2D(32, 32));
    const FSlateDynamicImageBrush vDisableRotaHoveredBrush(FName(*vDisableRotaHovered), FVector2D(32, 32));

    const FSlateDynamicImageBrush vEnableCurvesBrush(FName(*vEnableCurves), FVector2D(32, 32));
    const FSlateDynamicImageBrush vEnableCurvesHoveredBrush(FName(*vEnableCurvesHovered), FVector2D(32, 32));
    const FSlateDynamicImageBrush vDisableCurvesBrush(FName(*vDisableCurves), FVector2D(32, 32));
    const FSlateDynamicImageBrush vDisableCurvesHoveredBrush(FName(*vDisableCurvesHovered), FVector2D(32, 32));
    const FSlateDynamicImageBrush vBoostCurvesBrush(FName(*vBoostCurves), FVector2D(32, 32));
    const FSlateDynamicImageBrush vBoostCurvesHoveredBrush(FName(*vBoostCurvesHovered), FVector2D(32, 32));
    const FSlateDynamicImageBrush vEaseCurvesBrush(FName(*vEaseCurves), FVector2D(32, 32));
    const FSlateDynamicImageBrush vEaseCurvesHoveredBrush(FName(*vEaseCurvesHovered), FVector2D(32, 32));
    const FSlateDynamicImageBrush vResetCurvesBrush(FName(*vResetCurves), FVector2D(32, 32));
    const FSlateDynamicImageBrush vResetCurvesHoveredBrush(FName(*vResetCurvesHovered), FVector2D(32, 32));

    mEnableBonesButtonStyle = FButtonStyle()
        .SetNormal(vEnableBonesBrush)
        .SetHovered(vEnableBonesHoveredBrush)
        .SetPressed(vEnableBonesBrush);

    mDisableBonesButtonStyle = FButtonStyle()
        .SetNormal(vDisableBonesBrush)
        .SetHovered(vDisableBonesHoveredBrush)
        .SetPressed(vDisableBonesBrush);

    mEnableTransButtonStyle = FButtonStyle()
        .SetNormal(vEnableTransBrush)
        .SetHovered(vEnableTransHoveredBrush)
        .SetPressed(vEnableTransBrush);

    mDisableTransButtonStyle = FButtonStyle()
        .SetNormal(vDisableTransBrush)
        .SetHovered(vDisableTransHoveredBrush)
        .SetPressed(vDisableTransBrush);

    mEnableRotaButtonStyle = FButtonStyle()
        .SetNormal(vEnableRotaBrush)
        .SetHovered(vEnableRotaHoveredBrush)
        .SetPressed(vEnableRotaBrush);

    mDisableRotaButtonStyle = FButtonStyle()
        .SetNormal(vDisableRotaBrush)
        .SetHovered(vDisableRotaHoveredBrush)
        .SetPressed(vDisableRotaBrush);

    mEnableCurvesButtonStyle = FButtonStyle()
        .SetNormal(vEnableCurvesBrush)
        .SetHovered(vEnableCurvesHoveredBrush)
        .SetPressed(vEnableCurvesBrush);

    mDisableCurvesButtonStyle = FButtonStyle()
        .SetNormal(vDisableCurvesBrush)
        .SetHovered(vDisableCurvesHoveredBrush)
        .SetPressed(vDisableCurvesBrush);

    mBoostCurvesButtonStyle = FButtonStyle()
        .SetNormal(vBoostCurvesBrush)
        .SetHovered(vBoostCurvesHoveredBrush)
        .SetPressed(vBoostCurvesBrush);

    mEaseCurvesButtonStyle = FButtonStyle()
        .SetNormal(vEaseCurvesBrush)
        .SetHovered(vEaseCurvesHoveredBrush)
        .SetPressed(vEaseCurvesBrush);

    mResetCurvesButtonStyle = FButtonStyle()
        .SetNormal(vResetCurvesBrush)
        .SetHovered(vResetCurvesHoveredBrush)
        .SetPressed(vResetCurvesBrush);

    // Display warnings
    FString vBoneWarnString;
    BoneWarningProp->GetValueAsDisplayString(vBoneWarnString);
    FString vCurveWarnString;
    CurveWarningProp->GetValueAsDisplayString(vCurveWarnString);

    // Get the link to the documentation
    FString vDocFolderPath = FPaths::Combine(FPaths::ConvertRelativePathToFull(DirPath), FString("Documentation"));
    FString vDocPath = FPaths::Combine(vDocFolderPath, FString("index.html"));

    // Just used to bring it on top...
    IDetailCategoryBuilder& DxyzCategory = DetailBuilder.EditCategory("Dxyz mapping settings");

    // Get the layout builder's category builder
    IDetailCategoryBuilder& BoneCategory = DetailBuilder.EditCategory("BoneMapping");

    if (FPaths::FileExists(vDocPath))
    {
        DxyzCategory.AddCustomRow(FText())
            .ValueContent()
            [
                SNew(SHorizontalBox)
                + SHorizontalBox::Slot()
            .AutoWidth()
            [
                SNew(SHyperlink)
                .Text(FText::FromString("Open plugin documentation"))
            .ToolTipText(FText::Format(FText::FromString("({0})"), FText::FromString(vDocPath)))
            .OnNavigate_Lambda([=]() { FPlatformProcess::LaunchURL(*FString("file:///" + vDocPath), nullptr, nullptr); })
            ]
            ];
    }

    // Add the menu property to the category
    BoneCategory.AddCustomRow(FText())
        .NameContent()
        [
            SNew(SHorizontalBox)
            + SHorizontalBox::Slot()
            .Padding(0, 0, 10, 0)
            [
                SNew(SSearchBox)
                .SelectAllTextWhenFocused(true)
                .InitialText(FText::FromString(UDxyzLiveLinkRetargetAsset::sBoneSearchFilter))
                .DelayChangeNotificationsWhileTyping(true)
                .OnTextChanged(this, &FDxyzLiveLinkRetargetAssetDetails::OnBoneFilterTextChanged, &DetailBuilder)
                .OnTextCommitted(this, &FDxyzLiveLinkRetargetAssetDetails::OnBoneFilterTextCommitted, &DetailBuilder)
                .HintText(FText::FromString(FString("Filter bones...")))
            ]
        ]
        .ValueContent()
        .MinDesiredWidth(300)
        [
            SNew(SHorizontalBox)
            + SHorizontalBox::Slot()
            .HAlign(HAlign_Left)
            .VAlign(VAlign_Center)
            .Padding(2.0f)
            [
                SNew(SButton)
                .ButtonStyle(&mEnableBonesButtonStyle)
            .OnClicked(this, &FDxyzLiveLinkRetargetAssetDetails::OnToggleButton, EnableBonesPropHandle, &DetailBuilder)
            .ToolTipText(FText::FromString(FString("Enable all bones")))
            .ForegroundColor(FSlateColor::UseForeground())
            .HAlign(HAlign_Center)
            .VAlign(VAlign_Center)
            ]
    + SHorizontalBox::Slot()
        .HAlign(HAlign_Left)
        .VAlign(VAlign_Center)
        .Padding(2.0f)
        [
            SNew(SButton)
            .ButtonStyle(&mDisableBonesButtonStyle)
        .OnClicked(this, &FDxyzLiveLinkRetargetAssetDetails::OnToggleButton, DisableBonesPropHandle, &DetailBuilder)
        .ToolTipText(FText::FromString(FString("Disable all bones")))
        .ForegroundColor(FSlateColor::UseForeground())
        .HAlign(HAlign_Center)
        .VAlign(VAlign_Center)
        ]
    + SHorizontalBox::Slot()
        .HAlign(HAlign_Left)
        .VAlign(VAlign_Center)
        .Padding(2.0f)
        [
            SNew(SButton)
            .ButtonStyle(&mEnableTransButtonStyle)
        .OnClicked(this, &FDxyzLiveLinkRetargetAssetDetails::OnToggleButton, EnableTransPropHandle, &DetailBuilder)
        .ToolTipText(FText::FromString(FString("Enable all translations")))
        .ForegroundColor(FSlateColor::UseForeground())
        .HAlign(HAlign_Center)
        .VAlign(VAlign_Center)
        ]
    + SHorizontalBox::Slot()
        .HAlign(HAlign_Left)
        .VAlign(VAlign_Center)
        .Padding(2.0f)
        [
            SNew(SButton)
            .ButtonStyle(&mDisableTransButtonStyle)
        .OnClicked(this, &FDxyzLiveLinkRetargetAssetDetails::OnToggleButton, DisableTransPropHandle, &DetailBuilder)
        .ToolTipText(FText::FromString(FString("Disable all translations")))
        .ForegroundColor(FSlateColor::UseForeground())
        .HAlign(HAlign_Center)
        .VAlign(VAlign_Center)
        ]
    + SHorizontalBox::Slot()
        .HAlign(HAlign_Left)
        .VAlign(VAlign_Center)
        .Padding(2.0f)
        [
            SNew(SButton)
            .ButtonStyle(&mEnableRotaButtonStyle)
        .OnClicked(this, &FDxyzLiveLinkRetargetAssetDetails::OnToggleButton, EnableRotaPropHandle, &DetailBuilder)
        .ToolTipText(FText::FromString(FString("Enable all rotations")))
        .ForegroundColor(FSlateColor::UseForeground())
        .HAlign(HAlign_Center)
        .VAlign(VAlign_Center)
        ]
    + SHorizontalBox::Slot()
        .HAlign(HAlign_Left)
        .VAlign(VAlign_Center)
        .Padding(2.0f)
        [
            SNew(SButton)
            .ButtonStyle(&mDisableRotaButtonStyle)
        .OnClicked(this, &FDxyzLiveLinkRetargetAssetDetails::OnToggleButton, DisableRotaPropHandle, &DetailBuilder)
        .ToolTipText(FText::FromString(FString("Disable all rotations")))
        .ForegroundColor(FSlateColor::UseForeground())
        .HAlign(HAlign_Center)
        .VAlign(VAlign_Center)
        ]
        ];

    if (!vBoneWarnString.IsEmpty())
    {
        // Add the property to the category
        BoneCategory.AddCustomRow(FText())
            .ValueContent()
            .MinDesiredWidth(500)
            [
                SNew(SHorizontalBox)
                + SHorizontalBox::Slot()
            .VAlign(VAlign_Center)
            .Padding(2.0f)
            [
                SNew(STextBlock)
                .Text(FText::FromString(vBoneWarnString))
            .ColorAndOpacity(FLinearColor::Yellow)
            .ShadowOffset(FVector2D::UnitVector)
            .AutoWrapText(true)
            ]
            ];
    }

    // Get the layout builder's category builder
    IDetailCategoryBuilder& CurveCategory = DetailBuilder.EditCategory("MorphTargets");
    CurveCategory.AddCustomRow(FText())
        .NameContent()
        [
            SNew(SHorizontalBox)
            + SHorizontalBox::Slot()
        .Padding(0, 0, 10, 0)
        [
            SNew(SSearchBox)
            .SelectAllTextWhenFocused(true)
            .InitialText(FText::FromString(UDxyzLiveLinkRetargetAsset::sCurveSearchFilter))
            .DelayChangeNotificationsWhileTyping(true)
            .OnTextChanged(this, &FDxyzLiveLinkRetargetAssetDetails::OnCurveFilterTextChanged, &DetailBuilder)
            .OnTextCommitted(this, &FDxyzLiveLinkRetargetAssetDetails::OnCurveFilterTextCommitted, &DetailBuilder)
            .HintText(FText::FromString(FString("Filter curves...")))
        ]
        ]
        .ValueContent()
        .MinDesiredWidth(250)
        [
            SNew(SHorizontalBox)
            + SHorizontalBox::Slot()
        .HAlign(HAlign_Left)
        .VAlign(VAlign_Center)
        .Padding(2.0f)
        [
            SNew(SButton)
            .ButtonStyle(&mEnableCurvesButtonStyle)
        .OnClicked(this, &FDxyzLiveLinkRetargetAssetDetails::OnToggleButton, EnableCurvesPropHandle, &DetailBuilder)
        .ToolTipText(FText::FromString(FString("Enable all morph targets")))
        .ForegroundColor(FSlateColor::UseForeground())
        .HAlign(HAlign_Center)
        .VAlign(VAlign_Center)
        ]
    + SHorizontalBox::Slot()
        .HAlign(HAlign_Left)
        .VAlign(VAlign_Center)
        .Padding(2.0f)
        [
            SNew(SButton)
            .ButtonStyle(&mDisableCurvesButtonStyle)
        .OnClicked(this, &FDxyzLiveLinkRetargetAssetDetails::OnToggleButton, DisableCurvesPropHandle, &DetailBuilder)
        .ToolTipText(FText::FromString(FString("Disable all morph targets")))
        .ForegroundColor(FSlateColor::UseForeground())
        .HAlign(HAlign_Center)
        .VAlign(VAlign_Center)
        ]
    + SHorizontalBox::Slot()
        .HAlign(HAlign_Left)
        .VAlign(VAlign_Center)
        .Padding(2.0f)
        [
            SNew(SButton)
            .ButtonStyle(&mEaseCurvesButtonStyle)
        .OnClicked(this, &FDxyzLiveLinkRetargetAssetDetails::OnToggleButton, EaseCurvesPropHandle, &DetailBuilder)
        .ToolTipText(FText::FromString(FString("Ease all morph targets")))
        .ForegroundColor(FSlateColor::UseForeground())
        .HAlign(HAlign_Center)
        .VAlign(VAlign_Center)
        ]
    + SHorizontalBox::Slot()
        .HAlign(HAlign_Left)
        .VAlign(VAlign_Center)
        .Padding(2.0f)
        [
            SNew(SButton)
            .ButtonStyle(&mResetCurvesButtonStyle)
        .OnClicked(this, &FDxyzLiveLinkRetargetAssetDetails::OnToggleButton, ResetCurvesPropHandle, &DetailBuilder)
        .ToolTipText(FText::FromString(FString("Reset all morph targets")))
        .ForegroundColor(FSlateColor::UseForeground())
        .HAlign(HAlign_Center)
        .VAlign(VAlign_Center)
        ]
    + SHorizontalBox::Slot()
        .HAlign(HAlign_Left)
        .VAlign(VAlign_Center)
        .Padding(2.0f)
        [
            SNew(SButton)
            .ButtonStyle(&mBoostCurvesButtonStyle)
        .OnClicked(this, &FDxyzLiveLinkRetargetAssetDetails::OnToggleButton, BoostCurvesPropHandle, &DetailBuilder)
        .ToolTipText(FText::FromString(FString("Boost all morph targets")))
        .ForegroundColor(FSlateColor::UseForeground())
        .HAlign(HAlign_Center)
        .VAlign(VAlign_Center)
        ]
        ];
        
    if (!vCurveWarnString.IsEmpty())
    {
        // Add the property to the category
        CurveCategory.AddCustomRow(FText())
            .ValueContent()
            .MinDesiredWidth(500)
            [
                SNew(SHorizontalBox)
                + SHorizontalBox::Slot()
            .VAlign(VAlign_Center)
            .Padding(2.0f)
            [
                SNew(STextBlock)
                .Text(FText::FromString(vCurveWarnString))
            .ColorAndOpacity(FLinearColor::Yellow)
            .ShadowOffset(FVector2D::UnitVector)
            .AutoWrapText(true)
            ]
            ];
    }

}

FReply FDxyzLiveLinkRetargetAssetDetails::OnToggleButton(TSharedPtr<IPropertyHandle> PropertyHandle, IDetailLayoutBuilder* LayoutBuilder)
{
    PropertyHandle->SetValue(true);
    LayoutBuilder->ForceRefreshDetails();

    return FReply::Handled();
}

void FDxyzLiveLinkRetargetAssetDetails::OnNeedToRefresh(IDetailLayoutBuilder* LayoutBuilder)
{
    LayoutBuilder->ForceRefreshDetails();
}

void FDxyzLiveLinkRetargetAssetDetails::OnBoneFilterTextChanged(const FText& InFilterText, IDetailLayoutBuilder* LayoutBuilder)
{
    UDxyzLiveLinkRetargetAsset::sBoneSearchFilter = InFilterText.ToString();
    if(InFilterText.ToString().IsEmpty())
        LayoutBuilder->ForceRefreshDetails();

}
void FDxyzLiveLinkRetargetAssetDetails::OnBoneFilterTextCommitted(const FText& InFilterText, ETextCommit::Type InCommitType, IDetailLayoutBuilder* LayoutBuilder)
{
    UDxyzLiveLinkRetargetAsset::sBoneSearchFilter = InFilterText.ToString();
    LayoutBuilder->ForceRefreshDetails();
}

void FDxyzLiveLinkRetargetAssetDetails::OnCurveFilterTextChanged(const FText& InFilterText, IDetailLayoutBuilder* LayoutBuilder)
{
    UDxyzLiveLinkRetargetAsset::sCurveSearchFilter = InFilterText.ToString();
    if (InFilterText.ToString().IsEmpty())
        LayoutBuilder->ForceRefreshDetails();
}

void FDxyzLiveLinkRetargetAssetDetails::OnCurveFilterTextCommitted(const FText& InFilterText, ETextCommit::Type InCommitType, IDetailLayoutBuilder* LayoutBuilder)
{
    UDxyzLiveLinkRetargetAsset::sCurveSearchFilter = InFilterText.ToString();
    LayoutBuilder->ForceRefreshDetails();
}


//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
// FDxyzLiveLinkSourceSettingsDetails represents the entire Detail panel of the     //
// class DxyzLiveLinkSourceSettings                                                 //
//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////

TSharedRef<IDetailCustomization> FDxyzLiveLinkSourceSettingsDetails::MakeInstance()
{
    return MakeShareable(new FDxyzLiveLinkSourceSettingsDetails());
}

void FDxyzLiveLinkSourceSettingsDetails::CustomizeDetails(IDetailLayoutBuilder& DetailBuilder)
{
    WarningPropHandle = DetailBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(UDxyzLiveLinkSourceSettings, WarningText));
    FSimpleDelegate OnNeedToRefreshDelegate = FSimpleDelegate::CreateSP(this, &FDxyzLiveLinkSourceSettingsDetails::OnNeedToRefresh, &DetailBuilder);
    WarningPropHandle->SetOnPropertyValueChanged(OnNeedToRefreshDelegate);

    // Display warning

    IDetailCategoryBuilder& DxyzCategory = DetailBuilder.EditCategory("Dxyz Live Link");

    // Get the link to the documentation
    static FString DirPath = IPluginManager::Get().FindPlugin(TEXT("DxyzLiveLinkPlugin"))->GetBaseDir();
    FString vDocFolderPath = FPaths::Combine(FPaths::ConvertRelativePathToFull(DirPath), FString("Documentation"));
    FString vDocPath = FPaths::Combine(vDocFolderPath, FString("index.html"));

    // Display warning
    FString vString;
    WarningPropHandle->GetValueAsDisplayString(vString);

    if (!vString.IsEmpty())
    {
        IDetailPropertyRow& PropertyArrayRow = DxyzCategory.AddProperty(WarningPropHandle);

        // Add the property to the category
        PropertyArrayRow.CustomWidget(true)
            .ValueContent()
            .MinDesiredWidth(500)
            [
                SNew(SHorizontalBox)
                + SHorizontalBox::Slot()
            .VAlign(VAlign_Center)
            .Padding(2.0f)
            [
                SNew(STextBlock)
                .Text(this, &FDxyzLiveLinkSourceSettingsDetails::GetWarningValueFromProperty, &DxyzCategory)
            .ColorAndOpacity(FLinearColor::Red)
            .ShadowOffset(FVector2D::UnitVector)
            .AutoWrapText(true)
            ]
            ];
    }

    if (FPaths::FileExists(vDocPath))
    {
        DxyzCategory.AddCustomRow(FText())
            .ValueContent()
            [
                SNew(SHorizontalBox)
                + SHorizontalBox::Slot()
            .AutoWidth()
            [
                SNew(SHyperlink)
                .Text(FText::FromString("Open plugin documentation"))
            .ToolTipText(FText::Format(FText::FromString("({0})"), FText::FromString(vDocPath)))
            .OnNavigate_Lambda([=]() { FPlatformProcess::LaunchURL(*FString("file:///" + vDocPath), nullptr, nullptr); })
            ]
            ];
    }

    mUseCustomPropHandle = DetailBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(UDxyzLiveLinkSourceSettings, UseCustomName));
    mUseCustomPropHandle.Get()->MarkHiddenByCustomization();

    FString vEnabledValue;
    mUseCustomPropHandle->GetValueAsDisplayString(vEnabledValue);
    bool vIsEnabled = vEnabledValue == "true";

    TSharedPtr<IPropertyHandle> SubjectNamePropHandle = DetailBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(UDxyzLiveLinkSourceSettings, CustomSubjectName));

    DxyzCategory.AddCustomRow(FText())
        .NameContent()
        [
            SNew(SHorizontalBox)
            + SHorizontalBox::Slot()
            .Padding(0, 5, 0, 10)
            [
                SNew(SCheckBox)
                .OnCheckStateChanged(this, &FDxyzLiveLinkSourceSettingsDetails::OnCheckStateChanged, &DetailBuilder)
                .IsChecked(vIsEnabled ? ECheckBoxState::Checked : ECheckBoxState::Unchecked)
                .Padding(2.0f)
                .Content()
                [
                    SNew(STextBlock).Text(FText::FromString(FString("Override Subject Name")))
                    .Font(IDetailLayoutBuilder::GetDetailFont())
                ]
            ]
        ]
    .ValueContent()
        [
            SNew(SHorizontalBox)
            + SHorizontalBox::Slot()
        .Padding(0, 5, 0, 10)
        [
            SNew(SProperty, SubjectNamePropHandle)
            .ShouldDisplayName(false)
            .IsEnabled(vIsEnabled)
        ]
        ];

    WarningPropHandle->MarkHiddenByCustomization();
}

FText FDxyzLiveLinkSourceSettingsDetails::GetWarningValueFromProperty(IDetailCategoryBuilder* Category) const
{
    FString vString;
    WarningPropHandle->GetValueAsDisplayString(vString);
    WarningPropHandle->MarkHiddenByCustomization();

    return FText::FromString(vString);
}

void FDxyzLiveLinkSourceSettingsDetails::OnNeedToRefresh(IDetailLayoutBuilder* LayoutBuilder)
{
    LayoutBuilder->ForceRefreshDetails();
}

void FDxyzLiveLinkSourceSettingsDetails::OnCheckStateChanged(ECheckBoxState NewState, IDetailLayoutBuilder* LayoutBuilder)
{
    mUseCustomPropHandle->SetValue(NewState == ECheckBoxState::Checked);
    LayoutBuilder->ForceRefreshDetails();
}