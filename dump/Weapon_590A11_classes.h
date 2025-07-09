// BlueprintGeneratedClass Weapon_590A11.Weapon_590A11_C
// Size: 0x3034 (Inherited: 0x3010)
struct AWeapon_590A11_C : AWeapon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3010(0x08)
	struct UItemObstructionTestCapsuleComponent* ItemObstructionTestCapsule2; // 0x3018(0x08)
	struct UItemObstructionTestCapsuleComponent* ItemObstructionTestCapsule1; // 0x3020(0x08)
	struct UMeleeAttackCollisionCapsule* MeleeAttackCollisionCapsule; // 0x3028(0x08)
	float IronSightsHideAlpha; // 0x3030(0x04)

	bool CanSwitchFiringMode(); // Function Weapon_590A11.Weapon_590A11_C.CanSwitchFiringMode // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x297fc00
	struct FWidgetDisplayInfo GetWidgetDisplayInfo(); // Function Weapon_590A11.Weapon_590A11_C.GetWidgetDisplayInfo // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x297fc00
	void OnAttachmentAdded(struct AWeaponAttachment* Attachment); // Function Weapon_590A11.Weapon_590A11_C.OnAttachmentAdded // (Event|Protected|BlueprintEvent) // @ game+0x297fc00
	void OnAttachmentRemoved(struct AWeaponAttachment* Attachment); // Function Weapon_590A11.Weapon_590A11_C.OnAttachmentRemoved // (Event|Protected|BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_Weapon_590A11(int32_t EntryPoint); // Function Weapon_590A11.Weapon_590A11_C.ExecuteUbergraph_Weapon_590A11 // (Final|UbergraphFunction) // @ game+0x297fc00
};

