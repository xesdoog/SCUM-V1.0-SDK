// BlueprintGeneratedClass Weapon_Improvised_Rifle.Weapon_Improvised_Rifle_C
// Size: 0x3030 (Inherited: 0x3010)
struct AWeapon_Improvised_Rifle_C : AWeapon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3010(0x08)
	struct UItemObstructionTestCapsuleComponent* ItemObstructionTestCapsule1; // 0x3018(0x08)
	struct UItemObstructionTestCapsuleComponent* ItemObstructionTestCapsule2; // 0x3020(0x08)
	struct UMeleeAttackCollisionCapsule* MeleeAttackCollisionCapsule; // 0x3028(0x08)

	bool CanSwitchFiringMode(); // Function Weapon_Improvised_Rifle.Weapon_Improvised_Rifle_C.CanSwitchFiringMode // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x297fc00
	void ReceiveBeginPlay(); // Function Weapon_Improvised_Rifle.Weapon_Improvised_Rifle_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_Weapon_Improvised_Rifle(int32_t EntryPoint); // Function Weapon_Improvised_Rifle.Weapon_Improvised_Rifle_C.ExecuteUbergraph_Weapon_Improvised_Rifle // (Final|UbergraphFunction) // @ game+0x297fc00
};

