#ifndef UE4SS_SDK_BP_Wristwatch_HPP
#define UE4SS_SDK_BP_Wristwatch_HPP

class ABP_Wristwatch_C : public AWristwatch
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B8 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void SetDisplayBrightness(float Value);
    void ExecuteUbergraph_BP_Wristwatch(int32 EntryPoint);
}; // Size: 0x2C0

#endif
