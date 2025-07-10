#ifndef UE4SS_SDK_UI_InspectedItem_HPP
#define UE4SS_SDK_UI_InspectedItem_HPP

class UUI_InspectedItem_C : public UInspectedItemWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    class UImage* BackgroundImage;                                                    // 0x0288 (size: 0x8)
    class UImage* ComponentOrToolImage;                                               // 0x0290 (size: 0x8)

    void SetIsToolForSomething(bool isTool);
    void ExecuteUbergraph_UI_InspectedItem(int32 EntryPoint);
}; // Size: 0x298

#endif
