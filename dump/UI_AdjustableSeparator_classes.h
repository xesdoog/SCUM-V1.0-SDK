// WidgetBlueprintGeneratedClass UI_AdjustableSeparator.UI_AdjustableSeparator_C
// Size: 0x2a8 (Inherited: 0x278)
struct UUI_AdjustableSeparator_C : UBadAdjustableSeparator {
	struct UImage* Image_1; // 0x278(0x08)
	struct UImage* Image_2; // 0x280(0x08)
	struct UImage* Image_3; // 0x288(0x08)
	struct UNamedSlot* UnderSlot; // 0x290(0x08)
	struct UNamedSlot* UpperSlot; // 0x298(0x08)
	bool _shouldMove; // 0x2a0(0x01)
	char pad_2A1[0x3]; // 0x2a1(0x03)
	float MinHeight; // 0x2a4(0x04)

	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UI_AdjustableSeparator.UI_AdjustableSeparator_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	struct FEventReply OnPreviewMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UI_AdjustableSeparator.UI_AdjustableSeparator_C.OnPreviewMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UI_AdjustableSeparator.UI_AdjustableSeparator_C.OnMouseMove // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
};

