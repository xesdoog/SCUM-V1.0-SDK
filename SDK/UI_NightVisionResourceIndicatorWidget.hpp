#ifndef UE4SS_SDK_UI_NightVisionResourceIndicatorWidget_HPP
#define UE4SS_SDK_UI_NightVisionResourceIndicatorWidget_HPP

class UUI_NightVisionResourceIndicatorWidget_C : public UResourceIndicatorWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UImage* BatteryImage;                                                       // 0x0280 (size: 0x8)

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_UI_NightVisionResourceIndicatorWidget(int32 EntryPoint);
}; // Size: 0x288

#endif
