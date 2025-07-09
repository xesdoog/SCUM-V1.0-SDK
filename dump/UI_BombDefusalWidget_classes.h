// WidgetBlueprintGeneratedClass UI_BombDefusalWidget.UI_BombDefusalWidget_C
// Size: 0x320 (Inherited: 0x2a0)
struct UUI_BombDefusalWidget_C : UBombDefusalWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	struct UWidgetAnimation* ShowSuccess; // 0x2a8(0x08)
	struct UWidgetAnimation* BlurWaitingForPlayer; // 0x2b0(0x08)
	struct UWidgetAnimation* InfoFade; // 0x2b8(0x08)
	struct UTextBlock* _tries; // 0x2c0(0x08)
	struct URetainerBox* BloomRetainerBox; // 0x2c8(0x08)
	struct UImage* Image; // 0x2d0(0x08)
	struct UImage* Image_62; // 0x2d8(0x08)
	struct UImage* Image_185; // 0x2e0(0x08)
	struct UImage* Image_260; // 0x2e8(0x08)
	struct UImage* InfinitySymbol; // 0x2f0(0x08)
	struct UCanvasPanel* InfoPanelSecondary; // 0x2f8(0x08)
	struct URetainerBox* MaskRetainerBox; // 0x300(0x08)
	struct UImage* RenderedMinigame; // 0x308(0x08)
	struct UImage* TextBackground; // 0x310(0x08)
	struct UTextBlock* TextBlockDots; // 0x318(0x08)

	void OnSuccess(); // Function UI_BombDefusalWidget.UI_BombDefusalWidget_C.OnSuccess // (Event|Public|BlueprintEvent) // @ game+0x297fc00
	void ShowInfo(); // Function UI_BombDefusalWidget.UI_BombDefusalWidget_C.ShowInfo // (Event|Public|BlueprintEvent) // @ game+0x297fc00
	void HideInfo(); // Function UI_BombDefusalWidget.UI_BombDefusalWidget_C.HideInfo // (Event|Public|BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_UI_BombDefusalWidget(int32_t EntryPoint); // Function UI_BombDefusalWidget.UI_BombDefusalWidget_C.ExecuteUbergraph_UI_BombDefusalWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x297fc00
};

