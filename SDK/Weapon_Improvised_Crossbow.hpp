#ifndef UE4SS_SDK_Weapon_Improvised_Crossbow_HPP
#define UE4SS_SDK_Weapon_Improvised_Crossbow_HPP

class AWeapon_Improvised_Crossbow_C : public AWeaponCrossbow
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x3060 (size: 0x8)
    class UItemObstructionTestCapsuleComponent* ItemObstructionTestCapsule4;          // 0x3068 (size: 0x8)
    class UItemObstructionTestCapsuleComponent* ItemObstructionTestCapsule3;          // 0x3070 (size: 0x8)
    class UItemObstructionTestCapsuleComponent* ItemObstructionTestCapsule1;          // 0x3078 (size: 0x8)
    class UItemObstructionTestCapsuleComponent* ItemObstructionTestCapsule2;          // 0x3080 (size: 0x8)
    class UMeleeAttackCollisionCapsule* MeleeAttackCollisionCapsule;                  // 0x3088 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_Weapon_Improvised_Crossbow(int32 EntryPoint);
}; // Size: 0x3090

#endif
