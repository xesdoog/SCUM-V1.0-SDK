// WidgetBlueprintGeneratedClass UI_ExpandableContainer.UI_ExpandableContainer_C
// Size: 0x341 (Inherited: 0x288)
struct UUI_ExpandableContainer_C : UExpandableContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UImage* ContentBackgroundImage; // 0x290(0x08)
	struct UHorizontalBox* ContentHorizontalBox; // 0x298(0x08)
	struct UOverlay* ContentOverlay; // 0x2a0(0x08)
	struct UButton* ExpandButton; // 0x2a8(0x08)
	struct UImage* ExpandedSpacingLine; // 0x2b0(0x08)
	struct UImage* TitleBackgroundImage; // 0x2b8(0x08)
	int32_t FontSize; // 0x2c0(0x04)
	bool EnableExpandedSpacingLine; // 0x2c4(0x01)
	char pad_2C5[0x3]; // 0x2c5(0x03)
	struct FMargin TitlePadding; // 0x2c8(0x10)
	bool _isMinimized; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct FText Title; // 0x2e0(0x18)
	struct FMargin ContentPadding; // 0x2f8(0x10)
	bool IsContentBackgroundImageVisible; // 0x308(0x01)
	char pad_309[0x3]; // 0x309(0x03)
	int32_t _alarmsCount; // 0x30c(0x04)
	bool _isUnderAlarm; // 0x310(0x01)
	char pad_311[0x7]; // 0x311(0x07)
	struct UUI_ExpandableContainer_C* ParentContainer; // 0x318(0x08)
	struct FMulticastInlineDelegate OnExpandChanged; // 0x320(0x10)
	struct FMargin ContentMargins; // 0x330(0x10)
	bool OnlySettableByChildren; // 0x340(0x01)

	void SetParentContainer(struct UUI_ExpandableContainer_C* container); // Function UI_ExpandableContainer.UI_ExpandableContainer_C.SetParentContainer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void DisableAlarm(); // Function UI_ExpandableContainer.UI_ExpandableContainer_C.DisableAlarm // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void EnableAlarm(); // Function UI_ExpandableContainer.UI_ExpandableContainer_C.EnableAlarm // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void CheckAlarm(); // Function UI_ExpandableContainer.UI_ExpandableContainer_C.CheckAlarm // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void DecrementAlarmsCount(); // Function UI_ExpandableContainer.UI_ExpandableContainer_C.DecrementAlarmsCount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void IncrementAlarmsCount(); // Function UI_ExpandableContainer.UI_ExpandableContainer_C.IncrementAlarmsCount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void Minimize(); // Function UI_ExpandableContainer.UI_ExpandableContainer_C.Minimize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void Maximize(); // Function UI_ExpandableContainer.UI_ExpandableContainer_C.Maximize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void Construct(); // Function UI_ExpandableContainer.UI_ExpandableContainer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x297fc00
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature(); // Function UI_ExpandableContainer.UI_ExpandableContainer_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x297fc00
	void OnSynchronizeProperties_2(); // Function UI_ExpandableContainer.UI_ExpandableContainer_C.OnSynchronizeProperties_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_UI_ExpandableContainer(int32_t EntryPoint); // Function UI_ExpandableContainer.UI_ExpandableContainer_C.ExecuteUbergraph_UI_ExpandableContainer // (Final|UbergraphFunction|HasDefaults) // @ game+0x297fc00
	void OnExpandChanged__DelegateSignature(struct UUI_ExpandableContainer_C* container, bool isMinimized); // Function UI_ExpandableContainer.UI_ExpandableContainer_C.OnExpandChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
};

