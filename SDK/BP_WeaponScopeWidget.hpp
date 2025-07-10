#ifndef UE4SS_SDK_BP_WeaponScopeWidget_HPP
#define UE4SS_SDK_BP_WeaponScopeWidget_HPP

class UBP_WeaponScopeWidget_C : public UWeaponScopeWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    class UWidgetAnimation* FadeOut;                                                  // 0x0288 (size: 0x8)
    class UWidgetAnimation* FadeIn;                                                   // 0x0290 (size: 0x8)
    class UBorder* BlackBG;                                                           // 0x0298 (size: 0x8)
    class UBorder* BorderLeft;                                                        // 0x02A0 (size: 0x8)
    class UBorder* BorderRight;                                                       // 0x02A8 (size: 0x8)
    class UImage* Reticle;                                                            // 0x02B0 (size: 0x8)
    class UScaleBox* ScaleBox_0;                                                      // 0x02B8 (size: 0x8)
    class USizeBox* SizeBox_0;                                                        // 0x02C0 (size: 0x8)
    class USizeBox* SizeBox_1;                                                        // 0x02C8 (size: 0x8)
    FVector2D GeometrySize;                                                           // 0x02D0 (size: 0x8)
    FVector2D GeometrySizeHalf;                                                       // 0x02D8 (size: 0x8)
    float FadeInSpeed;                                                                // 0x02E0 (size: 0x4)
    float FadeOutSpeed;                                                               // 0x02E4 (size: 0x4)
    float OnShowDelay;                                                                // 0x02E8 (size: 0x4)
    bool ShouldBeHidden;                                                              // 0x02EC (size: 0x1)

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnShowElements();
    void OnHideElements();
    void OnConstructFinished();
    void WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_0();
    void ExecuteUbergraph_BP_WeaponScopeWidget(int32 EntryPoint);
}; // Size: 0x2ED

#endif
