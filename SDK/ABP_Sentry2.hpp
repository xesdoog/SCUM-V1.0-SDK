#ifndef UE4SS_SDK_ABP_Sentry2_HPP
#define UE4SS_SDK_ABP_Sentry2_HPP

class UABP_Sentry2_C : public USentryAnimInstance2
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0400 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0408 (size: 0x30)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;                        // 0x0438 (size: 0xA0)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x04D8 (size: 0x20)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_3;                          // 0x04F8 (size: 0x158)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0650 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10;                         // 0x0670 (size: 0x80)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5;                            // 0x06F0 (size: 0x28)
    FAnimNode_LookAt AnimGraphNode_LookAt;                                            // 0x0720 (size: 0x1B0)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4;                            // 0x08D0 (size: 0x28)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2;                          // 0x08F8 (size: 0x158)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3;                            // 0x0A50 (size: 0x28)
    FAnimNode_Slot AnimGraphNode_Slot_1;                                              // 0x0A78 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x0AC0 (size: 0x48)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_1;                      // 0x0B08 (size: 0xC0)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2;                            // 0x0BC8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_21;                     // 0x0BF0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_20;                     // 0x0C18 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_19;                     // 0x0C40 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_18;                     // 0x0C68 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_17;                     // 0x0C90 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_16;                     // 0x0CB8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_15;                     // 0x0CE0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_14;                     // 0x0D08 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13;                     // 0x0D30 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12;                     // 0x0D58 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11;                     // 0x0D80 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10;                     // 0x0DA8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9;                      // 0x0DD0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8;                      // 0x0DF8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;                      // 0x0E20 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;                      // 0x0E48 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;                      // 0x0E70 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;                      // 0x0E98 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x0EC0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x0EE8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x0F10 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9;                          // 0x0F38 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_11;                               // 0x0FB8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8;                          // 0x0FE8 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_10;                               // 0x1068 (size: 0x30)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x1098 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7;                          // 0x1138 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6;                          // 0x11B8 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_9;                                // 0x1238 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;                          // 0x1268 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_8;                                // 0x12E8 (size: 0x30)
    FAnimNode_StateResult AnimGraphNode_StateResult_7;                                // 0x1318 (size: 0x30)
    FAnimNode_StateResult AnimGraphNode_StateResult_6;                                // 0x1348 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;                          // 0x1378 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_5;                                // 0x13F8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x1428 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_4;                                // 0x14A8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x14D8 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_3;                                // 0x1558 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x1588 (size: 0x28)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x15B0 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x15E0 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x1660 (size: 0x30)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_1;                    // 0x1690 (size: 0x50)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;                      // 0x16E0 (size: 0x50)
    FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_1;                                // 0x1730 (size: 0xC8)
    FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend;                                  // 0x17F8 (size: 0xC8)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x18C0 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x1940 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x1970 (size: 0xB0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x1A20 (size: 0xC0)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_1;                          // 0x1AE0 (size: 0x158)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;                            // 0x1C38 (size: 0x158)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;                            // 0x1D90 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;                              // 0x1DB8 (size: 0x28)
    FRandomStream RandomStream;                                                       // 0x1DE0 (size: 0x8)
    class ASentry2* Sentry;                                                           // 0x1DE8 (size: 0x8)
    FVector CurrentLongRangeGunLookAtLocation;                                        // 0x1DF0 (size: 0xC)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry2_AnimGraphNode_BlendListByBool_208246EF4323739C85D425BDCBA50869();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry2_AnimGraphNode_SequenceEvaluator_CCD8193848346E0ED33DFBAB866B90E3();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry2_AnimGraphNode_SequenceEvaluator_D2EE5CF5432596CA50BFBE8C891CE3A3();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry2_AnimGraphNode_TwoWayBlend_55574D7242592FFEC622D7B8868A427D();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry2_AnimGraphNode_TwoWayBlend_869C828542A14B7F7C605F852309CFAE();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry2_AnimGraphNode_SequencePlayer_4A14EDD746445E0DE89C16A093C86EA2();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry2_AnimGraphNode_SequencePlayer_73D6E97F4EEF2308D5828C9B91EB50F9();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry2_AnimGraphNode_SequencePlayer_385B18A746FC866F7EB55F938A95891F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry2_AnimGraphNode_TransitionResult_B29D09F8489CFD6CA7749091A2604A42();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry2_AnimGraphNode_TransitionResult_944A5DA54F54196AEAE93F88BFB1EF14();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry2_AnimGraphNode_TransitionResult_AEC626A94F6637BC4069D9981C366D5F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry2_AnimGraphNode_TransitionResult_6B09E3124CC9A3CA5899EFA8981A8621();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry2_AnimGraphNode_TransitionResult_C761A8F9493DFE2A44A26B93DCFD7C30();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry2_AnimGraphNode_TransitionResult_F0B5E32D4C391909DB9368AD300A421E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry2_AnimGraphNode_TransitionResult_7463910F4F208D2F457B59B562A2B879();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry2_AnimGraphNode_TransitionResult_960260FF4616C6E2FB41FEBE51E6A4CA();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry2_AnimGraphNode_TransitionResult_263C0F804C74391E67C66F8BE26FCC95();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry2_AnimGraphNode_TransitionResult_A5A9B0804CCDD8F781A0EBA217C90AD9();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintInitializeAnimation();
    void ExecuteUbergraph_ABP_Sentry2(int32 EntryPoint);
}; // Size: 0x1DFC

#endif
