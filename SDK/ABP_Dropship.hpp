#ifndef UE4SS_SDK_ABP_Dropship_HPP
#define UE4SS_SDK_ABP_Dropship_HPP

class UABP_Dropship_C : public UDropshipAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0318 (size: 0x30)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4;                                  // 0x0348 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3;                                  // 0x0450 (size: 0x108)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3;     // 0x0558 (size: 0x20)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3;     // 0x0578 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;     // 0x0598 (size: 0x20)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_6;                          // 0x05B8 (size: 0x158)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_8;                            // 0x0710 (size: 0x28)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_5;                          // 0x0738 (size: 0x158)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;     // 0x0890 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;     // 0x08B0 (size: 0x20)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7;                            // 0x08D0 (size: 0x28)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_4;                          // 0x08F8 (size: 0x158)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;     // 0x0A50 (size: 0x20)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6;                            // 0x0A70 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5;                            // 0x0A98 (size: 0x28)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_1;                      // 0x0AC0 (size: 0xC0)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_3;                          // 0x0B80 (size: 0x158)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4;                            // 0x0CD8 (size: 0x28)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2;                          // 0x0D00 (size: 0x158)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3;                            // 0x0E58 (size: 0x28)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0E80 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;                                  // 0x0EA0 (size: 0x108)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0FA8 (size: 0x20)
    FAnimNode_Slot AnimGraphNode_Slot_1;                                              // 0x0FC8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11;                         // 0x1010 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10;                         // 0x1090 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9;                          // 0x1110 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8;                          // 0x1190 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7;                          // 0x1210 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6;                          // 0x1290 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;                          // 0x1310 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;                          // 0x1390 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x1410 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x1490 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x1510 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x1590 (size: 0x80)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x1610 (size: 0xA0)
    FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum;                          // 0x16B0 (size: 0xB0)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x1760 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x1790 (size: 0xB0)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;                                  // 0x1840 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x1948 (size: 0x108)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_1;                          // 0x1A50 (size: 0x158)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2;                            // 0x1BA8 (size: 0x28)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x1BD0 (size: 0x48)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x1C18 (size: 0xC0)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;                            // 0x1CD8 (size: 0x158)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;                            // 0x1E30 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;                              // 0x1E58 (size: 0x28)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Dropship_AnimGraphNode_ModifyBone_99A0E60147E76B4D76376CB7945C6FE9();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Dropship_AnimGraphNode_ModifyBone_4915E89E4F0B9000CF2185831DF5B357();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Dropship_AnimGraphNode_ModifyBone_CF1F9D924EB6A8F04C8387A74F350487();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Dropship_AnimGraphNode_ModifyBone_2606AFAA4F6D72273DC2F38DEFA75815();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Dropship_AnimGraphNode_ModifyBone_653244684F1D170EA5D01C8C95EFCA9F();
    void ExecuteUbergraph_ABP_Dropship(int32 EntryPoint);
}; // Size: 0x1E80

#endif
