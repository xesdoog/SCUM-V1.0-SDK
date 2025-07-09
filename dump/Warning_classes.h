// WidgetBlueprintGeneratedClass Warning.Warning_C
// Size: 0x2a9 (Inherited: 0x278)
struct UWarning_C : UWarning {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	struct URetainerBox* RetainerBox_1; // 0x280(0x08)
	struct UTextBlock* Text; // 0x288(0x08)
	bool _shouldShake; // 0x290(0x01)
	char pad_291[0x3]; // 0x291(0x03)
	float _shakeTime; // 0x294(0x04)
	float _shakeLength; // 0x298(0x04)
	bool _shouldFade; // 0x29c(0x01)
	char pad_29D[0x3]; // 0x29d(0x03)
	float _fadeLength; // 0x2a0(0x04)
	float _fadeDelay; // 0x2a4(0x04)
	bool _isReadyForNextMessage; // 0x2a8(0x01)

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function Warning.Warning_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_Warning(int32_t EntryPoint); // Function Warning.Warning_C.ExecuteUbergraph_Warning // (Final|UbergraphFunction|HasDefaults) // @ game+0x297fc00
};

