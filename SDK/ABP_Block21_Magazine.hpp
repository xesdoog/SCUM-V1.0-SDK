#ifndef UE4SS_SDK_ABP_Block21_Magazine_HPP
#define UE4SS_SDK_ABP_Block21_Magazine_HPP

class UABP_Block21_Magazine_C : public UWeaponAttachmentMagazineAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02E8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x0318 (size: 0x80)
    FAnimNode_Slot AnimGraphNode_Slot_6;                                              // 0x0398 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_5;                                              // 0x03E0 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_4;                                              // 0x0428 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_3;                                              // 0x0470 (size: 0x48)
    FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_1;                        // 0x04B8 (size: 0xB0)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5;                            // 0x0568 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4;                            // 0x0590 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3;                            // 0x05B8 (size: 0x28)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;                        // 0x05E0 (size: 0xA0)
    FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum;                          // 0x0680 (size: 0xB0)
    FAnimNode_Slot AnimGraphNode_Slot_2;                                              // 0x0730 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_1;                                              // 0x0778 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x07C0 (size: 0x48)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2;                            // 0x0808 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;                            // 0x0830 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;                              // 0x0858 (size: 0x28)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;                            // 0x0880 (size: 0x158)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;                        // 0x09D8 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0A78 (size: 0x80)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x0AF8 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0B98 (size: 0x80)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Block21_Magazine(int32 EntryPoint);
}; // Size: 0xC18

#endif
