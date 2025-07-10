#ifndef UE4SS_SDK_ABP_Prisoner_Grappled_HPP
#define UE4SS_SDK_ABP_Prisoner_Grappled_HPP

class UABP_Prisoner_Grappled_C : public UPrisonerAnimInstance_Grappled
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x02F8 (size: 0x80)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Prisoner_Grappled(int32 EntryPoint);
}; // Size: 0x378

#endif
