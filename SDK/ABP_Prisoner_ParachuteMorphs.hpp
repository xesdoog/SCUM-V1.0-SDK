#ifndef UE4SS_SDK_ABP_Prisoner_ParachuteMorphs_HPP
#define UE4SS_SDK_ABP_Prisoner_ParachuteMorphs_HPP

class UABP_Prisoner_ParachuteMorphs_C : public UPrisonerAnimInstance_Parachute
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02E8 (size: 0x30)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;                      // 0x0318 (size: 0x50)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Prisoner_ParachuteMorphs(int32 EntryPoint);
}; // Size: 0x368

#endif
