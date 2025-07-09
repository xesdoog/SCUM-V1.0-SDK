// Class VICODynamicsPlugin.BaseVDComponent
// Size: 0x6a0 (Inherited: 0x480)
struct UBaseVDComponent : UMeshComponent {
	char pad_480[0x8]; // 0x480(0x08)
	struct UVDSimulation* SimulationInstance; // 0x488(0x08)
	struct UVDSimulatedObject* VDSimObject; // 0x490(0x08)
	struct TArray<struct UVDSimulatedParticle*> Particles; // 0x498(0x10)
	float FrictionCoefficient; // 0x4a8(0x04)
	float RestitutionCoefficient; // 0x4ac(0x04)
	struct FVDCollisionSettings CollisionSettings; // 0x4b0(0x40)
	float ParticleRadius; // 0x4f0(0x04)
	bool AttachToRigids; // 0x4f4(0x01)
	bool AttachToParticles; // 0x4f5(0x01)
	char pad_4F6[0x2]; // 0x4f6(0x02)
	float AttachToParticlesConstraintStiffness; // 0x4f8(0x04)
	float EndOffset; // 0x4fc(0x04)
	float DetectionRadiusInflationFactor; // 0x500(0x04)
	bool CreateTensionConstraintsForSimulatingRigids; // 0x504(0x01)
	bool bSnapToSimulatingAttachment; // 0x505(0x01)
	bool ManuallyAttachParticles; // 0x506(0x01)
	char pad_507[0x1]; // 0x507(0x01)
	struct TArray<struct FVDParticleAttachment> ParticleAttachments; // 0x508(0x10)
	float TensionForce; // 0x518(0x04)
	float TensionDampening; // 0x51c(0x04)
	char AdjustOtherParticleLocationsBasedOnAttachments : 1; // 0x520(0x01)
	char AffectedByGlobalWind : 1; // 0x520(0x01)
	char UseExplicitRigidBodyCollision : 1; // 0x520(0x01)
	char pad_520_3 : 5; // 0x520(0x01)
	char pad_521[0x3]; // 0x521(0x03)
	float WindResistance; // 0x524(0x04)
	struct TArray<struct FComponentReference> AffectedByWindSources; // 0x528(0x10)
	bool CheckForWindOccluders; // 0x538(0x01)
	char pad_539[0x3]; // 0x539(0x03)
	float MaxWindOccluderDistance; // 0x53c(0x04)
	struct FVDCollisionSettings WindOccluderTraceSettings; // 0x540(0x40)
	struct FMulticastInlineDelegate OnSimulationDataCreated; // 0x580(0x10)
	struct FMulticastInlineDelegate OnPreSimulationSync; // 0x590(0x10)
	struct FMulticastInlineDelegate OnSimulationSync; // 0x5a0(0x10)
	char ShowParticles : 1; // 0x5b0(0x01)
	char pad_5B0_1 : 7; // 0x5b0(0x01)
	char pad_5B1[0x3]; // 0x5b1(0x03)
	float GravityScale; // 0x5b4(0x04)
	float MinConstraintDistance; // 0x5b8(0x04)
	bool SimulateOnlyWhenRendered; // 0x5bc(0x01)
	char pad_5BD[0x3]; // 0x5bd(0x03)
	float SimulationToggleThreshold; // 0x5c0(0x04)
	char EnableParticleToParticleCollisions : 1; // 0x5c4(0x01)
	char ConsiderInnerCollisions : 1; // 0x5c4(0x01)
	char SkipRelativeVelocityCheckDuringRigidBodyCollisions : 1; // 0x5c4(0x01)
	char pad_5C4_3 : 5; // 0x5c4(0x01)
	char bNotifyOnVDCollision : 1; // 0x5c5(0x01)
	char pad_5C5_1 : 7; // 0x5c5(0x01)
	char pad_5C6[0x2]; // 0x5c6(0x02)
	struct FMulticastInlineDelegate OnVDCollisionEvent; // 0x5c8(0x10)
	struct TMap<struct UVDSimulatedParticle*, struct FVDCollision> PendingCollisionNotifications; // 0x5d8(0x50)
	char pad_628[0x20]; // 0x628(0x20)
	struct TArray<struct UVDParticleSpringConstraint*> ConstraintsToOtherParticles; // 0x648(0x10)
	char pad_658[0x28]; // 0x658(0x28)
	char bUseLocationCache : 1; // 0x680(0x01)
	char bApplyCachedStartLocationBeforeAttachToRigids : 1; // 0x680(0x01)
	char pad_680_2 : 6; // 0x680(0x01)
	char pad_681[0x7]; // 0x681(0x07)
	struct TArray<struct FVDCachedParticleStartLocation> CachedStartLocations; // 0x688(0x10)
	char pad_698[0x8]; // 0x698(0x08)

	void SetUseExplicitRigidBodyCollision(bool UseExplicitCollision); // Function VICODynamicsPlugin.BaseVDComponent.SetUseExplicitRigidBodyCollision // (Final|Native|Public|BlueprintCallable) // @ game+0x13dac80
	void SetAffectedByGlobalWind(bool IsAffected); // Function VICODynamicsPlugin.BaseVDComponent.SetAffectedByGlobalWind // (Final|Native|Public|BlueprintCallable) // @ game+0x13da490
	void OnSync(); // Function VICODynamicsPlugin.BaseVDComponent.OnSync // (Event|Protected|BlueprintEvent) // @ game+0x297fc00
	int32_t GetTensionConstraintCount(); // Function VICODynamicsPlugin.BaseVDComponent.GetTensionConstraintCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x13d9eb0
	struct FVector GetLastAppliedForceFromTensionConstraint(int32_t TensionConstraintIndex); // Function VICODynamicsPlugin.BaseVDComponent.GetLastAppliedForceFromTensionConstraint // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x13d9ac0
	void AttachToOverlappingRigidBodies(); // Function VICODynamicsPlugin.BaseVDComponent.AttachToOverlappingRigidBodies // (Native|Public|BlueprintCallable) // @ game+0x13d9300
};

// Class VICODynamicsPlugin.VDBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UVDBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	struct UVDSimulation* GetVICODynamicsSimulationInstance(); // Function VICODynamicsPlugin.VDBlueprintFunctionLibrary.GetVICODynamicsSimulationInstance // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x13d9f70
};

// Class VICODynamicsPlugin.VDColliderComponent
// Size: 0xe0 (Inherited: 0xb0)
struct UVDColliderComponent : UActorComponent {
	struct UVDSimulation* SimulationInstance; // 0xb0(0x08)
	struct TArray<struct FComponentReference> AssociatedVDComponents; // 0xb8(0x10)
	char bAddAllComponents : 1; // 0xc8(0x01)
	char bIgnoreConvexShapes : 1; // 0xc8(0x01)
	char pad_C8_2 : 6; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct TArray<struct FName> SpecificColliders; // 0xd0(0x10)
};

// Class VICODynamicsPlugin.VDRopeComponent
// Size: 0x720 (Inherited: 0x6a0)
struct UVDRopeComponent : UBaseVDComponent {
	float StretchStiffness; // 0x698(0x04)
	float BendStiffness; // 0x69c(0x04)
	float Mass; // 0x6a0(0x04)
	float DragCoefficient; // 0x6a4(0x04)
	float Length; // 0x6a8(0x04)
	float Width; // 0x6ac(0x04)
	int32_t NumSegments; // 0x6b0(0x04)
	int32_t NumSides; // 0x6b4(0x04)
	float TileMaterial; // 0x6b8(0x04)
	char pad_6C4[0x1c]; // 0x6c4(0x1c)
	struct TArray<struct UVDParticleSpringConstraint*> StretchConstraints; // 0x6e0(0x10)
	struct TArray<struct UVDParticleSpringConstraint*> BendConstraints; // 0x6f0(0x10)
	struct TArray<struct FRopePiece> Pieces; // 0x700(0x10)
	char pad_710[0x10]; // 0x710(0x10)

	void SetNewRestLengthStartingAtParticle(int32_t ParticleIndexStart, float NewLength); // Function VICODynamicsPlugin.VDRopeComponent.SetNewRestLengthStartingAtParticle // (Final|Native|Public|BlueprintCallable) // @ game+0x13da960
	void SetNewRestLength(float NewLength, int32_t PieceIndex); // Function VICODynamicsPlugin.VDRopeComponent.SetNewRestLength // (Final|Native|Public|BlueprintCallable) // @ game+0x13da890
	void ResetRope(); // Function VICODynamicsPlugin.VDRopeComponent.ResetRope // (Native|Public|BlueprintCallable) // @ game+0x13da470
	float GetTrueLength(int32_t PieceIndex); // Function VICODynamicsPlugin.VDRopeComponent.GetTrueLength // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x13d9ed0
	struct TArray<struct FRopePiece> GetPieces(); // Function VICODynamicsPlugin.VDRopeComponent.GetPieces // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x13d9c80
	void BreakAtSegment(int32_t SegmentIndex); // Function VICODynamicsPlugin.VDRopeComponent.BreakAtSegment // (Final|Native|Public|BlueprintCallable) // @ game+0x13d9320
};

// Class VICODynamicsPlugin.VDDynamicRopeComponent
// Size: 0x720 (Inherited: 0x720)
struct UVDDynamicRopeComponent : UVDRopeComponent {

	void RebuildRopeAttached(float DistancePerSegment, struct USceneComponent* StartAttachedTo, struct FName StartSocket, bool StartSimulateTension, struct USceneComponent* EndAttachedTo, struct FName EndSocket, bool EndSimulateTension); // Function VICODynamicsPlugin.VDDynamicRopeComponent.RebuildRopeAttached // (Final|Native|Public|BlueprintCallable) // @ game+0x13da240
	void RebuildRopeAtPoints(float DistancePerSegment, struct FVector& StartLocation, struct FVector& EndLocation, bool bRelativeLocations); // Function VICODynamicsPlugin.VDDynamicRopeComponent.RebuildRopeAtPoints // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x13da0b0
	void RebuildRope(); // Function VICODynamicsPlugin.VDDynamicRopeComponent.RebuildRope // (Native|Public|BlueprintCallable) // @ game+0x13da090
};

// Class VICODynamicsPlugin.VDMeshClothComponent
// Size: 0x780 (Inherited: 0x6a0)
struct UVDMeshClothComponent : UBaseVDComponent {
	struct UStaticMesh* HullMesh; // 0x698(0x08)
	float StretchStiffness; // 0x6a0(0x04)
	float BendStiffness; // 0x6a4(0x04)
	float Mass; // 0x6a8(0x04)
	float DragCoefficient; // 0x6ac(0x04)
	bool PreserveVolume; // 0x6b0(0x01)
	float CurrentVolume; // 0x6b4(0x04)
	float OverrideRestVolume; // 0x6b8(0x04)
	char UseVertexColorDataForSetup : 1; // 0x6c0(0x01)
	char pad_6C1_1 : 7; // 0x6c1(0x01)
	char pad_6C2[0x2]; // 0x6c2(0x02)
	float MaxBendConstraintDistance; // 0x6c4(0x04)
	char pad_6C8[0x28]; // 0x6c8(0x28)
	struct TArray<struct UVDParticleSpringConstraint*> StretchConstraints; // 0x6f0(0x10)
	struct TArray<struct UVDParticleSpringConstraint*> BendConstraints; // 0x700(0x10)
	struct UVDMeshVolumeConstraint* VolumeConstraint; // 0x710(0x08)
	char pad_718[0x68]; // 0x718(0x68)

	struct UVDMeshVolumeConstraint* GetVolumeConstraint(); // Function VICODynamicsPlugin.VDMeshClothComponent.GetVolumeConstraint // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x13d9fa0
	struct TArray<struct UVDParticleSpringConstraint*> GetStretchConstraintsArray(); // Function VICODynamicsPlugin.VDMeshClothComponent.GetStretchConstraintsArray // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x13d9e80
	struct TArray<struct UVDParticleSpringConstraint*> GetBendConstraintsArray(); // Function VICODynamicsPlugin.VDMeshClothComponent.GetBendConstraintsArray // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x13d9940
};

// Class VICODynamicsPlugin.VDMeshVolumeConstraint
// Size: 0x38 (Inherited: 0x28)
struct UVDMeshVolumeConstraint : UObject {
	char pad_28[0x10]; // 0x28(0x10)

	void SetRestVolume(float NewVolume); // Function VICODynamicsPlugin.VDMeshVolumeConstraint.SetRestVolume // (Final|Native|Public|BlueprintCallable) // @ game+0x13daad0
	float GetRestVolume(); // Function VICODynamicsPlugin.VDMeshVolumeConstraint.GetRestVolume // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x13d9d70
	float GetCurrentVolume(); // Function VICODynamicsPlugin.VDMeshVolumeConstraint.GetCurrentVolume // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x13d9a60
};

// Class VICODynamicsPlugin.VDParticleSpringConstraint
// Size: 0x38 (Inherited: 0x28)
struct UVDParticleSpringConstraint : UObject {
	char pad_28[0x10]; // 0x28(0x10)

	void SetStiffness(float& NewStiffness); // Function VICODynamicsPlugin.VDParticleSpringConstraint.SetStiffness // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x13dabe0
	void SetRestDistance(float& NewRestDistance); // Function VICODynamicsPlugin.VDParticleSpringConstraint.SetRestDistance // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x13daa30
	bool IsConstraining(struct UVDSimulatedParticle* Particle1, struct UVDSimulatedParticle* Particle2); // Function VICODynamicsPlugin.VDParticleSpringConstraint.IsConstraining // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x13d9fc0
	float GetStifffness(); // Function VICODynamicsPlugin.VDParticleSpringConstraint.GetStifffness // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x13d9e50
	float GetRestDistance(); // Function VICODynamicsPlugin.VDParticleSpringConstraint.GetRestDistance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x13d9d40
	struct UVDSimulatedParticle* GetParticle2(); // Function VICODynamicsPlugin.VDParticleSpringConstraint.GetParticle2 // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x13d9bd0
	struct UVDSimulatedParticle* GetParticle1(); // Function VICODynamicsPlugin.VDParticleSpringConstraint.GetParticle1 // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x13d9ba0
};

// Class VICODynamicsPlugin.VDProceduralClothComponent
// Size: 0x710 (Inherited: 0x6a0)
struct UVDProceduralClothComponent : UBaseVDComponent {
	float StretchStiffness; // 0x698(0x04)
	float BendStiffness; // 0x69c(0x04)
	float Mass; // 0x6a0(0x04)
	float DragCoefficient; // 0x6a4(0x04)
	float Width; // 0x6a8(0x04)
	float Height; // 0x6ac(0x04)
	int32_t NumParticlesWide; // 0x6b0(0x04)
	int32_t NumParticlesHigh; // 0x6b4(0x04)
	float TileMaterialAlongWidth; // 0x6b8(0x04)
	float TileMaterialAlongHeight; // 0x6bc(0x04)
	char pad_6C8[0x18]; // 0x6c8(0x18)
	struct TArray<struct UVDParticleSpringConstraint*> StretchConstraints; // 0x6e0(0x10)
	struct TArray<struct UVDParticleSpringConstraint*> BendConstraints; // 0x6f0(0x10)
	char pad_700[0x10]; // 0x700(0x10)
};

// Class VICODynamicsPlugin.VDSimulatedObject
// Size: 0x78 (Inherited: 0x28)
struct UVDSimulatedObject : UObject {
	char pad_28[0x50]; // 0x28(0x50)

	void SetSkipRelativeVelocityCheckDuringCollision(bool Skip); // Function VICODynamicsPlugin.VDSimulatedObject.SetSkipRelativeVelocityCheckDuringCollision // (Final|Native|Public|BlueprintCallable) // @ game+0x13dab50
	void SetObjectType(enum class ECollisionChannel ObjectType); // Function VICODynamicsPlugin.VDSimulatedObject.SetObjectType // (Final|Native|Public|BlueprintCallable) // @ game+0x13da5b0
	void SetMinimumConstraintSatisfactionDistance(float MinDistance); // Function VICODynamicsPlugin.VDSimulatedObject.SetMinimumConstraintSatisfactionDistance // (Final|Native|Public|BlueprintCallable) // @ game+0x13da810
	void SetGravityScale(float Scale); // Function VICODynamicsPlugin.VDSimulatedObject.SetGravityScale // (Final|Native|Public|BlueprintCallable) // @ game+0x13da790
	void SetCollisionResponseToObjectType(enum class ECollisionChannel ObjectType, enum class ECollisionResponse Response); // Function VICODynamicsPlugin.VDSimulatedObject.SetCollisionResponseToObjectType // (Final|Native|Public|BlueprintCallable) // @ game+0x13da6c0
	void SetCollisionEnabled(bool Enabled); // Function VICODynamicsPlugin.VDSimulatedObject.SetCollisionEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x13da630
	void SetCollisionChannel(enum class ECollisionChannel Channel); // Function VICODynamicsPlugin.VDSimulatedObject.SetCollisionChannel // (Final|Native|Public|BlueprintCallable) // @ game+0x13da5b0
	void SetAffectiveWindVector(struct FVector NewWindVector); // Function VICODynamicsPlugin.VDSimulatedObject.SetAffectiveWindVector // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x13da520
	struct TArray<struct UVDParticleSpringConstraint*> GetSpringConstraints(); // Function VICODynamicsPlugin.VDSimulatedObject.GetSpringConstraints // (Final|Native|Public|BlueprintCallable) // @ game+0x13d9dd0
	bool GetSkipRelativeVelocityCheckDuringCollision(); // Function VICODynamicsPlugin.VDSimulatedObject.GetSkipRelativeVelocityCheckDuringCollision // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x13d9da0
	struct TArray<struct UVDSimulatedParticle*> GetParticles(); // Function VICODynamicsPlugin.VDSimulatedObject.GetParticles // (Final|Native|Public|BlueprintCallable) // @ game+0x13d9c00
	float GetMinimumConstraintSatisfactionDistance(); // Function VICODynamicsPlugin.VDSimulatedObject.GetMinimumConstraintSatisfactionDistance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x13d9b70
	float GetGravityScale(); // Function VICODynamicsPlugin.VDSimulatedObject.GetGravityScale // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x13d9a90
	struct FVDCollisionSettings GetCollisionSettings(); // Function VICODynamicsPlugin.VDSimulatedObject.GetCollisionSettings // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x13d99a0
	bool GetCollisionEnabled(); // Function VICODynamicsPlugin.VDSimulatedObject.GetCollisionEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x13d9970
	struct FVector GetAffectiveWindVector(); // Function VICODynamicsPlugin.VDSimulatedObject.GetAffectiveWindVector // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x13d9900
	void DestroyVolumeConstraint(struct UVDMeshVolumeConstraint* Constraint); // Function VICODynamicsPlugin.VDSimulatedObject.DestroyVolumeConstraint // (Final|Native|Public|BlueprintCallable) // @ game+0x13d9870
	void DestroyParticle(struct UVDSimulatedParticle* Particle); // Function VICODynamicsPlugin.VDSimulatedObject.DestroyParticle // (Final|Native|Public|BlueprintCallable) // @ game+0x13d97e0
	void DestroyConstraint(struct UVDParticleSpringConstraint* Constraint); // Function VICODynamicsPlugin.VDSimulatedObject.DestroyConstraint // (Final|Native|Public|BlueprintCallable) // @ game+0x13d9750
	struct UVDMeshVolumeConstraint* CreateVolumeConstraint(struct TArray<int32_t> IndexList, float Alpha, float RestVolume); // Function VICODynamicsPlugin.VDSimulatedObject.CreateVolumeConstraint // (Final|Native|Public|BlueprintCallable) // @ game+0x13d95d0
	struct UVDParticleSpringConstraint* CreateSpringConstraint(struct UVDSimulatedParticle* Particle1, struct UVDSimulatedParticle* Particle2, float RestDistance, float Stiffness); // Function VICODynamicsPlugin.VDSimulatedObject.CreateSpringConstraint // (Final|Native|Public|BlueprintCallable) // @ game+0x13d9470
	struct UVDSimulatedParticle* CreateParticle(struct FVDParticleInfo& ParticleInfo); // Function VICODynamicsPlugin.VDSimulatedObject.CreateParticle // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x13d93b0
};

// Class VICODynamicsPlugin.VDSimulatedParticle
// Size: 0xa8 (Inherited: 0x28)
struct UVDSimulatedParticle : UObject {
	bool IsAttached; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FVDParticleAttachment Attachment; // 0x30(0x60)
	char pad_90[0x18]; // 0x90(0x18)

	void SetVelocity(struct FVector& NewVelocity); // Function VICODynamicsPlugin.VDSimulatedParticle.SetVelocity // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x13de390
	void SetRestitutionCoefficient(float NewRestitutionCoefficient); // Function VICODynamicsPlugin.VDSimulatedParticle.SetRestitutionCoefficient // (Final|Native|Public|BlueprintCallable) // @ game+0x13de1f0
	void SetRadius(float NewRadius); // Function VICODynamicsPlugin.VDSimulatedParticle.SetRadius // (Final|Native|Public|BlueprintCallable) // @ game+0x13de0f0
	void SetMass(float NewMass); // Function VICODynamicsPlugin.VDSimulatedParticle.SetMass // (Final|Native|Public|BlueprintCallable) // @ game+0x13ddec0
	void SetLocation(struct FVector& NewLocation); // Function VICODynamicsPlugin.VDSimulatedParticle.SetLocation // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x13dde30
	void SetIsWindOccluded(bool IsOccluded); // Function VICODynamicsPlugin.VDSimulatedParticle.SetIsWindOccluded // (Final|Native|Public|BlueprintCallable) // @ game+0x13ddda0
	void SetIsRigidBodyCollisionEnabled(bool IsEnabled); // Function VICODynamicsPlugin.VDSimulatedParticle.SetIsRigidBodyCollisionEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x13ddd10
	void SetIsParticleCollisionEnabled(bool IsEnabled); // Function VICODynamicsPlugin.VDSimulatedParticle.SetIsParticleCollisionEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x13ddc80
	void SetIsFree(bool IsFree); // Function VICODynamicsPlugin.VDSimulatedParticle.SetIsFree // (Final|Native|Public|BlueprintCallable) // @ game+0x13ddbf0
	void SetFrictionCoefficient(float NewFrictionCoefficient); // Function VICODynamicsPlugin.VDSimulatedParticle.SetFrictionCoefficient // (Final|Native|Public|BlueprintCallable) // @ game+0x13ddae0
	void SetDragCoefficient(float NewDragCoefficient); // Function VICODynamicsPlugin.VDSimulatedParticle.SetDragCoefficient // (Final|Native|Public|BlueprintCallable) // @ game+0x13dd9d0
	struct FVector GetVelocity(); // Function VICODynamicsPlugin.VDSimulatedParticle.GetVelocity // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x13dd5f0
	float GetRestitutionCoefficient(); // Function VICODynamicsPlugin.VDSimulatedParticle.GetRestitutionCoefficient // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x13dd4f0
	float GetRadius(); // Function VICODynamicsPlugin.VDSimulatedParticle.GetRadius // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x13dd4c0
	float GetMass(); // Function VICODynamicsPlugin.VDSimulatedParticle.GetMass // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x13dd490
	struct FVector GetLocation(); // Function VICODynamicsPlugin.VDSimulatedParticle.GetLocation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x13dd450
	bool GetIsWindOccluded(); // Function VICODynamicsPlugin.VDSimulatedParticle.GetIsWindOccluded // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x13dd420
	bool GetIsRigidBodyCollisionEnabled(); // Function VICODynamicsPlugin.VDSimulatedParticle.GetIsRigidBodyCollisionEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x13dd3d0
	bool GetIsParticleCollisionEnabled(); // Function VICODynamicsPlugin.VDSimulatedParticle.GetIsParticleCollisionEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x13dd3a0
	bool GetIsFree(); // Function VICODynamicsPlugin.VDSimulatedParticle.GetIsFree // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x13dd370
	float GetFrictionCoefficient(); // Function VICODynamicsPlugin.VDSimulatedParticle.GetFrictionCoefficient // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x13dd320
	float GetDragCoefficient(); // Function VICODynamicsPlugin.VDSimulatedParticle.GetDragCoefficient // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x13dd2f0
	bool GetAttachment(struct FVDParticleAttachment& OutAttachment); // Function VICODynamicsPlugin.VDSimulatedParticle.GetAttachment // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x13dd040
	void Detach(); // Function VICODynamicsPlugin.VDSimulatedParticle.Detach // (Final|Native|Public|BlueprintCallable) // @ game+0x13dd020
	void CopyAttachment(struct FVDParticleAttachment& Attachment, bool UseCurrentMass); // Function VICODynamicsPlugin.VDSimulatedParticle.CopyAttachment // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x13dcee0
	bool AttachToLocation(struct FVector Location, bool IsRelative); // Function VICODynamicsPlugin.VDSimulatedParticle.AttachToLocation // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x13dcdf0
	bool AttachToComponent(struct UPrimitiveComponent* Component, struct FVector Location, bool SimulateTension, struct FName Socket); // Function VICODynamicsPlugin.VDSimulatedParticle.AttachToComponent // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x13dcc60
	bool AttachToActor(struct AActor* Actor, struct FVector Location, bool SimulateTension, struct FName Socket); // Function VICODynamicsPlugin.VDSimulatedParticle.AttachToActor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x13dcad0
	void AddForce(struct FVector& Force); // Function VICODynamicsPlugin.VDSimulatedParticle.AddForce // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x13dca40
};

// Class VICODynamicsPlugin.VDSimulation
// Size: 0x178 (Inherited: 0x28)
struct UVDSimulation : UObject {
	char pad_28[0x140]; // 0x28(0x140)
	struct TArray<struct UVDWindDirectionalSourceComponent*> WindSources; // 0x168(0x10)

	void SetSubstepCount(int32_t SubstepCount); // Function VICODynamicsPlugin.VDSimulation.SetSubstepCount // (Final|Native|Public|BlueprintCallable) // @ game+0x13de300
	void SetSelfCollisionEnabled(bool IsEnabled); // Function VICODynamicsPlugin.VDSimulation.SetSelfCollisionEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x13de270
	void SetPhysXSceneCollisionEnabled(bool IsEnabled); // Function VICODynamicsPlugin.VDSimulation.SetPhysXSceneCollisionEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x13de060
	void SetPerFrameCollisionCacheEnable(bool IsEnabled); // Function VICODynamicsPlugin.VDSimulation.SetPerFrameCollisionCacheEnable // (Final|Native|Public|BlueprintCallable) // @ game+0x13ddf40
	void SetPerformExtraCollisionResolutionLoop(bool IsEnabled); // Function VICODynamicsPlugin.VDSimulation.SetPerformExtraCollisionResolutionLoop // (Final|Native|Public|BlueprintCallable) // @ game+0x13ddfd0
	void SetIsExplicitRigidBodyCollisionEnabled(bool IsEnabled); // Function VICODynamicsPlugin.VDSimulation.SetIsExplicitRigidBodyCollisionEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x13ddb60
	void SetFrameRate(int32_t FrameRate); // Function VICODynamicsPlugin.VDSimulation.SetFrameRate // (Final|Native|Public|BlueprintCallable) // @ game+0x13dda50
	void SetConstraintIterationCount(int32_t ConstraintIterationCount); // Function VICODynamicsPlugin.VDSimulation.SetConstraintIterationCount // (Final|Native|Public|BlueprintCallable) // @ game+0x13dd940
	void SetConstrainSimulationTo2DPlane(bool IsEnabled); // Function VICODynamicsPlugin.VDSimulation.SetConstrainSimulationTo2DPlane // (Final|Native|Public|BlueprintCallable) // @ game+0x13dd8b0
	void SetConstrainPlaneOrigin(struct FVector Origin); // Function VICODynamicsPlugin.VDSimulation.SetConstrainPlaneOrigin // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x13dd820
	void SetConstrainPlaneNormal(struct FVector Normal); // Function VICODynamicsPlugin.VDSimulation.SetConstrainPlaneNormal // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x13dd790
	void RemoveExplicitColliderMapping(struct UBaseVDComponent* VDComponent, struct UPrimitiveComponent* Collider); // Function VICODynamicsPlugin.VDSimulation.RemoveExplicitColliderMapping // (Final|Native|Public|BlueprintCallable) // @ game+0x13dd6c0
	void RemoveAllExplicitColliderMappings(struct UBaseVDComponent* VDComponent); // Function VICODynamicsPlugin.VDSimulation.RemoveAllExplicitColliderMappings // (Final|Native|Public|BlueprintCallable) // @ game+0x13dd630
	bool k2QuerySphereOverlaps(struct FVector Location, float Radius, struct TArray<struct UVDSimulatedParticle*>& Overlaps, struct TArray<struct UVDSimulatedObject*>& SimObjectsToIgnore, int32_t MaxOverlaps); // Function VICODynamicsPlugin.VDSimulation.k2QuerySphereOverlaps // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x13de620
	bool k2QueryBoxOverlaps(struct FVector Location, struct FVector HalfExtents, struct TArray<struct UVDSimulatedParticle*>& Overlaps, struct TArray<struct UVDSimulatedObject*>& SimObjectsToIgnore, int32_t MaxOverlaps); // Function VICODynamicsPlugin.VDSimulation.k2QueryBoxOverlaps // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x13de420
	struct FVDSettings GetSettings(); // Function VICODynamicsPlugin.VDSimulation.GetSettings // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x13dd590
	bool GetIsRunningOnWorkerThread(); // Function VICODynamicsPlugin.VDSimulation.GetIsRunningOnWorkerThread // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x13dd400
	bool GetIsExplicitRigidBodyCollisionEnabled(); // Function VICODynamicsPlugin.VDSimulation.GetIsExplicitRigidBodyCollisionEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x13dd350
	void GetDirectionalWindParameters(struct UBaseVDComponent* VDComponent, struct FVector& OutDirection, float& OutSpeed, float& OutGust); // Function VICODynamicsPlugin.VDSimulation.GetDirectionalWindParameters // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x13dd160
	void AddExplicitColliderMapping(struct UBaseVDComponent* VDComponent, struct UPrimitiveComponent* Collider, bool IgnoreConvexShapes); // Function VICODynamicsPlugin.VDSimulation.AddExplicitColliderMapping // (Final|Native|Public|BlueprintCallable) // @ game+0x13dc930
};

// Class VICODynamicsPlugin.VDSimulationSettingsActor
// Size: 0x278 (Inherited: 0x220)
struct AVDSimulationSettingsActor : AInfo {
	struct FVDSettings Settings; // 0x220(0x58)

	struct FVDSettings GetSettings(); // Function VICODynamicsPlugin.VDSimulationSettingsActor.GetSettings // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x13dd520
};

// Class VICODynamicsPlugin.VDSkinnedRopeComponent
// Size: 0x750 (Inherited: 0x720)
struct UVDSkinnedRopeComponent : UVDRopeComponent {
	struct FComponentReference PoseableMeshRef; // 0x718(0x28)
	char pad_748[0x8]; // 0x748(0x08)
};

// Class VICODynamicsPlugin.VDSplineRopeComponent
// Size: 0x750 (Inherited: 0x720)
struct UVDSplineRopeComponent : UVDRopeComponent {
	struct FComponentReference SplineRef; // 0x718(0x28)
	char bAutoAttachToSplineEndPoints : 1; // 0x740(0x01)
	char bStretchToSplineLength : 1; // 0x740(0x01)
	float SplineLength; // 0x744(0x04)
	char pad_74C_2 : 6; // 0x74c(0x01)
	char pad_74D[0x3]; // 0x74d(0x03)
};

// Class VICODynamicsPlugin.VDWindDirectionalSourceActor
// Size: 0x228 (Inherited: 0x220)
struct AVDWindDirectionalSourceActor : AInfo {
	struct UVDWindDirectionalSourceComponent* Component; // 0x220(0x08)
};

// Class VICODynamicsPlugin.VDWindDirectionalSourceComponent
// Size: 0x240 (Inherited: 0x200)
struct UVDWindDirectionalSourceComponent : USceneComponent {
	float Radius; // 0x1f8(0x04)
	float Strength; // 0x1fc(0x04)
	float Speed; // 0x200(0x04)
	float MinGustAmount; // 0x204(0x04)
	float MaxGustAmount; // 0x208(0x04)
	float MinGustDuration; // 0x20c(0x04)
	float MaxGustDuration; // 0x210(0x04)
	float MinGustTransitionSpeed; // 0x214(0x04)
	float MaxGustTransitionSpeed; // 0x218(0x04)
	float MinSecondsBetweenGusts; // 0x21c(0x04)
	float MaxSecondsBetweenGusts; // 0x220(0x04)
	char pad_22C[0x14]; // 0x22c(0x14)

	void SetRadius(float InRadius); // Function VICODynamicsPlugin.VDWindDirectionalSourceComponent.SetRadius // (Final|Native|Public|BlueprintCallable) // @ game+0x13de170
	float GetCurrentGust(); // Function VICODynamicsPlugin.VDWindDirectionalSourceComponent.GetCurrentGust // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x13dd130
};

// Class VICODynamicsPlugin.VICODynamicsSettings
// Size: 0x80 (Inherited: 0x28)
struct UVICODynamicsSettings : UObject {
	int32_t ReserveParticleBudget; // 0x28(0x04)
	int32_t ReserveConstraintBudget; // 0x2c(0x04)
	int32_t ReserveVolumeConstraintBudget; // 0x30(0x04)
	int32_t BroadphaseNumCellsToAllocate; // 0x34(0x04)
	float BroadphaseCellDimension; // 0x38(0x04)
	int32_t BroadphaseMaxParticlesPerCell; // 0x3c(0x04)
	int32_t NumberOfThreadsToUse; // 0x40(0x04)
	bool EnableSelfCollision; // 0x44(0x01)
	bool EnablePhysXSceneCollision; // 0x45(0x01)
	bool PerformExtraCollisionResolutionLoop; // 0x46(0x01)
	bool EnableExplicitRigidBodyCollision; // 0x47(0x01)
	int32_t SimulationFramerate; // 0x48(0x04)
	bool RunSimulationOnWorkerThread; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	int32_t WorkerThreadCoreAffinity; // 0x50(0x04)
	int32_t SimulationIterations; // 0x54(0x04)
	int32_t ConstraintIterations; // 0x58(0x04)
	bool ConstrainSimulationTo2DPlane; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	struct FVector PlaneOrigin; // 0x60(0x0c)
	struct FVector PlaneNormal; // 0x6c(0x0c)
	char bCachePerFrameResults : 1; // 0x78(0x01)
	char bCacheOnlyCollisionsWithStaticRigidBodies : 1; // 0x78(0x01)
	char bCacheNonHitsAlso : 1; // 0x78(0x01)
	char DrawCollisionDebug : 1; // 0x78(0x01)
	char bShowOnScreenStats : 1; // 0x78(0x01)
	char pad_78_5 : 3; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

