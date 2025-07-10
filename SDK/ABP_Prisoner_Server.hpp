#ifndef UE4SS_SDK_ABP_Prisoner_Server_HPP
#define UE4SS_SDK_ABP_Prisoner_Server_HPP

class UABP_Prisoner_Server_C : public UPrisonerAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1050 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x1058 (size: 0x30)
    FAnimNode_RefPose AnimGraphNode_LocalRefPose;                                     // 0x1088 (size: 0x18)
    FAnimNode_Slot AnimGraphNode_Slot_31;                                             // 0x10A0 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_30;                                             // 0x10E8 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_29;                                             // 0x1130 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_28;                                             // 0x1178 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_27;                                             // 0x11C0 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_26;                                             // 0x1208 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_25;                                             // 0x1250 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_24;                                             // 0x1298 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_23;                                             // 0x12E0 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_22;                                             // 0x1328 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_21;                                             // 0x1370 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_20;                                             // 0x13B8 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_19;                                             // 0x1400 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_18;                                             // 0x1448 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_17;                                             // 0x1490 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_16;                                             // 0x14D8 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_15;                                             // 0x1520 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_14;                                             // 0x1568 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_13;                                             // 0x15B0 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_12;                                             // 0x15F8 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_11;                                             // 0x1640 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_10;                                             // 0x1688 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_9;                                              // 0x16D0 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_8;                                              // 0x1718 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_7;                                              // 0x1760 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_6;                                              // 0x17A8 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_5;                                              // 0x17F0 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_4;                                              // 0x1838 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_3;                                              // 0x1880 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_2;                                              // 0x18C8 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_1;                                              // 0x1910 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x1958 (size: 0x48)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Prisoner_Server(int32 EntryPoint);
}; // Size: 0x19A0

#endif
