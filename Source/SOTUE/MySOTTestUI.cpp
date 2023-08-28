#include "MySOTTestUI.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Components/EditableText.h"
#include "SOTVM.h"

void UMySOTTestUI::NativeConstruct()
{
	Super::NativeConstruct();

	if(ShowPatchInfoButton)
	{
        ShowPatchInfoButton->OnClicked.AddDynamic(this, &UMySOTTestUI::OnShowPatchInfoClick);
	}
    
    if(TestPatchButton)
    {
        TestPatchButton->OnClicked.AddDynamic(this, &UMySOTTestUI::OnTestPatchClick);
    }
}

void UMySOTTestUI::OnShowPatchInfoClick()
{
    FString VersionKey;
    FString PatchMD5;
    bool bHasInit = false;
    FSOTVMModule::GetSOTPatchInfo(VersionKey, bHasInit, PatchMD5);
    if(bHasInit)
    {
        FString Tips = FString::Printf(TEXT("success apply sot patch, VersionKey:%s md5:%s"), *VersionKey, *PatchMD5);
        Tip1->SetText(FText::FromString(Tips));
    }
    else
    {
        FString Tips = FString::Printf(TEXT("didnt apply any patch."));
        Tip1->SetText(FText::FromString(Tips));
    }
}

void UMySOTTestUI::OnTestPatchClick()
{
   // FString Tips = FString::Printf(TEXT("this is patch code."));
   // TestInfo->SetText(FText::FromString(Tips));
}
