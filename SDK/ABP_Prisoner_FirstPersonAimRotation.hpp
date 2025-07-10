#ifndef UE4SS_SDK_ABP_Prisoner_FirstPersonAimRotation_HPP
#define UE4SS_SDK_ABP_Prisoner_FirstPersonAimRotation_HPP

class UABP_Prisoner_FirstPersonAimRotation_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x02F8 (size: 0x118)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;     // 0x0410 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_8;                                  // 0x0430 (size: 0x108)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;     // 0x0538 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_7;                                  // 0x0558 (size: 0x108)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x0660 (size: 0xA0)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_6;                                  // 0x0700 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5;                                  // 0x0808 (size: 0x108)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0910 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0930 (size: 0x20)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;                            // 0x0950 (size: 0x158)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;                            // 0x0AA8 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;                              // 0x0AD0 (size: 0x28)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4;                                  // 0x0AF8 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3;                                  // 0x0C00 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;                                  // 0x0D08 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;                                  // 0x0E10 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x0F18 (size: 0x108)
    float FirstPersonAimPitch;                                                        // 0x1020 (size: 0x4)
    float FirstPersonAimYawDelta;                                                     // 0x1024 (size: 0x4)
    bool ShouldApplyArmsPitchCorrection;                                              // 0x1028 (size: 0x1)
    EPrisonerGroundStance stance;                                                     // 0x1029 (size: 0x1)

    void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_FirstPersonAimRotation_AnimGraphNode_ModifyBone_7FEAD1104F7E24B7BADE00849E93A0CF();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_FirstPersonAimRotation_AnimGraphNode_ModifyBone_5EAEB903484741C202D511A9F80ED66B();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_FirstPersonAimRotation_AnimGraphNode_ModifyBone_3D0C005446712A1FEEA6CC84D045C94D();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_FirstPersonAimRotation_AnimGraphNode_ModifyBone_7EF1CC914243739F132643878A96F729();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_FirstPersonAimRotation_AnimGraphNode_ModifyBone_942654FD4E41254B19E4E99849EA6B1A();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_FirstPersonAimRotation_AnimGraphNode_ModifyBone_9FA2B355412280F805FC40811E4A8D40();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_FirstPersonAimRotation_AnimGraphNode_ModifyBone_8811180F4208B187BA6F7E9E903E48F4();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_FirstPersonAimRotation_AnimGraphNode_ModifyBone_4F3E79E542374E72B87472A8A11E27D9();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_FirstPersonAimRotation_AnimGraphNode_ModifyBone_0FAC8D61494943BE4F3F04AC005DA2EF();
    void ExecuteUbergraph_ABP_Prisoner_FirstPersonAimRotation(int32 EntryPoint);
}; // Size: 0x102A

#endif
