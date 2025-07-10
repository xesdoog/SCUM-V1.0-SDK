#ifndef UE4SS_SDK_PieProgressBar_HPP
#define UE4SS_SDK_PieProgressBar_HPP

class UPieProgressBar_C : public UQuartalPieProgressBar
{
    FLinearColor AlarmColor;                                                          // 0x0280 (size: 0x10)
    FLinearColor NormalColor;                                                         // 0x0290 (size: 0x10)
    FLinearColor OuterCircleColor;                                                    // 0x02A0 (size: 0x10)
    FLinearColor CircularBarColor;                                                    // 0x02B0 (size: 0x10)

}; // Size: 0x2C0

#endif
