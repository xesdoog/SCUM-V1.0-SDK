#ifndef UE4SS_SDK_Weapon_Hunter85_V2_HPP
#define UE4SS_SDK_Weapon_Hunter85_V2_HPP

class AWeapon_Hunter85_V2_C : public AWeapon
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x3010 (size: 0x8)
    class UItemObstructionTestCapsuleComponent* ItemObstructionTestCapsule2;          // 0x3018 (size: 0x8)
    class UItemObstructionTestCapsuleComponent* ItemObstructionTestCapsule1;          // 0x3020 (size: 0x8)
    class UMeleeAttackCollisionCapsule* MeleeAttackCollisionCapsule;                  // 0x3028 (size: 0x8)

    bool CanSwitchFiringMode();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Weapon_Hunter85_V2(int32 EntryPoint);
}; // Size: 0x3030

#endif
