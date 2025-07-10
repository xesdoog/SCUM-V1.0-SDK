#ifndef UE4SS_SDK_UI_AdjustableSeparator_HPP
#define UE4SS_SDK_UI_AdjustableSeparator_HPP

class UUI_AdjustableSeparator_C : public UBadAdjustableSeparator
{
    class UImage* Image_0;                                                            // 0x0278 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0280 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0288 (size: 0x8)
    class UNamedSlot* UnderSlot;                                                      // 0x0290 (size: 0x8)
    class UNamedSlot* UpperSlot;                                                      // 0x0298 (size: 0x8)
    bool _shouldMove;                                                                 // 0x02A0 (size: 0x1)
    float MinHeight;                                                                  // 0x02A4 (size: 0x4)

    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnPreviewMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseMove(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
}; // Size: 0x2A8

#endif
