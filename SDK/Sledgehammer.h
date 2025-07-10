// BlueprintGeneratedClass Sledgehammer.Sledgehammer_C
// Size: 0xb00 (Inherited: 0x9b0)
struct ASledgehammer_C : AWeaponItem {
	struct UMeleeAttackCollisionCapsule* MeleeAttackCollisionCapsule1; // 0x9b0(0x08)
	struct UMeleeAttackCollisionCapsule* MeleeAttackCollisionCapsule; // 0x9b8(0x08)
	struct TMap<enum class EPrisonerMontage, struct FCharacterAndItemAnimation> CharacterActionAnimationMap; // 0x9c0(0x50)
	struct TSet<struct UStaticMesh*> TallStaticMeshSet; // 0xa10(0x50)
	struct TMap<enum class EPrisonerMontage, struct FCharacterAndItemAnimation> CrouchingCutBaseElementAnimationMap; // 0xa60(0x50)
	struct TMap<enum class EPrisonerMontage, struct FCharacterAndItemAnimation> StandingCutBaseElementAnimationMap; // 0xab0(0x50)

	struct FCharacterAndItemAnimation FindCharacterAndItemAnimation(struct UObject* Context, enum class EPrisonerMontage prisonerMontageType); // Function Sledgehammer.Sledgehammer_C.FindCharacterAndItemAnimation // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x297fc00
};

