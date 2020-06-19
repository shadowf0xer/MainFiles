/*************************************************************************
* Copyright [2010] - [2020] Dynamixyz
* All Rights Reserved.
*
* Authors:
* Flora Jullien (flora.jullien@dynamixyz.com)
**************************************************************************/

#pragma once

#include "CoreMinimal.h"
#include "IDetailCustomization.h"
#include "DxyzLiveLinkPlugin/Private/DxyzLiveLinkRetargetAsset.h"
#include "DxyzLiveLinkPlugin/Private/DxyzLiveLinkSourceSettings.h"
#include "PropertyCustomizationHelpers.h"

#include "Widgets/Input/SButton.h"
#include "IPropertyTypeCustomization.h"
#include "DetailLayoutBuilder.h"
#include "IDetailChildrenBuilder.h"
#include "IDetailGroup.h"
#include "DetailCategoryBuilder.h"
#include "PropertyHandle.h"
#include "DetailWidgetRow.h"
#include "EditorStyleSet.h"

//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
// FDxyzBoneModifyCustomization represents a line in the table, for one ESC bone    //
//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////

class FDxyzBoneModifyCustomization : public IPropertyTypeCustomization
{
public:
    static TSharedRef<IPropertyTypeCustomization> MakeInstance();

    /** IPropertyTypeCustomization interface */
    virtual void CustomizeHeader(TSharedRef<class IPropertyHandle> StructPropertyHandle, class FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& StructCustomizationUtils) override;
    virtual void CustomizeChildren(TSharedRef<class IPropertyHandle> StructPropertyHandle, class IDetailChildrenBuilder& StructBuilder, IPropertyTypeCustomizationUtils& StructCustomizationUtils) override;

protected:
    void EmptyAdditionalBones(TSharedRef<IPropertyHandle> StructPropertyHandle);
    void AddAdditionalBone(TSharedRef<IPropertyHandle> StructPropertyHandle);
    TSharedRef<SWidget> GenerateBoneItem(TSharedPtr<FName> InItem);
    void HandleBoneChanged(TSharedPtr<FName> Item, ESelectInfo::Type SelectInfo);

private:
    TArray<TSharedPtr<FName>> BoneKeys;

private:
    TSharedPtr<IPropertyHandle> SelectedBonePropertyHandle;
    TSharedPtr<IPropertyHandle> HasErrorPropertyHandle;
    IDetailLayoutBuilder* mLayoutBuilder;
};

//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
// FDxyzBoneSettingsCustomization represents a set of settings for a mapped bone    //
// Contains a RemapName, a set of values for translation, and a set of values for   //
// rotation                                                                         //
//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////

class FDxyzBoneSettingsCustomization : public IPropertyTypeCustomization
{
public:
    static TSharedRef<IPropertyTypeCustomization> MakeInstance();

    /** IPropertyTypeCustomization interface */
    virtual void CustomizeHeader(TSharedRef<class IPropertyHandle> StructPropertyHandle, class FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& StructCustomizationUtils) override;
    virtual void CustomizeChildren(TSharedRef<class IPropertyHandle> StructPropertyHandle, class IDetailChildrenBuilder& StructBuilder, IPropertyTypeCustomizationUtils& StructCustomizationUtils) override;

protected:
    TSharedRef<SWidget> GenerateBoneItem(TSharedPtr<FName> InItem);
    void HandleBoneChanged(TSharedPtr<FName> Item, ESelectInfo::Type SelectInfo);

private:
    TArray<TSharedPtr<FName>> BoneKeys;

private:
    TSharedPtr<IPropertyHandle> SelectedBonePropertyHandle;
    IDetailLayoutBuilder* mLayoutBuilder;
};

//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
// FDxyzCurveModifyCustomization represents a line in the list of curves            //
//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////

class FDxyzCurveModifyCustomization : public IPropertyTypeCustomization
{
public:
    static TSharedRef<IPropertyTypeCustomization> MakeInstance();

    /** IPropertyTypeCustomization interface */
    virtual void CustomizeHeader(TSharedRef<class IPropertyHandle> StructPropertyHandle, class FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& StructCustomizationUtils) override;
    virtual void CustomizeChildren(TSharedRef<class IPropertyHandle> StructPropertyHandle, class IDetailChildrenBuilder& StructBuilder, IPropertyTypeCustomizationUtils& StructCustomizationUtils) override;

    void OnMultValueChanged(float NewValue);
    void OnMultValueEndChanged();
    bool GetReplaceVisibility(TSharedPtr<IPropertyHandle> PropertyHandle, float iValue) const;
    void OnResetToBaseClicked(TSharedPtr<IPropertyHandle> PropertyHandle);

protected:
    void EmptyAdditionalCurves(TSharedRef<IPropertyHandle> StructPropertyHandle);
    void AddAdditionalCurve(TSharedRef<IPropertyHandle> StructPropertyHandle);
    TSharedRef<SWidget> GenerateCurveItem(TSharedPtr<FName> InItem);
    void HandleCurveChanged(TSharedPtr<FName> Item, ESelectInfo::Type SelectInfo);

private:
    TArray<TSharedPtr<FName>> CurveKeys;

private:
    TSharedPtr<IPropertyHandle> MultPropertyHandle;
    TSharedPtr<IPropertyHandle> SelectedCurvePropertyHandle;
    TSharedPtr<IPropertyHandle> HasErrorPropertyHandle;
    IDetailLayoutBuilder* mLayoutBuilder;
};

//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
// FDxyzCurveSettingsCustomization represents a set of settings for a mapped curve  //
// Contains a RemapName, and a multiplier                                           //
//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////

class FDxyzCurveSettingsCustomization : public IPropertyTypeCustomization
{
public:
    static TSharedRef<IPropertyTypeCustomization> MakeInstance();

    /** IPropertyTypeCustomization interface */
    virtual void CustomizeHeader(TSharedRef<class IPropertyHandle> StructPropertyHandle, class FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& StructCustomizationUtils) override;
    virtual void CustomizeChildren(TSharedRef<class IPropertyHandle> StructPropertyHandle, class IDetailChildrenBuilder& StructBuilder, IPropertyTypeCustomizationUtils& StructCustomizationUtils) override;

protected:
    void OnMultValueChanged(float NewValue);
    void OnMultValueEndChanged();
    void OnResetToBaseClicked(TSharedPtr<IPropertyHandle> PropertyHandle);
    TSharedRef<SWidget> GenerateCurveItem(TSharedPtr<FName> InItem);
    void HandleCurveChanged(TSharedPtr<FName> Item, ESelectInfo::Type SelectInfo);
    FReply OnToggleButton(bool CurrentlyVisible);

private:
    TArray<TSharedPtr<FName>> CurveKeys;

private:
    TSharedPtr<IPropertyHandle> mClampPropertyHandle;
    FSlateBrush mClampBrush;
    FSlateBrush mUnClampBrush;
    TSharedPtr<IPropertyHandle> MultPropertyHandle;
    TSharedPtr<IPropertyHandle> SelectedCurvePropertyHandle;
    IDetailLayoutBuilder* mLayoutBuilder;
};

//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
// FTranslationSettingsCustomization represents the global translation settings     //
// (last category in the Details panel)                                             //
//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////

class FTranslationSettingsCustomization : public IPropertyTypeCustomization
{
public:
    static TSharedRef<IPropertyTypeCustomization> MakeInstance();

    /** IPropertyTypeCustomization interface */
    virtual void CustomizeHeader(TSharedRef<class IPropertyHandle> StructPropertyHandle, class FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& StructCustomizationUtils) override;
    virtual void CustomizeChildren(TSharedRef<class IPropertyHandle> StructPropertyHandle, class IDetailChildrenBuilder& StructBuilder, IPropertyTypeCustomizationUtils& StructCustomizationUtils) override;

private:
    IDetailLayoutBuilder* mLayoutBuilder;
};

//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
// FRotationSettingsCustomization represents the global rotation settings           //
// (last category in the Details panel)                                             //
//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////

class FRotationSettingsCustomization : public IPropertyTypeCustomization
{
public:
    static TSharedRef<IPropertyTypeCustomization> MakeInstance();

    /** IPropertyTypeCustomization interface */
    virtual void CustomizeHeader(TSharedRef<class IPropertyHandle> StructPropertyHandle, class FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& StructCustomizationUtils) override;
    virtual void CustomizeChildren(TSharedRef<class IPropertyHandle> StructPropertyHandle, class IDetailChildrenBuilder& StructBuilder, IPropertyTypeCustomizationUtils& StructCustomizationUtils) override;

private:
    IDetailLayoutBuilder* mLayoutBuilder;
};

//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
// FBoneTransSettingsCustomization represents the translation settings for one      //
// bone, so for one line in the list of bones.                                      //
//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////

class FBoneTransSettingsCustomization : public IPropertyTypeCustomization
{
public:
    static TSharedRef<IPropertyTypeCustomization> MakeInstance();

    /** IPropertyTypeCustomization interface */
    virtual void CustomizeHeader(TSharedRef<class IPropertyHandle> StructPropertyHandle, class FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& StructCustomizationUtils) override;
    virtual void CustomizeChildren(TSharedRef<class IPropertyHandle> StructPropertyHandle, class IDetailChildrenBuilder& StructBuilder, IPropertyTypeCustomizationUtils& StructCustomizationUtils) override;

    void OnCheckStateChanged(ECheckBoxState NewState);
    FReply OnToggleButton(int Axis, bool CurrentlyVisible);
private:
    TSharedPtr<IPropertyHandle> mXClampPropertyHandle;
    TSharedPtr<IPropertyHandle> mYClampPropertyHandle;
    TSharedPtr<IPropertyHandle> mZClampPropertyHandle;
    FSlateBrush mClampBrush;
    FSlateBrush mUnClampBrush;
    TSharedPtr<IPropertyHandle> mEnabledPropertyHandle;
    IDetailLayoutBuilder* mLayoutBuilder;
};

//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
// FBoneRotaSettingsCustomization represents the rotation settings for one bone,    //
// so for one line in the list of bones.                                            //
//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////

class FBoneRotaSettingsCustomization : public IPropertyTypeCustomization
{
public:
    static TSharedRef<IPropertyTypeCustomization> MakeInstance();

    /** IPropertyTypeCustomization interface */
    virtual void CustomizeHeader(TSharedRef<class IPropertyHandle> StructPropertyHandle, class FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& StructCustomizationUtils) override;
    virtual void CustomizeChildren(TSharedRef<class IPropertyHandle> StructPropertyHandle, class IDetailChildrenBuilder& StructBuilder, IPropertyTypeCustomizationUtils& StructCustomizationUtils) override;

    void OnCheckStateChanged(ECheckBoxState NewState);
    FReply OnToggleButton(int Axis, bool CurrentlyVisible);
private:
    TSharedPtr<IPropertyHandle> mXClampPropertyHandle;
    TSharedPtr<IPropertyHandle> mYClampPropertyHandle;
    TSharedPtr<IPropertyHandle> mZClampPropertyHandle;
    FSlateBrush mClampBrush;
    FSlateBrush mUnClampBrush;
    TSharedPtr<IPropertyHandle> mEnabledPropertyHandle;
    IDetailLayoutBuilder* mLayoutBuilder;
};

//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
// FDxyzLiveLinkRetargetAssetDetails represents the entire Detail panel of the      //
// class DxyzLiveLinkRetargetAsset                                                  //
//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////

class FDxyzLiveLinkRetargetAssetDetails : public IDetailCustomization
{
public:
    /** Makes a new instance of this detail layout class for a specific detail view requesting it */
    static TSharedRef<IDetailCustomization> MakeInstance();

    /** IDetailCustomization interface */
    virtual void CustomizeDetails(IDetailLayoutBuilder& DetailBuilder) override;
    void OnNeedToRefresh(IDetailLayoutBuilder* LayoutBuilder);
    FReply OnToggleButton(TSharedPtr<IPropertyHandle> PropertyHandle, IDetailLayoutBuilder* LayoutBuilder);
    void OnBoneFilterTextChanged(const FText& InFilterText, IDetailLayoutBuilder* LayoutBuilder);
    void OnCurveFilterTextChanged(const FText& InFilterText, IDetailLayoutBuilder* LayoutBuilder);
    void OnBoneFilterTextCommitted(const FText& InFilterText, ETextCommit::Type InCommitType, IDetailLayoutBuilder* LayoutBuilder);
    void OnCurveFilterTextCommitted(const FText& InFilterText, ETextCommit::Type InCommitType, IDetailLayoutBuilder* LayoutBuilder);

private:
    FButtonStyle mEnableBonesButtonStyle;
    FButtonStyle mDisableBonesButtonStyle;
    FButtonStyle mEnableTransButtonStyle;
    FButtonStyle mDisableTransButtonStyle;
    FButtonStyle mEnableRotaButtonStyle;
    FButtonStyle mDisableRotaButtonStyle;
    FButtonStyle mEnableCurvesButtonStyle;
    FButtonStyle mDisableCurvesButtonStyle;
    FButtonStyle mBoostCurvesButtonStyle;
    FButtonStyle mEaseCurvesButtonStyle;
    FButtonStyle mResetCurvesButtonStyle;
};

//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
// FDxyzLiveLinkSourceSettingsDetails represents the entire Detail panel of the     //
// class DxyzLiveLinkSourceSettings                                                 //
//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////

class FDxyzLiveLinkSourceSettingsDetails : public IDetailCustomization
{
public:
    /** Makes a new instance of this detail layout class for a specific detail view requesting it */
    static TSharedRef<IDetailCustomization> MakeInstance();

    /** IDetailCustomization interface */
    virtual void CustomizeDetails(IDetailLayoutBuilder& DetailBuilder) override;
    void OnNeedToRefresh(IDetailLayoutBuilder* LayoutBuilder);

    FText GetWarningValueFromProperty(IDetailCategoryBuilder* Category) const;
    void OnCheckStateChanged(ECheckBoxState NewState, IDetailLayoutBuilder* LayoutBuilder);

private:
    TSharedPtr<IPropertyHandle> WarningPropHandle;
    TSharedPtr<IPropertyHandle> mUseCustomPropHandle;
};