#ifndef UE4SS_SDK_UI_BombDefusalWidget_HPP
#define UE4SS_SDK_UI_BombDefusalWidget_HPP

class UUI_BombDefusalWidget_C : public UBombDefusalWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A0 (size: 0x8)
    class UWidgetAnimation* ShowSuccess;                                              // 0x02A8 (size: 0x8)
    class UWidgetAnimation* BlurWaitingForPlayer;                                     // 0x02B0 (size: 0x8)
    class UWidgetAnimation* InfoFade;                                                 // 0x02B8 (size: 0x8)
    class UTextBlock* _tries;                                                         // 0x02C0 (size: 0x8)
    class URetainerBox* BloomRetainerBox;                                             // 0x02C8 (size: 0x8)
    class UImage* Image;                                                              // 0x02D0 (size: 0x8)
    class UImage* Image_61;                                                           // 0x02D8 (size: 0x8)
    class UImage* Image_184;                                                          // 0x02E0 (size: 0x8)
    class UImage* Image_259;                                                          // 0x02E8 (size: 0x8)
    class UImage* InfinitySymbol;                                                     // 0x02F0 (size: 0x8)
    class UCanvasPanel* InfoPanelSecondary;                                           // 0x02F8 (size: 0x8)
    class URetainerBox* MaskRetainerBox;                                              // 0x0300 (size: 0x8)
    class UImage* RenderedMinigame;                                                   // 0x0308 (size: 0x8)
    class UImage* TextBackground;                                                     // 0x0310 (size: 0x8)
    class UTextBlock* TextBlockDots;                                                  // 0x0318 (size: 0x8)

    void OnSuccess();
    void ShowInfo();
    void HideInfo();
    void ExecuteUbergraph_UI_BombDefusalWidget(int32 EntryPoint);
}; // Size: 0x320

#endif
