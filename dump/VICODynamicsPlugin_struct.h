// ScriptStruct VICODynamicsPlugin.VDCachedParticleStartLocation
// Size: 0x10 (Inherited: 0x00)
struct FVDCachedParticleStartLocation {
	struct FVector Location; // 0x00(0x0c)
	bool bIsAttached; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct VICODynamicsPlugin.VDCollision
// Size: 0x20 (Inherited: 0x00)
struct FVDCollision {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct VICODynamicsPlugin.RopePiece
// Size: 0x08 (Inherited: 0x00)
struct FRopePiece {
	int32_t StartParticleIndex; // 0x00(0x04)
	int32_t EndParticleIndex; // 0x04(0x04)
};

// ScriptStruct VICODynamicsPlugin.VDCollisionSettings
// Size: 0x40 (Inherited: 0x00)
struct FVDCollisionSettings {
	enum class ECollisionChannel ObjectType; // 0x00(0x01)
	enum class ECollisionEnabled CollisionEnabled; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FCollisionResponse CollisionResponse; // 0x08(0x30)
	struct FName CollisionProfileName; // 0x38(0x08)
};

// ScriptStruct VICODynamicsPlugin.VDParticleInfo
// Size: 0x1c (Inherited: 0x00)
struct FVDParticleInfo {
	char IsFree : 1; // 0x00(0x01)
	char IsRigidBodyCollisionEnabled : 1; // 0x00(0x01)
	char IsParticleCollisionEnabled : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Radius; // 0x04(0x04)
	struct FVector Location; // 0x08(0x0c)
	float Mass; // 0x14(0x04)
	float DragCoefficient; // 0x18(0x04)
};

// ScriptStruct VICODynamicsPlugin.VDParticleAttachment
// Size: 0x60 (Inherited: 0x00)
struct FVDParticleAttachment {
	int32_t ParticleIndex; // 0x00(0x04)
	bool AttachingToAnotherParticle; // 0x04(0x01)
	bool SimulateTensionForces; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	struct FVector Location; // 0x08(0x0c)
	bool IsRelative; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FComponentReference ComponentRef; // 0x18(0x28)
	struct FName Socket; // 0x40(0x08)
	char pad_48[0x18]; // 0x48(0x18)
};

// ScriptStruct VICODynamicsPlugin.VDSimulationTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FVDSimulationTickFunction : FTickFunction {
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct VICODynamicsPlugin.VDSettings
// Size: 0x58 (Inherited: 0x00)
struct FVDSettings {
	char bOverride_ReserveParticleBudget : 1; // 0x00(0x01)
	char bOverride_ReserveConstraintBudget : 1; // 0x00(0x01)
	char bOverride_ReserveVolumeConstraintBudget : 1; // 0x00(0x01)
	char bOverride_BroadphaseNumCellsToAllocate : 1; // 0x00(0x01)
	char bOverride_BroadphaseCellDimension : 1; // 0x00(0x01)
	char bOverride_BroadphaseMaxParticlesPerCell : 1; // 0x00(0x01)
	char bOverride_NumberOfThreadsToUse : 1; // 0x00(0x01)
	char bOverride_EnableSelfCollision : 1; // 0x00(0x01)
	char bOverride_EnablePhysXSceneCollision : 1; // 0x01(0x01)
	char bOverride_PerformExtraCollisionResolutionLoop : 1; // 0x01(0x01)
	char bOverride_EnableExplicitRigidBodyCollision : 1; // 0x01(0x01)
	char bOverride_SimulationFramerate : 1; // 0x01(0x01)
	char bOverride_RunSimulationOnWorkerThread : 1; // 0x01(0x01)
	char bOverride_WorkerThreadCoreAffinity : 1; // 0x01(0x01)
	char bOverride_SimulationIterations : 1; // 0x01(0x01)
	char bOverride_ConstraintIterations : 1; // 0x01(0x01)
	char bOverride_ConstrainSimulationTo2DPlane : 1; // 0x02(0x01)
	char bOverride_PlaneOrigin : 1; // 0x02(0x01)
	char bOverride_PlaneNormal : 1; // 0x02(0x01)
	char bOverride_CachePerFrameResults : 1; // 0x02(0x01)
	char bOverride_CacheOnlyCollisionsWithStaticRigidBodies : 1; // 0x02(0x01)
	char bOverride_CacheNonHitsAlso : 1; // 0x02(0x01)
	char pad_2_6 : 2; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	int32_t ReserveParticleBudget; // 0x04(0x04)
	int32_t ReserveConstraintBudget; // 0x08(0x04)
	int32_t ReserveVolumeConstraintBudget; // 0x0c(0x04)
	int32_t BroadphaseNumCellsToAllocate; // 0x10(0x04)
	float BroadphaseCellDimension; // 0x14(0x04)
	int32_t BroadphaseMaxParticlesPerCell; // 0x18(0x04)
	int32_t NumberOfThreadsToUse; // 0x1c(0x04)
	bool EnableSelfCollision; // 0x20(0x01)
	bool EnablePhysXSceneCollision; // 0x21(0x01)
	bool PerformExtraCollisionResolutionLoop; // 0x22(0x01)
	bool EnableExplicitRigidBodyCollision; // 0x23(0x01)
	int32_t SimulationFramerate; // 0x24(0x04)
	bool RunSimulationOnWorkerThread; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t WorkerThreadCoreAffinity; // 0x2c(0x04)
	int32_t SimulationIterations; // 0x30(0x04)
	int32_t ConstraintIterations; // 0x34(0x04)
	bool ConstrainSimulationTo2DPlane; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FVector PlaneOrigin; // 0x3c(0x0c)
	struct FVector PlaneNormal; // 0x48(0x0c)
	char bCachePerFrameResults : 1; // 0x54(0x01)
	char bCacheOnlyCollisionsWithStaticRigidBodies : 1; // 0x54(0x01)
	char bCacheNonHitsAlso : 1; // 0x54(0x01)
	char DrawCollisionDebug : 1; // 0x54(0x01)
	char bShowOnScreenStats : 1; // 0x54(0x01)
	char pad_54_5 : 3; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
};

