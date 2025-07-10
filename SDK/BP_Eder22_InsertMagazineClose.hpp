#ifndef UE4SS_SDK_BP_Eder22_InsertMagazineClose_HPP
#define UE4SS_SDK_BP_Eder22_InsertMagazineClose_HPP

class UBP_Eder22_InsertMagazineClose_C : public UInsertMagazine
{
    int32 MaxAmmoCount;                                                               // 0x0090 (size: 0x4)

    bool CanExecuteUsingData(const FWeaponReloadData& Data);
}; // Size: 0x94

#endif
