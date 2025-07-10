#ifndef UE4SS_SDK_ABP_Prisoner_WeightLoad_HPP
#define UE4SS_SDK_ABP_Prisoner_WeightLoad_HPP

class UABP_Prisoner_WeightLoad_C : public UPrisonerAnimInstance_WeightLoad
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x02F8 (size: 0x118)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0410 (size: 0x20)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0430 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_6;                                  // 0x0450 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5;                                  // 0x0558 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4;                                  // 0x0660 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3;                                  // 0x0768 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;                                  // 0x0870 (size: 0x108)
    FAnimNode_CopyBone AnimGraphNode_CopyBone;                                        // 0x0978 (size: 0xF0)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;                                  // 0x0A68 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x0B70 (size: 0x108)
    float WeightLoadFactor;                                                           // 0x0C78 (size: 0x4)

    void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_WeightLoad_AnimGraphNode_ModifyBone_453C5F26411CB286321E8DB6BD390538();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_WeightLoad_AnimGraphNode_ModifyBone_3BA31DAB4C2251A5551ABF92B5EF6EDC();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_WeightLoad_AnimGraphNode_CopyBone_C78C6C854660251F8AF393A3FFCDAF3D();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_WeightLoad_AnimGraphNode_ModifyBone_FD4BD31742A3B9C191645FBFBB26ADB3();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_WeightLoad_AnimGraphNode_ModifyBone_5A9718D344432D8EE2C192ACDBA4E8B6();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_WeightLoad_AnimGraphNode_ModifyBone_D664E21F4D373F17D3BDEF8FEBACC61D();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_WeightLoad_AnimGraphNode_ModifyBone_FED9B57C498EF024308E0B88F1D1CA6A();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_WeightLoad_AnimGraphNode_ModifyBone_5988E94F403D4BF88928DA9CC56F17CD();
    void ExecuteUbergraph_ABP_Prisoner_WeightLoad(int32 EntryPoint);
}; // Size: 0xC7C

#endif
