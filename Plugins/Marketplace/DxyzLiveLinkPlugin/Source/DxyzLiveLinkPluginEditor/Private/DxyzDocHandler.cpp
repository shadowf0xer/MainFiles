/*************************************************************************
* Copyright [2010] - [2020] Dynamixyz
* All Rights Reserved.
*
* Authors:
* Flora Jullien (flora.jullien@dynamixyz.com)
**************************************************************************/

#include "DxyzDocHandler.h"

#include "Interfaces/IPluginManager.h"
#include "Widgets/Input/SHyperlink.h"
#include "Widgets/Text/STextBlock.h"
#include "Widgets/Images/SImage.h"
#include "Brushes/SlateDynamicImageBrush.h"
#include "Widgets/Input/SCheckBox.h"
#include "Widgets/SWindow.h"
#include "Framework/Application/SlateApplication.h"

#define DEFAULT_FONT(...) FCoreStyle::GetDefaultFontStyle(__VA_ARGS__)

UDxyzDocHandler::UDxyzDocHandler()
    : ShowDocPopup(true)
{
    // Force to load config (just in case)
    LoadConfig();
}

UDxyzDocHandler::~UDxyzDocHandler()
{
}

void UDxyzDocHandler::ShowDocWindowIfNeeded()
{
    if (ShowDocPopup)
    {
        static FString DirPath = IPluginManager::Get().FindPlugin(TEXT("DxyzLiveLinkPlugin"))->GetBaseDir();

        FString vDocFolderPath = FPaths::Combine(FPaths::ConvertRelativePathToFull(DirPath), FString("Documentation"));
        FString vResPath = FPaths::Combine(FPaths::ConvertRelativePathToFull(DirPath), FString("Resources"));

        FString vDocPath = FPaths::Combine(vDocFolderPath, FString("index.html"));
        FString vLogoPath = FPaths::Combine(vResPath, FString("logo_dxyz.png"));

        FString TutosURL = "https://vimeo.com/showcase/7016262";
        FString SupportURL = "mailto:support@dynamixyz.com";

        if (!FPaths::FileExists(vDocPath))
        {
            TSharedRef<SWindow> Window =
                SNew(SWindow).Title(FText::FromString("Dxyz Live Link Plugin Warning")).SizingRule(ESizingRule::Autosized).Content()
                [
                    SNew(SVerticalBox)
                    + SVerticalBox::Slot()
                    .AutoHeight()
                    .Padding(20.0f, 20.f, 0.f, 0.f)
                    [
                        SNew(STextBlock).Text(FText::FromString(FString("The Dxyz Live Link Plugin documentation"
                        " could not be found"
                        "\n(Plugins/DxyzLiveLinkPlugin/Documentation/index.html).\n"
                        "\nIf you manually copied the Plugins folder from another project,"
                            "\ncheck out that you also put the Documentation folder into DxyzLiveLinkPlugin.\n")))
                    ]
                + SVerticalBox::Slot()
                    .AutoHeight()
                    .Padding(20.0f, 0.f, 0.f, 0.f)
                    [
                        SNew(SHorizontalBox)
                        + SHorizontalBox::Slot()
                    .AutoWidth()
                    [
                        SNew(STextBlock).Text(FText::FromString(FString("If you have any question, contact us at : ")))
                    ]
                + SHorizontalBox::Slot()
                    .AutoWidth()
                    [
                        SNew(SHyperlink)
                        .Text(FText::FromString("support@dynamixyz.com"))
                    .ToolTipText(FText::Format(FText::FromString("({0})"), FText::FromString(SupportURL)))
                    .OnNavigate_Lambda([=]() { FPlatformProcess::LaunchURL(*SupportURL, nullptr, nullptr); })
                    ]
                    ]
                ];

			FSlateApplication::Get().AddWindow(Window, true);
			Window->ShowWindow();
        }
        else
        {

            TSharedRef<SWindow> Window =
                SNew(SWindow).Title(FText::FromString("Hello from Dynamixyz")).SizingRule(ESizingRule::Autosized).Content()
                [
                    SNew(SVerticalBox)
                    + SVerticalBox::Slot()
                .AutoHeight()
                .Padding(20.0f, 20.f, 0.f, 0.f)
                [
                    SNew(STextBlock).Text(FText::FromString(FString("First time using Dxyz Live Link Plugin ?\n\n"
                    "Here are some links to help you set up your animation :")))
                ]
            + SVerticalBox::Slot()
                .AutoHeight()
                [
                    SNew(SHorizontalBox)
                    + SHorizontalBox::Slot()
                .AutoWidth()
                .Padding(20.0f, 20.f, 0.f, 0.f)
                [
                    SNew(SHyperlink)
                    .Text(FText::FromString("Plugin documentation"))
                .ToolTipText(FText::Format(FText::FromString("({0})"), FText::FromString(vDocPath)))
                .OnNavigate_Lambda([=]() { FPlatformProcess::LaunchURL(*FString("file:///" + vDocPath), nullptr, nullptr); })
                ]
                ]
            + SVerticalBox::Slot()
                .AutoHeight()
                [
                    SNew(SHorizontalBox)
                    + SHorizontalBox::Slot()
                .AutoWidth()
                .Padding(20.0f, 0.f, 0.f, 0.f)
                [
                    SNew(SHyperlink)
                    .Text(FText::FromString("Video tutorials"))
                .ToolTipText(FText::Format(FText::FromString("({0})"), FText::FromString(TutosURL)))
                .OnNavigate_Lambda([=]() { FPlatformProcess::LaunchFileInDefaultExternalApplication(*TutosURL, nullptr); })
                ]
                ]
            + SVerticalBox::Slot()
                .AutoHeight()
                .Padding(20.0f, 20.f, 0.f, 0.f)
                [
                    SNew(STextBlock).Text(FText::FromString(FString("A question ?")))
                ]
            + SVerticalBox::Slot()
                .AutoHeight()
                .Padding(20.0f, 0.f, 0.f, 0.f)
                [
                    SNew(SHorizontalBox)
                    + SHorizontalBox::Slot()
                .AutoWidth()
                [
                    SNew(STextBlock).Text(FText::FromString(FString("Contact us at : ")))
                ]
            + SHorizontalBox::Slot()
                .AutoWidth()
                [
                    SNew(SHyperlink)
                    .Text(FText::FromString("support@dynamixyz.com"))
                .ToolTipText(FText::Format(FText::FromString("({0})"), FText::FromString(SupportURL)))
                .OnNavigate_Lambda([=]() { FPlatformProcess::LaunchURL(*SupportURL, nullptr, nullptr); })
                ]
                ]
            + SVerticalBox::Slot()
                .AutoHeight()
                .Padding(20.0f, 20.0f, 0.0f, 0.0f)
                [
                    SNew(STextBlock).Text(FText::FromString(FString("Enjoy !\n")))
                ]
            + SVerticalBox::Slot()
                .AutoHeight()
                .HAlign(HAlign_Center)
                [
                    SNew(STextBlock).Text(FText::FromString(FString("The Dynamixyz Team")))
                ]

            + SVerticalBox::Slot()
                .AutoHeight()
                .HAlign(HAlign_Center)
                [
                    SNew(SImage)
                    .Image(new FSlateDynamicImageBrush(FName(*vLogoPath), FVector2D(150, 32)))
                ]
            + SVerticalBox::Slot()
                .AutoHeight()
                .Padding(20.0f, 30.0f, 0.0f, -20.0f)
                [
                    SNew(SCheckBox)
                    .OnCheckStateChanged(FOnCheckStateChanged::CreateUObject(this, &UDxyzDocHandler::OnCheckStateChanged))
                .IsChecked(ECheckBoxState::Unchecked)
                .Content()
                [
                    SNew(STextBlock).Text(FText::FromString(FString("Don't show this again.")))
                    .Font(DEFAULT_FONT("Regular", 8))
                ]
                ]
                ];

			FSlateApplication::Get().AddWindow(Window, true);
			Window->ShowWindow();
        }
    }
}


void UDxyzDocHandler::OnCheckStateChanged(ECheckBoxState InNewState)
{
    if (InNewState == ECheckBoxState::Checked)
    {
        ShowDocPopup = false;
    }
    else if (InNewState == ECheckBoxState::Unchecked)
    {
        ShowDocPopup = true;
    }
    // Could be other cases to avoid

    SaveConfig();
}