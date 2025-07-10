#ifndef UE4SS_SDK_ABP_M84_Stun_Grenade_HPP
#define UE4SS_SDK_ABP_M84_Stun_Grenade_HPP

class UABP_M84_Stun_Grenade_C : public UGrenadeAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02D8 (size: 0x30)
    FAnimNode_Slot AnimGraphNode_Slot_6;                                              // 0x0308 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_5;                                              // 0x0350 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_4;                                              // 0x0398 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_3;                                              // 0x03E0 (size: 0x48)
    FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_1;                        // 0x0428 (size: 0xB0)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5;                            // 0x04D8 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4;                            // 0x0500 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3;                            // 0x0528 (size: 0x28)
    FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum;                          // 0x0550 (size: 0xB0)
    FAnimNode_Slot AnimGraphNode_Slot_2;                                              // 0x0600 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_1;                                              // 0x0648 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x0690 (size: 0x48)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2;                            // 0x06D8 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;                            // 0x0700 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;                              // 0x0728 (size: 0x28)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;                        // 0x0750 (size: 0xA0)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;                            // 0x07F0 (size: 0x158)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0948 (size: 0x80)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x09C8 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0A68 (size: 0x80)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_M84_Stun_Grenade(int32 EntryPoint);
}; // Size: 0xAE8

#endif
