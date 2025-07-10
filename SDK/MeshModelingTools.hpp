#ifndef UE4SS_SDK_MeshModelingTools_HPP
#define UE4SS_SDK_MeshModelingTools_HPP

#include "MeshModelingTools_enums.hpp"

struct FEditPivotTarget
{
    class UTransformProxy* TransformProxy;                                            // 0x0000 (size: 0x8)
    class UTransformGizmo* TransformGizmo;                                            // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FPerlinLayerProperties
{
    float Frequency;                                                                  // 0x0000 (size: 0x4)
    float Intensity;                                                                  // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FPhysicsBoxData
{
    FVector Dimensions;                                                               // 0x0000 (size: 0xC)
    FTransform Transform;                                                             // 0x0010 (size: 0x30)
    FKShapeElem Element;                                                              // 0x0040 (size: 0x30)

}; // Size: 0x70

struct FPhysicsCapsuleData
{
    float Radius;                                                                     // 0x0000 (size: 0x4)
    float Length;                                                                     // 0x0004 (size: 0x4)
    FTransform Transform;                                                             // 0x0010 (size: 0x30)
    FKShapeElem Element;                                                              // 0x0040 (size: 0x30)

}; // Size: 0x70

struct FPhysicsConvexData
{
    int32 NumVertices;                                                                // 0x0000 (size: 0x4)
    int32 NumFaces;                                                                   // 0x0004 (size: 0x4)
    FKShapeElem Element;                                                              // 0x0008 (size: 0x30)

}; // Size: 0x38

struct FPhysicsSphereData
{
    float Radius;                                                                     // 0x0000 (size: 0x4)
    FTransform Transform;                                                             // 0x0010 (size: 0x30)
    FKShapeElem Element;                                                              // 0x0040 (size: 0x30)

}; // Size: 0x70

struct FTransformMeshesTarget
{
    class UTransformProxy* TransformProxy;                                            // 0x0000 (size: 0x8)
    class UTransformGizmo* TransformGizmo;                                            // 0x0008 (size: 0x8)

}; // Size: 0x10

class UAcceptOutputProperties : public UInteractiveToolPropertySet
{
    bool bExportSeparatedPiecesAsNewMeshAssets;                                       // 0x0060 (size: 0x1)

}; // Size: 0x68

class UAddArrowPrimitiveTool : public UAddPrimitiveTool
{
}; // Size: 0xF0

class UAddBoxPrimitiveTool : public UAddPrimitiveTool
{
}; // Size: 0xF0

class UAddConePrimitiveTool : public UAddPrimitiveTool
{
}; // Size: 0xF0

class UAddCylinderPrimitiveTool : public UAddPrimitiveTool
{
}; // Size: 0xF0

class UAddDiscPrimitiveTool : public UAddPrimitiveTool
{
}; // Size: 0xF0

class UAddPatchTool : public USingleClickTool
{
    class UAddPatchToolProperties* ShapeSettings;                                     // 0x0090 (size: 0x8)
    class UNewMeshMaterialProperties* MaterialProperties;                             // 0x0098 (size: 0x8)
    class UPreviewMesh* PreviewMesh;                                                  // 0x00A0 (size: 0x8)

}; // Size: 0x100

class UAddPatchToolBuilder : public UInteractiveToolBuilder
{
}; // Size: 0x30

class UAddPatchToolProperties : public UInteractiveToolPropertySet
{
    float Width;                                                                      // 0x0060 (size: 0x4)
    float Rotation;                                                                   // 0x0064 (size: 0x4)
    int32 Subdivisions;                                                               // 0x0068 (size: 0x4)
    float Shift;                                                                      // 0x006C (size: 0x4)

}; // Size: 0x70

class UAddPrimitiveTool : public USingleClickTool
{
    class UProceduralShapeToolProperties* ShapeSettings;                              // 0x0090 (size: 0x8)
    class UNewMeshMaterialProperties* MaterialProperties;                             // 0x0098 (size: 0x8)
    class UPreviewMesh* PreviewMesh;                                                  // 0x00A0 (size: 0x8)
    class ULastActorInfo* LastGenerated;                                              // 0x00A8 (size: 0x8)
    FString AssetName;                                                                // 0x00B0 (size: 0x10)

}; // Size: 0xF0

class UAddPrimitiveToolBuilder : public UInteractiveToolBuilder
{
}; // Size: 0x38

class UAddPuncturedDiscPrimitiveTool : public UAddPrimitiveTool
{
}; // Size: 0xF0

class UAddRectanglePrimitiveTool : public UAddPrimitiveTool
{
}; // Size: 0xF0

class UAddRoundedRectanglePrimitiveTool : public UAddPrimitiveTool
{
}; // Size: 0xF0

class UAddSpherePrimitiveTool : public UAddPrimitiveTool
{
}; // Size: 0xF0

class UAddSphericalBoxPrimitiveTool : public UAddPrimitiveTool
{
}; // Size: 0xF0

class UAddTorusPrimitiveTool : public UAddPrimitiveTool
{
}; // Size: 0xF0

class UAlignObjectsTool : public UMultiSelectionTool
{
    class UAlignObjectsToolProperties* AlignProps;                                    // 0x0098 (size: 0x8)

}; // Size: 0x140

class UAlignObjectsToolBuilder : public UInteractiveToolBuilder
{
}; // Size: 0x28

class UAlignObjectsToolProperties : public UInteractiveToolPropertySet
{
    EAlignObjectsAlignTypes AlignType;                                                // 0x0060 (size: 0x4)
    EAlignObjectsAlignToOptions AlignTo;                                              // 0x0064 (size: 0x4)
    EAlignObjectsBoxPoint BoxPosition;                                                // 0x0068 (size: 0x4)
    bool bAlignX;                                                                     // 0x006C (size: 0x1)
    bool bAlignY;                                                                     // 0x006D (size: 0x1)
    bool bAlignZ;                                                                     // 0x006E (size: 0x1)

}; // Size: 0x70

class UBakeMeshAttributeMapsTool : public UMultiSelectionTool
{
    class UBakeMeshAttributeMapsToolProperties* Settings;                             // 0x0090 (size: 0x8)
    class UBakedNormalMapToolProperties* NormalMapProps;                              // 0x0098 (size: 0x8)
    class UBakedOcclusionMapToolProperties* OcclusionMapProps;                        // 0x00A0 (size: 0x8)
    class UBakedCurvatureMapToolProperties* CurvatureMapProps;                        // 0x00A8 (size: 0x8)
    class UBakedTexture2DImageProperties* Texture2DProps;                             // 0x00B0 (size: 0x8)
    class UBakedOcclusionMapVisualizationProperties* VisualizationProps;              // 0x00B8 (size: 0x8)
    class UMaterialInstanceDynamic* PreviewMaterial;                                  // 0x00D0 (size: 0x8)
    class UMaterialInstanceDynamic* BentNormalPreviewMaterial;                        // 0x00D8 (size: 0x8)
    class UTexture2D* CachedNormalMap;                                                // 0x0440 (size: 0x8)
    class UTexture2D* CachedOcclusionMap;                                             // 0x0470 (size: 0x8)
    class UTexture2D* CachedBentNormalMap;                                            // 0x0478 (size: 0x8)
    class UTexture2D* CachedCurvatureMap;                                             // 0x04A8 (size: 0x8)
    class UTexture2D* CachedMeshPropertyMap;                                          // 0x04C0 (size: 0x8)
    class UTexture2D* CachedTexture2DImageMap;                                        // 0x04D8 (size: 0x8)
    class UTexture2D* EmptyNormalMap;                                                 // 0x04E0 (size: 0x8)
    class UTexture2D* EmptyColorMapBlack;                                             // 0x04E8 (size: 0x8)
    class UTexture2D* EmptyColorMapWhite;                                             // 0x04F0 (size: 0x8)

}; // Size: 0x4F8

class UBakeMeshAttributeMapsToolBuilder : public UInteractiveToolBuilder
{
}; // Size: 0x30

class UBakeMeshAttributeMapsToolProperties : public UInteractiveToolPropertySet
{
    EBakeMapType MapType;                                                             // 0x0060 (size: 0x4)
    EBakeTextureResolution resolution;                                                // 0x0064 (size: 0x4)
    bool bUseWorldSpace;                                                              // 0x0068 (size: 0x1)
    float Thickness;                                                                  // 0x006C (size: 0x4)
    FString UVLayer;                                                                  // 0x0070 (size: 0x10)
    TArray<FString> UVLayerNamesList;                                                 // 0x0080 (size: 0x10)
    TArray<class UTexture2D*> Result;                                                 // 0x0090 (size: 0x10)

    TArray<FString> GetUVLayerNamesFunc();
}; // Size: 0xA0

class UBakeTransformTool : public UMultiSelectionTool
{
    class UBakeTransformToolProperties* BasicProperties;                              // 0x0090 (size: 0x8)

}; // Size: 0xB8

class UBakeTransformToolBuilder : public UInteractiveToolBuilder
{
}; // Size: 0x30

class UBakeTransformToolProperties : public UInteractiveToolPropertySet
{
    bool bBakeRotation;                                                               // 0x0060 (size: 0x1)
    EBakeScaleMethod BakeScale;                                                       // 0x0061 (size: 0x1)
    bool bRecenterPivot;                                                              // 0x0062 (size: 0x1)

}; // Size: 0x68

class UBakedCurvatureMapToolProperties : public UInteractiveToolPropertySet
{
    EBakedCurvatureTypeMode CurvatureType;                                            // 0x0060 (size: 0x4)
    EBakedCurvatureColorMode ColorMode;                                               // 0x0064 (size: 0x4)
    float RangeMultiplier;                                                            // 0x0068 (size: 0x4)
    float MinRangeMultiplier;                                                         // 0x006C (size: 0x4)
    EBakedCurvatureClampMode Clamping;                                                // 0x0070 (size: 0x4)
    bool bGaussianBlur;                                                               // 0x0074 (size: 0x1)
    float BlurRadius;                                                                 // 0x0078 (size: 0x4)

}; // Size: 0x80

class UBakedNormalMapToolProperties : public UInteractiveToolPropertySet
{
}; // Size: 0x60

class UBakedOcclusionMapToolProperties : public UInteractiveToolPropertySet
{
    EOcclusionMapPreview Preview;                                                     // 0x0060 (size: 0x4)
    int32 OcclusionRays;                                                              // 0x0064 (size: 0x4)
    float MaxDistance;                                                                // 0x0068 (size: 0x4)
    float SpreadAngle;                                                                // 0x006C (size: 0x4)
    EOcclusionMapDistribution Distribution;                                           // 0x0070 (size: 0x4)
    bool bGaussianBlur;                                                               // 0x0074 (size: 0x1)
    float BlurRadius;                                                                 // 0x0078 (size: 0x4)
    float BiasAngle;                                                                  // 0x007C (size: 0x4)
    ENormalMapSpace NormalSpace;                                                      // 0x0080 (size: 0x4)

}; // Size: 0x88

class UBakedOcclusionMapVisualizationProperties : public UInteractiveToolPropertySet
{
    float BaseGrayLevel;                                                              // 0x0060 (size: 0x4)
    float OcclusionMultiplier;                                                        // 0x0064 (size: 0x4)

}; // Size: 0x68

class UBakedTexture2DImageProperties : public UInteractiveToolPropertySet
{
    class UTexture2D* SourceTexture;                                                  // 0x0060 (size: 0x8)
    int32 UVLayer;                                                                    // 0x0068 (size: 0x4)

}; // Size: 0x70

class UBaseKelvinletBrushOpProps : public UMeshSculptBrushOpProps
{
    float Stiffness;                                                                  // 0x0060 (size: 0x4)
    float Incompressiblity;                                                           // 0x0064 (size: 0x4)
    int32 BrushSteps;                                                                 // 0x0068 (size: 0x4)

}; // Size: 0x70

class UBasePlaneBrushOpProps : public UMeshSculptBrushOpProps
{
}; // Size: 0x60

class UBaseSmoothBrushOpProps : public UMeshSculptBrushOpProps
{
}; // Size: 0x60

class UBrushRemeshProperties : public URemeshProperties
{
    bool bEnableRemeshing;                                                            // 0x0070 (size: 0x1)
    int32 TriangleSize;                                                               // 0x0074 (size: 0x4)
    int32 PreserveDetail;                                                             // 0x0078 (size: 0x4)
    int32 Iterations;                                                                 // 0x007C (size: 0x4)

}; // Size: 0x80

class UBrushSculptProperties : public UInteractiveToolPropertySet
{
    bool bIsRemeshingEnabled;                                                         // 0x0060 (size: 0x1)
    EDynamicMeshSculptBrushType PrimaryBrushType;                                     // 0x0061 (size: 0x1)
    float PrimaryBrushSpeed;                                                          // 0x0064 (size: 0x4)
    bool bPreserveUVFlow;                                                             // 0x0068 (size: 0x1)
    bool bFreezeTarget;                                                               // 0x0069 (size: 0x1)
    float SmoothBrushSpeed;                                                           // 0x006C (size: 0x4)
    bool bDetailPreservingSmooth;                                                     // 0x0070 (size: 0x1)

}; // Size: 0x78

class UCSGMeshesTool : public UBaseCreateFromSelectedTool
{
    class UCSGMeshesToolProperties* CSGProperties;                                    // 0x00F0 (size: 0x8)
    class ULineSetComponent* DrawnLineSet;                                            // 0x0108 (size: 0x8)

}; // Size: 0x120

class UCSGMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{
}; // Size: 0x30

class UCSGMeshesToolProperties : public UInteractiveToolPropertySet
{
    ECSGOperation Operation;                                                          // 0x0060 (size: 0x1)
    bool bShowNewBoundaryEdges;                                                       // 0x0061 (size: 0x1)
    bool bAttemptFixHoles;                                                            // 0x0062 (size: 0x1)
    bool bOnlyUseFirstMeshMaterials;                                                  // 0x0063 (size: 0x1)

}; // Size: 0x68

class UCollisionGeometryVisualizationProperties : public UInteractiveToolPropertySet
{
    float LineThickness;                                                              // 0x0060 (size: 0x4)
    bool bShowHidden;                                                                 // 0x0064 (size: 0x1)
    FColor Color;                                                                     // 0x0068 (size: 0x4)

}; // Size: 0x70

class UCombineMeshesTool : public UMultiSelectionTool
{
    class UCombineMeshesToolProperties* BasicProperties;                              // 0x0090 (size: 0x8)
    class UOnAcceptHandleSourcesProperties* HandleSourceProperties;                   // 0x0098 (size: 0x8)

}; // Size: 0xB8

class UCombineMeshesToolBuilder : public UInteractiveToolBuilder
{
}; // Size: 0x38

class UCombineMeshesToolProperties : public UInteractiveToolPropertySet
{
    bool bIsDuplicateMode;                                                            // 0x0060 (size: 0x1)
    ECombineTargetType WriteOutputTo;                                                 // 0x0064 (size: 0x4)
    FString OutputName;                                                               // 0x0068 (size: 0x10)
    FString OutputAsset;                                                              // 0x0078 (size: 0x10)

}; // Size: 0x88

class UConvertToPolygonsTool : public USingleSelectionTool
{
    class UConvertToPolygonsToolProperties* Settings;                                 // 0x0088 (size: 0x8)
    class UPreviewMesh* PreviewMesh;                                                  // 0x0090 (size: 0x8)

}; // Size: 0x3E0

class UConvertToPolygonsToolBuilder : public UInteractiveToolBuilder
{
}; // Size: 0x28

class UConvertToPolygonsToolProperties : public UInteractiveToolPropertySet
{
    EConvertToPolygonsMode ConversionMode;                                            // 0x0060 (size: 0x4)
    float AngleTolerance;                                                             // 0x0064 (size: 0x4)
    bool bCalculateNormals;                                                           // 0x0068 (size: 0x1)
    bool bShowGroupColors;                                                            // 0x0069 (size: 0x1)

}; // Size: 0x70

class UDeformMeshPolygonsTool : public UMeshSurfacePointTool
{
    class USimpleDynamicMeshComponent* DynamicMeshComponent;                          // 0x00C8 (size: 0x8)
    class UDeformMeshPolygonsTransformProperties* TransformProps;                     // 0x00D0 (size: 0x8)

}; // Size: 0x13C0

class UDeformMeshPolygonsToolBuilder : public UMeshSurfacePointToolBuilder
{
}; // Size: 0x30

class UDeformMeshPolygonsTransformProperties : public UInteractiveToolPropertySet
{
    EGroupTopologyDeformationStrategy DeformationStrategy;                            // 0x0060 (size: 0x1)
    EQuickTransformerMode TransformMode;                                              // 0x0061 (size: 0x1)
    bool bSelectFaces;                                                                // 0x0062 (size: 0x1)
    bool bSelectEdges;                                                                // 0x0063 (size: 0x1)
    bool bSelectVertices;                                                             // 0x0064 (size: 0x1)
    bool bSnapToWorldGrid;                                                            // 0x0065 (size: 0x1)
    bool bShowWireframe;                                                              // 0x0066 (size: 0x1)
    EWeightScheme SelectedWeightScheme;                                               // 0x0068 (size: 0x4)
    double HandleWeight;                                                              // 0x0070 (size: 0x8)
    bool bPostFixHandles;                                                             // 0x0078 (size: 0x1)

}; // Size: 0x80

class UDiffusionSmoothProperties : public UInteractiveToolPropertySet
{
    float SmoothingPerStep;                                                           // 0x0060 (size: 0x4)
    int32 Steps;                                                                      // 0x0064 (size: 0x4)
    bool bPreserveUVs;                                                                // 0x0068 (size: 0x1)

}; // Size: 0x70

class UDisplaceMeshCommonProperties : public UInteractiveToolPropertySet
{
    EDisplaceMeshToolDisplaceType DisplacementType;                                   // 0x0060 (size: 0x1)
    float DisplaceIntensity;                                                          // 0x0064 (size: 0x4)
    int32 randomSeed;                                                                 // 0x0068 (size: 0x4)
    int32 Subdivisions;                                                               // 0x006C (size: 0x4)
    FName WeightMap;                                                                  // 0x0070 (size: 0x8)
    TArray<FString> WeightMapsList;                                                   // 0x0078 (size: 0x10)
    bool bInvertWeightMap;                                                            // 0x0088 (size: 0x1)
    bool bDisableSizeWarning;                                                         // 0x0089 (size: 0x1)

    TArray<FString> GetWeightMapsFunc();
}; // Size: 0x90

class UDisplaceMeshDirectionalFilterProperties : public UInteractiveToolPropertySet
{
    bool bEnableFilter;                                                               // 0x0060 (size: 0x1)
    FVector FilterDirection;                                                          // 0x0064 (size: 0xC)
    float FilterWidth;                                                                // 0x0070 (size: 0x4)

}; // Size: 0x78

class UDisplaceMeshPerlinNoiseProperties : public UInteractiveToolPropertySet
{
    TArray<FPerlinLayerProperties> PerlinLayerProperties;                             // 0x0060 (size: 0x10)

}; // Size: 0x70

class UDisplaceMeshSineWaveProperties : public UInteractiveToolPropertySet
{
    float SineWaveFrequency;                                                          // 0x0060 (size: 0x4)
    float SineWavePhaseShift;                                                         // 0x0064 (size: 0x4)
    FVector SineWaveDirection;                                                        // 0x0068 (size: 0xC)

}; // Size: 0x78

class UDisplaceMeshTextureMapProperties : public UInteractiveToolPropertySet
{
    class UTexture2D* DisplacementMap;                                                // 0x0060 (size: 0x8)

}; // Size: 0x68

class UDisplaceMeshTool : public USingleSelectionTool
{
    class UDisplaceMeshCommonProperties* CommonProperties;                            // 0x0088 (size: 0x8)
    class UDisplaceMeshDirectionalFilterProperties* DirectionalFilterProperties;      // 0x0090 (size: 0x8)
    class UDisplaceMeshTextureMapProperties* TextureMapProperties;                    // 0x0098 (size: 0x8)
    class UDisplaceMeshPerlinNoiseProperties* NoiseProperties;                        // 0x00A0 (size: 0x8)
    class UDisplaceMeshSineWaveProperties* SineWaveProperties;                        // 0x00A8 (size: 0x8)

}; // Size: 0x3F0

class UDisplaceMeshToolBuilder : public UInteractiveToolBuilder
{
}; // Size: 0x28

class UDrawAndRevolveTool : public UInteractiveTool
{
    class UCurveControlPointsMechanic* ControlPointsMechanic;                         // 0x00F8 (size: 0x8)
    class UConstructionPlaneMechanic* PlaneMechanic;                                  // 0x0100 (size: 0x8)
    class URevolveToolProperties* Settings;                                           // 0x0108 (size: 0x8)
    class UNewMeshMaterialProperties* MaterialProperties;                             // 0x0110 (size: 0x8)
    class UMeshOpPreviewWithBackgroundCompute* Preview;                               // 0x0118 (size: 0x8)

}; // Size: 0x120

class UDrawAndRevolveToolBuilder : public UInteractiveToolBuilder
{
}; // Size: 0x30

class UDrawPolyPathExtrudeProperties : public UInteractiveToolPropertySet
{
    EDrawPolyPathExtrudeDirection Direction;                                          // 0x0060 (size: 0x4)

}; // Size: 0x68

class UDrawPolyPathProperties : public UInteractiveToolPropertySet
{
    EDrawPolyPathOutputMode OutputType;                                               // 0x0060 (size: 0x4)
    EDrawPolyPathWidthMode WidthMode;                                                 // 0x0064 (size: 0x4)
    float Width;                                                                      // 0x0068 (size: 0x4)
    EDrawPolyPathHeightMode HeightMode;                                               // 0x006C (size: 0x4)
    float Height;                                                                     // 0x0070 (size: 0x4)
    float RampStartRatio;                                                             // 0x0074 (size: 0x4)
    bool bSnapToWorldGrid;                                                            // 0x0078 (size: 0x1)

}; // Size: 0x80

class UDrawPolyPathTool : public UInteractiveTool
{
    class UDrawPolyPathProperties* TransformProps;                                    // 0x00A0 (size: 0x8)
    class UDrawPolyPathExtrudeProperties* ExtrudeProperties;                          // 0x00A8 (size: 0x8)
    class UNewMeshMaterialProperties* MaterialProperties;                             // 0x00B0 (size: 0x8)
    class UConstructionPlaneMechanic* PlaneMechanic;                                  // 0x0140 (size: 0x8)
    class UPolyEditPreviewMesh* EditPreview;                                          // 0x01E8 (size: 0x8)
    class UPlaneDistanceFromHitMechanic* ExtrudeHeightMechanic;                       // 0x01F0 (size: 0x8)
    class USpatialCurveDistanceMechanic* CurveDistMechanic;                           // 0x01F8 (size: 0x8)
    class UCollectSurfacePathMechanic* SurfacePathMechanic;                           // 0x0200 (size: 0x8)

}; // Size: 0x210

class UDrawPolyPathToolBuilder : public UMeshSurfacePointToolBuilder
{
}; // Size: 0x38

class UDrawPolygonTool : public UInteractiveTool
{
    class UDrawPolygonToolStandardProperties* PolygonProperties;                      // 0x0088 (size: 0x8)
    class UDrawPolygonToolSnapProperties* SnapProperties;                             // 0x0090 (size: 0x8)
    class UNewMeshMaterialProperties* MaterialProperties;                             // 0x0098 (size: 0x8)
    class UPreviewMesh* PreviewMesh;                                                  // 0x0150 (size: 0x8)
    class UTransformGizmo* PlaneTransformGizmo;                                       // 0x0158 (size: 0x8)
    class UTransformProxy* PlaneTransformProxy;                                       // 0x0160 (size: 0x8)
    class UPlaneDistanceFromHitMechanic* HeightMechanic;                              // 0x0540 (size: 0x8)

}; // Size: 0x570

class UDrawPolygonToolBuilder : public UInteractiveToolBuilder
{
}; // Size: 0x30

class UDrawPolygonToolSnapProperties : public UInteractiveToolPropertySet
{
    bool bEnableSnapping;                                                             // 0x0060 (size: 0x1)
    bool bSnapToWorldGrid;                                                            // 0x0061 (size: 0x1)
    bool bSnapToVertices;                                                             // 0x0062 (size: 0x1)
    bool bSnapToEdges;                                                                // 0x0063 (size: 0x1)
    bool bSnapToAngles;                                                               // 0x0064 (size: 0x1)
    bool bSnapToLengths;                                                              // 0x0065 (size: 0x1)
    float SegmentLength;                                                              // 0x0068 (size: 0x4)
    bool bHitSceneObjects;                                                            // 0x006C (size: 0x1)
    float HitNormalOffset;                                                            // 0x0070 (size: 0x4)

}; // Size: 0x78

class UDrawPolygonToolStandardProperties : public UInteractiveToolPropertySet
{
    EDrawPolygonDrawMode PolygonType;                                                 // 0x0060 (size: 0x1)
    EDrawPolygonOutputMode OutputMode;                                                // 0x0061 (size: 0x1)
    float FeatureSizeRatio;                                                           // 0x0064 (size: 0x4)
    float ExtrudeHeight;                                                              // 0x0068 (size: 0x4)
    int32 Steps;                                                                      // 0x006C (size: 0x4)
    bool bAllowSelfIntersections;                                                     // 0x0070 (size: 0x1)
    bool bShowGizmo;                                                                  // 0x0071 (size: 0x1)

}; // Size: 0x78

class UDynamicMeshBrushTool : public UBaseBrushTool
{
    class UPreviewMesh* PreviewMesh;                                                  // 0x01C8 (size: 0x8)

}; // Size: 0x208

class UDynamicMeshSculptTool : public UMeshSurfacePointTool
{
    class USculptBrushProperties* BrushProperties;                                    // 0x00C0 (size: 0x8)
    class UBrushSculptProperties* SculptProperties;                                   // 0x00C8 (size: 0x8)
    class USculptMaxBrushProperties* SculptMaxBrushProperties;                        // 0x00D0 (size: 0x8)
    class UKelvinBrushProperties* KelvinBrushProperties;                              // 0x00D8 (size: 0x8)
    class UBrushRemeshProperties* RemeshProperties;                                   // 0x00E0 (size: 0x8)
    class UFixedPlaneBrushProperties* GizmoProperties;                                // 0x00E8 (size: 0x8)
    class UMeshEditingViewProperties* ViewProperties;                                 // 0x00F0 (size: 0x8)
    class UDynamicSculptToolActions* SculptToolActions;                               // 0x00F8 (size: 0x8)
    class UBrushStampIndicator* BrushIndicator;                                       // 0x0140 (size: 0x8)
    class UMaterialInstanceDynamic* BrushIndicatorMaterial;                           // 0x0148 (size: 0x8)
    class UPreviewMesh* BrushIndicatorMesh;                                           // 0x0150 (size: 0x8)
    class UOctreeDynamicMeshComponent* DynamicMeshComponent;                          // 0x0158 (size: 0x8)
    class UMaterialInstanceDynamic* ActiveOverrideMaterial;                           // 0x0160 (size: 0x8)
    class UTransformGizmo* PlaneTransformGizmo;                                       // 0x0D08 (size: 0x8)
    class UTransformProxy* PlaneTransformProxy;                                       // 0x0D10 (size: 0x8)

}; // Size: 0xD20

class UDynamicMeshSculptToolBuilder : public UMeshSurfacePointToolBuilder
{
}; // Size: 0x38

class UDynamicSculptToolActions : public UInteractiveToolPropertySet
{

    void DiscardAttributes();
}; // Size: 0x68

class UEdgeLoopInsertionOperatorFactory : public UObject
{
    class UEdgeLoopInsertionTool* Tool;                                               // 0x0030 (size: 0x8)

}; // Size: 0x38

class UEdgeLoopInsertionProperties : public UInteractiveToolPropertySet
{
    EEdgeLoopPositioningMode PositionMode;                                            // 0x0060 (size: 0x4)
    EEdgeLoopInsertionMode InsertionMode;                                             // 0x0064 (size: 0x4)
    int32 NumLoops;                                                                   // 0x0068 (size: 0x4)
    double ProportionOffset;                                                          // 0x0070 (size: 0x8)
    double DistanceOffset;                                                            // 0x0078 (size: 0x8)
    bool bInteractive;                                                                // 0x0080 (size: 0x1)
    bool bFlipOffsetDirection;                                                        // 0x0081 (size: 0x1)
    bool bWireframe;                                                                  // 0x0082 (size: 0x1)
    double VertexTolerance;                                                           // 0x0088 (size: 0x8)

}; // Size: 0x90

class UEdgeLoopInsertionTool : public USingleSelectionTool
{
    class UEdgeLoopInsertionProperties* Settings;                                     // 0x0098 (size: 0x8)
    class UMeshOpPreviewWithBackgroundCompute* Preview;                               // 0x0300 (size: 0x8)

}; // Size: 0x500

class UEdgeLoopInsertionToolBuilder : public UInteractiveToolBuilder
{
}; // Size: 0x30

class UEditMeshPolygonsTool : public UMeshSurfacePointTool
{
    class USimpleDynamicMeshComponent* DynamicMeshComponent;                          // 0x00D0 (size: 0x8)
    class UPolyEditCommonProperties* CommonProps;                                     // 0x00D8 (size: 0x8)
    class UEditMeshPolygonsToolActions* EditActions;                                  // 0x00E0 (size: 0x8)
    class UEditMeshPolygonsToolActions_Triangles* EditActions_Triangles;              // 0x00E8 (size: 0x8)
    class UEditMeshPolygonsToolEdgeActions* EditEdgeActions;                          // 0x00F0 (size: 0x8)
    class UEditMeshPolygonsToolEdgeActions_Triangles* EditEdgeActions_Triangles;      // 0x00F8 (size: 0x8)
    class UEditMeshPolygonsToolUVActions* EditUVActions;                              // 0x0100 (size: 0x8)
    class UPolyEditExtrudeProperties* ExtrudeProperties;                              // 0x0108 (size: 0x8)
    class UPolyEditOffsetProperties* OffsetProperties;                                // 0x0110 (size: 0x8)
    class UPolyEditInsetProperties* InsetProperties;                                  // 0x0118 (size: 0x8)
    class UPolyEditOutsetProperties* OutsetProperties;                                // 0x0120 (size: 0x8)
    class UPolyEditCutProperties* CutProperties;                                      // 0x0128 (size: 0x8)
    class UPolyEditSetUVProperties* SetUVProperties;                                  // 0x0130 (size: 0x8)
    class UPolygonSelectionMechanic* SelectionMechanic;                               // 0x0138 (size: 0x8)
    class UMultiTransformer* MultiTransformer;                                        // 0x0148 (size: 0x8)
    class UPolyEditPreviewMesh* EditPreview;                                          // 0x04A0 (size: 0x8)
    class UPlaneDistanceFromHitMechanic* ExtrudeHeightMechanic;                       // 0x04B0 (size: 0x8)
    class USpatialCurveDistanceMechanic* CurveDistMechanic;                           // 0x04B8 (size: 0x8)
    class UCollectSurfacePathMechanic* SurfacePathMechanic;                           // 0x04C0 (size: 0x8)

}; // Size: 0x7D0

class UEditMeshPolygonsToolActionPropertySet : public UInteractiveToolPropertySet
{
}; // Size: 0x68

class UEditMeshPolygonsToolActions : public UEditMeshPolygonsToolActionPropertySet
{

    void Retriangulate();
    void RecalcNormals();
    void Outset();
    void Offset();
    void Merge();
    void Inset();
    void Flip();
    void Extrude();
    void Disconnect();
    void Delete();
    void Decompose();
    void CutFaces();
}; // Size: 0x68

class UEditMeshPolygonsToolActions_Triangles : public UEditMeshPolygonsToolActionPropertySet
{

    void RecalcNormals();
    void Poke();
    void Outset();
    void Offset();
    void Inset();
    void Flip();
    void Extrude();
    void Disconnect();
    void Delete();
    void CutFaces();
}; // Size: 0x68

class UEditMeshPolygonsToolBuilder : public UMeshSurfacePointToolBuilder
{
}; // Size: 0x38

class UEditMeshPolygonsToolEdgeActions : public UEditMeshPolygonsToolActionPropertySet
{

    void Weld();
    void Straighten();
    void FillHole();
}; // Size: 0x68

class UEditMeshPolygonsToolEdgeActions_Triangles : public UEditMeshPolygonsToolActionPropertySet
{

    void Weld();
    void Split();
    void Flip();
    void FillHole();
    void Collapse();
}; // Size: 0x68

class UEditMeshPolygonsToolUVActions : public UEditMeshPolygonsToolActionPropertySet
{

    void PlanarProjection();
}; // Size: 0x68

class UEditNormalsAdvancedProperties : public UInteractiveToolPropertySet
{
}; // Size: 0x60

class UEditNormalsOperatorFactory : public UObject
{
    class UEditNormalsTool* Tool;                                                     // 0x0030 (size: 0x8)

}; // Size: 0x40

class UEditNormalsTool : public UMultiSelectionTool
{
    class UEditNormalsToolProperties* BasicProperties;                                // 0x0090 (size: 0x8)
    class UEditNormalsAdvancedProperties* AdvancedProperties;                         // 0x0098 (size: 0x8)
    TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                      // 0x00A0 (size: 0x10)

}; // Size: 0x100

class UEditNormalsToolBuilder : public UInteractiveToolBuilder
{
}; // Size: 0x30

class UEditNormalsToolProperties : public UInteractiveToolPropertySet
{
    bool bRecomputeNormals;                                                           // 0x0060 (size: 0x1)
    ENormalCalculationMethod NormalCalculationMethod;                                 // 0x0061 (size: 0x1)
    bool bFixInconsistentNormals;                                                     // 0x0062 (size: 0x1)
    bool bInvertNormals;                                                              // 0x0063 (size: 0x1)
    ESplitNormalMethod SplitNormalMethod;                                             // 0x0064 (size: 0x1)
    float SharpEdgeAngleThreshold;                                                    // 0x0068 (size: 0x4)
    bool bAllowSharpVertices;                                                         // 0x006C (size: 0x1)

}; // Size: 0x70

class UEditPivotTool : public UMultiSelectionTool
{
    class UEditPivotToolProperties* TransformProps;                                   // 0x0098 (size: 0x8)
    class UEditPivotToolActionPropertySet* EditPivotActions;                          // 0x00A0 (size: 0x8)
    TArray<FEditPivotTarget> ActiveGizmos;                                            // 0x0178 (size: 0x10)

}; // Size: 0x200

class UEditPivotToolActionPropertySet : public UInteractiveToolPropertySet
{
    bool bUseWorldBox;                                                                // 0x0068 (size: 0x1)

    void Top();
    void Right();
    void Left();
    void Front();
    void Center();
    void Bottom();
    void Back();
}; // Size: 0x70

class UEditPivotToolBuilder : public UInteractiveToolBuilder
{
}; // Size: 0x28

class UEditPivotToolProperties : public UInteractiveToolPropertySet
{
    bool bEnableSnapDragging;                                                         // 0x0060 (size: 0x1)
    EEditPivotSnapDragRotationMode RotationMode;                                      // 0x0061 (size: 0x1)

}; // Size: 0x68

class UEditUVIslandsTool : public UMeshSurfacePointTool
{
    class UExistingMeshMaterialProperties* MaterialSettings;                          // 0x00C8 (size: 0x8)
    class UMaterialInstanceDynamic* CheckerMaterial;                                  // 0x00D0 (size: 0x8)
    class USimpleDynamicMeshComponent* DynamicMeshComponent;                          // 0x00D8 (size: 0x8)
    class UPolygonSelectionMechanic* SelectionMechanic;                               // 0x00E0 (size: 0x8)
    class UMultiTransformer* MultiTransformer;                                        // 0x00F0 (size: 0x8)

}; // Size: 0x380

class UEditUVIslandsToolBuilder : public UMeshSurfacePointToolBuilder
{
}; // Size: 0x30

class UEraseBrushOpProps : public UMeshSculptBrushOpProps
{
    float Strength;                                                                   // 0x0060 (size: 0x4)
    float Falloff;                                                                    // 0x0064 (size: 0x4)

}; // Size: 0x68

class UExistingMeshMaterialProperties : public UInteractiveToolPropertySet
{
    ESetMeshMaterialMode MaterialMode;                                                // 0x0060 (size: 0x1)
    float CheckerDensity;                                                             // 0x0064 (size: 0x4)
    class UMaterialInterface* OverrideMaterial;                                       // 0x0068 (size: 0x8)
    class UMaterialInstanceDynamic* CheckerMaterial;                                  // 0x0070 (size: 0x8)

}; // Size: 0x78

class UExtractCollisionGeometryTool : public USingleSelectionTool
{
    class UCollisionGeometryVisualizationProperties* VizSettings;                     // 0x0088 (size: 0x8)
    class UPhysicsObjectToolPropertySet* ObjectProps;                                 // 0x0090 (size: 0x8)
    class UPreviewGeometry* PreviewElements;                                          // 0x0098 (size: 0x8)
    class UPreviewMesh* PreviewMesh;                                                  // 0x00A0 (size: 0x8)

}; // Size: 0x330

class UExtractCollisionGeometryToolBuilder : public UInteractiveToolBuilder
{
}; // Size: 0x30

class UFixedPlaneBrushOpProps : public UBasePlaneBrushOpProps
{
    float Strength;                                                                   // 0x0060 (size: 0x4)
    float Falloff;                                                                    // 0x0064 (size: 0x4)
    float Depth;                                                                      // 0x0068 (size: 0x4)
    EPlaneBrushSideMode WhichSide;                                                    // 0x006C (size: 0x1)

}; // Size: 0x70

class UFixedPlaneBrushProperties : public UInteractiveToolPropertySet
{
    bool bPropertySetEnabled;                                                         // 0x0060 (size: 0x1)
    bool bShowGizmo;                                                                  // 0x0061 (size: 0x1)
    bool bSnapToGrid;                                                                 // 0x0062 (size: 0x1)
    FVector position;                                                                 // 0x0064 (size: 0xC)
    FQuat Rotation;                                                                   // 0x0070 (size: 0x10)

}; // Size: 0x80

class UFlattenBrushOpProps : public UMeshSculptBrushOpProps
{
    float Strength;                                                                   // 0x0060 (size: 0x4)
    float Falloff;                                                                    // 0x0064 (size: 0x4)
    float Depth;                                                                      // 0x0068 (size: 0x4)
    EPlaneBrushSideMode WhichSide;                                                    // 0x006C (size: 0x1)

}; // Size: 0x70

class UGroupEdgeInsertionOperatorFactory : public UObject
{
    class UGroupEdgeInsertionTool* Tool;                                              // 0x0030 (size: 0x8)

}; // Size: 0x38

class UGroupEdgeInsertionProperties : public UInteractiveToolPropertySet
{
    EGroupEdgeInsertionMode InsertionMode;                                            // 0x0060 (size: 0x4)
    bool bWireframe;                                                                  // 0x0064 (size: 0x1)
    double VertexTolerance;                                                           // 0x0068 (size: 0x8)

}; // Size: 0x70

class UGroupEdgeInsertionTool : public USingleSelectionTool
{
    class UGroupEdgeInsertionProperties* Settings;                                    // 0x0098 (size: 0x8)
    class UMeshOpPreviewWithBackgroundCompute* Preview;                               // 0x00A0 (size: 0x8)

}; // Size: 0x550

class UGroupEdgeInsertionToolBuilder : public UInteractiveToolBuilder
{
}; // Size: 0x30

class UHoleFillOperatorFactory : public UObject
{
    class UHoleFillTool* FillTool;                                                    // 0x0030 (size: 0x8)

}; // Size: 0x38

class UHoleFillStatisticsProperties : public UInteractiveToolPropertySet
{
    FString InitialHoles;                                                             // 0x0060 (size: 0x10)
    FString SelectedHoles;                                                            // 0x0070 (size: 0x10)
    FString SuccessfulFills;                                                          // 0x0080 (size: 0x10)
    FString FailedFills;                                                              // 0x0090 (size: 0x10)
    FString RemainingHoles;                                                           // 0x00A0 (size: 0x10)

}; // Size: 0xB0

class UHoleFillTool : public USingleSelectionTool
{
    class USmoothHoleFillProperties* SmoothHoleFillProperties;                        // 0x0098 (size: 0x8)
    class UHoleFillToolProperties* Properties;                                        // 0x00A0 (size: 0x8)
    class UHoleFillToolActions* Actions;                                              // 0x00A8 (size: 0x8)
    class UHoleFillStatisticsProperties* Statistics;                                  // 0x00B0 (size: 0x8)
    class UMeshOpPreviewWithBackgroundCompute* Preview;                               // 0x00B8 (size: 0x8)
    class UPolygonSelectionMechanic* SelectionMechanic;                               // 0x00C0 (size: 0x8)

}; // Size: 0x1E0

class UHoleFillToolActions : public UInteractiveToolPropertySet
{

    void SelectAll();
    void Clear();
}; // Size: 0x68

class UHoleFillToolBuilder : public UInteractiveToolBuilder
{
}; // Size: 0x28

class UHoleFillToolProperties : public UInteractiveToolPropertySet
{
    EHoleFillOpFillType FillType;                                                     // 0x0060 (size: 0x1)
    bool bRemoveIsolatedTriangles;                                                    // 0x0061 (size: 0x1)

}; // Size: 0x68

class UImplicitOffsetProperties : public UInteractiveToolPropertySet
{
    float Smoothness;                                                                 // 0x0060 (size: 0x4)
    bool bPreserveUVs;                                                                // 0x0064 (size: 0x1)

}; // Size: 0x68

class UImplicitSmoothProperties : public UInteractiveToolPropertySet
{
    float SmoothSpeed;                                                                // 0x0060 (size: 0x4)
    float Smoothness;                                                                 // 0x0064 (size: 0x4)
    bool bPreserveUVs;                                                                // 0x0068 (size: 0x1)
    float VolumeCorrection;                                                           // 0x006C (size: 0x4)

}; // Size: 0x70

class UInflateBrushOpProps : public UMeshSculptBrushOpProps
{
    float Strength;                                                                   // 0x0060 (size: 0x4)
    float Falloff;                                                                    // 0x0064 (size: 0x4)

}; // Size: 0x68

class UIterativeOffsetProperties : public UInteractiveToolPropertySet
{
    int32 Steps;                                                                      // 0x0060 (size: 0x4)
    bool bOffsetBoundaries;                                                           // 0x0064 (size: 0x1)
    float SmoothingPerStep;                                                           // 0x0068 (size: 0x4)
    bool bReprojectSmooth;                                                            // 0x006C (size: 0x1)

}; // Size: 0x70

class UIterativeSmoothProperties : public UInteractiveToolPropertySet
{
    float SmoothingPerStep;                                                           // 0x0060 (size: 0x4)
    int32 Steps;                                                                      // 0x0064 (size: 0x4)
    bool bSmoothBoundary;                                                             // 0x0068 (size: 0x1)

}; // Size: 0x70

class UKelvinBrushProperties : public UInteractiveToolPropertySet
{
    float FalloffDistance;                                                            // 0x0060 (size: 0x4)
    float Stiffness;                                                                  // 0x0064 (size: 0x4)
    float Incompressiblity;                                                           // 0x0068 (size: 0x4)
    int32 BrushSteps;                                                                 // 0x006C (size: 0x4)

}; // Size: 0x70

class ULastActorInfo : public UObject
{
    class AActor* Actor;                                                              // 0x0038 (size: 0x8)
    class UStaticMesh* StaticMesh;                                                    // 0x0040 (size: 0x8)
    class UProceduralShapeToolProperties* ShapeSettings;                              // 0x0048 (size: 0x8)
    class UNewMeshMaterialProperties* MaterialProperties;                             // 0x0050 (size: 0x8)

}; // Size: 0x58

class UMeshAnalysisProperties : public UInteractiveToolPropertySet
{
    FString SurfaceArea;                                                              // 0x0060 (size: 0x10)
    FString Volume;                                                                   // 0x0070 (size: 0x10)

}; // Size: 0x80

class UMeshAttributePaintEditActions : public UInteractiveToolPropertySet
{
}; // Size: 0x68

class UMeshAttributePaintTool : public UDynamicMeshBrushTool
{
    class UMeshAttributePaintToolProperties* AttribProps;                             // 0x0208 (size: 0x8)

}; // Size: 0x640

class UMeshAttributePaintToolBuilder : public UMeshSurfacePointToolBuilder
{
}; // Size: 0x80

class UMeshAttributePaintToolProperties : public UInteractiveToolPropertySet
{
    TArray<FName> Attributes;                                                         // 0x0060 (size: 0x10)
    int32 SelectedAttribute;                                                          // 0x0070 (size: 0x4)
    FString AttributeName;                                                            // 0x0078 (size: 0x10)

}; // Size: 0x88

class UMeshBoundaryToolBase : public USingleSelectionTool
{
    class UPolygonSelectionMechanic* SelectionMechanic;                               // 0x0138 (size: 0x8)
    class USingleClickInputBehavior* LoopSelectClickBehavior;                         // 0x0140 (size: 0x8)

}; // Size: 0x150

class UMeshConstraintProperties : public UInteractiveToolPropertySet
{
    bool bPreserveSharpEdges;                                                         // 0x0060 (size: 0x1)
    EMeshBoundaryConstraint MeshBoundaryConstraint;                                   // 0x0061 (size: 0x1)
    EGroupBoundaryConstraint GroupBoundaryConstraint;                                 // 0x0062 (size: 0x1)
    EMaterialBoundaryConstraint MaterialBoundaryConstraint;                           // 0x0063 (size: 0x1)
    bool bPreventNormalFlips;                                                         // 0x0064 (size: 0x1)

}; // Size: 0x68

class UMeshEditingViewProperties : public UInteractiveToolPropertySet
{
    bool bShowWireframe;                                                              // 0x0060 (size: 0x1)
    EMeshEditingMaterialModes MaterialMode;                                           // 0x0064 (size: 0x4)
    bool bFlatShading;                                                                // 0x0068 (size: 0x1)
    FLinearColor Color;                                                               // 0x006C (size: 0x10)
    class UTexture2D* Image;                                                          // 0x0080 (size: 0x8)

}; // Size: 0x88

class UMeshInspectorProperties : public UInteractiveToolPropertySet
{
    bool bWireframe;                                                                  // 0x0060 (size: 0x1)
    bool bBoundaryEdges;                                                              // 0x0061 (size: 0x1)
    bool bBowtieVertices;                                                             // 0x0062 (size: 0x1)
    bool bPolygonBorders;                                                             // 0x0063 (size: 0x1)
    bool bUVSeams;                                                                    // 0x0064 (size: 0x1)
    bool bUVBowties;                                                                  // 0x0065 (size: 0x1)
    bool bNormalSeams;                                                                // 0x0066 (size: 0x1)
    bool bNormalVectors;                                                              // 0x0067 (size: 0x1)
    bool bTangentVectors;                                                             // 0x0068 (size: 0x1)
    float NormalLength;                                                               // 0x006C (size: 0x4)
    float TangentLength;                                                              // 0x0070 (size: 0x4)

}; // Size: 0x78

class UMeshInspectorTool : public USingleSelectionTool
{
    class UMeshInspectorProperties* Settings;                                         // 0x0088 (size: 0x8)
    class UExistingMeshMaterialProperties* MaterialSettings;                          // 0x0090 (size: 0x8)
    class UPreviewMesh* PreviewMesh;                                                  // 0x00A0 (size: 0x8)
    class ULineSetComponent* DrawnLineSet;                                            // 0x00A8 (size: 0x8)
    class UMaterialInterface* DefaultMaterial;                                        // 0x00B0 (size: 0x8)

}; // Size: 0x128

class UMeshInspectorToolBuilder : public UInteractiveToolBuilder
{
}; // Size: 0x28

class UMeshSculptBrushOpProps : public UInteractiveToolPropertySet
{
}; // Size: 0x60

class UMeshSculptToolBase : public UMeshSurfacePointTool
{
    class USculptBrushProperties* BrushProperties;                                    // 0x00C0 (size: 0x8)
    class UWorkPlaneProperties* GizmoProperties;                                      // 0x00C8 (size: 0x8)
    TMap<int32, UMeshSculptBrushOpProps*> BrushOpPropSets;                            // 0x01B0 (size: 0x50)
    TMap<int32, UMeshSculptBrushOpProps*> SecondaryBrushOpPropSets;                   // 0x0250 (size: 0x50)
    class UMeshEditingViewProperties* ViewProperties;                                 // 0x0870 (size: 0x8)
    class UMaterialInstanceDynamic* ActiveOverrideMaterial;                           // 0x0878 (size: 0x8)
    class UBrushStampIndicator* BrushIndicator;                                       // 0x0880 (size: 0x8)
    class UMaterialInstanceDynamic* BrushIndicatorMaterial;                           // 0x0888 (size: 0x8)
    class UPreviewMesh* BrushIndicatorMesh;                                           // 0x0890 (size: 0x8)
    class UTransformGizmo* PlaneTransformGizmo;                                       // 0x0898 (size: 0x8)
    class UTransformProxy* PlaneTransformProxy;                                       // 0x08A0 (size: 0x8)

}; // Size: 0x9E0

class UMeshSelectionEditActions : public UMeshSelectionToolActionPropertySet
{

    void Shrink();
    void SelectLargestComponentByTriCount();
    void SelectLargestComponentByArea();
    void SelectAll();
    void OptimizeSelection();
    void Invert();
    void Grow();
    void ExpandToConnected();
    void Clear();
}; // Size: 0x68

class UMeshSelectionMeshEditActions : public UMeshSelectionToolActionPropertySet
{

    void SeparateTriangles();
    void FlipNormals();
    void DisconnectTriangles();
    void DeleteTriangles();
    void CreatePolygroup();
}; // Size: 0x68

class UMeshSelectionTool : public UDynamicMeshBrushTool
{
    class UMeshSelectionToolProperties* SelectionProps;                               // 0x0208 (size: 0x8)
    class UMeshSelectionEditActions* SelectionActions;                                // 0x0210 (size: 0x8)
    class UMeshSelectionToolActionPropertySet* EditActions;                           // 0x0218 (size: 0x8)
    class UMeshSelectionSet* Selection;                                               // 0x0220 (size: 0x8)
    TArray<class AActor*> SpawnedActors;                                              // 0x0228 (size: 0x10)

}; // Size: 0x4C0

class UMeshSelectionToolActionPropertySet : public UInteractiveToolPropertySet
{
}; // Size: 0x68

class UMeshSelectionToolBuilder : public UMeshSurfacePointToolBuilder
{
}; // Size: 0x38

class UMeshSelectionToolProperties : public UInteractiveToolPropertySet
{
    EMeshSelectionToolPrimaryMode SelectionMode;                                      // 0x0060 (size: 0x4)
    float AngleTolerance;                                                             // 0x0064 (size: 0x4)
    bool bHitBackFaces;                                                               // 0x0068 (size: 0x1)
    bool bShowWireframe;                                                              // 0x0069 (size: 0x1)
    EMeshFacesColorMode FaceColorMode;                                                // 0x006C (size: 0x4)

}; // Size: 0x70

class UMeshSpaceDeformerTool : public UMeshSurfacePointTool
{
    ENonlinearOperationType SelectedOperationType;                                    // 0x00C0 (size: 0x1)
    float UpperBoundsInterval;                                                        // 0x00C4 (size: 0x4)
    float LowerBoundsInterval;                                                        // 0x00C8 (size: 0x4)
    float ModifierPercent;                                                            // 0x00CC (size: 0x4)
    bool bSnapToWorldGrid;                                                            // 0x00D0 (size: 0x1)
    class UGizmoTransformChangeStateTarget* StateTarget;                              // 0x00D8 (size: 0x8)
    class UMeshOpPreviewWithBackgroundCompute* Preview;                               // 0x00E8 (size: 0x8)
    FVector GizmoCenter;                                                              // 0x0110 (size: 0xC)
    FQuat GizmoOrientation;                                                           // 0x0120 (size: 0x10)
    class UIntervalGizmo* IntervalGizmo;                                              // 0x0130 (size: 0x8)
    class UTransformGizmo* TransformGizmo;                                            // 0x0138 (size: 0x8)
    class UTransformProxy* TransformProxy;                                            // 0x0140 (size: 0x8)
    class UGizmoLocalFloatParameterSource* UpIntervalSource;                          // 0x0148 (size: 0x8)
    class UGizmoLocalFloatParameterSource* DownIntervalSource;                        // 0x0150 (size: 0x8)
    class UGizmoLocalFloatParameterSource* ForwardIntervalSource;                     // 0x0158 (size: 0x8)

}; // Size: 0x1C0

class UMeshSpaceDeformerToolBuilder : public UMeshSurfacePointToolBuilder
{
}; // Size: 0x30

class UMeshStatisticsProperties : public UInteractiveToolPropertySet
{
    FString Mesh;                                                                     // 0x0060 (size: 0x10)
    FString UV;                                                                       // 0x0070 (size: 0x10)
    FString Attributes;                                                               // 0x0080 (size: 0x10)

}; // Size: 0x90

class UMeshVertexSculptTool : public UMeshSculptToolBase
{
    class UVertexBrushSculptProperties* SculptProperties;                             // 0x09D8 (size: 0x8)
    class USimpleDynamicMeshComponent* DynamicMeshComponent;                          // 0x09E0 (size: 0x8)

}; // Size: 0x1230

class UMeshVertexSculptToolBuilder : public UMeshSurfacePointToolBuilder
{
}; // Size: 0x30

class UMirrorOperatorFactory : public UObject
{
    class UMirrorTool* MirrorTool;                                                    // 0x0030 (size: 0x8)

}; // Size: 0x40

class UMirrorTool : public UMultiSelectionTool
{
    class UMirrorToolProperties* Settings;                                            // 0x0098 (size: 0x8)
    class UMirrorToolActionPropertySet* ToolActions;                                  // 0x00A0 (size: 0x8)
    TArray<class UDynamicMeshReplacementChangeTarget*> MeshesToMirror;                // 0x00A8 (size: 0x10)
    TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                      // 0x00B8 (size: 0x10)
    class UConstructionPlaneMechanic* PlaneMechanic;                                  // 0x0110 (size: 0x8)

}; // Size: 0x138

class UMirrorToolActionPropertySet : public UInteractiveToolPropertySet
{

    void Up();
    void ShiftToCenter();
    void Right();
    void Left();
    void Forward();
    void Down();
    void Backward();
}; // Size: 0x68

class UMirrorToolBuilder : public UInteractiveToolBuilder
{
}; // Size: 0x30

class UMirrorToolProperties : public UInteractiveToolPropertySet
{
    EMirrorOperationMode OperationMode;                                               // 0x0060 (size: 0x1)
    bool bCropAlongMirrorPlaneFirst;                                                  // 0x0061 (size: 0x1)
    bool bWeldVerticesOnMirrorPlane;                                                  // 0x0062 (size: 0x1)
    bool bAllowBowtieVertexCreation;                                                  // 0x0063 (size: 0x1)
    bool bSnapToWorldGrid;                                                            // 0x0064 (size: 0x1)
    EMirrorCtrlClickBehavior CtrlClickBehavior;                                       // 0x0065 (size: 0x1)
    bool bButtonsOnlyChangeOrientation;                                               // 0x0066 (size: 0x1)
    bool bShowPreview;                                                                // 0x0067 (size: 0x1)
    EMirrorSaveMode SaveMode;                                                         // 0x0068 (size: 0x1)

}; // Size: 0x70

class UMoveBrushOpProps : public UMeshSculptBrushOpProps
{
    float Strength;                                                                   // 0x0060 (size: 0x4)
    float Falloff;                                                                    // 0x0064 (size: 0x4)
    float Depth;                                                                      // 0x0068 (size: 0x4)

}; // Size: 0x70

class UNewMeshMaterialProperties : public UInteractiveToolPropertySet
{
    TWeakObjectPtr<class UMaterialInterface> Material;                                // 0x0060 (size: 0x8)
    float UVScale;                                                                    // 0x0068 (size: 0x4)
    bool bWorldSpaceUVScale;                                                          // 0x006C (size: 0x1)
    bool bWireframe;                                                                  // 0x006D (size: 0x1)
    bool bShowExtendedOptions;                                                        // 0x006E (size: 0x1)

}; // Size: 0x70

class UOffsetMeshTool : public UBaseMeshProcessingTool
{
    class UOffsetMeshToolProperties* OffsetProperties;                                // 0x0400 (size: 0x8)
    class UIterativeOffsetProperties* IterativeProperties;                            // 0x0408 (size: 0x8)
    class UImplicitOffsetProperties* ImplicitProperties;                              // 0x0410 (size: 0x8)
    class UOffsetWeightMapSetProperties* WeightMapProperties;                         // 0x0418 (size: 0x8)

}; // Size: 0x420

class UOffsetMeshToolBuilder : public UBaseMeshProcessingToolBuilder
{
}; // Size: 0x28

class UOffsetMeshToolProperties : public UInteractiveToolPropertySet
{
    EOffsetMeshToolOffsetType OffsetType;                                             // 0x0060 (size: 0x1)
    float Distance;                                                                   // 0x0064 (size: 0x4)
    bool bCreateShell;                                                                // 0x0068 (size: 0x1)

}; // Size: 0x70

class UOffsetWeightMapSetProperties : public UWeightMapSetProperties
{
    float MinDistance;                                                                // 0x0080 (size: 0x4)

}; // Size: 0x88

class UPhysicsInspectorTool : public UMultiSelectionTool
{
    class UCollisionGeometryVisualizationProperties* VizSettings;                     // 0x0090 (size: 0x8)
    TArray<class UPhysicsObjectToolPropertySet*> ObjectData;                          // 0x0098 (size: 0x10)
    class UMaterialInterface* LineMaterial;                                           // 0x00A8 (size: 0x8)
    TArray<class UPreviewGeometry*> PreviewElements;                                  // 0x00B0 (size: 0x10)

}; // Size: 0xD8

class UPhysicsInspectorToolBuilder : public UInteractiveToolBuilder
{
}; // Size: 0x28

class UPhysicsObjectToolPropertySet : public UInteractiveToolPropertySet
{
    FString ObjectName;                                                               // 0x0060 (size: 0x10)
    ECollisionGeometryMode CollisionType;                                             // 0x0070 (size: 0x4)
    TArray<FPhysicsSphereData> Spheres;                                               // 0x0078 (size: 0x10)
    TArray<FPhysicsBoxData> Boxes;                                                    // 0x0088 (size: 0x10)
    TArray<FPhysicsCapsuleData> Capsules;                                             // 0x0098 (size: 0x10)
    TArray<FPhysicsConvexData> Convexes;                                              // 0x00A8 (size: 0x10)

}; // Size: 0xB8

class UPinchBrushOpProps : public UMeshSculptBrushOpProps
{
    float Strength;                                                                   // 0x0060 (size: 0x4)
    float Falloff;                                                                    // 0x0064 (size: 0x4)
    float Depth;                                                                      // 0x0068 (size: 0x4)
    bool bPerpDamping;                                                                // 0x006C (size: 0x1)

}; // Size: 0x70

class UPlaneBrushOpProps : public UBasePlaneBrushOpProps
{
    float Strength;                                                                   // 0x0060 (size: 0x4)
    float Falloff;                                                                    // 0x0064 (size: 0x4)
    float Depth;                                                                      // 0x0068 (size: 0x4)
    EPlaneBrushSideMode WhichSide;                                                    // 0x006C (size: 0x1)

}; // Size: 0x70

class UPlaneCutOperatorFactory : public UObject
{
    class UPlaneCutTool* CutTool;                                                     // 0x0030 (size: 0x8)

}; // Size: 0x40

class UPlaneCutTool : public UMultiSelectionTool
{
    class UPlaneCutToolProperties* BasicProperties;                                   // 0x0098 (size: 0x8)
    class UAcceptOutputProperties* AcceptProperties;                                  // 0x00A0 (size: 0x8)
    FVector CutPlaneOrigin;                                                           // 0x00A8 (size: 0xC)
    FQuat CutPlaneOrientation;                                                        // 0x00C0 (size: 0x10)
    TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                      // 0x00D0 (size: 0x10)
    TArray<class UDynamicMeshReplacementChangeTarget*> MeshesToCut;                   // 0x00E0 (size: 0x10)
    class UTransformGizmo* PlaneTransformGizmo;                                       // 0x0148 (size: 0x8)
    class UTransformProxy* PlaneTransformProxy;                                       // 0x0150 (size: 0x8)

    void Cut();
}; // Size: 0x160

class UPlaneCutToolBuilder : public UInteractiveToolBuilder
{
}; // Size: 0x30

class UPlaneCutToolProperties : public UInteractiveToolPropertySet
{
    bool bSnapToWorldGrid;                                                            // 0x0060 (size: 0x1)
    bool bKeepBothHalves;                                                             // 0x0061 (size: 0x1)
    float SpacingBetweenHalves;                                                       // 0x0064 (size: 0x4)
    bool bFillCutHole;                                                                // 0x0068 (size: 0x1)
    bool bShowPreview;                                                                // 0x0069 (size: 0x1)
    bool bFillSpans;                                                                  // 0x006A (size: 0x1)

}; // Size: 0x70

class UPolyEditCommonProperties : public UInteractiveToolPropertySet
{
    bool bShowWireframe;                                                              // 0x0060 (size: 0x1)
    ELocalFrameMode LocalFrameMode;                                                   // 0x0064 (size: 0x4)
    bool bLockRotation;                                                               // 0x0068 (size: 0x1)
    bool bSnapToWorldGrid;                                                            // 0x0069 (size: 0x1)

}; // Size: 0x70

class UPolyEditCutProperties : public UInteractiveToolPropertySet
{
    EPolyEditCutPlaneOrientation Orientation;                                         // 0x0060 (size: 0x4)
    bool bSnapToVertices;                                                             // 0x0064 (size: 0x1)

}; // Size: 0x68

class UPolyEditExtrudeProperties : public UInteractiveToolPropertySet
{
    EPolyEditExtrudeDirection Direction;                                              // 0x0060 (size: 0x4)
    bool bShellsToSolids;                                                             // 0x0064 (size: 0x1)

}; // Size: 0x68

class UPolyEditInsetProperties : public UInteractiveToolPropertySet
{
    bool bReproject;                                                                  // 0x0060 (size: 0x1)
    float Softness;                                                                   // 0x0064 (size: 0x4)
    bool bBoundaryOnly;                                                               // 0x0068 (size: 0x1)
    float AreaScale;                                                                  // 0x006C (size: 0x4)

}; // Size: 0x70

class UPolyEditOffsetProperties : public UInteractiveToolPropertySet
{
    bool bUseFaceNormals;                                                             // 0x0060 (size: 0x1)

}; // Size: 0x68

class UPolyEditOutsetProperties : public UInteractiveToolPropertySet
{
    float Softness;                                                                   // 0x0060 (size: 0x4)
    bool bBoundaryOnly;                                                               // 0x0064 (size: 0x1)
    float AreaScale;                                                                  // 0x0068 (size: 0x4)

}; // Size: 0x70

class UPolyEditSetUVProperties : public UInteractiveToolPropertySet
{
    bool bShowMaterial;                                                               // 0x0060 (size: 0x1)

}; // Size: 0x68

class UPositionPlaneGizmo : public UInteractiveGizmo
{
    class UPreviewMesh* CenterBallShape;                                              // 0x0088 (size: 0x8)
    class UMaterialInstance* CenterBallMaterial;                                      // 0x0090 (size: 0x8)

}; // Size: 0x520

class UPositionPlaneGizmoBuilder : public UInteractiveGizmoBuilder
{
}; // Size: 0x28

class UPositionPlaneOnSceneInputBehavior : public UAnyButtonInputBehavior
{
}; // Size: 0xB0

class UProceduralArrowToolProperties : public UProceduralShapeToolProperties
{
    float ShaftRadius;                                                                // 0x0070 (size: 0x4)
    float ShaftHeight;                                                                // 0x0074 (size: 0x4)
    float HeadRadius;                                                                 // 0x0078 (size: 0x4)
    float HeadHeight;                                                                 // 0x007C (size: 0x4)
    int32 RadialSlices;                                                               // 0x0080 (size: 0x4)
    int32 TotalSubdivisions;                                                          // 0x0084 (size: 0x4)

}; // Size: 0x88

class UProceduralBoxToolProperties : public UProceduralRectangleToolProperties
{
    float Height;                                                                     // 0x0080 (size: 0x4)
    int32 HeightSubdivisions;                                                         // 0x0084 (size: 0x4)

}; // Size: 0x88

class UProceduralConeToolProperties : public UProceduralShapeToolProperties
{
    float Radius;                                                                     // 0x0070 (size: 0x4)
    float Height;                                                                     // 0x0074 (size: 0x4)
    int32 RadialSlices;                                                               // 0x0078 (size: 0x4)
    int32 HeightSubdivisions;                                                         // 0x007C (size: 0x4)

}; // Size: 0x80

class UProceduralCylinderToolProperties : public UProceduralShapeToolProperties
{
    float Radius;                                                                     // 0x0070 (size: 0x4)
    float Height;                                                                     // 0x0074 (size: 0x4)
    int32 RadialSlices;                                                               // 0x0078 (size: 0x4)
    int32 HeightSubdivisions;                                                         // 0x007C (size: 0x4)

}; // Size: 0x80

class UProceduralDiscToolProperties : public UProceduralShapeToolProperties
{
    float Radius;                                                                     // 0x0070 (size: 0x4)
    int32 RadialSlices;                                                               // 0x0074 (size: 0x4)
    int32 RadialSubdivisions;                                                         // 0x0078 (size: 0x4)

}; // Size: 0x80

class UProceduralPuncturedDiscToolProperties : public UProceduralDiscToolProperties
{
    float HoleRadius;                                                                 // 0x0080 (size: 0x4)

}; // Size: 0x88

class UProceduralRectangleToolProperties : public UProceduralShapeToolProperties
{
    float Width;                                                                      // 0x0070 (size: 0x4)
    float Depth;                                                                      // 0x0074 (size: 0x4)
    int32 WidthSubdivisions;                                                          // 0x0078 (size: 0x4)
    int32 DepthSubdivisions;                                                          // 0x007C (size: 0x4)

}; // Size: 0x80

class UProceduralRoundedRectangleToolProperties : public UProceduralRectangleToolProperties
{
    float CornerRadius;                                                               // 0x0080 (size: 0x4)
    int32 CornerSlices;                                                               // 0x0084 (size: 0x4)

}; // Size: 0x88

class UProceduralShapeToolProperties : public UInteractiveToolPropertySet
{
    bool bInstanceIfPossible;                                                         // 0x0060 (size: 0x1)
    EMakeMeshPolygroupMode PolygroupMode;                                             // 0x0061 (size: 0x1)
    EMakeMeshPlacementType PlaceMode;                                                 // 0x0062 (size: 0x1)
    bool bSnapToGrid;                                                                 // 0x0063 (size: 0x1)
    EMakeMeshPivotLocation PivotLocation;                                             // 0x0064 (size: 0x1)
    float Rotation;                                                                   // 0x0068 (size: 0x4)
    bool bAlignShapeToPlacementSurface;                                               // 0x006C (size: 0x1)

}; // Size: 0x70

class UProceduralSphereToolProperties : public UProceduralShapeToolProperties
{
    float Radius;                                                                     // 0x0070 (size: 0x4)
    int32 LatitudeSlices;                                                             // 0x0074 (size: 0x4)
    int32 LongitudeSlices;                                                            // 0x0078 (size: 0x4)

}; // Size: 0x80

class UProceduralSphericalBoxToolProperties : public UProceduralShapeToolProperties
{
    float Radius;                                                                     // 0x0070 (size: 0x4)
    int32 Subdivisions;                                                               // 0x0074 (size: 0x4)

}; // Size: 0x78

class UProceduralTorusToolProperties : public UProceduralShapeToolProperties
{
    float MajorRadius;                                                                // 0x0070 (size: 0x4)
    float MinorRadius;                                                                // 0x0074 (size: 0x4)
    int32 TubeSlices;                                                                 // 0x0078 (size: 0x4)
    int32 CrossSectionSlices;                                                         // 0x007C (size: 0x4)

}; // Size: 0x80

class UProjectToTargetTool : public URemeshMeshTool
{
}; // Size: 0xF8

class UProjectToTargetToolBuilder : public UInteractiveToolBuilder
{
}; // Size: 0x30

class UProjectToTargetToolProperties : public URemeshMeshToolProperties
{
}; // Size: 0x90

class UPullKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{
    float Falloff;                                                                    // 0x0070 (size: 0x4)
    float Depth;                                                                      // 0x0074 (size: 0x4)

}; // Size: 0x78

class URemeshMeshTool : public UMultiSelectionTool
{
    class URemeshMeshToolProperties* BasicProperties;                                 // 0x0098 (size: 0x8)
    class UMeshStatisticsProperties* MeshStatisticsProperties;                        // 0x00A0 (size: 0x8)
    class UMeshOpPreviewWithBackgroundCompute* Preview;                               // 0x00A8 (size: 0x8)

}; // Size: 0xE8

class URemeshMeshToolBuilder : public UInteractiveToolBuilder
{
}; // Size: 0x30

class URemeshMeshToolProperties : public URemeshProperties
{
    int32 TargetTriangleCount;                                                        // 0x0070 (size: 0x4)
    ERemeshSmoothingType SmoothingType;                                               // 0x0074 (size: 0x1)
    bool bDiscardAttributes;                                                          // 0x0075 (size: 0x1)
    bool bShowWireframe;                                                              // 0x0076 (size: 0x1)
    bool bShowGroupColors;                                                            // 0x0077 (size: 0x1)
    ERemeshType RemeshType;                                                           // 0x0078 (size: 0x1)
    int32 RemeshIterations;                                                           // 0x007C (size: 0x4)
    bool bUseTargetEdgeLength;                                                        // 0x0080 (size: 0x1)
    float TargetEdgeLength;                                                           // 0x0084 (size: 0x4)
    bool bReproject;                                                                  // 0x0088 (size: 0x1)

}; // Size: 0x90

class URemeshProperties : public UMeshConstraintProperties
{
    float SmoothingStrength;                                                          // 0x0068 (size: 0x4)
    bool bFlips;                                                                      // 0x006C (size: 0x1)
    bool bSplits;                                                                     // 0x006D (size: 0x1)
    bool bCollapses;                                                                  // 0x006E (size: 0x1)

}; // Size: 0x70

class URemoveOccludedTrianglesAdvancedProperties : public UInteractiveToolPropertySet
{
}; // Size: 0x68

class URemoveOccludedTrianglesOperatorFactory : public UObject
{
    class URemoveOccludedTrianglesTool* Tool;                                         // 0x0030 (size: 0x8)

}; // Size: 0x40

class URemoveOccludedTrianglesTool : public UMultiSelectionTool
{
    class URemoveOccludedTrianglesToolProperties* BasicProperties;                    // 0x0090 (size: 0x8)
    class URemoveOccludedTrianglesAdvancedProperties* AdvancedProperties;             // 0x0098 (size: 0x8)
    TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                      // 0x00A0 (size: 0x10)
    TArray<class UPreviewMesh*> PreviewCopies;                                        // 0x00B0 (size: 0x10)

}; // Size: 0x150

class URemoveOccludedTrianglesToolBuilder : public UInteractiveToolBuilder
{
}; // Size: 0x30

class URemoveOccludedTrianglesToolProperties : public UInteractiveToolPropertySet
{
    EOcclusionCalculationUIMode OcclusionTestMethod;                                  // 0x0060 (size: 0x1)
    EOcclusionTriangleSamplingUIMode TriangleSampling;                                // 0x0061 (size: 0x1)
    double WindingIsoValue;                                                           // 0x0068 (size: 0x8)
    int32 AddRandomRays;                                                              // 0x0070 (size: 0x4)
    int32 AddTriangleSamples;                                                         // 0x0074 (size: 0x4)
    bool bOnlySelfOcclude;                                                            // 0x0078 (size: 0x1)

}; // Size: 0x80

class URevolveBoundaryOperatorFactory : public UObject
{
    class URevolveBoundaryTool* RevolveBoundaryTool;                                  // 0x0030 (size: 0x8)

}; // Size: 0x38

class URevolveBoundaryTool : public UMeshBoundaryToolBase
{
    class URevolveBoundaryToolProperties* Settings;                                   // 0x0160 (size: 0x8)
    class UNewMeshMaterialProperties* MaterialProperties;                             // 0x0168 (size: 0x8)
    class UConstructionPlaneMechanic* PlaneMechanic;                                  // 0x0170 (size: 0x8)
    class UMeshOpPreviewWithBackgroundCompute* Preview;                               // 0x0178 (size: 0x8)

}; // Size: 0x1B0

class URevolveBoundaryToolBuilder : public UInteractiveToolBuilder
{
}; // Size: 0x30

class URevolveBoundaryToolProperties : public URevolveProperties
{
    bool bDisplayOriginalMesh;                                                        // 0x00B0 (size: 0x1)
    FVector AxisOrigin;                                                               // 0x00B4 (size: 0xC)
    float AxisYaw;                                                                    // 0x00C0 (size: 0x4)
    float AxisPitch;                                                                  // 0x00C4 (size: 0x4)
    bool bSnapToWorldGrid;                                                            // 0x00C8 (size: 0x1)

}; // Size: 0xD0

class URevolveOperatorFactory : public UObject
{
    class UDrawAndRevolveTool* RevolveTool;                                           // 0x0030 (size: 0x8)

}; // Size: 0x38

class URevolveProperties : public UInteractiveToolPropertySet
{
    double RevolutionDegrees;                                                         // 0x0060 (size: 0x8)
    double RevolutionDegreesOffset;                                                   // 0x0068 (size: 0x8)
    int32 Steps;                                                                      // 0x0070 (size: 0x4)
    bool bReverseRevolutionDirection;                                                 // 0x0074 (size: 0x1)
    bool bFlipMesh;                                                                   // 0x0075 (size: 0x1)
    bool bProfileIsCrossSectionOfSide;                                                // 0x0076 (size: 0x1)
    ERevolvePropertiesPolygroupMode PolygroupMode;                                    // 0x0077 (size: 0x1)
    ERevolvePropertiesQuadSplit QuadSplitMode;                                        // 0x0078 (size: 0x1)
    double DiagonalProportionTolerance;                                               // 0x0080 (size: 0x8)
    ERevolvePropertiesCapFillMode CapFillMode;                                        // 0x0088 (size: 0x1)
    bool bWeldFullRevolution;                                                         // 0x0089 (size: 0x1)
    bool bWeldVertsOnAxis;                                                            // 0x008A (size: 0x1)
    double AxisWeldTolerance;                                                         // 0x0090 (size: 0x8)
    bool bSharpNormals;                                                               // 0x0098 (size: 0x1)
    double SharpNormalAngleTolerance;                                                 // 0x00A0 (size: 0x8)
    bool bFlipVs;                                                                     // 0x00A8 (size: 0x1)
    bool bUVsSkipFullyWeldedEdges;                                                    // 0x00A9 (size: 0x1)

}; // Size: 0xB0

class URevolveToolProperties : public URevolveProperties
{
    bool bConnectOpenProfileToAxis;                                                   // 0x00B0 (size: 0x1)
    bool bSnapToWorldGrid;                                                            // 0x00B1 (size: 0x1)
    FVector DrawPlaneOrigin;                                                          // 0x00B4 (size: 0xC)
    FRotator DrawPlaneOrientation;                                                    // 0x00C0 (size: 0xC)
    bool bEnableSnapping;                                                             // 0x00CC (size: 0x1)
    bool bAllowedToEditDrawPlane;                                                     // 0x00CD (size: 0x1)

}; // Size: 0xD0

class UScaleKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{
    float Strength;                                                                   // 0x0070 (size: 0x4)
    float Falloff;                                                                    // 0x0074 (size: 0x4)

}; // Size: 0x78

class USculptBrushProperties : public UBrushBaseProperties
{
    float Depth;                                                                      // 0x0078 (size: 0x4)
    bool bHitBackFaces;                                                               // 0x007C (size: 0x1)
    float Lazyness;                                                                   // 0x0080 (size: 0x4)
    bool bShowPerBrushProps;                                                          // 0x0084 (size: 0x1)

}; // Size: 0x88

class USculptMaxBrushOpProps : public UMeshSculptBrushOpProps
{
    float Strength;                                                                   // 0x0060 (size: 0x4)
    float Falloff;                                                                    // 0x0064 (size: 0x4)
    float MaxHeight;                                                                  // 0x0068 (size: 0x4)
    bool bUseFixedHeight;                                                             // 0x006C (size: 0x1)
    float FixedHeight;                                                                // 0x0070 (size: 0x4)

}; // Size: 0x78

class USculptMaxBrushProperties : public UInteractiveToolPropertySet
{
    float MaxHeight;                                                                  // 0x0060 (size: 0x4)
    bool bFreezeCurrentHeight;                                                        // 0x0064 (size: 0x1)

}; // Size: 0x68

class USeamSculptTool : public UDynamicMeshBrushTool
{
    class USeamSculptToolProperties* Settings;                                        // 0x0208 (size: 0x8)
    class UPreviewGeometry* PreviewGeom;                                              // 0x0210 (size: 0x8)

}; // Size: 0x2E8

class USeamSculptToolBuilder : public UMeshSurfacePointToolBuilder
{
}; // Size: 0x30

class USeamSculptToolProperties : public UInteractiveToolPropertySet
{
    bool bShowWireframe;                                                              // 0x0060 (size: 0x1)
    bool bHitBackFaces;                                                               // 0x0061 (size: 0x1)

}; // Size: 0x68

class USecondarySmoothBrushOpProps : public UBaseSmoothBrushOpProps
{
    float Strength;                                                                   // 0x0060 (size: 0x4)
    float Falloff;                                                                    // 0x0064 (size: 0x4)
    bool bPreserveUVFlow;                                                             // 0x0068 (size: 0x1)

}; // Size: 0x70

class USelfUnionMeshesTool : public UBaseCreateFromSelectedTool
{
    class USelfUnionMeshesToolProperties* Properties;                                 // 0x00F0 (size: 0x8)
    class ULineSetComponent* DrawnLineSet;                                            // 0x00F8 (size: 0x8)

}; // Size: 0x120

class USelfUnionMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{
}; // Size: 0x30

class USelfUnionMeshesToolProperties : public UInteractiveToolPropertySet
{
    bool bAttemptFixHoles;                                                            // 0x0060 (size: 0x1)
    bool bShowNewBoundaryEdges;                                                       // 0x0061 (size: 0x1)
    bool bTrimFlaps;                                                                  // 0x0062 (size: 0x1)
    double WindingNumberThreshold;                                                    // 0x0068 (size: 0x8)
    bool bOnlyUseFirstMeshMaterials;                                                  // 0x0070 (size: 0x1)

}; // Size: 0x78

class USetCollisionGeometryTool : public UMultiSelectionTool
{
    class USetCollisionGeometryToolProperties* Settings;                              // 0x0090 (size: 0x8)
    class UCollisionGeometryVisualizationProperties* VizSettings;                     // 0x0098 (size: 0x8)
    class UPhysicsObjectToolPropertySet* CollisionProps;                              // 0x00A0 (size: 0x8)
    class UMaterialInterface* LineMaterial;                                           // 0x00A8 (size: 0x8)
    class UPreviewGeometry* PreviewGeom;                                              // 0x00B0 (size: 0x8)

}; // Size: 0x1C0

class USetCollisionGeometryToolBuilder : public UInteractiveToolBuilder
{
}; // Size: 0x28

class USetCollisionGeometryToolProperties : public UInteractiveToolPropertySet
{
    ECollisionGeometryType GeometryType;                                              // 0x0060 (size: 0x4)
    ESetCollisionGeometryInputMode InputMode;                                         // 0x0064 (size: 0x4)
    bool bUseWorldSpace;                                                              // 0x0068 (size: 0x1)
    bool bRemoveContained;                                                            // 0x0069 (size: 0x1)
    bool bEnableMaxCount;                                                             // 0x006A (size: 0x1)
    int32 MaxCount;                                                                   // 0x006C (size: 0x4)
    float MinThickness;                                                               // 0x0070 (size: 0x4)
    bool bDetectBoxes;                                                                // 0x0074 (size: 0x1)
    bool bDetectSpheres;                                                              // 0x0075 (size: 0x1)
    bool bDetectCapsules;                                                             // 0x0076 (size: 0x1)
    bool bSimplifyHulls;                                                              // 0x0077 (size: 0x1)
    int32 HullTargetFaceCount;                                                        // 0x0078 (size: 0x4)
    bool bSimplifyPolygons;                                                           // 0x007C (size: 0x1)
    float HullTolerance;                                                              // 0x0080 (size: 0x4)
    EProjectedHullAxis SweepAxis;                                                     // 0x0084 (size: 0x4)
    bool bAppendToExisting;                                                           // 0x0088 (size: 0x1)
    ECollisionGeometryMode SetCollisionType;                                          // 0x008C (size: 0x4)

}; // Size: 0x90

class USharpPullKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{
    float Falloff;                                                                    // 0x0070 (size: 0x4)
    float Depth;                                                                      // 0x0074 (size: 0x4)

}; // Size: 0x78

class USmoothBrushOpProps : public UBaseSmoothBrushOpProps
{
    float Strength;                                                                   // 0x0060 (size: 0x4)
    float Falloff;                                                                    // 0x0064 (size: 0x4)
    bool bPreserveUVFlow;                                                             // 0x0068 (size: 0x1)

}; // Size: 0x70

class USmoothFillBrushOpProps : public UBaseSmoothBrushOpProps
{
    float Strength;                                                                   // 0x0060 (size: 0x4)
    float Falloff;                                                                    // 0x0064 (size: 0x4)
    bool bPreserveUVFlow;                                                             // 0x0068 (size: 0x1)

}; // Size: 0x70

class USmoothHoleFillProperties : public UInteractiveToolPropertySet
{
    bool bConstrainToHoleInterior;                                                    // 0x0060 (size: 0x1)
    int32 RemeshingExteriorRegionWidth;                                               // 0x0064 (size: 0x4)
    int32 SmoothingExteriorRegionWidth;                                               // 0x0068 (size: 0x4)
    int32 SmoothingInteriorRegionWidth;                                               // 0x006C (size: 0x4)
    float InteriorSmoothness;                                                         // 0x0070 (size: 0x4)
    double FillDensityScalar;                                                         // 0x0078 (size: 0x8)
    bool bProjectDuringRemesh;                                                        // 0x0080 (size: 0x1)

}; // Size: 0x88

class USmoothMeshTool : public UBaseMeshProcessingTool
{
    class USmoothMeshToolProperties* SmoothProperties;                                // 0x0400 (size: 0x8)
    class UIterativeSmoothProperties* IterativeProperties;                            // 0x0408 (size: 0x8)
    class UDiffusionSmoothProperties* DiffusionProperties;                            // 0x0410 (size: 0x8)
    class UImplicitSmoothProperties* ImplicitProperties;                              // 0x0418 (size: 0x8)
    class USmoothWeightMapSetProperties* WeightMapProperties;                         // 0x0420 (size: 0x8)

}; // Size: 0x430

class USmoothMeshToolBuilder : public UBaseMeshProcessingToolBuilder
{
}; // Size: 0x28

class USmoothMeshToolProperties : public UInteractiveToolPropertySet
{
    ESmoothMeshToolSmoothType SmoothingType;                                          // 0x0060 (size: 0x1)

}; // Size: 0x68

class USmoothWeightMapSetProperties : public UWeightMapSetProperties
{
    float MinSmoothMultiplier;                                                        // 0x0080 (size: 0x4)

}; // Size: 0x88

class USpaceDeformerOperatorFactory : public UObject
{
    class UMeshSpaceDeformerTool* SpaceDeformerTool;                                  // 0x0030 (size: 0x8)

}; // Size: 0x38

class UStandardSculptBrushOpProps : public UMeshSculptBrushOpProps
{
    float Strength;                                                                   // 0x0060 (size: 0x4)
    float Falloff;                                                                    // 0x0064 (size: 0x4)

}; // Size: 0x68

class UTransformMeshesTool : public UMultiSelectionTool
{
    class UTransformMeshesToolProperties* TransformProps;                             // 0x0098 (size: 0x8)
    TArray<FTransformMeshesTarget> ActiveGizmos;                                      // 0x00B0 (size: 0x10)

}; // Size: 0x140

class UTransformMeshesToolBuilder : public UInteractiveToolBuilder
{
}; // Size: 0x28

class UTransformMeshesToolProperties : public UInteractiveToolPropertySet
{
    ETransformMeshesTransformMode TransformMode;                                      // 0x0060 (size: 0x1)
    bool bSetPivot;                                                                   // 0x0061 (size: 0x1)
    bool bEnableSnapDragging;                                                         // 0x0062 (size: 0x1)
    ETransformMeshesSnapDragSource SnapDragSource;                                    // 0x0063 (size: 0x1)
    ETransformMeshesSnapDragRotationMode RotationMode;                                // 0x0064 (size: 0x1)

}; // Size: 0x68

class UTwistKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{
    float Strength;                                                                   // 0x0070 (size: 0x4)
    float Falloff;                                                                    // 0x0074 (size: 0x4)

}; // Size: 0x78

class UUVProjectionAdvancedProperties : public UInteractiveToolPropertySet
{
}; // Size: 0x60

class UUVProjectionOperatorFactory : public UObject
{
    class UUVProjectionTool* Tool;                                                    // 0x0030 (size: 0x8)

}; // Size: 0x40

class UUVProjectionTool : public UMultiSelectionTool
{
    class UUVProjectionToolProperties* BasicProperties;                               // 0x0090 (size: 0x8)
    class UUVProjectionAdvancedProperties* AdvancedProperties;                        // 0x0098 (size: 0x8)
    class UExistingMeshMaterialProperties* MaterialSettings;                          // 0x00A0 (size: 0x8)
    TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                      // 0x00A8 (size: 0x10)
    class UMaterialInstanceDynamic* CheckerMaterial;                                  // 0x00B8 (size: 0x8)
    TArray<class UTransformGizmo*> TransformGizmos;                                   // 0x00C0 (size: 0x10)
    TArray<class UTransformProxy*> TransformProxies;                                  // 0x00D0 (size: 0x10)

}; // Size: 0x220

class UUVProjectionToolBuilder : public UInteractiveToolBuilder
{
}; // Size: 0x30

class UUVProjectionToolProperties : public UInteractiveToolPropertySet
{
    EUVProjectionMethod UVProjectionMethod;                                           // 0x0060 (size: 0x1)
    FVector ProjectionPrimitiveScale;                                                 // 0x0064 (size: 0xC)
    float CylinderProjectToTopOrBottomAngleThreshold;                                 // 0x0070 (size: 0x4)
    FVector2D UVScale;                                                                // 0x0074 (size: 0x8)
    FVector2D UVOffset;                                                               // 0x007C (size: 0x8)
    bool bWorldSpaceUVScale;                                                          // 0x0084 (size: 0x1)

}; // Size: 0x88

class UVertexBrushSculptProperties : public UInteractiveToolPropertySet
{
    EMeshVertexSculptBrushType PrimaryBrushType;                                      // 0x0060 (size: 0x1)
    EMeshSculptFalloffType PrimaryFalloffType;                                        // 0x0061 (size: 0x1)
    bool bFreezeTarget;                                                               // 0x0062 (size: 0x1)
    bool bSmoothErases;                                                               // 0x0063 (size: 0x1)

}; // Size: 0x68

class UViewAlignedPlaneBrushOpProps : public UBasePlaneBrushOpProps
{
    float Strength;                                                                   // 0x0060 (size: 0x4)
    float Falloff;                                                                    // 0x0064 (size: 0x4)
    float Depth;                                                                      // 0x0068 (size: 0x4)
    EPlaneBrushSideMode WhichSide;                                                    // 0x006C (size: 0x1)

}; // Size: 0x70

class UViewAlignedSculptBrushOpProps : public UMeshSculptBrushOpProps
{
    float Strength;                                                                   // 0x0060 (size: 0x4)
    float Falloff;                                                                    // 0x0064 (size: 0x4)

}; // Size: 0x68

class UVoxelBlendMeshesTool : public UBaseVoxelTool
{
    class UVoxelBlendMeshesToolProperties* BlendProperties;                           // 0x0108 (size: 0x8)

}; // Size: 0x110

class UVoxelBlendMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{
}; // Size: 0x30

class UVoxelBlendMeshesToolProperties : public UInteractiveToolPropertySet
{
    double BlendPower;                                                                // 0x0060 (size: 0x8)
    double BlendFalloff;                                                              // 0x0068 (size: 0x8)
    bool bSolidifyInput;                                                              // 0x0070 (size: 0x1)
    bool bRemoveInternalsAfterSolidify;                                               // 0x0071 (size: 0x1)
    double OffsetSolidifySurface;                                                     // 0x0078 (size: 0x8)

}; // Size: 0x80

class UVoxelMorphologyMeshesTool : public UBaseVoxelTool
{
    class UVoxelMorphologyMeshesToolProperties* MorphologyProperties;                 // 0x0108 (size: 0x8)

}; // Size: 0x110

class UVoxelMorphologyMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{
}; // Size: 0x30

class UVoxelMorphologyMeshesToolProperties : public UInteractiveToolPropertySet
{
    EMorphologyOperation Operation;                                                   // 0x0060 (size: 0x1)
    double Distance;                                                                  // 0x0068 (size: 0x8)
    bool bSolidifyInput;                                                              // 0x0070 (size: 0x1)
    bool bRemoveInternalsAfterSolidify;                                               // 0x0071 (size: 0x1)
    double OffsetSolidifySurface;                                                     // 0x0078 (size: 0x8)

}; // Size: 0x80

class UVoxelSolidifyMeshesTool : public UBaseVoxelTool
{
    class UVoxelSolidifyMeshesToolProperties* SolidifyProperties;                     // 0x0108 (size: 0x8)

}; // Size: 0x110

class UVoxelSolidifyMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{
}; // Size: 0x30

class UVoxelSolidifyMeshesToolProperties : public UInteractiveToolPropertySet
{
    double WindingThreshold;                                                          // 0x0060 (size: 0x8)
    double ExtendBounds;                                                              // 0x0068 (size: 0x8)
    int32 SurfaceSearchSteps;                                                         // 0x0070 (size: 0x4)
    bool bSolidAtBoundaries;                                                          // 0x0074 (size: 0x1)
    bool bMakeOffsetSurfaces;                                                         // 0x0075 (size: 0x1)
    double OffsetThickness;                                                           // 0x0078 (size: 0x8)

}; // Size: 0x80

class UWeldMeshEdgesTool : public USingleSelectionTool
{
    float Tolerance;                                                                  // 0x0088 (size: 0x4)
    bool bOnlyUnique;                                                                 // 0x008C (size: 0x1)

}; // Size: 0x300

class UWeldMeshEdgesToolBuilder : public UInteractiveToolBuilder
{
}; // Size: 0x28

class UWorkPlaneProperties : public UInteractiveToolPropertySet
{
    bool bPropertySetEnabled;                                                         // 0x0060 (size: 0x1)
    bool bShowGizmo;                                                                  // 0x0061 (size: 0x1)
    bool bSnapToGrid;                                                                 // 0x0062 (size: 0x1)
    FVector position;                                                                 // 0x0064 (size: 0xC)
    FQuat Rotation;                                                                   // 0x0070 (size: 0x10)

}; // Size: 0x80

#endif
