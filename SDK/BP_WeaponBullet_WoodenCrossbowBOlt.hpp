#ifndef UE4SS_SDK_BP_WeaponBullet_WoodenCrossbowBOlt_HPP
#define UE4SS_SDK_BP_WeaponBullet_WoodenCrossbowBOlt_HPP

class ABP_WeaponBullet_WoodenCrossbowBolt_C : public AProjectileArrow
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04A8 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x04B0 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_WeaponBullet_WoodenCrossbowBolt(int32 EntryPoint);
}; // Size: 0x4B8

#endif
