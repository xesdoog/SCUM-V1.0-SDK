// WidgetBlueprintGeneratedClass UI_ItemStatusWidget.UI_ItemStatusWidget_C
// Size: 0x368 (Inherited: 0x340)
struct UUI_ItemStatusWidget_C : UItemStatusWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x08)
	struct UEditableTextBox* _titleText; // 0x348(0x08)
	struct UImage* baseImage; // 0x350(0x08)
	struct UImage* outlineImage; // 0x358(0x08)
	struct UOverlay* TitleOverlay; // 0x360(0x08)

	void UpdateVisibility(); // Function UI_ItemStatusWidget.UI_ItemStatusWidget_C.UpdateVisibility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void Construct(); // Function UI_ItemStatusWidget.UI_ItemStatusWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x297fc00
	void SetNameText(struct FString Text); // Function UI_ItemStatusWidget.UI_ItemStatusWidget_C.SetNameText // (Event|Public|BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_UI_ItemStatusWidget(int32_t EntryPoint); // Function UI_ItemStatusWidget.UI_ItemStatusWidget_C.ExecuteUbergraph_UI_ItemStatusWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x297fc00
};

