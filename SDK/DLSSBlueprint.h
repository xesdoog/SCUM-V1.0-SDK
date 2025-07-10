// Class DLSSBlueprint.DLSSLibrary
// Size: 0x28 (Inherited: 0x28)
struct UDLSSLibrary : UBlueprintFunctionLibrary {

	void SetDLSSSharpness(float Sharpness); // Function DLSSBlueprint.DLSSLibrary.SetDLSSSharpness // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x967530
	void SetDLSSMode(enum class UDLSSMode DLSSMode); // Function DLSSBlueprint.DLSSLibrary.SetDLSSMode // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x9674c0
	enum class UDLSSSupport QueryDLSSSupport(); // Function DLSSBlueprint.DLSSLibrary.QueryDLSSSupport // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x967490
	enum class UDLSSSupport QueryDLSSRRSupport(); // Function DLSSBlueprint.DLSSLibrary.QueryDLSSRRSupport // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x967460
	bool IsDLSSSupported(); // Function DLSSBlueprint.DLSSLibrary.IsDLSSSupported // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x967430
	bool IsDLSSRRSupported(); // Function DLSSBlueprint.DLSSLibrary.IsDLSSRRSupported // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x967400
	bool IsDLSSRREnabled(); // Function DLSSBlueprint.DLSSLibrary.IsDLSSRREnabled // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x9673d0
	bool IsDLSSModeSupported(enum class UDLSSMode DLSSMode); // Function DLSSBlueprint.DLSSLibrary.IsDLSSModeSupported // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x967350
	bool IsDLSSEnabled(); // Function DLSSBlueprint.DLSSLibrary.IsDLSSEnabled // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x967320
	bool IsDLAAEnabled(); // Function DLSSBlueprint.DLSSLibrary.IsDLAAEnabled // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x9672f0
	struct TArray<enum class UDLSSMode> GetSupportedDLSSModes(); // Function DLSSBlueprint.DLSSLibrary.GetSupportedDLSSModes // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x967270
	float GetDLSSSharpness(); // Function DLSSBlueprint.DLSSLibrary.GetDLSSSharpness // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x967210
	void GetDLSSScreenPercentageRange(float& MinScreenPercentage, float& MaxScreenPercentage); // Function DLSSBlueprint.DLSSLibrary.GetDLSSScreenPercentageRange // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x967130
	void GetDLSSRRMinimumDriverVersion(int32_t& MinDriverVersionMajor, int32_t& MinDriverVersionMinor); // Function DLSSBlueprint.DLSSLibrary.GetDLSSRRMinimumDriverVersion // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x967050
	void GetDLSSModeInformation(enum class UDLSSMode DLSSMode, struct FVector2D ScreenResolution, bool& bIsSupported, float& OptimalScreenPercentage, bool& bIsFixedScreenPercentage, float& MinScreenPercentage, float& MaxScreenPercentage, float& OptimalSharpness); // Function DLSSBlueprint.DLSSLibrary.GetDLSSModeInformation // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x966db0
	enum class UDLSSMode GetDLSSMode(); // Function DLSSBlueprint.DLSSLibrary.GetDLSSMode // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x966d80
	void GetDLSSMinimumDriverVersion(int32_t& MinDriverVersionMajor, int32_t& MinDriverVersionMinor); // Function DLSSBlueprint.DLSSLibrary.GetDLSSMinimumDriverVersion // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x966ca0
	enum class UDLSSMode GetDefaultDLSSMode(); // Function DLSSBlueprint.DLSSLibrary.GetDefaultDLSSMode // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x967240
	void EnableDLSSRR(bool bEnabled); // Function DLSSBlueprint.DLSSLibrary.EnableDLSSRR // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x966c20
	void EnableDLSS(bool bEnabled); // Function DLSSBlueprint.DLSSLibrary.EnableDLSS // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x966ba0
	void EnableDLAA(bool bEnabled); // Function DLSSBlueprint.DLSSLibrary.EnableDLAA // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x966b20
};

