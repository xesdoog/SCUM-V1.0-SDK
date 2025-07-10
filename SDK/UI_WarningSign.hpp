#ifndef UE4SS_SDK_UI_WarningSign_HPP
#define UE4SS_SDK_UI_WarningSign_HPP

class UUI_WarningSign_C : public UWarningSignWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    class UImage* MainImage;                                                          // 0x0278 (size: 0x8)
    class URetainerBox* MainRetainerBox;                                              // 0x0280 (size: 0x8)
    float ShowDuration;                                                               // 0x0288 (size: 0x4)
    float Duration;                                                                   // 0x028C (size: 0x4)
    float TimeScale;                                                                  // 0x0290 (size: 0x4)

    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void InitFromWarningType(const EWarningType warningType);
    void ExecuteUbergraph_UI_WarningSign(int32 EntryPoint);
}; // Size: 0x294

#endif
