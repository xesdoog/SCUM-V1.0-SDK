// Class ClothingSystemRuntimeInterface.ClothConfigBase
// Size: 0x28 (Inherited: 0x28)
struct UClothConfigBase : UObject {
};

// Class ClothingSystemRuntimeInterface.ClothingSimulationFactory
// Size: 0x28 (Inherited: 0x28)
struct UClothingSimulationFactory : UObject {
};

// Class ClothingSystemRuntimeInterface.ClothingInteractor
// Size: 0x30 (Inherited: 0x28)
struct UClothingInteractor : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class ClothingSystemRuntimeInterface.ClothingSimulationInteractor
// Size: 0x90 (Inherited: 0x28)
struct UClothingSimulationInteractor : UObject {
	struct TMap<struct FName, struct UClothingInteractor*> ClothingInteractors; // 0x28(0x50)
	char pad_78[0x18]; // 0x78(0x18)

	void SetNumSubsteps(int32_t NumSubsteps); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetNumSubsteps // (Native|Public|BlueprintCallable) // @ game+0x3dc3f50
	void SetNumIterations(int32_t NumIterations); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetNumIterations // (Native|Public|BlueprintCallable) // @ game+0x3dc3ec0
	void SetAnimDriveSpringStiffness(float InStiffness); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetAnimDriveSpringStiffness // (Native|Public|BlueprintCallable) // @ game+0x3dc3e30
	void PhysicsAssetUpdated(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated // (Native|Public|BlueprintCallable) // @ game+0x24f3840
	float GetSimulationTime(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetSimulationTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3dc3e10
	int32_t GetNumSubsteps(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumSubsteps // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3dc3df0
	int32_t GetNumKinematicParticles(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumKinematicParticles // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3dc3dd0
	int32_t GetNumIterations(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumIterations // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3dc3db0
	int32_t GetNumDynamicParticles(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumDynamicParticles // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3dc3d90
	int32_t GetNumCloths(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumCloths // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3dc3d70
	struct UClothingInteractor* GetClothingInteractor(struct FString ClothingAssetName); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetClothingInteractor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3dc3cc0
	void EnableGravityOverride(struct FVector& InVector); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.EnableGravityOverride // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3dc3c30
	void DisableGravityOverride(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.DisableGravityOverride // (Native|Public|BlueprintCallable) // @ game+0x36ffa10
	void ClothConfigUpdated(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated // (Native|Public|BlueprintCallable) // @ game+0x115bd40
};

// Class ClothingSystemRuntimeInterface.ClothSharedSimConfigBase
// Size: 0x28 (Inherited: 0x28)
struct UClothSharedSimConfigBase : UObject {
};

// Class ClothingSystemRuntimeInterface.ClothingAssetBase
// Size: 0x48 (Inherited: 0x28)
struct UClothingAssetBase : UObject {
	struct FString ImportedFilePath; // 0x28(0x10)
	struct FGuid AssetGuid; // 0x38(0x10)
};

// Class ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legacy
// Size: 0xe0 (Inherited: 0x28)
struct UClothPhysicalMeshDataBase_Legacy : UObject {
	struct TArray<struct FVector> Vertices; // 0x28(0x10)
	struct TArray<struct FVector> Normals; // 0x38(0x10)
	struct TArray<uint32_t> Indices; // 0x48(0x10)
	struct TArray<float> InverseMasses; // 0x58(0x10)
	struct TArray<struct FClothVertBoneData> BoneData; // 0x68(0x10)
	int32_t NumFixedVerts; // 0x78(0x04)
	int32_t MaxBoneWeights; // 0x7c(0x04)
	struct TArray<uint32_t> SelfCollisionIndices; // 0x80(0x10)
	char pad_90[0x50]; // 0x90(0x50)
};

