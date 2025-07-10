#ifndef UE4SS_SDK_UI_CircularMenu_HPP
#define UE4SS_SDK_UI_CircularMenu_HPP

class UUI_CircularMenu_C : public UCircularMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_UI_CircularMenu(int32 EntryPoint);
}; // Size: 0x2E8

#endif
