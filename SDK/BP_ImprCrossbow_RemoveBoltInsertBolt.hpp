#ifndef UE4SS_SDK_BP_ImprCrossbow_RemoveBoltInsertBolt_HPP
#define UE4SS_SDK_BP_ImprCrossbow_RemoveBoltInsertBolt_HPP

class UBP_ImprCrossbow_RemoveBoltInsertBolt_C : public UInsertCartridge
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A0 (size: 0x8)

    bool CanExecuteUsingData(const FWeaponReloadData& Data);
    void OnActionAnimNotify(ECharacterActionNotifyType notifyType);
    void ExecuteUbergraph_BP_ImprCrossbow_RemoveBoltInsertBolt(int32 EntryPoint);
}; // Size: 0xA8

#endif
