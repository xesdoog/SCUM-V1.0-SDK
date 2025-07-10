#ifndef UE4SS_SDK_BP_Block21_LoadMagazine_HPP
#define UE4SS_SDK_BP_Block21_LoadMagazine_HPP

class UBP_Block21_LoadMagazine_C : public UItemActionSequenceLoadMagazine
{

    FName GetEndSectionName();
    float Begin();
    bool CanBeSelected(const class UItemActionDescription* Description);
}; // Size: 0x90

#endif
