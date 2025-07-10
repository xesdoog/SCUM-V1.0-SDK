#ifndef UE4SS_SDK_UI_MalfunctionsCircularMenu_HPP
#define UE4SS_SDK_UI_MalfunctionsCircularMenu_HPP

class UUI_MalfunctionsCircularMenu_C : public UCircularMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* Image_82;                                                           // 0x02E8 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_UI_MalfunctionsCircularMenu(int32 EntryPoint);
}; // Size: 0x2F0

#endif
