#ifndef UE4SS_SDK_UI_Metabolism_CurrentStat_Light_HPP
#define UE4SS_SDK_UI_Metabolism_CurrentStat_Light_HPP

class UUI_Metabolism_CurrentStat_Light_C : public UMetabolismCurrentStatLight
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)

    void ExecuteUbergraph_UI_Metabolism_CurrentStat_Light(int32 EntryPoint);
}; // Size: 0x2C8

#endif
