#ifndef UE4SS_SDK_ABP_Prisoner_Aerial_HPP
#define UE4SS_SDK_ABP_Prisoner_Aerial_HPP

class UABP_Prisoner_Aerial_C : public UPrisonerAnimInstance_Aerial
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0330 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0338 (size: 0x30)
    FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_3;                        // 0x0368 (size: 0xB0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;                          // 0x0418 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;                          // 0x0498 (size: 0x80)
    FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_2;                        // 0x0518 (size: 0xB0)
    FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_2;                                // 0x05C8 (size: 0xC8)
    FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_1;                        // 0x0690 (size: 0xB0)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_14;                   // 0x0740 (size: 0x50)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_13;                   // 0x0790 (size: 0x50)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_7;                        // 0x07E0 (size: 0xA0)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_6;                        // 0x0880 (size: 0xA0)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_12;                   // 0x0920 (size: 0x50)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_11;                   // 0x0970 (size: 0x50)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_10;                   // 0x09C0 (size: 0x50)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5;                        // 0x0A10 (size: 0xA0)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_21;                           // 0x0AB0 (size: 0x28)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_9;                    // 0x0AD8 (size: 0x50)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_8;                    // 0x0B28 (size: 0x50)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4;                        // 0x0B78 (size: 0xA0)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_20;                           // 0x0C18 (size: 0x28)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_8;                          // 0x0C40 (size: 0x158)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_7;                          // 0x0D98 (size: 0x158)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_19;                           // 0x0EF0 (size: 0x28)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_6;                          // 0x0F18 (size: 0x158)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_5;                          // 0x1070 (size: 0x158)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_4;                          // 0x11C8 (size: 0x158)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_3;                          // 0x1320 (size: 0x158)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2;                          // 0x1478 (size: 0x158)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_18;                           // 0x15D0 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_17;                           // 0x15F8 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_16;                           // 0x1620 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_15;                           // 0x1648 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_14;                           // 0x1670 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_13;                           // 0x1698 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_12;                           // 0x16C0 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_11;                           // 0x16E8 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_10;                           // 0x1710 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_9;                            // 0x1738 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_8;                            // 0x1760 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7;                            // 0x1788 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6;                            // 0x17B0 (size: 0x28)
    FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_1;                                // 0x17D8 (size: 0xC8)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_1;                          // 0x18A0 (size: 0x158)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5;                            // 0x19F8 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4;                            // 0x1A20 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x1A48 (size: 0x80)
    FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum;                          // 0x1AC8 (size: 0xB0)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3;                        // 0x1B78 (size: 0xA0)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;                        // 0x1C18 (size: 0xA0)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;                        // 0x1CB8 (size: 0xA0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;                      // 0x1D58 (size: 0xE8)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x1E40 (size: 0xE8)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;                            // 0x1F28 (size: 0x158)
    FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot_1;                              // 0x2080 (size: 0x90)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3;                            // 0x2110 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2;                            // 0x2138 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;                            // 0x2160 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;                              // 0x2188 (size: 0x28)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_7;                    // 0x21B0 (size: 0x50)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x2200 (size: 0x80)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x2280 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x2320 (size: 0x80)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x23A0 (size: 0xC0)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_6;                    // 0x2460 (size: 0x50)
    FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend;                                  // 0x24B0 (size: 0xC8)
    FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot;                                // 0x2578 (size: 0x90)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_5;                    // 0x2608 (size: 0x50)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_4;                    // 0x2658 (size: 0x50)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_3;                    // 0x26A8 (size: 0x50)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2;                    // 0x26F8 (size: 0x50)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_1;                    // 0x2748 (size: 0x50)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;                      // 0x2798 (size: 0x50)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x27E8 (size: 0x80)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Aerial_AnimGraphNode_TwoWayBlend_B69CEC8040210B9214396AB342D5CDC5();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Aerial_AnimGraphNode_LayeredBoneBlend_0CDD252F459A1A10FC7E8FBBDF992069();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Aerial_AnimGraphNode_BlendListByBool_EEEC8A8D41A21C7990E28C8667CE0A17();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Aerial_AnimGraphNode_BlendListByBool_143172114ACD1D22D1CCDFAB691877FB();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Aerial_AnimGraphNode_BlendListByBool_EFAA790F4916AE6CD602BD807E6B28D5();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Aerial_AnimGraphNode_TwoWayBlend_6BD6A65E46A88DC37F09809344D888FB();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Aerial_AnimGraphNode_BlendListByBool_22EB794E4B8387AB2B1C4ABF897CBA7E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Aerial_AnimGraphNode_SequenceEvaluator_109F6CA141AB29E66B05908FB6679860();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Aerial_AnimGraphNode_SequenceEvaluator_57EC1D294603C9D06B795498FE62C376();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Aerial_AnimGraphNode_BlendListByBool_9076FEE64B60D4DA014EAC83F0E9B2C0();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Aerial_AnimGraphNode_SequenceEvaluator_F13988A1439509B49BC338B32E907892();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Aerial_AnimGraphNode_SequenceEvaluator_AE7D76034C7E4C4DC5BCC8914C1A8CC5();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Aerial_AnimGraphNode_SequenceEvaluator_35E984B048A9C794BB1204B6415945CB();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Aerial_AnimGraphNode_BlendListByBool_3B5E74FB4897E2BD591CD6A810F3AFBA();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Aerial_AnimGraphNode_SequenceEvaluator_B742D6124F14BBBD8AB5D1A76CC763D5();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Aerial_AnimGraphNode_SequenceEvaluator_2D00D9AA4A05B5070974A5A19A83EBF6();
    void ExecuteUbergraph_ABP_Prisoner_Aerial(int32 EntryPoint);
}; // Size: 0x2868

#endif
