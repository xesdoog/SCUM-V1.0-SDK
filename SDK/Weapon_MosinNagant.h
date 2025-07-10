// BlueprintGeneratedClass Weapon_MosinNagant.Weapon_MosinNagant_C
// Size: 0x3090 (Inherited: 0x3010)
struct AWeapon_MosinNagant_C : AWeapon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3010(0x08)
	struct UItemObstructionTestCapsuleComponent* ItemObstructionTestCapsule2; // 0x3018(0x08)
	struct UItemObstructionTestCapsuleComponent* ItemObstructionTestCapsule1; // 0x3020(0x08)
	struct UMeleeAttackCollisionCapsule* MeleeAttackCollisionCapsule; // 0x3028(0x08)
	struct FWeaponReloadData FinalReloadData; // 0x3030(0x30)
	struct FWeaponReloadData NewVar_1; // 0x3060(0x30)

	bool CanSwitchFiringMode(); // Function Weapon_MosinNagant.Weapon_MosinNagant_C.CanSwitchFiringMode // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x297fc00
	int32_t GetAmmoReloadCapacity(struct AAmmunitionItem* ammo); // Function Weapon_MosinNagant.Weapon_MosinNagant_C.GetAmmoReloadCapacity // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x297fc00
	void ReceiveBeginPlay(); // Function Weapon_MosinNagant.Weapon_MosinNagant_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_Weapon_MosinNagant(int32_t EntryPoint); // Function Weapon_MosinNagant.Weapon_MosinNagant_C.ExecuteUbergraph_Weapon_MosinNagant // (Final|UbergraphFunction) // @ game+0x297fc00
};

