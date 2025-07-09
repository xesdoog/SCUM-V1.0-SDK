// WidgetBlueprintGeneratedClass BP_WeaponScopeWidget.BP_WeaponScopeWidget_C
// Size: 0x2ed (Inherited: 0x280)
struct UBP_WeaponScopeWidget_C : UWeaponScopeWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UWidgetAnimation* FadeOut; // 0x288(0x08)
	struct UWidgetAnimation* FadeIn; // 0x290(0x08)
	struct UBorder* BlackBG; // 0x298(0x08)
	struct UBorder* BorderLeft; // 0x2a0(0x08)
	struct UBorder* BorderRight; // 0x2a8(0x08)
	struct UImage* Reticle; // 0x2b0(0x08)
	struct UScaleBox* ScaleBox_1; // 0x2b8(0x08)
	struct USizeBox* SizeBox_1; // 0x2c0(0x08)
	struct USizeBox* SizeBox_2; // 0x2c8(0x08)
	struct FVector2D GeometrySize; // 0x2d0(0x08)
	struct FVector2D GeometrySizeHalf; // 0x2d8(0x08)
	float FadeInSpeed; // 0x2e0(0x04)
	float FadeOutSpeed; // 0x2e4(0x04)
	float OnShowDelay; // 0x2e8(0x04)
	bool ShouldBeHidden; // 0x2ec(0x01)

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x297fc00
	void OnShowElements(); // Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.OnShowElements // (Event|Public|BlueprintEvent) // @ game+0x297fc00
	void OnHideElements(); // Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.OnHideElements // (Event|Public|BlueprintEvent) // @ game+0x297fc00
	void OnConstructFinished(); // Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.OnConstructFinished // (Event|Public|BlueprintEvent) // @ game+0x297fc00
	void WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1(); // Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_BP_WeaponScopeWidget(int32_t EntryPoint); // Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.ExecuteUbergraph_BP_WeaponScopeWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x297fc00
};

