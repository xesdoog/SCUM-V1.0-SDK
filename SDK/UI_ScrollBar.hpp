#ifndef UE4SS_SDK_UI_ScrollBar_HPP
#define UE4SS_SDK_UI_ScrollBar_HPP

class UUI_ScrollBar_C : public UCursedScrollBar
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UImage* SliderImage;                                                        // 0x0298 (size: 0x8)
    FVector2D Size;                                                                   // 0x02A0 (size: 0x8)
    float _currentValue;                                                              // 0x02A8 (size: 0x4)
    float _currentMaxCountOnScreen;                                                   // 0x02AC (size: 0x4)
    float _currentMaxValue;                                                           // 0x02B0 (size: 0x4)
    bool _shouldUpdate;                                                               // 0x02B4 (size: 0x1)
    float _scrollBarHeight;                                                           // 0x02B8 (size: 0x4)

    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseMove(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void SetToUpdateFromValue(float Value, float MaxCountOnScreen, float MaxValue);
    void UpdateFromValueInternal(float Value, float MaxCountOnScreen, float MaxValue);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void UpdateFromValueInternal2(float Value, float MaxCountOnScreen, float MaxValue);
    void CallSetToUpdateFromValue(float Value, float MaxCountOnScreen, float MaxValue);
    void ExecuteUbergraph_UI_ScrollBar(int32 EntryPoint);
}; // Size: 0x2BC

#endif
