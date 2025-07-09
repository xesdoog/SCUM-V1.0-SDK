// WidgetBlueprintGeneratedClass UI_Lockpicking.UI_Lockpicking_C
// Size: 0x2d8 (Inherited: 0x288)
struct UUI_Lockpicking_C : ULockpickingWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UImage* Image_1; // 0x290(0x08)
	struct UImage* Image_2; // 0x298(0x08)
	struct UImage* Image_3; // 0x2a0(0x08)
	struct UImage* Image_11; // 0x2a8(0x08)
	struct UImage* Image_21; // 0x2b0(0x08)
	struct UTextBlock* LockpicksCountText; // 0x2b8(0x08)
	struct UImage* Progress; // 0x2c0(0x08)
	struct UTextBlock* RemainingTimeText; // 0x2c8(0x08)
	struct UTextBlock* TensionToolCountText; // 0x2d0(0x08)

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_Lockpicking.UI_Lockpicking_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_UI_Lockpicking(int32_t EntryPoint); // Function UI_Lockpicking.UI_Lockpicking_C.ExecuteUbergraph_UI_Lockpicking // (Final|UbergraphFunction|HasDefaults) // @ game+0x297fc00
};

