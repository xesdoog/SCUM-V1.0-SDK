#ifndef UE4SS_SDK_DEMO_BodyRegionFade_HPP
#define UE4SS_SDK_DEMO_BodyRegionFade_HPP

class UDEMO_BodyRegionFade_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UImage* BodyGlow_Female;                                                    // 0x0270 (size: 0x8)
    class UImage* BodyGlow_Male;                                                      // 0x0278 (size: 0x8)
    class UImage* BodyImage_Female;                                                   // 0x0280 (size: 0x8)
    class UImage* BodyImage_Male;                                                     // 0x0288 (size: 0x8)
    class UButton* btn_all;                                                           // 0x0290 (size: 0x8)
    class UButton* btn_Arm_Left;                                                      // 0x0298 (size: 0x8)
    class UButton* btn_Arm_Right;                                                     // 0x02A0 (size: 0x8)
    class UButton* btn_Female;                                                        // 0x02A8 (size: 0x8)
    class UButton* btn_Head;                                                          // 0x02B0 (size: 0x8)
    class UButton* btn_Leg_Left;                                                      // 0x02B8 (size: 0x8)
    class UButton* btn_Leg_Right;                                                     // 0x02C0 (size: 0x8)
    class UButton* btn_Male;                                                          // 0x02C8 (size: 0x8)
    class UButton* btn_Torso;                                                         // 0x02D0 (size: 0x8)
    class UCanvasPanel* Female;                                                       // 0x02D8 (size: 0x8)
    class UCanvasPanel* Male;                                                         // 0x02E0 (size: 0x8)
    FVector2D TargetOffset;                                                           // 0x02E8 (size: 0x8)
    FVector2D TargetScale;                                                            // 0x02F0 (size: 0x8)
    float TargetHead;                                                                 // 0x02F8 (size: 0x4)
    float TargetTorso;                                                                // 0x02FC (size: 0x4)
    float TargetArmLeft;                                                              // 0x0300 (size: 0x4)
    float TargetArmRight;                                                             // 0x0304 (size: 0x4)
    float TargetLegLeft;                                                              // 0x0308 (size: 0x4)
    float TargetLegRight;                                                             // 0x030C (size: 0x4)
    TArray<class UImage*> ImageArray;                                                 // 0x0310 (size: 0x10)
    bool IsMale;                                                                      // 0x0320 (size: 0x1)

    void GetCanvas(class UCanvasPanel*& Canvas);
    void ResetTargets();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__btn_all_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__btn_Head_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__btn_Torso_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__btn_Leg_Left_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__btn_Leg_Right_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__btn_Arm_Left_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__btn_Arm_Right_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__btn_Male_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__btn_Female_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_DEMO_BodyRegionFade(int32 EntryPoint);
}; // Size: 0x321

#endif
