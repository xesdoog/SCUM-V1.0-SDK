// WidgetBlueprintGeneratedClass UI_WarningSign.UI_WarningSign_C
// Size: 0x294 (Inherited: 0x270)
struct UUI_WarningSign_C : UWarningSignWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UImage* MainImage; // 0x278(0x08)
	struct URetainerBox* MainRetainerBox; // 0x280(0x08)
	float ShowDuration; // 0x288(0x04)
	float Duration; // 0x28c(0x04)
	float TimeScale; // 0x290(0x04)

	void Construct(); // Function UI_WarningSign.UI_WarningSign_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x297fc00
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_WarningSign.UI_WarningSign_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x297fc00
	void InitFromWarningType(enum class EWarningType warningType); // Function UI_WarningSign.UI_WarningSign_C.InitFromWarningType // (Event|Public|BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_UI_WarningSign(int32_t EntryPoint); // Function UI_WarningSign.UI_WarningSign_C.ExecuteUbergraph_UI_WarningSign // (Final|UbergraphFunction|HasDefaults) // @ game+0x297fc00
};

