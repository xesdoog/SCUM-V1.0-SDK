#ifndef UE4SS_SDK_ABP_Improvised_Crossbow_HPP
#define UE4SS_SDK_ABP_Improvised_Crossbow_HPP

class UABP_Improvised_Crossbow_C : public UWeaponCrossbowAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0320 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0328 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0358 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x03D8 (size: 0x80)
    FAnimNode_Slot AnimGraphNode_Slot_6;                                              // 0x0458 (size: 0x48)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;                            // 0x04A0 (size: 0x158)
    FAnimNode_Slot AnimGraphNode_Slot_5;                                              // 0x05F8 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_4;                                              // 0x0640 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_3;                                              // 0x0688 (size: 0x48)
    FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_1;                        // 0x06D0 (size: 0xB0)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5;                            // 0x0780 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4;                            // 0x07A8 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3;                            // 0x07D0 (size: 0x28)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;                        // 0x07F8 (size: 0xA0)
    FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum;                          // 0x0898 (size: 0xB0)
    FAnimNode_Slot AnimGraphNode_Slot_2;                                              // 0x0948 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_1;                                              // 0x0990 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x09D8 (size: 0x48)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2;                            // 0x0A20 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;                            // 0x0A48 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;                              // 0x0A70 (size: 0x28)
    FAnimNode_RigidBody AnimGraphNode_RigidBody;                                      // 0x0AA0 (size: 0x830)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x12D0 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x12F0 (size: 0x20)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x1310 (size: 0xA0)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Improvised_Crossbow(int32 EntryPoint);
}; // Size: 0x13B0

#endif
