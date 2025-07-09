// BlueprintGeneratedClass Weapon_Hunter85_V2.Weapon_Hunter85_V2_C
// Size: 0x3030 (Inherited: 0x3010)
struct AWeapon_Hunter85_V2_C : AWeapon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3010(0x08)
	struct UItemObstructionTestCapsuleComponent* ItemObstructionTestCapsule2; // 0x3018(0x08)
	struct UItemObstructionTestCapsuleComponent* ItemObstructionTestCapsule1; // 0x3020(0x08)
	struct UMeleeAttackCollisionCapsule* MeleeAttackCollisionCapsule; // 0x3028(0x08)

	bool CanSwitchFiringMode(); // Function Weapon_Hunter85_V2.Weapon_Hunter85_V2_C.CanSwitchFiringMode // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x297fc00
	void ReceiveBeginPlay(); // Function Weapon_Hunter85_V2.Weapon_Hunter85_V2_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_Weapon_Hunter85_V2(int32_t EntryPoint); // Function Weapon_Hunter85_V2.Weapon_Hunter85_V2_C.ExecuteUbergraph_Weapon_Hunter85_V2 // (Final|UbergraphFunction) // @ game+0x297fc00
};

