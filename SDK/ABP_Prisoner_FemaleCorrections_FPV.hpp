#ifndef UE4SS_SDK_ABP_Prisoner_FemaleCorrections_FPV_HPP
#define UE4SS_SDK_ABP_Prisoner_FemaleCorrections_FPV_HPP

class UABP_Prisoner_FemaleCorrections_FPV_C : public UPrisonerAnimInstance_FemaleCorrections
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02D8 (size: 0x30)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x0308 (size: 0x118)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0420 (size: 0x20)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0440 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;                                  // 0x0460 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x0568 (size: 0x108)

    void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Prisoner_FemaleCorrections_FPV(int32 EntryPoint);
}; // Size: 0x670

#endif
