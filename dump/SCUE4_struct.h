// ScriptStruct SCUE4.SafeColor
// Size: 0x98 (Inherited: 0x00)
struct FSafeColor {
	struct FString Internal; // 0x00(0x10)
	struct FString TrueR; // 0x10(0x10)
	struct FString TrueG; // 0x20(0x10)
	struct FString TrueB; // 0x30(0x10)
	struct FString TrueA; // 0x40(0x10)
	struct FString ShiftR; // 0x50(0x10)
	struct FString ShiftG; // 0x60(0x10)
	struct FString ShiftB; // 0x70(0x10)
	struct FString ShiftA; // 0x80(0x10)
	char Flag; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
};

// ScriptStruct SCUE4.SafeVector4D
// Size: 0x98 (Inherited: 0x00)
struct FSafeVector4D {
	struct FString Internal; // 0x00(0x10)
	struct FString TrueX; // 0x10(0x10)
	struct FString TrueY; // 0x20(0x10)
	struct FString TrueZ; // 0x30(0x10)
	struct FString TrueW; // 0x40(0x10)
	struct FString ShiftX; // 0x50(0x10)
	struct FString ShiftY; // 0x60(0x10)
	struct FString ShiftZ; // 0x70(0x10)
	struct FString ShiftW; // 0x80(0x10)
	char Flag; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
};

// ScriptStruct SCUE4.SafeVector2D
// Size: 0x58 (Inherited: 0x00)
struct FSafeVector2D {
	struct FString Internal; // 0x00(0x10)
	struct FString TrueX; // 0x10(0x10)
	struct FString TrueY; // 0x20(0x10)
	struct FString ShiftX; // 0x30(0x10)
	struct FString ShiftY; // 0x40(0x10)
	char Flag; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct SCUE4.SafeText
// Size: 0x38 (Inherited: 0x00)
struct FSafeText {
	struct FString Internal; // 0x00(0x10)
	struct FString Base; // 0x10(0x10)
	struct FString Shift; // 0x20(0x10)
	char Flag; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct SCUE4.SafeFloat
// Size: 0x38 (Inherited: 0x00)
struct FSafeFloat {
	struct FString Internal; // 0x00(0x10)
	struct FString Base; // 0x10(0x10)
	struct FString Shift; // 0x20(0x10)
	char Flag; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct SCUE4.SafeName
// Size: 0x38 (Inherited: 0x00)
struct FSafeName {
	struct FString Internal; // 0x00(0x10)
	struct FString Base; // 0x10(0x10)
	struct FString Shift; // 0x20(0x10)
	char Flag; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct SCUE4.SafeBool
// Size: 0x38 (Inherited: 0x00)
struct FSafeBool {
	struct FString Internal; // 0x00(0x10)
	struct FString Base; // 0x10(0x10)
	struct FString Shift; // 0x20(0x10)
	char Flag; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct SCUE4.SafeTransform
// Size: 0x168 (Inherited: 0x00)
struct FSafeTransform {
	struct FSafeVector3D Scale; // 0x00(0x78)
	struct FSafeVector3D position; // 0x78(0x78)
	struct FSafeRotator Rotation; // 0xf0(0x78)
};

// ScriptStruct SCUE4.SafeRotator
// Size: 0x78 (Inherited: 0x00)
struct FSafeRotator {
	struct FString Internal; // 0x00(0x10)
	struct FString TrueX; // 0x10(0x10)
	struct FString TrueY; // 0x20(0x10)
	struct FString TrueZ; // 0x30(0x10)
	struct FString ShiftX; // 0x40(0x10)
	struct FString ShiftY; // 0x50(0x10)
	struct FString ShiftZ; // 0x60(0x10)
	char Flag; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct SCUE4.SafeVector3D
// Size: 0x78 (Inherited: 0x00)
struct FSafeVector3D {
	struct FString Internal; // 0x00(0x10)
	struct FString TrueX; // 0x10(0x10)
	struct FString TrueY; // 0x20(0x10)
	struct FString TrueZ; // 0x30(0x10)
	struct FString ShiftX; // 0x40(0x10)
	struct FString ShiftY; // 0x50(0x10)
	struct FString ShiftZ; // 0x60(0x10)
	char Flag; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct SCUE4.SafeByte
// Size: 0x38 (Inherited: 0x00)
struct FSafeByte {
	struct FString Internal; // 0x00(0x10)
	struct FString Base; // 0x10(0x10)
	struct FString Shift; // 0x20(0x10)
	char Flag; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct SCUE4.SafeInt
// Size: 0x38 (Inherited: 0x00)
struct FSafeInt {
	struct FString Internal; // 0x00(0x10)
	struct FString Base; // 0x10(0x10)
	struct FString Shift; // 0x20(0x10)
	char Flag; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct SCUE4.SafeString
// Size: 0x38 (Inherited: 0x00)
struct FSafeString {
	struct FString Internal; // 0x00(0x10)
	struct FString Base; // 0x10(0x10)
	struct FString Shift; // 0x20(0x10)
	char Flag; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

