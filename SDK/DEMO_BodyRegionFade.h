// WidgetBlueprintGeneratedClass DEMO_BodyRegionFade.DEMO_BodyRegionFade_C
// Size: 0x321 (Inherited: 0x268)
struct UDEMO_BodyRegionFade_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UImage* BodyGlow_Female; // 0x270(0x08)
	struct UImage* BodyGlow_Male; // 0x278(0x08)
	struct UImage* BodyImage_Female; // 0x280(0x08)
	struct UImage* BodyImage_Male; // 0x288(0x08)
	struct UButton* btn_all; // 0x290(0x08)
	struct UButton* btn_Arm_Left; // 0x298(0x08)
	struct UButton* btn_Arm_Right; // 0x2a0(0x08)
	struct UButton* btn_Female; // 0x2a8(0x08)
	struct UButton* btn_Head; // 0x2b0(0x08)
	struct UButton* btn_Leg_Left; // 0x2b8(0x08)
	struct UButton* btn_Leg_Right; // 0x2c0(0x08)
	struct UButton* btn_Male; // 0x2c8(0x08)
	struct UButton* btn_Torso; // 0x2d0(0x08)
	struct UCanvasPanel* Female; // 0x2d8(0x08)
	struct UCanvasPanel* Male; // 0x2e0(0x08)
	struct FVector2D TargetOffset; // 0x2e8(0x08)
	struct FVector2D TargetScale; // 0x2f0(0x08)
	float TargetHead; // 0x2f8(0x04)
	float TargetTorso; // 0x2fc(0x04)
	float TargetArmLeft; // 0x300(0x04)
	float TargetArmRight; // 0x304(0x04)
	float TargetLegLeft; // 0x308(0x04)
	float TargetLegRight; // 0x30c(0x04)
	struct TArray<struct UImage*> ImageArray; // 0x310(0x10)
	bool IsMale; // 0x320(0x01)

	void GetCanvas(struct UCanvasPanel*& Canvas); // Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.GetCanvas // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x297fc00
	void ResetTargets(); // Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.ResetTargets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void Construct(); // Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x297fc00
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x297fc00
	void BndEvt__btn_all_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.BndEvt__btn_all_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x297fc00
	void BndEvt__btn_Head_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.BndEvt__btn_Head_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x297fc00
	void BndEvt__btn_Torso_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.BndEvt__btn_Torso_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x297fc00
	void BndEvt__btn_Leg_Left_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.BndEvt__btn_Leg_Left_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x297fc00
	void BndEvt__btn_Leg_Right_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.BndEvt__btn_Leg_Right_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x297fc00
	void BndEvt__btn_Arm_Left_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.BndEvt__btn_Arm_Left_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x297fc00
	void BndEvt__btn_Arm_Right_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.BndEvt__btn_Arm_Right_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x297fc00
	void BndEvt__btn_Male_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature(); // Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.BndEvt__btn_Male_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x297fc00
	void BndEvt__btn_Female_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature(); // Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.BndEvt__btn_Female_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_DEMO_BodyRegionFade(int32_t EntryPoint); // Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.ExecuteUbergraph_DEMO_BodyRegionFade // (Final|UbergraphFunction|HasDefaults) // @ game+0x297fc00
};

