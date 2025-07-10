#ifndef UE4SS_SDK_Weapon_Block21_HPP
#define UE4SS_SDK_Weapon_Block21_HPP

class AWeapon_Block21_C : public AWeapon
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x3010 (size: 0x8)
    class UItemObstructionTestCapsuleComponent* ItemObstructionTestCapsule;           // 0x3018 (size: 0x8)
    class UMeleeAttackCollisionCapsule* MeleeAttackCollisionCapsule;                  // 0x3020 (size: 0x8)

    bool CanSwitchFiringMode();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Weapon_Block21(int32 EntryPoint);
}; // Size: 0x3028

#endif
