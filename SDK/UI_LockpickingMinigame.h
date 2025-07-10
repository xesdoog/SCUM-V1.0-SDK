// WidgetBlueprintGeneratedClass UI_LockpickingMinigame.UI_LockpickingMinigame_C
// Size: 0x348 (Inherited: 0x288)
struct UUI_LockpickingMinigame_C : ULockpickingWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* ShowFailure; // 0x290(0x08)
	struct UWidgetAnimation* BlurWaitingForPlayer; // 0x298(0x08)
	struct UWidgetAnimation* ShowSuccess; // 0x2a0(0x08)
	struct UWidgetAnimation* InfoFade; // 0x2a8(0x08)
	struct UImage* _infiniteLockpicks; // 0x2b0(0x08)
	struct UImage* _infiniteScrewdrivers; // 0x2b8(0x08)
	struct UImage* _lockDifficultyHardImage; // 0x2c0(0x08)
	struct UImage* _lockDifficultyMediumImage; // 0x2c8(0x08)
	struct UImage* _lockDifficultyNormalImage; // 0x2d0(0x08)
	struct UImage* _lockDifficultyWarning; // 0x2d8(0x08)
	struct UImage* BlackOverlay; // 0x2e0(0x08)
	struct UTextBlock* FamePointsText; // 0x2e8(0x08)
	struct UImage* Image_1; // 0x2f0(0x08)
	struct UImage* Image_2; // 0x2f8(0x08)
	struct UImage* Image_3; // 0x300(0x08)
	struct UImage* Image_11; // 0x308(0x08)
	struct UImage* Image_21; // 0x310(0x08)
	struct UTextBlock* LockpicksCountText; // 0x318(0x08)
	struct UImage* Progress; // 0x320(0x08)
	struct UTextBlock* RemainingTimeText; // 0x328(0x08)
	struct UTextBlock* TensionToolCountText; // 0x330(0x08)
	struct UImage* TextBackground; // 0x338(0x08)
	struct UTextBlock* TextBlock_1; // 0x340(0x08)

	void SetDifficultyVisuals(enum class ELockPickingDifficulty Difficulty); // Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.SetDifficultyVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x297fc00
	void ShowInfo(); // Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.ShowInfo // (Event|Public|BlueprintEvent) // @ game+0x297fc00
	void HideInfo(); // Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.HideInfo // (Event|Public|BlueprintEvent) // @ game+0x297fc00
	void OnSuccess(); // Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.OnSuccess // (Event|Public|BlueprintEvent) // @ game+0x297fc00
	void OnFailure(); // Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.OnFailure // (Event|Public|BlueprintEvent) // @ game+0x297fc00
	void SetLockPickingDifficulty(enum class ELockPickingDifficulty Value); // Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.SetLockPickingDifficulty // (Event|Public|BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_UI_LockpickingMinigame(int32_t EntryPoint); // Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.ExecuteUbergraph_UI_LockpickingMinigame // (Final|UbergraphFunction|HasDefaults) // @ game+0x297fc00
};

