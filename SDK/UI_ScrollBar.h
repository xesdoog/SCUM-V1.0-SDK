// WidgetBlueprintGeneratedClass UI_ScrollBar.UI_ScrollBar_C
// Size: 0x2bc (Inherited: 0x290)
struct UUI_ScrollBar_C : UCursedScrollBar {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UImage* SliderImage; // 0x298(0x08)
	struct FVector2D Size; // 0x2a0(0x08)
	float _currentValue; // 0x2a8(0x04)
	float _currentMaxCountOnScreen; // 0x2ac(0x04)
	float _currentMaxValue; // 0x2b0(0x04)
	bool _shouldUpdate; // 0x2b4(0x01)
	char pad_2B5[0x3]; // 0x2b5(0x03)
	float _scrollBarHeight; // 0x2b8(0x04)

	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UI_ScrollBar.UI_ScrollBar_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UI_ScrollBar.UI_ScrollBar_C.OnMouseMove // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UI_ScrollBar.UI_ScrollBar_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void SetToUpdateFromValue(float Value, float MaxCountOnScreen, float MaxValue); // Function UI_ScrollBar.UI_ScrollBar_C.SetToUpdateFromValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void UpdateFromValueInternal(float Value, float MaxCountOnScreen, float MaxValue); // Function UI_ScrollBar.UI_ScrollBar_C.UpdateFromValueInternal // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_ScrollBar.UI_ScrollBar_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x297fc00
	void UpdateFromValueInternal2(float Value, float MaxCountOnScreen, float MaxValue); // Function UI_ScrollBar.UI_ScrollBar_C.UpdateFromValueInternal2 // (Event|Public|BlueprintEvent) // @ game+0x297fc00
	void CallSetToUpdateFromValue(float Value, float MaxCountOnScreen, float MaxValue); // Function UI_ScrollBar.UI_ScrollBar_C.CallSetToUpdateFromValue // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_UI_ScrollBar(int32_t EntryPoint); // Function UI_ScrollBar.UI_ScrollBar_C.ExecuteUbergraph_UI_ScrollBar // (Final|UbergraphFunction|HasDefaults) // @ game+0x297fc00
};

