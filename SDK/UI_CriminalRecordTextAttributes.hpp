#ifndef UE4SS_SDK_UI_CriminalRecordTextAttributes_HPP
#define UE4SS_SDK_UI_CriminalRecordTextAttributes_HPP

class UUI_CriminalRecordTextAttributes_C : public UCriminalRecordText
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03F8 (size: 0x8)
    class UProgressBar* ProgressBar_1;                                                // 0x0400 (size: 0x8)
    class USizeBox* TextHolder;                                                       // 0x0408 (size: 0x8)
    float MaxValue;                                                                   // 0x0410 (size: 0x4)

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_CriminalRecordTextAttributes(int32 EntryPoint);
}; // Size: 0x414

#endif
