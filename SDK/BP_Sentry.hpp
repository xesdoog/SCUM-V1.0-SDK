#ifndef UE4SS_SDK_BP_Sentry_HPP
#define UE4SS_SDK_BP_Sentry_HPP

class ABP_Sentry_C : public ASentry2
{
    class UFlamethrowerComponent* flamethrower;                                       // 0x0F10 (size: 0x8)
    class UStaticMeshComponent* AimingLaserStaticMesh;                                // 0x0F18 (size: 0x8)
    class USpotLightComponent* SpotlightFogUL;                                        // 0x0F20 (size: 0x8)
    class UPointLightComponent* ActiveLight;                                          // 0x0F28 (size: 0x8)
    class USpotLightComponent* SpotlightFogLR;                                        // 0x0F30 (size: 0x8)
    class USpotLightComponent* SpotlightFogLL;                                        // 0x0F38 (size: 0x8)
    class USpotLightComponent* SpotlightFogUR;                                        // 0x0F40 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x0F48 (size: 0x8)
    class UMeleeAttackCollisionCapsule* MeleeAttackCollisionCapsuleRight;             // 0x0F50 (size: 0x8)
    class UMeleeAttackCollisionCapsule* MeleeAttackCollisionCapsuleLeft;              // 0x0F58 (size: 0x8)

}; // Size: 0xF60

#endif
