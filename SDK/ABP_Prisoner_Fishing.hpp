#ifndef UE4SS_SDK_ABP_Prisoner_Fishing_HPP
#define UE4SS_SDK_ABP_Prisoner_Fishing_HPP

class UABP_Prisoner_Fishing_C : public UPrisonerAnimInstance_Fishing
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02E8 (size: 0x30)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_3;      // 0x0318 (size: 0x190)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x04A8 (size: 0x118)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;                        // 0x05C0 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x0660 (size: 0x80)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;                        // 0x06E0 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x0780 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0800 (size: 0x80)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x0880 (size: 0xA0)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_2;      // 0x0920 (size: 0x190)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_1;      // 0x0AB0 (size: 0x190)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace;        // 0x0C40 (size: 0x190)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0DD0 (size: 0x80)

    void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Prisoner_Fishing(int32 EntryPoint);
}; // Size: 0xE50

#endif
