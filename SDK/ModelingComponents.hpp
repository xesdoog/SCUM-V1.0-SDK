#ifndef UE4SS_SDK_ModelingComponents_HPP
#define UE4SS_SDK_ModelingComponents_HPP

#include "ModelingComponents_enums.hpp"

struct FRenderableTriangle
{
    class UMaterialInterface* Material;                                               // 0x0000 (size: 0x8)
    FRenderableTriangleVertex Vertex0;                                                // 0x0008 (size: 0x24)
    FRenderableTriangleVertex Vertex1;                                                // 0x002C (size: 0x24)
    FRenderableTriangleVertex Vertex2;                                                // 0x0050 (size: 0x24)

}; // Size: 0x78

struct FRenderableTriangleVertex
{
    FVector position;                                                                 // 0x0000 (size: 0xC)
    FVector2D UV;                                                                     // 0x000C (size: 0x8)
    FVector Normal;                                                                   // 0x0014 (size: 0xC)
    FColor Color;                                                                     // 0x0020 (size: 0x4)

}; // Size: 0x24

class APreviewGeometryActor : public AInternalToolFrameworkActor
{
}; // Size: 0x220

class APreviewMeshActor : public AInternalToolFrameworkActor
{
}; // Size: 0x220

class IMeshCommandChangeTarget : public IInterface
{
}; // Size: 0x28

class IMeshReplacementCommandChangeTarget : public IInterface
{
}; // Size: 0x28

class IMeshVertexCommandChangeTarget : public IInterface
{
}; // Size: 0x28

class UBaseCreateFromSelectedHandleSourceProperties : public UOnAcceptHandleSourcesProperties
{
    EBaseCreateFromSelectedTargetType WriteOutputTo;                                  // 0x0068 (size: 0x4)
    FString OutputName;                                                               // 0x0070 (size: 0x10)
    FString OutputAsset;                                                              // 0x0080 (size: 0x10)

}; // Size: 0x90

class UBaseCreateFromSelectedTool : public UMultiSelectionTool
{
    class UTransformInputsToolProperties* TransformProperties;                        // 0x0098 (size: 0x8)
    class UBaseCreateFromSelectedHandleSourceProperties* HandleSourcesProperties;     // 0x00A0 (size: 0x8)
    class UMeshOpPreviewWithBackgroundCompute* Preview;                               // 0x00A8 (size: 0x8)
    TArray<class UTransformProxy*> TransformProxies;                                  // 0x00B0 (size: 0x10)
    TArray<class UTransformGizmo*> TransformGizmos;                                   // 0x00C0 (size: 0x10)
    TArray<FVector> TransformInitialScales;                                           // 0x00D0 (size: 0x10)

}; // Size: 0xF0

class UBaseCreateFromSelectedToolBuilder : public UInteractiveToolBuilder
{
}; // Size: 0x30

class UBaseDynamicMeshComponent : public UMeshComponent
{
}; // Size: 0x4D0

class UBaseMeshProcessingTool : public USingleSelectionTool
{
    class UMeshOpPreviewWithBackgroundCompute* Preview;                               // 0x00B0 (size: 0x8)

}; // Size: 0x400

class UBaseMeshProcessingToolBuilder : public UInteractiveToolBuilder
{
}; // Size: 0x28

class UBaseVoxelTool : public UBaseCreateFromSelectedTool
{
    class UVoxelProperties* VoxProperties;                                            // 0x00F0 (size: 0x8)

}; // Size: 0x108

class UCollectSurfacePathMechanic : public UInteractionMechanic
{
}; // Size: 0x550

class UConstructionPlaneMechanic : public UInteractionMechanic
{
    class UTransformGizmo* PlaneTransformGizmo;                                       // 0x00C8 (size: 0x8)
    class UTransformProxy* PlaneTransformProxy;                                       // 0x00D0 (size: 0x8)
    class USingleClickInputBehavior* ClickToSetPlaneBehavior;                         // 0x00E8 (size: 0x8)

}; // Size: 0xF0

class UCurveControlPointsMechanic : public UInteractionMechanic
{
    class USingleClickInputBehavior* ClickBehavior;                                   // 0x0040 (size: 0x8)
    class UMouseHoverBehavior* HoverBehavior;                                         // 0x0048 (size: 0x8)
    class APreviewGeometryActor* PreviewGeometryActor;                                // 0x04E8 (size: 0x8)
    class UPointSetComponent* DrawnControlPoints;                                     // 0x04F0 (size: 0x8)
    class ULineSetComponent* DrawnControlSegments;                                    // 0x04F8 (size: 0x8)
    class UPointSetComponent* PreviewPoint;                                           // 0x0500 (size: 0x8)
    class ULineSetComponent* PreviewSegment;                                          // 0x0508 (size: 0x8)
    class UTransformProxy* PointTransformProxy;                                       // 0x0588 (size: 0x8)
    class UTransformGizmo* PointTransformGizmo;                                       // 0x0590 (size: 0x8)

}; // Size: 0x650

class UDynamicMeshReplacementChangeTarget : public UObject
{
}; // Size: 0x58

class ULineSetComponent : public UMeshComponent
{
    class UMaterialInterface* LineMaterial;                                           // 0x0480 (size: 0x8)
    FBoxSphereBounds Bounds;                                                          // 0x0488 (size: 0x1C)
    bool bBoundsDirty;                                                                // 0x04A4 (size: 0x1)

}; // Size: 0x4E0

class UMeshOpPreviewWithBackgroundCompute : public UObject
{
    class UPreviewMesh* PreviewMesh;                                                  // 0x0058 (size: 0x8)
    TArray<class UMaterialInterface*> StandardMaterials;                              // 0x0060 (size: 0x10)
    class UMaterialInterface* OverrideMaterial;                                       // 0x0070 (size: 0x8)
    class UMaterialInterface* WorkingMaterial;                                        // 0x0078 (size: 0x8)

}; // Size: 0x90

class UMultiTransformer : public UObject
{
    class UInteractiveGizmoManager* GizmoManager;                                     // 0x0070 (size: 0x8)
    class UTransformGizmo* TransformGizmo;                                            // 0x00E0 (size: 0x8)
    class UTransformProxy* TransformProxy;                                            // 0x00E8 (size: 0x8)

}; // Size: 0x140

class UOctreeDynamicMeshComponent : public UBaseDynamicMeshComponent
{
    bool bExplicitShowWireframe;                                                      // 0x04E0 (size: 0x1)

}; // Size: 0x5E0

class UOnAcceptHandleSourcesProperties : public UInteractiveToolPropertySet
{
    EHandleSourcesMethod OnToolAccept;                                                // 0x0060 (size: 0x1)

}; // Size: 0x68

class UPlaneDistanceFromHitMechanic : public UInteractionMechanic
{
}; // Size: 0x4B0

class UPointSetComponent : public UMeshComponent
{
    class UMaterialInterface* PointMaterial;                                          // 0x0480 (size: 0x8)
    FBoxSphereBounds Bounds;                                                          // 0x0488 (size: 0x1C)
    bool bBoundsDirty;                                                                // 0x04A4 (size: 0x1)

}; // Size: 0x4E0

class UPolyEditPreviewMesh : public UPreviewMesh
{
}; // Size: 0x4D0

class UPolygonSelectionMechanic : public UInteractionMechanic
{
    class UPolygonSelectionMechanicProperties* Properties;                            // 0x0050 (size: 0x8)
    class APreviewGeometryActor* PreviewGeometryActor;                                // 0x0520 (size: 0x8)
    class UTriangleSetComponent* DrawnTriangleSetComponent;                           // 0x0528 (size: 0x8)
    class UMaterialInterface* HighlightedFaceMaterial;                                // 0x0580 (size: 0x8)

}; // Size: 0x830

class UPolygonSelectionMechanicProperties : public UInteractiveToolPropertySet
{
    bool bSelectFaces;                                                                // 0x0060 (size: 0x1)
    bool bSelectEdges;                                                                // 0x0061 (size: 0x1)
    bool bSelectVertices;                                                             // 0x0062 (size: 0x1)
    bool bSelectEdgeLoops;                                                            // 0x0063 (size: 0x1)
    bool bSelectEdgeRings;                                                            // 0x0064 (size: 0x1)
    bool bPreferProjectedElement;                                                     // 0x0065 (size: 0x1)
    bool bSelectDownRay;                                                              // 0x0066 (size: 0x1)
    bool bIgnoreOcclusion;                                                            // 0x0067 (size: 0x1)

}; // Size: 0x68

class UPreviewGeometry : public UObject
{
    class APreviewGeometryActor* ParentActor;                                         // 0x0028 (size: 0x8)
    TMap<class FString, class ULineSetComponent*> LineSets;                           // 0x0030 (size: 0x50)

    bool SetLineSetVisibility(FString LineSetIdentifier, bool bVisible);
    bool SetLineSetMaterial(FString LineSetIdentifier, class UMaterialInterface* NewMaterial);
    void SetAllLineSetsMaterial(class UMaterialInterface* Material);
    bool RemoveLineSet(FString LineSetIdentifier, bool bDestroy);
    void RemoveAllLineSets(bool bDestroy);
    class APreviewGeometryActor* GetActor();
    class ULineSetComponent* FindLineSet(FString LineSetIdentifier);
    void Disconnect();
    void CreateInWorld(class UWorld* World, const FTransform& WithTransform);
    class ULineSetComponent* AddLineSet(FString LineSetIdentifier);
}; // Size: 0x80

class UPreviewMesh : public UObject
{
    bool bBuildSpatialDataStructure;                                                  // 0x0040 (size: 0x1)
    bool bDrawOnTop;                                                                  // 0x0041 (size: 0x1)
    class USimpleDynamicMeshComponent* DynamicMeshComponent;                          // 0x0050 (size: 0x8)

}; // Size: 0xE0

class USimpleDynamicMeshComponent : public UBaseDynamicMeshComponent
{
    EDynamicMeshTangentCalcType TangentsType;                                         // 0x04C8 (size: 0x1)
    bool bInvalidateProxyOnChange;                                                    // 0x04C9 (size: 0x1)
    bool bExplicitShowWireframe;                                                      // 0x0500 (size: 0x1)
    bool bDrawOnTop;                                                                  // 0x0550 (size: 0x1)

}; // Size: 0x620

class USpaceCurveDeformationMechanic : public UInteractionMechanic
{
    class USingleClickInputBehavior* ClickBehavior;                                   // 0x0040 (size: 0x8)
    class UMouseHoverBehavior* HoverBehavior;                                         // 0x0048 (size: 0x8)
    class USpaceCurveDeformationMechanicPropertySet* TransformProperties;             // 0x0068 (size: 0x8)
    class APreviewGeometryActor* PreviewGeometryActor;                                // 0x0168 (size: 0x8)
    class UPointSetComponent* RenderPoints;                                           // 0x0170 (size: 0x8)
    class ULineSetComponent* RenderSegments;                                          // 0x0178 (size: 0x8)
    class UTransformProxy* PointTransformProxy;                                       // 0x01B8 (size: 0x8)
    class UTransformGizmo* PointTransformGizmo;                                       // 0x01C0 (size: 0x8)

}; // Size: 0x2B0

class USpaceCurveDeformationMechanicPropertySet : public UInteractiveToolPropertySet
{
    ESpaceCurveControlPointTransformMode TransformMode;                               // 0x0060 (size: 0x4)
    ESpaceCurveControlPointOriginMode TransformOrigin;                                // 0x0064 (size: 0x4)
    float Softness;                                                                   // 0x0068 (size: 0x4)
    ESpaceCurveControlPointFalloffType SoftFalloff;                                   // 0x006C (size: 0x4)

}; // Size: 0x70

class USpatialCurveDistanceMechanic : public UInteractionMechanic
{
}; // Size: 0x3F0

class UTransformInputsToolProperties : public UInteractiveToolPropertySet
{
    bool bShowTransformUI;                                                            // 0x0060 (size: 0x1)
    bool bSnapToWorldGrid;                                                            // 0x0061 (size: 0x1)

}; // Size: 0x68

class UTriangleSetComponent : public UMeshComponent
{
    FBoxSphereBounds Bounds;                                                          // 0x0480 (size: 0x1C)
    bool bBoundsDirty;                                                                // 0x049C (size: 0x1)

}; // Size: 0x560

class UUVLayoutPreview : public UObject
{
    class UUVLayoutPreviewProperties* Settings;                                       // 0x0028 (size: 0x8)
    class UPreviewMesh* PreviewMesh;                                                  // 0x0030 (size: 0x8)
    class UTriangleSetComponent* TriangleComponent;                                   // 0x0038 (size: 0x8)
    bool bShowBackingRectangle;                                                       // 0x0040 (size: 0x1)
    class UMaterialInterface* BackingRectangleMaterial;                               // 0x0048 (size: 0x8)

}; // Size: 0x140

class UUVLayoutPreviewProperties : public UInteractiveToolPropertySet
{
    bool bVisible;                                                                    // 0x0060 (size: 0x1)
    float ScaleFactor;                                                                // 0x0064 (size: 0x4)
    EUVLayoutPreviewSide WhichSide;                                                   // 0x0068 (size: 0x4)
    bool bShowWireframe;                                                              // 0x006C (size: 0x1)
    FVector2D Shift;                                                                  // 0x0070 (size: 0x8)

}; // Size: 0x78

class UVoxelProperties : public UInteractiveToolPropertySet
{
    int32 VoxelCount;                                                                 // 0x0060 (size: 0x4)
    bool bAutoSimplify;                                                               // 0x0064 (size: 0x1)
    bool bRemoveInternalSurfaces;                                                     // 0x0065 (size: 0x1)
    double SimplifyMaxErrorFactor;                                                    // 0x0068 (size: 0x8)
    double CubeRootMinComponentVolume;                                                // 0x0070 (size: 0x8)

}; // Size: 0x78

class UWeightMapSetProperties : public UInteractiveToolPropertySet
{
    FName WeightMap;                                                                  // 0x0060 (size: 0x8)
    TArray<FString> WeightMapsList;                                                   // 0x0068 (size: 0x10)
    bool bInvertWeightMap;                                                            // 0x0078 (size: 0x1)

    TArray<FString> GetWeightMapsFunc();
}; // Size: 0x80

#endif
