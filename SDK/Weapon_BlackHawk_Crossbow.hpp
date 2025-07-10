#ifndef UE4SS_SDK_Weapon_BlackHawk_Crossbow_HPP
#define UE4SS_SDK_Weapon_BlackHawk_Crossbow_HPP

class AWeapon_BlackHawk_Crossbow_C : public AWeaponCrossbow
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x3060 (size: 0x8)
    class UItemObstructionTestCapsuleComponent* ItemObstructionTestCapsule3;          // 0x3068 (size: 0x8)
    class UItemObstructionTestCapsuleComponent* ItemObstructionTestCapsule4;          // 0x3070 (size: 0x8)
    class UItemObstructionTestCapsuleComponent* ItemObstructionTestCapsule1;          // 0x3078 (size: 0x8)
    class UItemObstructionTestCapsuleComponent* ItemObstructionTestCapsule2;          // 0x3080 (size: 0x8)
    class UMeleeAttackCollisionCapsule* MeleeAttackCollisionCapsule;                  // 0x3088 (size: 0x8)
    float IronSightsHideAlpha;                                                        // 0x3090 (size: 0x4)

    bool CanAddAttachment(const class AWeaponAttachment* Attachment);
    void OnAttachmentAdded(class AWeaponAttachment* Attachment);
    void OnAttachmentRemoved(class AWeaponAttachment* Attachment);
    void ExecuteUbergraph_Weapon_BlackHawk_Crossbow(int32 EntryPoint);
}; // Size: 0x3094

#endif
