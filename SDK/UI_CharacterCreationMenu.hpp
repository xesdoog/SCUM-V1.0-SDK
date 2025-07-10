#ifndef UE4SS_SDK_UI_CharacterCreationMenu_HPP
#define UE4SS_SDK_UI_CharacterCreationMenu_HPP

class UUI_CharacterCreationMenu_C : public UCharacterCreationMenu
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0520 (size: 0x8)
    class UImage* BackgroundTint;                                                     // 0x0528 (size: 0x8)
    class UImage* Image;                                                              // 0x0530 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0538 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0540 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0548 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0550 (size: 0x8)
    class UImage* Image_4;                                                            // 0x0558 (size: 0x8)
    class UImage* Image_5;                                                            // 0x0560 (size: 0x8)
    class UImage* Image_6;                                                            // 0x0568 (size: 0x8)
    class UImage* Image_7;                                                            // 0x0570 (size: 0x8)
    class UImage* Image_9;                                                            // 0x0578 (size: 0x8)
    class UImage* Image_90;                                                           // 0x0580 (size: 0x8)
    class UImage* Image_92;                                                           // 0x0588 (size: 0x8)
    class UUI_CC_NonSelectableText_C* SkillPointDisplayBonus;                         // 0x0590 (size: 0x8)
    class UTextBlock* T_AttributeConfirmation;                                        // 0x0598 (size: 0x8)
    class UTextBlock* T_SkillConfirmation;                                            // 0x05A0 (size: 0x8)

    void PlayPrisonerEnteringSequence(bool backwards);
    void OnUserProfileCreated();
    void ExecuteUbergraph_UI_CharacterCreationMenu(int32 EntryPoint);
}; // Size: 0x5A8

#endif
