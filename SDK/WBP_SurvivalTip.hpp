#ifndef UE4SS_SDK_WBP_SurvivalTip_HPP
#define UE4SS_SDK_WBP_SurvivalTip_HPP

class UWBP_SurvivalTip_C : public USurvivalTipWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UWidgetAnimation* Bounce;                                                   // 0x0340 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_WBP_SurvivalTip(int32 EntryPoint);
}; // Size: 0x348

#endif
