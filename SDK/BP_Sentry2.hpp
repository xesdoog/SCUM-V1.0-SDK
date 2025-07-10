#ifndef UE4SS_SDK_BP_Sentry2_HPP
#define UE4SS_SDK_BP_Sentry2_HPP

class ABP_Sentry2_C : public ASentry2
{
    class USpotLightComponent* SpotLight;                                             // 0x0F10 (size: 0x8)
    class UStaticMeshComponent* SpotlightMeshRight;                                   // 0x0F18 (size: 0x8)
    class UStaticMeshComponent* SpotlightMeshLeft;                                    // 0x0F20 (size: 0x8)
    class UMeleeAttackCollisionCapsule* MeleeAttackCollisionCapsule;                  // 0x0F28 (size: 0x8)

}; // Size: 0xF30

#endif
