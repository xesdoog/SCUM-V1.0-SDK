// BlueprintGeneratedClass Weapon_BlackHawk_Crossbow.Weapon_BlackHawk_Crossbow_C
// Size: 0x3094 (Inherited: 0x3060)
struct AWeapon_BlackHawk_Crossbow_C : AWeaponCrossbow {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3060(0x08)
	struct UItemObstructionTestCapsuleComponent* ItemObstructionTestCapsule3; // 0x3068(0x08)
	struct UItemObstructionTestCapsuleComponent* ItemObstructionTestCapsule4; // 0x3070(0x08)
	struct UItemObstructionTestCapsuleComponent* ItemObstructionTestCapsule1; // 0x3078(0x08)
	struct UItemObstructionTestCapsuleComponent* ItemObstructionTestCapsule2; // 0x3080(0x08)
	struct UMeleeAttackCollisionCapsule* MeleeAttackCollisionCapsule; // 0x3088(0x08)
	float IronSightsHideAlpha; // 0x3090(0x04)

	bool CanAddAttachment(struct AWeaponAttachment* Attachment); // Function Weapon_BlackHawk_Crossbow.Weapon_BlackHawk_Crossbow_C.CanAddAttachment // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x297fc00
	void OnAttachmentAdded(struct AWeaponAttachment* Attachment); // Function Weapon_BlackHawk_Crossbow.Weapon_BlackHawk_Crossbow_C.OnAttachmentAdded // (Event|Protected|BlueprintEvent) // @ game+0x297fc00
	void OnAttachmentRemoved(struct AWeaponAttachment* Attachment); // Function Weapon_BlackHawk_Crossbow.Weapon_BlackHawk_Crossbow_C.OnAttachmentRemoved // (Event|Protected|BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_Weapon_BlackHawk_Crossbow(int32_t EntryPoint); // Function Weapon_BlackHawk_Crossbow.Weapon_BlackHawk_Crossbow_C.ExecuteUbergraph_Weapon_BlackHawk_Crossbow // (Final|UbergraphFunction) // @ game+0x297fc00
};

