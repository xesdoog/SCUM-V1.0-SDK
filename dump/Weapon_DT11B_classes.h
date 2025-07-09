// BlueprintGeneratedClass Weapon_DT11B.Weapon_DT11B_C
// Size: 0x3038 (Inherited: 0x3010)
struct AWeapon_DT11B_C : AWeapon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3010(0x08)
	struct UItemObstructionTestCapsuleComponent* ItemObstructionTestCapsule2; // 0x3018(0x08)
	struct UItemObstructionTestCapsuleComponent* ItemObstructionTestCapsule1; // 0x3020(0x08)
	struct UMeleeAttackCollisionCapsule* MeleeAttackCollisionCapsule; // 0x3028(0x08)
	struct FDateTime FiredShotTimestamp; // 0x3030(0x08)

	int32_t GetAmmoReloadCapacity(struct AAmmunitionItem* ammo); // Function Weapon_DT11B.Weapon_DT11B_C.GetAmmoReloadCapacity // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x297fc00
	bool HasAmmoToUnload(); // Function Weapon_DT11B.Weapon_DT11B_C.HasAmmoToUnload // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x297fc00
	bool FindReloadData(struct TArray<struct AItem*>& Items, struct FWeaponReloadData& reloadData); // Function Weapon_DT11B.Weapon_DT11B_C.FindReloadData // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x297fc00
	struct FWidgetDisplayInfo GetWidgetDisplayInfo(); // Function Weapon_DT11B.Weapon_DT11B_C.GetWidgetDisplayInfo // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x297fc00
	void OnShotFired(bool isLastShot); // Function Weapon_DT11B.Weapon_DT11B_C.OnShotFired // (Event|Public|BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_Weapon_DT11B(int32_t EntryPoint); // Function Weapon_DT11B.Weapon_DT11B_C.ExecuteUbergraph_Weapon_DT11B // (Final|UbergraphFunction) // @ game+0x297fc00
};

