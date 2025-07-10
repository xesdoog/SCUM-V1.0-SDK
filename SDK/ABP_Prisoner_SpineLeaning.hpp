#ifndef UE4SS_SDK_ABP_Prisoner_SpineLeaning_HPP
#define UE4SS_SDK_ABP_Prisoner_SpineLeaning_HPP

class UABP_Prisoner_SpineLeaning_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x02F8 (size: 0x118)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4;                                  // 0x0410 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3;                                  // 0x0518 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;                                  // 0x0620 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;                                  // 0x0728 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x0830 (size: 0x108)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0938 (size: 0x20)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0958 (size: 0x20)
    float LeanAmount;                                                                 // 0x0978 (size: 0x4)
    float Spine1LeanAngle;                                                            // 0x097C (size: 0x4)
    float Spine2LeanAngle;                                                            // 0x0980 (size: 0x4)
    float Spine3LeanAngle;                                                            // 0x0984 (size: 0x4)
    float RibcageLeanAngle;                                                           // 0x0988 (size: 0x4)

    void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_SpineLeaning_AnimGraphNode_ModifyBone_5FAB4A1C4E652A3ACA30BB80394E75FE();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_SpineLeaning_AnimGraphNode_ModifyBone_D5F2A724426CF36597430D97858CACD2();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_SpineLeaning_AnimGraphNode_ModifyBone_C383BBD944F2587C3A4D5089DAF6C903();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_SpineLeaning_AnimGraphNode_ModifyBone_5FD8259E4B3B8F00065B209AE0625CC4();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_SpineLeaning_AnimGraphNode_ModifyBone_64A56C344D3C0A2EFC816D8AF1FEDA04();
    void ExecuteUbergraph_ABP_Prisoner_SpineLeaning(int32 EntryPoint);
}; // Size: 0x98C

#endif
