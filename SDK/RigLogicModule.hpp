#ifndef UE4SS_SDK_RigLogicModule_HPP
#define UE4SS_SDK_RigLogicModule_HPP

#include "RigLogicModule_enums.hpp"

struct FCoordinateSystem
{
    EDirection XAxis;                                                                 // 0x0000 (size: 0x1)
    EDirection YAxis;                                                                 // 0x0001 (size: 0x1)
    EDirection ZAxis;                                                                 // 0x0002 (size: 0x1)

}; // Size: 0x3

struct FMeshBlendShapeChannelMapping
{
    int32 MeshIndex;                                                                  // 0x0000 (size: 0x4)
    int32 BlendShapeChannelIndex;                                                     // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FRigUnit_RigLogic : public FRigUnitMutable
{
    FRigUnit_RigLogic_Data Data;                                                      // 0x0068 (size: 0x80)

}; // Size: 0xE8

struct FRigUnit_RigLogic_Data
{
    TWeakObjectPtr<class USkeletalMeshComponent> SkelMeshComponent;                   // 0x0000 (size: 0x8)
    TArray<int32> InputCurveIndices;                                                  // 0x0018 (size: 0x10)
    TArray<int32> HierarchyBoneIndices;                                               // 0x0028 (size: 0x10)
    TArray<FRigUnit_RigLogic_IntArray> MorphTargetCurveIndices;                       // 0x0038 (size: 0x10)
    TArray<FRigUnit_RigLogic_IntArray> BlendShapeIndices;                             // 0x0048 (size: 0x10)
    TArray<FRigUnit_RigLogic_IntArray> CurveContainerIndicesForAnimMaps;              // 0x0058 (size: 0x10)
    TArray<FRigUnit_RigLogic_IntArray> RigLogicIndicesForAnimMaps;                    // 0x0068 (size: 0x10)
    uint32 CurrentLOD;                                                                // 0x0078 (size: 0x4)

}; // Size: 0x80

struct FRigUnit_RigLogic_IntArray
{
    TArray<int32> Values;                                                             // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FTextureCoordinate
{
    float U;                                                                          // 0x0000 (size: 0x4)
    float V;                                                                          // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FVertexLayout
{
    int32 position;                                                                   // 0x0000 (size: 0x4)
    int32 TextureCoordinate;                                                          // 0x0004 (size: 0x4)
    int32 Normal;                                                                     // 0x0008 (size: 0x4)

}; // Size: 0xC

class UDNAAsset : public UAssetUserData
{
    FString DNAFileName;                                                              // 0x0028 (size: 0x10)

}; // Size: 0x78

#endif
