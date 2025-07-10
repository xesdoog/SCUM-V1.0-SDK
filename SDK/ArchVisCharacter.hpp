#ifndef UE4SS_SDK_ArchVisCharacter_HPP
#define UE4SS_SDK_ArchVisCharacter_HPP

class AArchVisCharacter : public ACharacter
{
    FString LookUpAxisName;                                                           // 0x04C8 (size: 0x10)
    FString LookUpAtRateAxisName;                                                     // 0x04D8 (size: 0x10)
    FString TurnAxisName;                                                             // 0x04E8 (size: 0x10)
    FString TurnAtRateAxisName;                                                       // 0x04F8 (size: 0x10)
    FString MoveForwardAxisName;                                                      // 0x0508 (size: 0x10)
    FString MoveRightAxisName;                                                        // 0x0518 (size: 0x10)
    float MouseSensitivityScale_Pitch;                                                // 0x0528 (size: 0x4)
    float MouseSensitivityScale_Yaw;                                                  // 0x052C (size: 0x4)

}; // Size: 0x530

class UArchVisCharMovementComponent : public UCharacterMovementComponent
{
    FRotator RotationalAcceleration;                                                  // 0x0B40 (size: 0xC)
    FRotator RotationalDeceleration;                                                  // 0x0B4C (size: 0xC)
    FRotator MaxRotationalVelocity;                                                   // 0x0B58 (size: 0xC)
    float MinPitch;                                                                   // 0x0B64 (size: 0x4)
    float MaxPitch;                                                                   // 0x0B68 (size: 0x4)
    float WalkingFriction;                                                            // 0x0B6C (size: 0x4)
    float WalkingSpeed;                                                               // 0x0B70 (size: 0x4)
    float WalkingAcceleration;                                                        // 0x0B74 (size: 0x4)

}; // Size: 0xB90

#endif
