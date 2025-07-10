#ifndef UE4SS_SDK_BP_SphereMotionTriggerComponent_HPP
#define UE4SS_SDK_BP_SphereMotionTriggerComponent_HPP

class UBP_SphereMotionTriggerComponent_C : public USphereMotionTriggerComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0550 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SphereMotionTriggerComponent(int32 EntryPoint);
}; // Size: 0x558

#endif
