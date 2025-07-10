#ifndef UE4SS_SDK_UI_HealthWidget2_HPP
#define UE4SS_SDK_UI_HealthWidget2_HPP

class UUI_HealthWidget2_C : public UHealthWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UImage* Background;                                                         // 0x0348 (size: 0x8)
    class UImage* DisabledBar;                                                        // 0x0350 (size: 0x8)
    class UImage* HealthBar;                                                          // 0x0358 (size: 0x8)
    FLinearColor ColorMaxHP;                                                          // 0x0360 (size: 0x10)
    FLinearColor ColorMinHP;                                                          // 0x0370 (size: 0x10)
    class UCurveFloat* ColorCurve;                                                    // 0x0380 (size: 0x8)
    class UMaterialInstanceDynamic* _healthBarMat;                                    // 0x0388 (size: 0x8)
    class UMaterialInstanceDynamic* _disabledBarMat;                                  // 0x0390 (size: 0x8)

    void Construct();
    void SetHealthPercentage(float Value);
    void SetMaxHealthPercentage(float Value);
    void ExecuteUbergraph_UI_HealthWidget2(int32 EntryPoint);
}; // Size: 0x398

#endif
