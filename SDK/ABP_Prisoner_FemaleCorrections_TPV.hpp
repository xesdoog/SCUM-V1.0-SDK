#ifndef UE4SS_SDK_ABP_Prisoner_FemaleCorrections_TPV_HPP
#define UE4SS_SDK_ABP_Prisoner_FemaleCorrections_TPV_HPP

class UABP_Prisoner_FemaleCorrections_TPV_C : public UPrisonerAnimInstance_FemaleCorrections
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02D8 (size: 0x30)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x0308 (size: 0x118)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0420 (size: 0x20)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0440 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_9;                                  // 0x0460 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_8;                                  // 0x0568 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_7;                                  // 0x0670 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_6;                                  // 0x0778 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5;                                  // 0x0880 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4;                                  // 0x0988 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3;                                  // 0x0A90 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;                                  // 0x0B98 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;                                  // 0x0CA0 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x0DA8 (size: 0x108)

    void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Prisoner_FemaleCorrections_TPV(int32 EntryPoint);
}; // Size: 0xEB0

#endif
