// Class ArchVisCharacter.ArchVisCharacter
// Size: 0x530 (Inherited: 0x4d0)
struct AArchVisCharacter : ACharacter {
	struct FString LookUpAxisName; // 0x4c8(0x10)
	struct FString LookUpAtRateAxisName; // 0x4d8(0x10)
	struct FString TurnAxisName; // 0x4e8(0x10)
	struct FString TurnAtRateAxisName; // 0x4f8(0x10)
	struct FString MoveForwardAxisName; // 0x508(0x10)
	struct FString MoveRightAxisName; // 0x518(0x10)
	float MouseSensitivityScale_Pitch; // 0x528(0x04)
	float MouseSensitivityScale_Yaw; // 0x52c(0x04)
};

// Class ArchVisCharacter.ArchVisCharMovementComponent
// Size: 0xb90 (Inherited: 0xb40)
struct UArchVisCharMovementComponent : UCharacterMovementComponent {
	struct FRotator RotationalAcceleration; // 0xb40(0x0c)
	struct FRotator RotationalDeceleration; // 0xb4c(0x0c)
	struct FRotator MaxRotationalVelocity; // 0xb58(0x0c)
	float MinPitch; // 0xb64(0x04)
	float MaxPitch; // 0xb68(0x04)
	float WalkingFriction; // 0xb6c(0x04)
	float WalkingSpeed; // 0xb70(0x04)
	float WalkingAcceleration; // 0xb74(0x04)
	char pad_B78[0x18]; // 0xb78(0x18)
};

