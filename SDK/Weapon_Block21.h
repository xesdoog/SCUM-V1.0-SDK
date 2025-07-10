// BlueprintGeneratedClass Weapon_Block21.Weapon_Block21_C
// Size: 0x3028 (Inherited: 0x3010)
struct AWeapon_Block21_C : AWeapon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3010(0x08)
	struct UItemObstructionTestCapsuleComponent* ItemObstructionTestCapsule; // 0x3018(0x08)
	struct UMeleeAttackCollisionCapsule* MeleeAttackCollisionCapsule; // 0x3020(0x08)

	bool CanSwitchFiringMode(); // Function Weapon_Block21.Weapon_Block21_C.CanSwitchFiringMode // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x297fc00
	void ReceiveBeginPlay(); // Function Weapon_Block21.Weapon_Block21_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_Weapon_Block21(int32_t EntryPoint); // Function Weapon_Block21.Weapon_Block21_C.ExecuteUbergraph_Weapon_Block21 // (Final|UbergraphFunction) // @ game+0x297fc00
};

