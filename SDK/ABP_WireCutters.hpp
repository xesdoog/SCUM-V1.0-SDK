#ifndef UE4SS_SDK_ABP_WireCutters_HPP
#define UE4SS_SDK_ABP_WireCutters_HPP

class UABP_WireCutters_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_RefPose AnimGraphNode_LocalRefPose;                                     // 0x02F8 (size: 0x18)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x0310 (size: 0x48)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_WireCutters(int32 EntryPoint);
}; // Size: 0x358

#endif
