#ifndef UE4SS_SDK_BP_WeaponBullet_cal22_HPP
#define UE4SS_SDK_BP_WeaponBullet_cal22_HPP

class ABP_WeaponBullet_cal22_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0468 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_WeaponBullet_cal22(int32 EntryPoint);
}; // Size: 0x470

#endif
