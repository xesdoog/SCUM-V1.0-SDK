#ifndef UE4SS_SDK_UI_ChangeTextWidget_HPP
#define UE4SS_SDK_UI_ChangeTextWidget_HPP

class UUI_ChangeTextWidget_C : public UChangeTextWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UButton* AcceptButton;                                                      // 0x0370 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0378 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0380 (size: 0x8)
    class UEditableText* InputText;                                                   // 0x0388 (size: 0x8)
    int32 MaxInputCharacters;                                                         // 0x0390 (size: 0x4)
    bool _isEnabled;                                                                  // 0x0394 (size: 0x1)
    FText _currentText;                                                               // 0x0398 (size: 0x18)

    FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void Construct();
    void BndEvt__InputText_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__AcceptButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void SetCurrentInputText_BP(const FText& Text);
    void BndEvt__InputText_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature(const FText& Text);
    void SetMaxNumberOfCharacters(int32 Value);
    void ExecuteUbergraph_UI_ChangeTextWidget(int32 EntryPoint);
}; // Size: 0x3B0

#endif
