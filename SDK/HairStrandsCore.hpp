#ifndef UE4SS_SDK_HairStrandsCore_HPP
#define UE4SS_SDK_HairStrandsCore_HPP

#include "HairStrandsCore_enums.hpp"

struct FFollicleMaskOptions
{
    class UGroomAsset* Groom;                                                         // 0x0000 (size: 0x8)
    EFollicleMaskChannel Channel;                                                     // 0x0008 (size: 0x1)

}; // Size: 0x10

struct FGoomBindingGroupInfo
{
    int32 RenRootCount;                                                               // 0x0000 (size: 0x4)
    int32 RenLODCount;                                                                // 0x0004 (size: 0x4)
    int32 SimRootCount;                                                               // 0x0008 (size: 0x4)
    int32 SimLODCount;                                                                // 0x000C (size: 0x4)

}; // Size: 0x10

struct FGroomAnimationInfo
{
    uint32 NumFrames;                                                                 // 0x0000 (size: 0x4)
    float SecondsPerFrame;                                                            // 0x0004 (size: 0x4)
    float Duration;                                                                   // 0x0008 (size: 0x4)
    float StartTime;                                                                  // 0x000C (size: 0x4)
    float EndTime;                                                                    // 0x0010 (size: 0x4)
    int32 StartFrame;                                                                 // 0x0014 (size: 0x4)
    int32 EndFrame;                                                                   // 0x0018 (size: 0x4)
    EGroomCacheAttributes Attributes;                                                 // 0x001C (size: 0x1)

}; // Size: 0x20

struct FGroomBuildSettings
{
    bool bOverrideGuides;                                                             // 0x0000 (size: 0x1)
    float HairToGuideDensity;                                                         // 0x0004 (size: 0x4)
    EGroomInterpolationQuality InterpolationQuality;                                  // 0x0008 (size: 0x1)
    EGroomInterpolationWeight InterpolationDistance;                                  // 0x0009 (size: 0x1)
    bool bRandomizeGuide;                                                             // 0x000A (size: 0x1)
    bool bUseUniqueGuide;                                                             // 0x000B (size: 0x1)

}; // Size: 0xC

struct FGroomCacheImportSettings
{
    bool bImportGroomCache;                                                           // 0x0000 (size: 0x1)
    bool bImportGroomAsset;                                                           // 0x0001 (size: 0x1)
    FSoftObjectPath GroomAsset;                                                       // 0x0008 (size: 0x18)

}; // Size: 0x20

struct FGroomCacheInfo
{
    int32 Version;                                                                    // 0x0000 (size: 0x4)
    EGroomCacheType Type;                                                             // 0x0004 (size: 0x1)
    FGroomAnimationInfo AnimationInfo;                                                // 0x0008 (size: 0x20)

}; // Size: 0x28

struct FGroomConversionSettings
{
    FVector Rotation;                                                                 // 0x0000 (size: 0xC)
    FVector Scale;                                                                    // 0x000C (size: 0xC)

}; // Size: 0x18

struct FGroomHairGroupPreview
{
    int32 GroupID;                                                                    // 0x0000 (size: 0x4)
    int32 CurveCount;                                                                 // 0x0004 (size: 0x4)
    int32 GuideCount;                                                                 // 0x0008 (size: 0x4)
    FHairGroupsInterpolation InterpolationSettings;                                   // 0x000C (size: 0x14)

}; // Size: 0x20

struct FHairAdvancedRenderingSettings
{
    bool bUseStableRasterization;                                                     // 0x0000 (size: 0x1)
    bool bScatterSceneLighting;                                                       // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FHairBendConstraint
{
    bool SolveBend;                                                                   // 0x0000 (size: 0x1)
    bool ProjectBend;                                                                 // 0x0001 (size: 0x1)
    float BendDamping;                                                                // 0x0004 (size: 0x4)
    float BendStiffness;                                                              // 0x0008 (size: 0x4)
    FRuntimeFloatCurve BendScale;                                                     // 0x0010 (size: 0x88)

}; // Size: 0x98

struct FHairCardsClusterSettings
{
    float ClusterDecimation;                                                          // 0x0000 (size: 0x4)
    EHairCardsClusterType Type;                                                       // 0x0004 (size: 0x1)
    bool bUseGuide;                                                                   // 0x0005 (size: 0x1)

}; // Size: 0x8

struct FHairCardsGeometrySettings
{
    EHairCardsGenerationType GenerationType;                                          // 0x0000 (size: 0x1)
    int32 CardsCount;                                                                 // 0x0004 (size: 0x4)
    EHairCardsClusterType ClusterType;                                                // 0x0008 (size: 0x1)
    float MinSegmentLength;                                                           // 0x000C (size: 0x4)
    float AngularThreshold;                                                           // 0x0010 (size: 0x4)
    float MinCardsLength;                                                             // 0x0014 (size: 0x4)
    float MaxCardsLength;                                                             // 0x0018 (size: 0x4)

}; // Size: 0x1C

struct FHairCardsTextureSettings
{
    int32 AtlasMaxResolution;                                                         // 0x0000 (size: 0x4)
    int32 PixelPerCentimeters;                                                        // 0x0004 (size: 0x4)
    int32 LengthTextureCount;                                                         // 0x0008 (size: 0x4)
    int32 DensityTextureCount;                                                        // 0x000C (size: 0x4)

}; // Size: 0x10

struct FHairCollisionConstraint
{
    bool SolveCollision;                                                              // 0x0000 (size: 0x1)
    bool ProjectCollision;                                                            // 0x0001 (size: 0x1)
    float StaticFriction;                                                             // 0x0004 (size: 0x4)
    float KineticFriction;                                                            // 0x0008 (size: 0x4)
    float StrandsViscosity;                                                           // 0x000C (size: 0x4)
    FIntVector GridDimension;                                                         // 0x0010 (size: 0xC)
    float CollisionRadius;                                                            // 0x001C (size: 0x4)
    FRuntimeFloatCurve RadiusScale;                                                   // 0x0020 (size: 0x88)

}; // Size: 0xA8

struct FHairDecimationSettings
{
    float CurveDecimation;                                                            // 0x0000 (size: 0x4)
    float VertexDecimation;                                                           // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FHairExternalForces
{
    FVector GravityVector;                                                            // 0x0000 (size: 0xC)
    float AirDrag;                                                                    // 0x000C (size: 0x4)
    FVector AirVelocity;                                                              // 0x0010 (size: 0xC)

}; // Size: 0x1C

struct FHairGeometrySettings
{
    float HairWidth;                                                                  // 0x0000 (size: 0x4)
    float HairRootScale;                                                              // 0x0004 (size: 0x4)
    float HairTipScale;                                                               // 0x0008 (size: 0x4)
    float HairClipScale;                                                              // 0x000C (size: 0x4)

}; // Size: 0x10

struct FHairGroupCardsInfo
{
    int32 NumCards;                                                                   // 0x0000 (size: 0x4)
    int32 NumCardVertices;                                                            // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FHairGroupCardsTextures
{
    class UTexture2D* DepthTexture;                                                   // 0x0000 (size: 0x8)
    class UTexture2D* CoverageTexture;                                                // 0x0008 (size: 0x8)
    class UTexture2D* TangentTexture;                                                 // 0x0010 (size: 0x8)
    class UTexture2D* AttributeTexture;                                               // 0x0018 (size: 0x8)
    class UTexture2D* AuxilaryDataTexture;                                            // 0x0020 (size: 0x8)

}; // Size: 0x30

struct FHairGroupDesc
{
    float HairLength;                                                                 // 0x0000 (size: 0x4)
    float HairWidth;                                                                  // 0x0004 (size: 0x4)
    bool HairWidth_Override;                                                          // 0x0008 (size: 0x1)
    float HairRootScale;                                                              // 0x000C (size: 0x4)
    bool HairRootScale_Override;                                                      // 0x0010 (size: 0x1)
    float HairTipScale;                                                               // 0x0014 (size: 0x4)
    bool HairTipScale_Override;                                                       // 0x0018 (size: 0x1)
    float HairClipScale;                                                              // 0x001C (size: 0x4)
    bool HairClipScale_Override;                                                      // 0x0020 (size: 0x1)
    float HairShadowDensity;                                                          // 0x0024 (size: 0x4)
    bool HairShadowDensity_Override;                                                  // 0x0028 (size: 0x1)
    float HairRaytracingRadiusScale;                                                  // 0x002C (size: 0x4)
    bool HairRaytracingRadiusScale_Override;                                          // 0x0030 (size: 0x1)
    bool bUseHairRaytracingGeometry;                                                  // 0x0031 (size: 0x1)
    bool bUseHairRaytracingGeometry_Override;                                         // 0x0032 (size: 0x1)
    float LODBias;                                                                    // 0x0034 (size: 0x4)
    bool bUseStableRasterization;                                                     // 0x0038 (size: 0x1)
    bool bUseStableRasterization_Override;                                            // 0x0039 (size: 0x1)
    bool bScatterSceneLighting;                                                       // 0x003A (size: 0x1)
    bool bScatterSceneLighting_Override;                                              // 0x003B (size: 0x1)
    bool bSupportVoxelization;                                                        // 0x003C (size: 0x1)
    bool bSupportVoxelization_Override;                                               // 0x003D (size: 0x1)
    int32 LODForcedIndex;                                                             // 0x0040 (size: 0x4)

}; // Size: 0x44

struct FHairGroupInfo
{
    int32 GroupID;                                                                    // 0x0000 (size: 0x4)
    int32 NumCurves;                                                                  // 0x0004 (size: 0x4)
    int32 NumGuides;                                                                  // 0x0008 (size: 0x4)
    int32 NumCurveVertices;                                                           // 0x000C (size: 0x4)
    int32 NumGuideVertices;                                                           // 0x0010 (size: 0x4)
    float MaxCurveLength;                                                             // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FHairGroupInfoWithVisibility : public FHairGroupInfo
{
    bool bIsVisible;                                                                  // 0x0018 (size: 0x1)

}; // Size: 0x1C

struct FHairGroupsCardsSourceDescription
{
    class UMaterialInterface* Material;                                               // 0x0000 (size: 0x8)
    FName MaterialSlotName;                                                           // 0x0008 (size: 0x8)
    EHairCardsSourceType SourceType;                                                  // 0x0010 (size: 0x1)
    class UStaticMesh* ProceduralMesh;                                                // 0x0018 (size: 0x8)
    FString ProceduralMeshKey;                                                        // 0x0020 (size: 0x10)
    class UStaticMesh* ImportedMesh;                                                  // 0x0030 (size: 0x8)
    FHairGroupsProceduralCards ProceduralSettings;                                    // 0x0038 (size: 0x38)
    FHairGroupCardsTextures Textures;                                                 // 0x0070 (size: 0x30)
    int32 GroupIndex;                                                                 // 0x00A0 (size: 0x4)
    int32 LODIndex;                                                                   // 0x00A4 (size: 0x4)
    FHairGroupCardsInfo CardsInfo;                                                    // 0x00A8 (size: 0x8)
    FString ImportedMeshKey;                                                          // 0x00B0 (size: 0x10)

}; // Size: 0xC0

struct FHairGroupsInterpolation
{
    FHairDecimationSettings DecimationSettings;                                       // 0x0000 (size: 0x8)
    FHairInterpolationSettings InterpolationSettings;                                 // 0x0008 (size: 0xC)

}; // Size: 0x14

struct FHairGroupsLOD
{
    TArray<FHairLODSettings> LODs;                                                    // 0x0000 (size: 0x10)
    float ClusterWorldSize;                                                           // 0x0010 (size: 0x4)
    float ClusterScreenSizeScale;                                                     // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FHairGroupsMaterial
{
    class UMaterialInterface* Material;                                               // 0x0000 (size: 0x8)
    FName SlotName;                                                                   // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FHairGroupsMeshesSourceDescription
{
    class UMaterialInterface* Material;                                               // 0x0000 (size: 0x8)
    FName MaterialSlotName;                                                           // 0x0008 (size: 0x8)
    class UStaticMesh* ImportedMesh;                                                  // 0x0010 (size: 0x8)
    FHairGroupCardsTextures Textures;                                                 // 0x0018 (size: 0x30)
    int32 GroupIndex;                                                                 // 0x0048 (size: 0x4)
    int32 LODIndex;                                                                   // 0x004C (size: 0x4)
    FString ImportedMeshKey;                                                          // 0x0050 (size: 0x10)

}; // Size: 0x60

struct FHairGroupsPhysics
{
    FHairSolverSettings SolverSettings;                                               // 0x0000 (size: 0x38)
    FHairExternalForces ExternalForces;                                               // 0x0038 (size: 0x1C)
    FHairMaterialConstraints MaterialConstraints;                                     // 0x0058 (size: 0x1D8)
    FHairStrandsParameters StrandsParameters;                                         // 0x0230 (size: 0x98)

}; // Size: 0x2C8

struct FHairGroupsProceduralCards
{
    FHairCardsClusterSettings ClusterSettings;                                        // 0x0000 (size: 0x8)
    FHairCardsGeometrySettings GeometrySettings;                                      // 0x0008 (size: 0x1C)
    FHairCardsTextureSettings TextureSettings;                                        // 0x0024 (size: 0x10)
    int32 Version;                                                                    // 0x0034 (size: 0x4)

}; // Size: 0x38

struct FHairGroupsRendering
{
    FName MaterialSlotName;                                                           // 0x0000 (size: 0x8)
    class UMaterialInterface* Material;                                               // 0x0008 (size: 0x8)
    FHairGeometrySettings GeometrySettings;                                           // 0x0010 (size: 0x10)
    FHairShadowSettings ShadowSettings;                                               // 0x0020 (size: 0xC)
    FHairAdvancedRenderingSettings AdvancedSettings;                                  // 0x002C (size: 0x2)

}; // Size: 0x30

struct FHairInterpolationSettings
{
    bool bOverrideGuides;                                                             // 0x0000 (size: 0x1)
    float HairToGuideDensity;                                                         // 0x0004 (size: 0x4)
    EHairInterpolationQuality InterpolationQuality;                                   // 0x0008 (size: 0x1)
    EHairInterpolationWeight InterpolationDistance;                                   // 0x0009 (size: 0x1)
    bool bRandomizeGuide;                                                             // 0x000A (size: 0x1)
    bool bUseUniqueGuide;                                                             // 0x000B (size: 0x1)

}; // Size: 0xC

struct FHairLODSettings
{
    float CurveDecimation;                                                            // 0x0000 (size: 0x4)
    float VertexDecimation;                                                           // 0x0004 (size: 0x4)
    float AngularThreshold;                                                           // 0x0008 (size: 0x4)
    float ScreenSize;                                                                 // 0x000C (size: 0x4)
    float ThicknessScale;                                                             // 0x0010 (size: 0x4)
    bool bVisible;                                                                    // 0x0014 (size: 0x1)
    EGroomGeometryType GeometryType;                                                  // 0x0015 (size: 0x1)

}; // Size: 0x18

struct FHairMaterialConstraints
{
    FHairBendConstraint BendConstraint;                                               // 0x0000 (size: 0x98)
    FHairStretchConstraint StretchConstraint;                                         // 0x0098 (size: 0x98)
    FHairCollisionConstraint CollisionConstraint;                                     // 0x0130 (size: 0xA8)

}; // Size: 0x1D8

struct FHairShadowSettings
{
    float HairShadowDensity;                                                          // 0x0000 (size: 0x4)
    float HairRaytracingRadiusScale;                                                  // 0x0004 (size: 0x4)
    bool bUseHairRaytracingGeometry;                                                  // 0x0008 (size: 0x1)
    bool bVoxelize;                                                                   // 0x0009 (size: 0x1)

}; // Size: 0xC

struct FHairSolverSettings
{
    bool EnableSimulation;                                                            // 0x0000 (size: 0x1)
    EGroomNiagaraSolvers NiagaraSolver;                                               // 0x0001 (size: 0x1)
    TSoftObjectPtr<UNiagaraSystem> CustomSystem;                                      // 0x0008 (size: 0x28)
    int32 SubSteps;                                                                   // 0x0030 (size: 0x4)
    int32 IterationCount;                                                             // 0x0034 (size: 0x4)

}; // Size: 0x38

struct FHairStrandsParameters
{
    EGroomStrandsSize StrandsSize;                                                    // 0x0000 (size: 0x1)
    float StrandsDensity;                                                             // 0x0004 (size: 0x4)
    float StrandsSmoothing;                                                           // 0x0008 (size: 0x4)
    float StrandsThickness;                                                           // 0x000C (size: 0x4)
    FRuntimeFloatCurve ThicknessScale;                                                // 0x0010 (size: 0x88)

}; // Size: 0x98

struct FHairStretchConstraint
{
    bool SolveStretch;                                                                // 0x0000 (size: 0x1)
    bool ProjectStretch;                                                              // 0x0001 (size: 0x1)
    float StretchDamping;                                                             // 0x0004 (size: 0x4)
    float StretchStiffness;                                                           // 0x0008 (size: 0x4)
    FRuntimeFloatCurve StretchScale;                                                  // 0x0010 (size: 0x88)

}; // Size: 0x98

struct FMovieSceneGroomCacheParams
{
    class UGroomCache* GroomCache;                                                    // 0x0000 (size: 0x8)
    FFrameNumber FirstLoopStartFrameOffset;                                           // 0x0008 (size: 0x4)
    FFrameNumber StartFrameOffset;                                                    // 0x000C (size: 0x4)
    FFrameNumber EndFrameOffset;                                                      // 0x0010 (size: 0x4)
    float PlayRate;                                                                   // 0x0014 (size: 0x4)
    uint8 bReverse;                                                                   // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FMovieSceneGroomCacheSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneGroomCacheSectionTemplateParameters Params;                            // 0x0020 (size: 0x28)

}; // Size: 0x48

struct FMovieSceneGroomCacheSectionTemplateParameters : public FMovieSceneGroomCacheParams
{
    FFrameNumber SectionStartTime;                                                    // 0x0020 (size: 0x4)
    FFrameNumber SectionEndTime;                                                      // 0x0024 (size: 0x4)

}; // Size: 0x28

class AGroomActor : public AActor
{
    class UGroomComponent* GroomComponent;                                            // 0x0220 (size: 0x8)

}; // Size: 0x228

class UGroomAsset : public UObject
{
    TArray<FHairGroupInfoWithVisibility> HairGroupsInfo;                              // 0x0030 (size: 0x10)
    TArray<FHairGroupsRendering> HairGroupsRendering;                                 // 0x0040 (size: 0x10)
    TArray<FHairGroupsPhysics> HairGroupsPhysics;                                     // 0x0050 (size: 0x10)
    TArray<FHairGroupsInterpolation> HairGroupsInterpolation;                         // 0x0060 (size: 0x10)
    TArray<FHairGroupsLOD> HairGroupsLOD;                                             // 0x0070 (size: 0x10)
    TArray<FHairGroupsCardsSourceDescription> HairGroupsCards;                        // 0x0080 (size: 0x10)
    TArray<FHairGroupsMeshesSourceDescription> HairGroupsMeshes;                      // 0x0090 (size: 0x10)
    TArray<FHairGroupsMaterial> HairGroupsMaterials;                                  // 0x00A0 (size: 0x10)
    bool EnableGlobalInterpolation;                                                   // 0x00C0 (size: 0x1)
    EGroomInterpolationType HairInterpolationType;                                    // 0x00C1 (size: 0x1)
    EHairLODSelectionType LODSelectionType;                                           // 0x00C2 (size: 0x1)
    FPerPlatformInt MinLOD;                                                           // 0x00C4 (size: 0x4)
    FPerPlatformBool DisableBelowMinLodStripping;                                     // 0x00C8 (size: 0x1)
    TArray<float> EffectiveLODBias;                                                   // 0x00D0 (size: 0x10)
    TArray<class UAssetUserData*> AssetUserData;                                      // 0x00E0 (size: 0x10)

}; // Size: 0xF8

class UGroomAssetImportData : public UAssetImportData
{
    class UGroomImportOptions* ImportOptions;                                         // 0x0028 (size: 0x8)

}; // Size: 0x30

class UGroomBindingAsset : public UObject
{
    EGroomBindingMeshType GroomBindingType;                                           // 0x0028 (size: 0x1)
    class UGroomAsset* Groom;                                                         // 0x0030 (size: 0x8)
    class USkeletalMesh* SourceSkeletalMesh;                                          // 0x0038 (size: 0x8)
    class USkeletalMesh* TargetSkeletalMesh;                                          // 0x0040 (size: 0x8)
    class UGeometryCache* SourceGeometryCache;                                        // 0x0048 (size: 0x8)
    class UGeometryCache* TargetGeometryCache;                                        // 0x0050 (size: 0x8)
    int32 NumInterpolationPoints;                                                     // 0x0058 (size: 0x4)
    int32 MatchingSection;                                                            // 0x005C (size: 0x4)
    TArray<FGoomBindingGroupInfo> GroupInfos;                                         // 0x0060 (size: 0x10)

}; // Size: 0xB0

class UGroomBlueprintLibrary : public UBlueprintFunctionLibrary
{

    class UGroomBindingAsset* CreateNewGroomBindingAssetWithPath(FString InDesiredPackagePath, class UGroomAsset* InGroomAsset, class USkeletalMesh* InSkeletalMesh, int32 InNumInterpolationPoints, class USkeletalMesh* InSourceSkeletalMeshForTransfer, int32 InMatchingSection);
    class UGroomBindingAsset* CreateNewGroomBindingAsset(class UGroomAsset* InGroomAsset, class USkeletalMesh* InSkeletalMesh, int32 InNumInterpolationPoints, class USkeletalMesh* InSourceSkeletalMeshForTransfer, int32 InMatchingSection);
    class UGroomBindingAsset* CreateNewGeometryCacheGroomBindingAssetWithPath(FString DesiredPackagePath, class UGroomAsset* GroomAsset, class UGeometryCache* GeometryCache, int32 NumInterpolationPoints, class UGeometryCache* SourceGeometryCacheForTransfer, int32 MatchingSection);
    class UGroomBindingAsset* CreateNewGeometryCacheGroomBindingAsset(class UGroomAsset* GroomAsset, class UGeometryCache* GeometryCache, int32 NumInterpolationPoints, class UGeometryCache* SourceGeometryCacheForTransfer, int32 MatchingSection);
}; // Size: 0x28

class UGroomCache : public UObject
{
    FGroomCacheInfo GroomCacheInfo;                                                   // 0x0030 (size: 0x28)

}; // Size: 0x68

class UGroomCacheImportData : public UAssetImportData
{
    FGroomCacheImportSettings Settings;                                               // 0x0028 (size: 0x20)

}; // Size: 0x48

class UGroomCacheImportOptions : public UObject
{
    FGroomCacheImportSettings ImportSettings;                                         // 0x0028 (size: 0x20)

}; // Size: 0x48

class UGroomComponent : public UMeshComponent
{
    class UGroomAsset* GroomAsset;                                                    // 0x0488 (size: 0x8)
    class UGroomCache* GroomCache;                                                    // 0x0490 (size: 0x8)
    TArray<class UNiagaraComponent*> NiagaraComponents;                               // 0x0498 (size: 0x10)
    class USkeletalMesh* SourceSkeletalMesh;                                          // 0x04A8 (size: 0x8)
    class UGroomBindingAsset* BindingAsset;                                           // 0x04B0 (size: 0x8)
    class UPhysicsAsset* PhysicsAsset;                                                // 0x04B8 (size: 0x8)
    class UMaterialInterface* Strands_DebugMaterial;                                  // 0x04C0 (size: 0x8)
    class UMaterialInterface* Strands_DefaultMaterial;                                // 0x04C8 (size: 0x8)
    class UMaterialInterface* Cards_DefaultMaterial;                                  // 0x04D0 (size: 0x8)
    class UMaterialInterface* Meshes_DefaultMaterial;                                 // 0x04D8 (size: 0x8)
    class UNiagaraSystem* AngularSpringsSystem;                                       // 0x04E0 (size: 0x8)
    class UNiagaraSystem* CosseratRodsSystem;                                         // 0x04E8 (size: 0x8)
    FString AttachmentName;                                                           // 0x04F0 (size: 0x10)
    TArray<FHairGroupDesc> GroomGroupsDesc;                                           // 0x0550 (size: 0x10)
    bool bRunning;                                                                    // 0x0560 (size: 0x1)
    bool bLooping;                                                                    // 0x0561 (size: 0x1)
    bool bManualTick;                                                                 // 0x0562 (size: 0x1)
    float ElapsedTime;                                                                // 0x0564 (size: 0x4)

    void SetGroomAsset(class UGroomAsset* Asset);
    void SetBindingAsset(class UGroomBindingAsset* InBinding);
}; // Size: 0x5B0

class UGroomCreateBindingOptions : public UObject
{
    EGroomBindingMeshType GroomBindingType;                                           // 0x0028 (size: 0x1)
    class USkeletalMesh* SourceSkeletalMesh;                                          // 0x0030 (size: 0x8)
    class USkeletalMesh* TargetSkeletalMesh;                                          // 0x0038 (size: 0x8)
    class UGeometryCache* SourceGeometryCache;                                        // 0x0040 (size: 0x8)
    class UGeometryCache* TargetGeometryCache;                                        // 0x0048 (size: 0x8)
    int32 NumInterpolationPoints;                                                     // 0x0050 (size: 0x4)
    int32 MatchingSection;                                                            // 0x0054 (size: 0x4)

}; // Size: 0x58

class UGroomCreateFollicleMaskOptions : public UObject
{
    int32 resolution;                                                                 // 0x0028 (size: 0x4)
    int32 RootRadius;                                                                 // 0x002C (size: 0x4)
    TArray<FFollicleMaskOptions> Grooms;                                              // 0x0030 (size: 0x10)

}; // Size: 0x40

class UGroomCreateStrandsTexturesOptions : public UObject
{
    int32 resolution;                                                                 // 0x0028 (size: 0x4)
    EStrandsTexturesTraceType TraceType;                                              // 0x002C (size: 0x1)
    float TraceDistance;                                                              // 0x0030 (size: 0x4)
    EStrandsTexturesMeshType MeshType;                                                // 0x0034 (size: 0x1)
    class UStaticMesh* StaticMesh;                                                    // 0x0038 (size: 0x8)
    class USkeletalMesh* SkeletalMesh;                                                // 0x0040 (size: 0x8)
    int32 LODIndex;                                                                   // 0x0048 (size: 0x4)
    int32 SectionIndex;                                                               // 0x004C (size: 0x4)
    int32 UVChannelIndex;                                                             // 0x0050 (size: 0x4)
    TArray<int32> GroupIndex;                                                         // 0x0058 (size: 0x10)

}; // Size: 0x68

class UGroomHairGroupsPreview : public UObject
{
    TArray<FGroomHairGroupPreview> Groups;                                            // 0x0028 (size: 0x10)

}; // Size: 0x38

class UGroomImportOptions : public UObject
{
    FGroomConversionSettings ConversionSettings;                                      // 0x0028 (size: 0x18)
    TArray<FHairGroupsInterpolation> InterpolationSettings;                           // 0x0040 (size: 0x10)

}; // Size: 0x50

class UGroomPluginSettings : public UObject
{
    float GroomCacheLookAheadBuffer;                                                  // 0x0028 (size: 0x4)

}; // Size: 0x30

class UMovieSceneGroomCacheSection : public UMovieSceneSection
{
    FMovieSceneGroomCacheParams Params;                                               // 0x00E8 (size: 0x20)

}; // Size: 0x108

class UMovieSceneGroomCacheTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> AnimationSections;                              // 0x0098 (size: 0x10)

}; // Size: 0xA8

class UNiagaraDataInterfaceHairStrands : public UNiagaraDataInterface
{
    class UGroomAsset* DefaultSource;                                                 // 0x0038 (size: 0x8)
    class AActor* SourceActor;                                                        // 0x0040 (size: 0x8)

}; // Size: 0x50

class UNiagaraDataInterfacePhysicsAsset : public UNiagaraDataInterface
{
    class UPhysicsAsset* DefaultSource;                                               // 0x0038 (size: 0x8)
    class AActor* SourceActor;                                                        // 0x0040 (size: 0x8)

}; // Size: 0x68

class UNiagaraDataInterfacePressureGrid : public UNiagaraDataInterfaceVelocityGrid
{
}; // Size: 0xE8

class UNiagaraDataInterfaceVelocityGrid : public UNiagaraDataInterfaceRWBase
{
    FIntVector GridSize;                                                              // 0x00D8 (size: 0xC)

}; // Size: 0xE8

#endif
