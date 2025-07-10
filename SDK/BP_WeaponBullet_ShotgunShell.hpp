#ifndef UE4SS_SDK_BP_WeaponBullet_ShotgunShell_HPP
#define UE4SS_SDK_BP_WeaponBullet_ShotgunShell_HPP

class ABP_WeaponBullet_ShotgunShell_C : public AProjectileShotgun
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_WeaponBullet_ShotgunShell(int32 EntryPoint);
}; // Size: 0x480

#endif
