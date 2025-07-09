// Class ClothingSystemRuntimeNv.ClothConfigNv
// Size: 0x148 (Inherited: 0x28)
struct UClothConfigNv : UClothConfigCommon {
	enum class EClothingWindMethodNv ClothingWindMethod; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FClothConstraintSetupNv VerticalConstraint; // 0x2c(0x10)
	struct FClothConstraintSetupNv HorizontalConstraint; // 0x3c(0x10)
	struct FClothConstraintSetupNv BendConstraint; // 0x4c(0x10)
	struct FClothConstraintSetupNv ShearConstraint; // 0x5c(0x10)
	float SelfCollisionRadius; // 0x6c(0x04)
	float SelfCollisionStiffness; // 0x70(0x04)
	float SelfCollisionCullScale; // 0x74(0x04)
	struct FVector Damping; // 0x78(0x0c)
	float Friction; // 0x84(0x04)
	float WindDragCoefficient; // 0x88(0x04)
	float WindLiftCoefficient; // 0x8c(0x04)
	float WindIntensityScale; // 0x90(0x04)
	struct FVector LinearDrag; // 0x94(0x0c)
	struct FVector AngularDrag; // 0xa0(0x0c)
	struct FVector LinearInertiaScale; // 0xac(0x0c)
	struct FVector AngularInertiaScale; // 0xb8(0x0c)
	struct FVector CentrifugalInertiaScale; // 0xc4(0x0c)
	float SolverFrequency; // 0xd0(0x04)
	float StiffnessFrequency; // 0xd4(0x04)
	float GravityScale; // 0xd8(0x04)
	struct FVector GravityOverride; // 0xdc(0x0c)
	bool bUseGravityOverride; // 0xe8(0x01)
	char pad_E9[0x3]; // 0xe9(0x03)
	float TetherStiffness; // 0xec(0x04)
	float TetherLimit; // 0xf0(0x04)
	float CollisionThickness; // 0xf4(0x04)
	float AnimDriveSpringStiffness; // 0xf8(0x04)
	float AnimDriveDamperStiffness; // 0xfc(0x04)
	enum class EClothingWindMethod_Legacy WindMethod; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	struct FClothConstraintSetup_Legacy VerticalConstraintConfig; // 0x104(0x10)
	struct FClothConstraintSetup_Legacy HorizontalConstraintConfig; // 0x114(0x10)
	struct FClothConstraintSetup_Legacy BendConstraintConfig; // 0x124(0x10)
	struct FClothConstraintSetup_Legacy ShearConstraintConfig; // 0x134(0x10)
	char pad_144[0x4]; // 0x144(0x04)
};

// Class ClothingSystemRuntimeNv.ClothingSimulationFactoryNv
// Size: 0x28 (Inherited: 0x28)
struct UClothingSimulationFactoryNv : UClothingSimulationFactory {
};

// Class ClothingSystemRuntimeNv.ClothingSimulationInteractorNv
// Size: 0xa0 (Inherited: 0x90)
struct UClothingSimulationInteractorNv : UClothingSimulationInteractor {
	char pad_90[0x10]; // 0x90(0x10)

	void SetAnimDriveDamperStiffness(float InStiffness); // Function ClothingSystemRuntimeNv.ClothingSimulationInteractorNv.SetAnimDriveDamperStiffness // (Final|Native|Public|BlueprintCallable) // @ game+0x4740d60
};

// Class ClothingSystemRuntimeNv.ClothPhysicalMeshDataNv_Legacy
// Size: 0x120 (Inherited: 0xe0)
struct UClothPhysicalMeshDataNv_Legacy : UClothPhysicalMeshDataBase_Legacy {
	struct TArray<float> MaxDistances; // 0xe0(0x10)
	struct TArray<float> BackstopDistances; // 0xf0(0x10)
	struct TArray<float> BackstopRadiuses; // 0x100(0x10)
	struct TArray<float> AnimDriveMultipliers; // 0x110(0x10)
};

