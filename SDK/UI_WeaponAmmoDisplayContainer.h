// WidgetBlueprintGeneratedClass UI_WeaponAmmoDisplayContainer.UI_WeaponAmmoDisplayContainer_C
// Size: 0x2a8 (Inherited: 0x290)
struct UUI_WeaponAmmoDisplayContainer_C : UWeaponAmmoDisplayContainerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UWidgetAnimation* FadeOut; // 0x298(0x08)
	struct UWidgetAnimation* FadeIn; // 0x2a0(0x08)

	void Init(struct AWeapon* Weapon, float onScreenDuration, bool displayOnCenter, struct UTexture2D* iconOverride); // Function UI_WeaponAmmoDisplayContainer.UI_WeaponAmmoDisplayContainer_C.Init // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void OnFadedOut(); // Function UI_WeaponAmmoDisplayContainer.UI_WeaponAmmoDisplayContainer_C.OnFadedOut // (BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_UI_WeaponAmmoDisplayContainer(int32_t EntryPoint); // Function UI_WeaponAmmoDisplayContainer.UI_WeaponAmmoDisplayContainer_C.ExecuteUbergraph_UI_WeaponAmmoDisplayContainer // (Final|UbergraphFunction) // @ game+0x297fc00
};

