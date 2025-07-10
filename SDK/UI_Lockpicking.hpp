#ifndef UE4SS_SDK_UI_Lockpicking_HPP
#define UE4SS_SDK_UI_Lockpicking_HPP

class UUI_Lockpicking_C : public ULockpickingWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0288 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0290 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0298 (size: 0x8)
    class UImage* Image_2;                                                            // 0x02A0 (size: 0x8)
    class UImage* Image_10;                                                           // 0x02A8 (size: 0x8)
    class UImage* Image_20;                                                           // 0x02B0 (size: 0x8)
    class UTextBlock* LockpicksCountText;                                             // 0x02B8 (size: 0x8)
    class UImage* Progress;                                                           // 0x02C0 (size: 0x8)
    class UTextBlock* RemainingTimeText;                                              // 0x02C8 (size: 0x8)
    class UTextBlock* TensionToolCountText;                                           // 0x02D0 (size: 0x8)

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_UI_Lockpicking(int32 EntryPoint);
}; // Size: 0x2D8

#endif
