#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MySOTTestUI.generated.h"

UCLASS(config=Game)
class SOTUE_API UMySOTTestUI : public UUserWidget
{
	GENERATED_BODY()
	
protected:

	virtual void NativeConstruct() override;

	UFUNCTION()
	void OnShowPatchInfoClick();

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	class UTextBlock* Tip1;
    
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	class UButton* ShowPatchInfoButton;
    
    UFUNCTION()
    void OnTestPatchClick();
    
    UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
    class UButton* TestPatchButton;
    
    UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
    class UTextBlock* TestInfo;
};
