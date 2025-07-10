enum class EAudioFormat {
    Auto = 0,
    Mp3 = 1,
    Wav = 2,
    Flac = 3,
    OggVorbis = 4,
    Invalid = 5,
    EAudioFormat_MAX = 6,
};

enum class ERAWAudioFormat {
    Int16 = 0,
    Int32 = 1,
    UInt8 = 2,
    Float32 = 3,
    ERAWAudioFormat_MAX = 4,
};

enum class ETranscodingStatus {
    SuccessfulImport = 0,
    FailedToReadAudioDataArray = 1,
    SoundWaveDeclarationError = 2,
    InvalidAudioFormat = 3,
    AudioDoesNotExist = 4,
    LoadFileToArrayError = 5,
    ETranscodingStatus_MAX = 6,
};

enum class EWAVEncodingFormat {
    FORMAT_PCM = 0,
    FORMAT_ADPCM = 1,
    FORMAT_IEEE_FLOAT = 2,
    FORMAT_ALAW = 3,
    FORMAT_MULAW = 4,
    FORMAT_DVI_ADPCM = 5,
    FORMAT_EXTENSIBLE = 6,
    FORMAT_MAX = 7,
};

