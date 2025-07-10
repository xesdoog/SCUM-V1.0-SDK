#ifndef UE4SS_SDK_UI_CriminalRecordTextR_HPP
#define UE4SS_SDK_UI_CriminalRecordTextR_HPP

class UUI_CriminalRecordTextR_C : public UCriminalRecordText
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03F8 (size: 0x8)
    class UImage* Image_37;                                                           // 0x0400 (size: 0x8)
    class UScaleBox* TextHolder;                                                      // 0x0408 (size: 0x8)

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_UI_CriminalRecordTextR(int32 EntryPoint);
}; // Size: 0x410

#endif
