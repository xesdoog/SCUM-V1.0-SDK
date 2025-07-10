#ifndef UE4SS_SDK_UI_ExpandableContainer_HPP
#define UE4SS_SDK_UI_ExpandableContainer_HPP

class UUI_ExpandableContainer_C : public UExpandableContainer
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0288 (size: 0x8)
    class UImage* ContentBackgroundImage;                                             // 0x0290 (size: 0x8)
    class UHorizontalBox* ContentHorizontalBox;                                       // 0x0298 (size: 0x8)
    class UOverlay* ContentOverlay;                                                   // 0x02A0 (size: 0x8)
    class UButton* ExpandButton;                                                      // 0x02A8 (size: 0x8)
    class UImage* ExpandedSpacingLine;                                                // 0x02B0 (size: 0x8)
    class UImage* TitleBackgroundImage;                                               // 0x02B8 (size: 0x8)
    int32 FontSize;                                                                   // 0x02C0 (size: 0x4)
    bool EnableExpandedSpacingLine;                                                   // 0x02C4 (size: 0x1)
    FMargin TitlePadding;                                                             // 0x02C8 (size: 0x10)
    bool _isMinimized;                                                                // 0x02D8 (size: 0x1)
    FText Title;                                                                      // 0x02E0 (size: 0x18)
    FMargin ContentPadding;                                                           // 0x02F8 (size: 0x10)
    bool IsContentBackgroundImageVisible;                                             // 0x0308 (size: 0x1)
    int32 _alarmsCount;                                                               // 0x030C (size: 0x4)
    bool _isUnderAlarm;                                                               // 0x0310 (size: 0x1)
    class UUI_ExpandableContainer_C* ParentContainer;                                 // 0x0318 (size: 0x8)
    FUI_ExpandableContainer_COnExpandChanged OnExpandChanged;                         // 0x0320 (size: 0x10)
    void OnExpandChanged(class UUI_ExpandableContainer_C* container, bool isMinimized);
    FMargin ContentMargins;                                                           // 0x0330 (size: 0x10)
    bool OnlySettableByChildren;                                                      // 0x0340 (size: 0x1)

    void SetParentContainer(class UUI_ExpandableContainer_C* container);
    void DisableAlarm();
    void EnableAlarm();
    void CheckAlarm();
    void DecrementAlarmsCount();
    void IncrementAlarmsCount();
    void Minimize();
    void Maximize();
    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature();
    void OnSynchronizeProperties_1();
    void ExecuteUbergraph_UI_ExpandableContainer(int32 EntryPoint);
    void OnExpandChanged__DelegateSignature(class UUI_ExpandableContainer_C* container, bool isMinimized);
}; // Size: 0x341

#endif
