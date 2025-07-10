#ifndef UE4SS_SDK_BP_Eder22_Reload_Event_Closed_HPP
#define UE4SS_SDK_BP_Eder22_Reload_Event_Closed_HPP

class UBP_Eder22_Reload_Event_Closed_C : public UEventInsertMagazine
{
    int32 MaxAmmoCount;                                                               // 0x0098 (size: 0x4)

    bool CanExecuteUsingData(const FWeaponReloadData& Data);
}; // Size: 0x9C

#endif
