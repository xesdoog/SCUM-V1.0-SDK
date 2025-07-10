#ifndef UE4SS_SDK_ABP_Sentry_HPP
#define UE4SS_SDK_ABP_Sentry_HPP

class UABP_Sentry_C : public USentryAnimInstance2
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0400 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0408 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10;                     // 0x0438 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9;                      // 0x0460 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8;                      // 0x0488 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;                      // 0x04B0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;                      // 0x04D8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;                      // 0x0500 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;                      // 0x0528 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x0550 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x0578 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x05A0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x05C8 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_17;                         // 0x05F0 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_6;                                // 0x0670 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_16;                         // 0x06A0 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_5;                                // 0x0720 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_15;                         // 0x0750 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_4;                                // 0x07D0 (size: 0x30)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_8;                      // 0x0800 (size: 0xC0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_14;                         // 0x08C0 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_13;                         // 0x0940 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_12;                         // 0x09C0 (size: 0x80)
    FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_2;                        // 0x0A40 (size: 0xB0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11;                         // 0x0AF0 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10;                         // 0x0B70 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9;                          // 0x0BF0 (size: 0x80)
    FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_1;                        // 0x0C70 (size: 0xB0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8;                          // 0x0D20 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_3;                                // 0x0DA0 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7;                          // 0x0DD0 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x0E50 (size: 0x30)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_1;                    // 0x0E80 (size: 0x50)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;                      // 0x0ED0 (size: 0x50)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_7;                      // 0x0F20 (size: 0xC0)
    FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum;                          // 0x0FE0 (size: 0xB0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6;                          // 0x1090 (size: 0x80)
    FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_1;                                // 0x1110 (size: 0xC8)
    FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend;                                  // 0x11D8 (size: 0xC8)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x12A0 (size: 0x30)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x12D0 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x1300 (size: 0xB0)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;                        // 0x13B0 (size: 0xA0)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3;     // 0x1450 (size: 0x20)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3;     // 0x1470 (size: 0x20)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_14;                           // 0x1490 (size: 0x28)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_10;                         // 0x14B8 (size: 0x158)
    FAnimNode_Slot AnimGraphNode_Slot_2;                                              // 0x1610 (size: 0x48)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_6;                      // 0x1658 (size: 0xC0)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_13;                           // 0x1718 (size: 0x28)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_9;                          // 0x1740 (size: 0x158)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4;                                  // 0x1898 (size: 0x108)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;     // 0x19A0 (size: 0x20)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;     // 0x19C0 (size: 0x20)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_8;                          // 0x19E0 (size: 0x158)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_12;                           // 0x1B38 (size: 0x28)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_7;                          // 0x1B60 (size: 0x158)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_11;                           // 0x1CB8 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_10;                           // 0x1CE0 (size: 0x28)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_6;                          // 0x1D08 (size: 0x158)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_5;                      // 0x1E60 (size: 0xC0)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_9;                            // 0x1F20 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_8;                            // 0x1F48 (size: 0x28)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_5;                          // 0x1F70 (size: 0x158)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7;                            // 0x20C8 (size: 0x28)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;     // 0x20F0 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3;                                  // 0x2110 (size: 0x108)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;     // 0x2218 (size: 0x20)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_4;                          // 0x2238 (size: 0x158)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6;                            // 0x2390 (size: 0x28)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;                                  // 0x23B8 (size: 0x108)
    FAnimNode_LookAt AnimGraphNode_LookAt_1;                                          // 0x24C0 (size: 0x1B0)
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;                              // 0x2670 (size: 0xC8)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;                          // 0x2738 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;                          // 0x27B8 (size: 0x80)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_3;                          // 0x2838 (size: 0x158)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2;                          // 0x2990 (size: 0x158)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x2AE8 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x2B68 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x2BE8 (size: 0x80)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5;                            // 0x2C68 (size: 0x28)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_4;                      // 0x2C90 (size: 0xC0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_3;                      // 0x2D50 (size: 0xC0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2;                      // 0x2E10 (size: 0xC0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_1;                      // 0x2ED0 (size: 0xC0)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4;                            // 0x2F90 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3;                            // 0x2FB8 (size: 0x28)
    FAnimNode_Slot AnimGraphNode_Slot_1;                                              // 0x2FE0 (size: 0x48)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x3028 (size: 0xC0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x30E8 (size: 0x80)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x3168 (size: 0x48)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_1;                          // 0x31B0 (size: 0x158)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2;                            // 0x3308 (size: 0x28)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;                                  // 0x3330 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x3438 (size: 0x108)
    FAnimNode_LookAt AnimGraphNode_LookAt;                                            // 0x3540 (size: 0x1B0)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x36F0 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x3710 (size: 0x20)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x3730 (size: 0xA0)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;                            // 0x37D0 (size: 0x158)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;                            // 0x3928 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;                              // 0x3950 (size: 0x28)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_ModifyBone_85873772416A8F9BA399C7B90ECE743D();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_ModifyBone_3775EBD149081A261D4363AD1446A3BC();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_LayeredBoneBlend_8CC77967451A517B34AB9E8A06D400F8();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_LayeredBoneBlend_694C448D46EEB432A07ECEAB2C1CA0F3();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_LayeredBoneBlend_E9386CC94D49D0DFC3A4B4A0EB379BF7();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_LayeredBoneBlend_6A05A15C461D48343B1D23AF1BEA80D4();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_LayeredBoneBlend_6B5737D04B1B449E490F40BFD477E261();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_ApplyAdditive_676C5992493D774A9EAC13BAC6353942();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_ModifyBone_68C973EF45A6584027E8829E5F3A50AB();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_ModifyBone_21AA1F63419939CFB56F62BB3FAD8DBF();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_ModifyBone_F3E20814462783070131D18DAA02FC49();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_SequenceEvaluator_28618B864BFEEB042B7A84BCCDEC75F5();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_SequenceEvaluator_1F6B49BD42C2B72AD089C8893DE94D6B();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_TwoWayBlend_BAD1F0654B848BF6F703929AE702081E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_TwoWayBlend_80217C1C45CE37BA95B11A93BB173DD9();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_TransitionResult_6A5881DD46946D4C1FE42AB47720451C();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_TransitionResult_C8BBA3824738AEEECB5384B78FC6427B();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_TransitionResult_3B3A2A3D475A88CB922C878A1F49AC11();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_TransitionResult_41C142F04C8DE278700BE09A8CF37D07();
    void ExecuteUbergraph_ABP_Sentry(int32 EntryPoint);
}; // Size: 0x3978

#endif
