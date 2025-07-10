#ifndef UE4SS_SDK_UI_ItemStatusWidget_HPP
#define UE4SS_SDK_UI_ItemStatusWidget_HPP

class UUI_ItemStatusWidget_C : public UItemStatusWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UEditableTextBox* _titleText;                                               // 0x0348 (size: 0x8)
    class UImage* baseImage;                                                          // 0x0350 (size: 0x8)
    class UImage* outlineImage;                                                       // 0x0358 (size: 0x8)
    class UOverlay* TitleOverlay;                                                     // 0x0360 (size: 0x8)

    void UpdateVisibility();
    void Construct();
    void SetNameText(FString Text);
    void ExecuteUbergraph_UI_ItemStatusWidget(int32 EntryPoint);
}; // Size: 0x368

#endif
