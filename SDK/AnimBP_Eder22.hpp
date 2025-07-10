#ifndef UE4SS_SDK_AnimBP_Eder22_HPP
#define UE4SS_SDK_AnimBP_Eder22_HPP

class UAnimBP_Eder22_C : public UWeaponAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0318 (size: 0x30)
    FAnimNode_Slot AnimGraphNode_Slot_6;                                              // 0x0348 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_5;                                              // 0x0390 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_4;                                              // 0x03D8 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_3;                                              // 0x0420 (size: 0x48)
    FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_2;                        // 0x0468 (size: 0xB0)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5;                            // 0x0518 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4;                            // 0x0540 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3;                            // 0x0568 (size: 0x28)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;                        // 0x0590 (size: 0xA0)
    FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_1;                        // 0x0630 (size: 0xB0)
    FAnimNode_Slot AnimGraphNode_Slot_2;                                              // 0x06E0 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_1;                                              // 0x0728 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x0770 (size: 0x48)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2;                            // 0x07B8 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;                            // 0x07E0 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;                              // 0x0808 (size: 0x28)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;                            // 0x0830 (size: 0x158)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;                          // 0x0988 (size: 0x80)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;                        // 0x0A08 (size: 0xA0)
    FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum;                          // 0x0AA8 (size: 0xB0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x0B58 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x0BD8 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0C58 (size: 0x80)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x0CD8 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0D78 (size: 0x80)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_AnimBP_Eder22(int32 EntryPoint);
}; // Size: 0xDF8

#endif
