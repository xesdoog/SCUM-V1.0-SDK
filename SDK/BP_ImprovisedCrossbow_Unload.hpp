#ifndef UE4SS_SDK_BP_ImprovisedCrossbow_Unload_HPP
#define UE4SS_SDK_BP_ImprovisedCrossbow_Unload_HPP

class UBP_ImprovisedCrossbow_Unload_C : public URemoveCartridge
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0058 (size: 0x8)

    void OnActionAnimNotify(ECharacterActionNotifyType notifyType);
    void ExecuteUbergraph_BP_ImprovisedCrossbow_Unload(int32 EntryPoint);
}; // Size: 0x60

#endif
