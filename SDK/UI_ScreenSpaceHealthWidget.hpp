#ifndef UE4SS_SDK_UI_ScreenSpaceHealthWidget_HPP
#define UE4SS_SDK_UI_ScreenSpaceHealthWidget_HPP

class UUI_ScreenSpaceHealthWidget_C : public UScreenSpaceHealthWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UImage* Background;                                                         // 0x0270 (size: 0x8)
    class UImage* DisabledBar;                                                        // 0x0278 (size: 0x8)
    class UImage* HealthBar;                                                          // 0x0280 (size: 0x8)
    class UMaterialInstanceDynamic* _healthBarMat;                                    // 0x0288 (size: 0x8)
    class UMaterialInstanceDynamic* _disabledBarMat;                                  // 0x0290 (size: 0x8)
    class UCurveFloat* ColorCurve;                                                    // 0x0298 (size: 0x8)
    FLinearColor ColorMaxHP;                                                          // 0x02A0 (size: 0x10)
    FLinearColor ColorMinHP;                                                          // 0x02B0 (size: 0x10)

    void Construct();
    void SetMaxHealthPercentage(float Value);
    void SetHealthPercentage(float Value);
    void ExecuteUbergraph_UI_ScreenSpaceHealthWidget(int32 EntryPoint);
}; // Size: 0x2C0

#endif
