#ifndef UE4SS_SDK_VICODynamicsPlugin_HPP
#define UE4SS_SDK_VICODynamicsPlugin_HPP

struct FRopePiece
{
    int32 StartParticleIndex;                                                         // 0x0000 (size: 0x4)
    int32 EndParticleIndex;                                                           // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FVDCachedParticleStartLocation
{
    FVector Location;                                                                 // 0x0000 (size: 0xC)
    bool bIsAttached;                                                                 // 0x000C (size: 0x1)

}; // Size: 0x10

struct FVDCollision
{
}; // Size: 0x20

struct FVDCollisionSettings
{
    TEnumAsByte<ECollisionChannel> ObjectType;                                        // 0x0000 (size: 0x1)
    TEnumAsByte<ECollisionEnabled::Type> CollisionEnabled;                            // 0x0001 (size: 0x1)
    FCollisionResponse CollisionResponse;                                             // 0x0008 (size: 0x30)
    FName CollisionProfileName;                                                       // 0x0038 (size: 0x8)

}; // Size: 0x40

struct FVDParticleAttachment
{
    int32 ParticleIndex;                                                              // 0x0000 (size: 0x4)
    bool AttachingToAnotherParticle;                                                  // 0x0004 (size: 0x1)
    bool SimulateTensionForces;                                                       // 0x0005 (size: 0x1)
    FVector Location;                                                                 // 0x0008 (size: 0xC)
    bool IsRelative;                                                                  // 0x0014 (size: 0x1)
    FComponentReference ComponentRef;                                                 // 0x0018 (size: 0x28)
    FName Socket;                                                                     // 0x0040 (size: 0x8)

}; // Size: 0x60

struct FVDParticleInfo
{
    uint8 IsFree;                                                                     // 0x0000 (size: 0x1)
    uint8 IsRigidBodyCollisionEnabled;                                                // 0x0000 (size: 0x1)
    uint8 IsParticleCollisionEnabled;                                                 // 0x0000 (size: 0x1)
    float Radius;                                                                     // 0x0004 (size: 0x4)
    FVector Location;                                                                 // 0x0008 (size: 0xC)
    float Mass;                                                                       // 0x0014 (size: 0x4)
    float DragCoefficient;                                                            // 0x0018 (size: 0x4)

}; // Size: 0x1C

struct FVDSettings
{
    uint8 bOverride_ReserveParticleBudget;                                            // 0x0000 (size: 0x1)
    uint8 bOverride_ReserveConstraintBudget;                                          // 0x0000 (size: 0x1)
    uint8 bOverride_ReserveVolumeConstraintBudget;                                    // 0x0000 (size: 0x1)
    uint8 bOverride_BroadphaseNumCellsToAllocate;                                     // 0x0000 (size: 0x1)
    uint8 bOverride_BroadphaseCellDimension;                                          // 0x0000 (size: 0x1)
    uint8 bOverride_BroadphaseMaxParticlesPerCell;                                    // 0x0000 (size: 0x1)
    uint8 bOverride_NumberOfThreadsToUse;                                             // 0x0000 (size: 0x1)
    uint8 bOverride_EnableSelfCollision;                                              // 0x0000 (size: 0x1)
    uint8 bOverride_EnablePhysXSceneCollision;                                        // 0x0001 (size: 0x1)
    uint8 bOverride_PerformExtraCollisionResolutionLoop;                              // 0x0001 (size: 0x1)
    uint8 bOverride_EnableExplicitRigidBodyCollision;                                 // 0x0001 (size: 0x1)
    uint8 bOverride_SimulationFramerate;                                              // 0x0001 (size: 0x1)
    uint8 bOverride_RunSimulationOnWorkerThread;                                      // 0x0001 (size: 0x1)
    uint8 bOverride_WorkerThreadCoreAffinity;                                         // 0x0001 (size: 0x1)
    uint8 bOverride_SimulationIterations;                                             // 0x0001 (size: 0x1)
    uint8 bOverride_ConstraintIterations;                                             // 0x0001 (size: 0x1)
    uint8 bOverride_ConstrainSimulationTo2DPlane;                                     // 0x0002 (size: 0x1)
    uint8 bOverride_PlaneOrigin;                                                      // 0x0002 (size: 0x1)
    uint8 bOverride_PlaneNormal;                                                      // 0x0002 (size: 0x1)
    uint8 bOverride_CachePerFrameResults;                                             // 0x0002 (size: 0x1)
    uint8 bOverride_CacheOnlyCollisionsWithStaticRigidBodies;                         // 0x0002 (size: 0x1)
    uint8 bOverride_CacheNonHitsAlso;                                                 // 0x0002 (size: 0x1)
    int32 ReserveParticleBudget;                                                      // 0x0004 (size: 0x4)
    int32 ReserveConstraintBudget;                                                    // 0x0008 (size: 0x4)
    int32 ReserveVolumeConstraintBudget;                                              // 0x000C (size: 0x4)
    int32 BroadphaseNumCellsToAllocate;                                               // 0x0010 (size: 0x4)
    float BroadphaseCellDimension;                                                    // 0x0014 (size: 0x4)
    int32 BroadphaseMaxParticlesPerCell;                                              // 0x0018 (size: 0x4)
    int32 NumberOfThreadsToUse;                                                       // 0x001C (size: 0x4)
    bool EnableSelfCollision;                                                         // 0x0020 (size: 0x1)
    bool EnablePhysXSceneCollision;                                                   // 0x0021 (size: 0x1)
    bool PerformExtraCollisionResolutionLoop;                                         // 0x0022 (size: 0x1)
    bool EnableExplicitRigidBodyCollision;                                            // 0x0023 (size: 0x1)
    int32 SimulationFramerate;                                                        // 0x0024 (size: 0x4)
    bool RunSimulationOnWorkerThread;                                                 // 0x0028 (size: 0x1)
    int32 WorkerThreadCoreAffinity;                                                   // 0x002C (size: 0x4)
    int32 SimulationIterations;                                                       // 0x0030 (size: 0x4)
    int32 ConstraintIterations;                                                       // 0x0034 (size: 0x4)
    bool ConstrainSimulationTo2DPlane;                                                // 0x0038 (size: 0x1)
    FVector PlaneOrigin;                                                              // 0x003C (size: 0xC)
    FVector PlaneNormal;                                                              // 0x0048 (size: 0xC)
    uint8 bCachePerFrameResults;                                                      // 0x0054 (size: 0x1)
    uint8 bCacheOnlyCollisionsWithStaticRigidBodies;                                  // 0x0054 (size: 0x1)
    uint8 bCacheNonHitsAlso;                                                          // 0x0054 (size: 0x1)
    uint8 DrawCollisionDebug;                                                         // 0x0054 (size: 0x1)
    uint8 bShowOnScreenStats;                                                         // 0x0054 (size: 0x1)

}; // Size: 0x58

struct FVDSimulationTickFunction : public FTickFunction
{
}; // Size: 0x30

class AVDSimulationSettingsActor : public AInfo
{
    FVDSettings Settings;                                                             // 0x0220 (size: 0x58)

    FVDSettings GetSettings();
}; // Size: 0x278

class AVDWindDirectionalSourceActor : public AInfo
{
    class UVDWindDirectionalSourceComponent* Component;                               // 0x0220 (size: 0x8)

}; // Size: 0x228

class UBaseVDComponent : public UMeshComponent
{
    class UVDSimulation* SimulationInstance;                                          // 0x0488 (size: 0x8)
    class UVDSimulatedObject* VDSimObject;                                            // 0x0490 (size: 0x8)
    TArray<class UVDSimulatedParticle*> Particles;                                    // 0x0498 (size: 0x10)
    float FrictionCoefficient;                                                        // 0x04A8 (size: 0x4)
    float RestitutionCoefficient;                                                     // 0x04AC (size: 0x4)
    FVDCollisionSettings CollisionSettings;                                           // 0x04B0 (size: 0x40)
    float ParticleRadius;                                                             // 0x04F0 (size: 0x4)
    bool AttachToRigids;                                                              // 0x04F4 (size: 0x1)
    bool AttachToParticles;                                                           // 0x04F5 (size: 0x1)
    float AttachToParticlesConstraintStiffness;                                       // 0x04F8 (size: 0x4)
    float EndOffset;                                                                  // 0x04FC (size: 0x4)
    float DetectionRadiusInflationFactor;                                             // 0x0500 (size: 0x4)
    bool CreateTensionConstraintsForSimulatingRigids;                                 // 0x0504 (size: 0x1)
    bool bSnapToSimulatingAttachment;                                                 // 0x0505 (size: 0x1)
    bool ManuallyAttachParticles;                                                     // 0x0506 (size: 0x1)
    TArray<FVDParticleAttachment> ParticleAttachments;                                // 0x0508 (size: 0x10)
    float TensionForce;                                                               // 0x0518 (size: 0x4)
    float TensionDampening;                                                           // 0x051C (size: 0x4)
    uint8 AdjustOtherParticleLocationsBasedOnAttachments;                             // 0x0520 (size: 0x1)
    uint8 AffectedByGlobalWind;                                                       // 0x0520 (size: 0x1)
    uint8 UseExplicitRigidBodyCollision;                                              // 0x0520 (size: 0x1)
    float WindResistance;                                                             // 0x0524 (size: 0x4)
    TArray<FComponentReference> AffectedByWindSources;                                // 0x0528 (size: 0x10)
    bool CheckForWindOccluders;                                                       // 0x0538 (size: 0x1)
    float MaxWindOccluderDistance;                                                    // 0x053C (size: 0x4)
    FVDCollisionSettings WindOccluderTraceSettings;                                   // 0x0540 (size: 0x40)
    FBaseVDComponentOnSimulationDataCreated OnSimulationDataCreated;                  // 0x0580 (size: 0x10)
    void VDOnSimulationDataCreated();
    FBaseVDComponentOnPreSimulationSync OnPreSimulationSync;                          // 0x0590 (size: 0x10)
    void VDOnSimulationSync();
    FBaseVDComponentOnSimulationSync OnSimulationSync;                                // 0x05A0 (size: 0x10)
    void VDOnSimulationSync();
    uint8 ShowParticles;                                                              // 0x05B0 (size: 0x1)
    float GravityScale;                                                               // 0x05B4 (size: 0x4)
    float MinConstraintDistance;                                                      // 0x05B8 (size: 0x4)
    bool SimulateOnlyWhenRendered;                                                    // 0x05BC (size: 0x1)
    float SimulationToggleThreshold;                                                  // 0x05C0 (size: 0x4)
    uint8 EnableParticleToParticleCollisions;                                         // 0x05C4 (size: 0x1)
    uint8 ConsiderInnerCollisions;                                                    // 0x05C4 (size: 0x1)
    uint8 SkipRelativeVelocityCheckDuringRigidBodyCollisions;                         // 0x05C4 (size: 0x1)
    uint8 bNotifyOnVDCollision;                                                       // 0x05C5 (size: 0x1)
    FBaseVDComponentOnVDCollisionEvent OnVDCollisionEvent;                            // 0x05C8 (size: 0x10)
    void VDCollisionDelegate(class UBaseVDComponent* VDComponent, class UPrimitiveComponent* OtherComponent, FVector HitLocation, FVector HitNormal, class UVDSimulatedParticle* Particle);
    TMap<class UVDSimulatedParticle*, class FVDCollision> PendingCollisionNotifications; // 0x05D8 (size: 0x50)
    TArray<class UVDParticleSpringConstraint*> ConstraintsToOtherParticles;           // 0x0648 (size: 0x10)
    uint8 bUseLocationCache;                                                          // 0x0680 (size: 0x1)
    uint8 bApplyCachedStartLocationBeforeAttachToRigids;                              // 0x0680 (size: 0x1)
    TArray<FVDCachedParticleStartLocation> CachedStartLocations;                      // 0x0688 (size: 0x10)

    void SetUseExplicitRigidBodyCollision(bool UseExplicitCollision);
    void SetAffectedByGlobalWind(bool IsAffected);
    void OnSync();
    int32 GetTensionConstraintCount();
    FVector GetLastAppliedForceFromTensionConstraint(int32 TensionConstraintIndex);
    void AttachToOverlappingRigidBodies();
}; // Size: 0x6A0

class UVDBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{

    class UVDSimulation* GetVICODynamicsSimulationInstance();
}; // Size: 0x28

class UVDColliderComponent : public UActorComponent
{
    class UVDSimulation* SimulationInstance;                                          // 0x00B0 (size: 0x8)
    TArray<FComponentReference> AssociatedVDComponents;                               // 0x00B8 (size: 0x10)
    uint8 bAddAllComponents;                                                          // 0x00C8 (size: 0x1)
    uint8 bIgnoreConvexShapes;                                                        // 0x00C8 (size: 0x1)
    TArray<FName> SpecificColliders;                                                  // 0x00D0 (size: 0x10)

}; // Size: 0xE0

class UVDDynamicRopeComponent : public UVDRopeComponent
{

    void RebuildRopeAttached(float DistancePerSegment, class USceneComponent* StartAttachedTo, FName StartSocket, bool StartSimulateTension, class USceneComponent* EndAttachedTo, FName EndSocket, bool EndSimulateTension);
    void RebuildRopeAtPoints(float DistancePerSegment, const FVector& StartLocation, const FVector& EndLocation, bool bRelativeLocations);
    void RebuildRope();
}; // Size: 0x720

class UVDMeshClothComponent : public UBaseVDComponent
{
    class UStaticMesh* HullMesh;                                                      // 0x0698 (size: 0x8)
    float StretchStiffness;                                                           // 0x06A0 (size: 0x4)
    float BendStiffness;                                                              // 0x06A4 (size: 0x4)
    float Mass;                                                                       // 0x06A8 (size: 0x4)
    float DragCoefficient;                                                            // 0x06AC (size: 0x4)
    bool PreserveVolume;                                                              // 0x06B0 (size: 0x1)
    float CurrentVolume;                                                              // 0x06B4 (size: 0x4)
    float OverrideRestVolume;                                                         // 0x06B8 (size: 0x4)
    uint8 UseVertexColorDataForSetup;                                                 // 0x06C0 (size: 0x1)
    float MaxBendConstraintDistance;                                                  // 0x06C4 (size: 0x4)
    TArray<class UVDParticleSpringConstraint*> StretchConstraints;                    // 0x06F0 (size: 0x10)
    TArray<class UVDParticleSpringConstraint*> BendConstraints;                       // 0x0700 (size: 0x10)
    class UVDMeshVolumeConstraint* VolumeConstraint;                                  // 0x0710 (size: 0x8)

    class UVDMeshVolumeConstraint* GetVolumeConstraint();
    TArray<class UVDParticleSpringConstraint*> GetStretchConstraintsArray();
    TArray<class UVDParticleSpringConstraint*> GetBendConstraintsArray();
}; // Size: 0x780

class UVDMeshVolumeConstraint : public UObject
{

    void SetRestVolume(float NewVolume);
    float GetRestVolume();
    float GetCurrentVolume();
}; // Size: 0x38

class UVDParticleSpringConstraint : public UObject
{

    void SetStiffness(const float& NewStiffness);
    void SetRestDistance(const float& NewRestDistance);
    bool IsConstraining(const class UVDSimulatedParticle* Particle1, const class UVDSimulatedParticle* Particle2);
    float GetStifffness();
    float GetRestDistance();
    class UVDSimulatedParticle* GetParticle2();
    class UVDSimulatedParticle* GetParticle1();
}; // Size: 0x38

class UVDProceduralClothComponent : public UBaseVDComponent
{
    float StretchStiffness;                                                           // 0x0698 (size: 0x4)
    float BendStiffness;                                                              // 0x069C (size: 0x4)
    float Mass;                                                                       // 0x06A0 (size: 0x4)
    float DragCoefficient;                                                            // 0x06A4 (size: 0x4)
    float Width;                                                                      // 0x06A8 (size: 0x4)
    float Height;                                                                     // 0x06AC (size: 0x4)
    int32 NumParticlesWide;                                                           // 0x06B0 (size: 0x4)
    int32 NumParticlesHigh;                                                           // 0x06B4 (size: 0x4)
    float TileMaterialAlongWidth;                                                     // 0x06B8 (size: 0x4)
    float TileMaterialAlongHeight;                                                    // 0x06BC (size: 0x4)
    TArray<class UVDParticleSpringConstraint*> StretchConstraints;                    // 0x06E0 (size: 0x10)
    TArray<class UVDParticleSpringConstraint*> BendConstraints;                       // 0x06F0 (size: 0x10)

}; // Size: 0x710

class UVDRopeComponent : public UBaseVDComponent
{
    float StretchStiffness;                                                           // 0x0698 (size: 0x4)
    float BendStiffness;                                                              // 0x069C (size: 0x4)
    float Mass;                                                                       // 0x06A0 (size: 0x4)
    float DragCoefficient;                                                            // 0x06A4 (size: 0x4)
    float Length;                                                                     // 0x06A8 (size: 0x4)
    float Width;                                                                      // 0x06AC (size: 0x4)
    int32 NumSegments;                                                                // 0x06B0 (size: 0x4)
    int32 NumSides;                                                                   // 0x06B4 (size: 0x4)
    float TileMaterial;                                                               // 0x06B8 (size: 0x4)
    TArray<class UVDParticleSpringConstraint*> StretchConstraints;                    // 0x06E0 (size: 0x10)
    TArray<class UVDParticleSpringConstraint*> BendConstraints;                       // 0x06F0 (size: 0x10)
    TArray<FRopePiece> Pieces;                                                        // 0x0700 (size: 0x10)

    void SetNewRestLengthStartingAtParticle(int32 ParticleIndexStart, float NewLength);
    void SetNewRestLength(float NewLength, int32 PieceIndex);
    void ResetRope();
    float GetTrueLength(int32 PieceIndex);
    TArray<FRopePiece> GetPieces();
    void BreakAtSegment(int32 SegmentIndex);
}; // Size: 0x720

class UVDSimulatedObject : public UObject
{

    void SetSkipRelativeVelocityCheckDuringCollision(bool Skip);
    void SetObjectType(TEnumAsByte<ECollisionChannel> ObjectType);
    void SetMinimumConstraintSatisfactionDistance(float MinDistance);
    void SetGravityScale(float Scale);
    void SetCollisionResponseToObjectType(TEnumAsByte<ECollisionChannel> ObjectType, TEnumAsByte<ECollisionResponse> Response);
    void SetCollisionEnabled(bool Enabled);
    void SetCollisionChannel(TEnumAsByte<ECollisionChannel> Channel);
    void SetAffectiveWindVector(FVector NewWindVector);
    TArray<class UVDParticleSpringConstraint*> GetSpringConstraints();
    bool GetSkipRelativeVelocityCheckDuringCollision();
    TArray<class UVDSimulatedParticle*> GetParticles();
    float GetMinimumConstraintSatisfactionDistance();
    float GetGravityScale();
    FVDCollisionSettings GetCollisionSettings();
    bool GetCollisionEnabled();
    FVector GetAffectiveWindVector();
    void DestroyVolumeConstraint(class UVDMeshVolumeConstraint* Constraint);
    void DestroyParticle(class UVDSimulatedParticle* Particle);
    void DestroyConstraint(class UVDParticleSpringConstraint* Constraint);
    class UVDMeshVolumeConstraint* CreateVolumeConstraint(const TArray<int32> IndexList, float Alpha, float RestVolume);
    class UVDParticleSpringConstraint* CreateSpringConstraint(class UVDSimulatedParticle* Particle1, class UVDSimulatedParticle* Particle2, float RestDistance, float Stiffness);
    class UVDSimulatedParticle* CreateParticle(const FVDParticleInfo& ParticleInfo);
}; // Size: 0x78

class UVDSimulatedParticle : public UObject
{
    bool IsAttached;                                                                  // 0x0028 (size: 0x1)
    FVDParticleAttachment Attachment;                                                 // 0x0030 (size: 0x60)

    void SetVelocity(const FVector& NewVelocity);
    void SetRestitutionCoefficient(float NewRestitutionCoefficient);
    void SetRadius(float NewRadius);
    void SetMass(float NewMass);
    void SetLocation(const FVector& NewLocation);
    void SetIsWindOccluded(bool IsOccluded);
    void SetIsRigidBodyCollisionEnabled(bool IsEnabled);
    void SetIsParticleCollisionEnabled(bool IsEnabled);
    void SetIsFree(bool IsFree);
    void SetFrictionCoefficient(float NewFrictionCoefficient);
    void SetDragCoefficient(float NewDragCoefficient);
    FVector GetVelocity();
    float GetRestitutionCoefficient();
    float GetRadius();
    float GetMass();
    FVector GetLocation();
    bool GetIsWindOccluded();
    bool GetIsRigidBodyCollisionEnabled();
    bool GetIsParticleCollisionEnabled();
    bool GetIsFree();
    float GetFrictionCoefficient();
    float GetDragCoefficient();
    bool GetAttachment(FVDParticleAttachment& OutAttachment);
    void Detach();
    void CopyAttachment(const FVDParticleAttachment& Attachment, bool UseCurrentMass);
    bool AttachToLocation(FVector Location, bool IsRelative);
    bool AttachToComponent(class UPrimitiveComponent* Component, FVector Location, bool SimulateTension, FName Socket);
    bool AttachToActor(class AActor* Actor, FVector Location, bool SimulateTension, FName Socket);
    void AddForce(const FVector& Force);
}; // Size: 0xA8

class UVDSimulation : public UObject
{
    TArray<class UVDWindDirectionalSourceComponent*> WindSources;                     // 0x0168 (size: 0x10)

    void SetSubstepCount(int32 SubstepCount);
    void SetSelfCollisionEnabled(bool IsEnabled);
    void SetPhysXSceneCollisionEnabled(bool IsEnabled);
    void SetPerFrameCollisionCacheEnable(bool IsEnabled);
    void SetPerformExtraCollisionResolutionLoop(bool IsEnabled);
    void SetIsExplicitRigidBodyCollisionEnabled(bool IsEnabled);
    void SetFrameRate(int32 FrameRate);
    void SetConstraintIterationCount(int32 ConstraintIterationCount);
    void SetConstrainSimulationTo2DPlane(bool IsEnabled);
    void SetConstrainPlaneOrigin(FVector Origin);
    void SetConstrainPlaneNormal(FVector Normal);
    void RemoveExplicitColliderMapping(class UBaseVDComponent* VDComponent, class UPrimitiveComponent* Collider);
    void RemoveAllExplicitColliderMappings(class UBaseVDComponent* VDComponent);
    bool k2QuerySphereOverlaps(FVector Location, float Radius, TArray<class UVDSimulatedParticle*>& Overlaps, const TArray<class UVDSimulatedObject*>& SimObjectsToIgnore, int32 MaxOverlaps);
    bool k2QueryBoxOverlaps(FVector Location, FVector HalfExtents, TArray<class UVDSimulatedParticle*>& Overlaps, const TArray<class UVDSimulatedObject*>& SimObjectsToIgnore, int32 MaxOverlaps);
    FVDSettings GetSettings();
    bool GetIsRunningOnWorkerThread();
    bool GetIsExplicitRigidBodyCollisionEnabled();
    void GetDirectionalWindParameters(class UBaseVDComponent* VDComponent, FVector& OutDirection, float& OutSpeed, float& OutGust);
    void AddExplicitColliderMapping(class UBaseVDComponent* VDComponent, class UPrimitiveComponent* Collider, bool IgnoreConvexShapes);
}; // Size: 0x178

class UVDSkinnedRopeComponent : public UVDRopeComponent
{
    FComponentReference PoseableMeshRef;                                              // 0x0718 (size: 0x28)

}; // Size: 0x750

class UVDSplineRopeComponent : public UVDRopeComponent
{
    FComponentReference SplineRef;                                                    // 0x0718 (size: 0x28)
    uint8 bAutoAttachToSplineEndPoints;                                               // 0x0740 (size: 0x1)
    uint8 bStretchToSplineLength;                                                     // 0x0740 (size: 0x1)
    float SplineLength;                                                               // 0x0744 (size: 0x4)

}; // Size: 0x750

class UVDWindDirectionalSourceComponent : public USceneComponent
{
    float Radius;                                                                     // 0x01F8 (size: 0x4)
    float Strength;                                                                   // 0x01FC (size: 0x4)
    float Speed;                                                                      // 0x0200 (size: 0x4)
    float MinGustAmount;                                                              // 0x0204 (size: 0x4)
    float MaxGustAmount;                                                              // 0x0208 (size: 0x4)
    float MinGustDuration;                                                            // 0x020C (size: 0x4)
    float MaxGustDuration;                                                            // 0x0210 (size: 0x4)
    float MinGustTransitionSpeed;                                                     // 0x0214 (size: 0x4)
    float MaxGustTransitionSpeed;                                                     // 0x0218 (size: 0x4)
    float MinSecondsBetweenGusts;                                                     // 0x021C (size: 0x4)
    float MaxSecondsBetweenGusts;                                                     // 0x0220 (size: 0x4)

    void SetRadius(float InRadius);
    float GetCurrentGust();
}; // Size: 0x240

class UVICODynamicsSettings : public UObject
{
    int32 ReserveParticleBudget;                                                      // 0x0028 (size: 0x4)
    int32 ReserveConstraintBudget;                                                    // 0x002C (size: 0x4)
    int32 ReserveVolumeConstraintBudget;                                              // 0x0030 (size: 0x4)
    int32 BroadphaseNumCellsToAllocate;                                               // 0x0034 (size: 0x4)
    float BroadphaseCellDimension;                                                    // 0x0038 (size: 0x4)
    int32 BroadphaseMaxParticlesPerCell;                                              // 0x003C (size: 0x4)
    int32 NumberOfThreadsToUse;                                                       // 0x0040 (size: 0x4)
    bool EnableSelfCollision;                                                         // 0x0044 (size: 0x1)
    bool EnablePhysXSceneCollision;                                                   // 0x0045 (size: 0x1)
    bool PerformExtraCollisionResolutionLoop;                                         // 0x0046 (size: 0x1)
    bool EnableExplicitRigidBodyCollision;                                            // 0x0047 (size: 0x1)
    int32 SimulationFramerate;                                                        // 0x0048 (size: 0x4)
    bool RunSimulationOnWorkerThread;                                                 // 0x004C (size: 0x1)
    int32 WorkerThreadCoreAffinity;                                                   // 0x0050 (size: 0x4)
    int32 SimulationIterations;                                                       // 0x0054 (size: 0x4)
    int32 ConstraintIterations;                                                       // 0x0058 (size: 0x4)
    bool ConstrainSimulationTo2DPlane;                                                // 0x005C (size: 0x1)
    FVector PlaneOrigin;                                                              // 0x0060 (size: 0xC)
    FVector PlaneNormal;                                                              // 0x006C (size: 0xC)
    uint8 bCachePerFrameResults;                                                      // 0x0078 (size: 0x1)
    uint8 bCacheOnlyCollisionsWithStaticRigidBodies;                                  // 0x0078 (size: 0x1)
    uint8 bCacheNonHitsAlso;                                                          // 0x0078 (size: 0x1)
    uint8 DrawCollisionDebug;                                                         // 0x0078 (size: 0x1)
    uint8 bShowOnScreenStats;                                                         // 0x0078 (size: 0x1)

}; // Size: 0x80

#endif
