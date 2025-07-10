#ifndef UE4SS_SDK_BP_Eder22_Reload_Event_Opened_HPP
#define UE4SS_SDK_BP_Eder22_Reload_Event_Opened_HPP

class UBP_Eder22_Reload_Event_Opened_C : public UEventInsertMagazine
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0098 (size: 0x8)
    int32 MaxAmmoCount;                                                               // 0x00A0 (size: 0x4)

    void OnActionAnimNotify(ECharacterActionNotifyType notifyType);
    void ExecuteUbergraph_BP_Eder22_Reload_Event_Opened(int32 EntryPoint);
}; // Size: 0xA4

#endif
