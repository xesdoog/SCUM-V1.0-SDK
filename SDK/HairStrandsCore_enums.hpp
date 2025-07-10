enum class EFollicleMaskChannel {
    R = 0,
    G = 1,
    B = 2,
    A = 3,
    EFollicleMaskChannel_MAX = 4,
};

enum class EGroomBindingMeshType {
    SkeletalMesh = 0,
    GeometryCache = 1,
    EGroomBindingMeshType_MAX = 2,
};

enum class EGroomCacheAttributes {
    None = 0,
    Position = 1,
    Width = 2,
    Color = 4,
    EGroomCacheAttributes_MAX = 5,
};

enum class EGroomCacheType {
    None = 0,
    Strands = 1,
    Guides = 2,
    EGroomCacheType_MAX = 3,
};

enum class EGroomGeometryType {
    Strands = 0,
    Cards = 1,
    Meshes = 2,
    EGroomGeometryType_MAX = 3,
};

enum class EGroomInterpolationQuality {
    Low = 0,
    Medium = 1,
    High = 2,
    Unknown = 3,
    EGroomInterpolationQuality_MAX = 4,
};

enum class EGroomInterpolationType {
    None = 0,
    RigidTransform = 2,
    OffsetTransform = 4,
    SmoothTransform = 8,
    EGroomInterpolationType_MAX = 9,
};

enum class EGroomInterpolationWeight {
    Parametric = 0,
    Root = 1,
    Index = 2,
    Unknown = 3,
    EGroomInterpolationWeight_MAX = 4,
};

enum class EGroomNiagaraSolvers {
    None = 0,
    CosseratRods = 2,
    AngularSprings = 4,
    CustomSolver = 8,
    EGroomNiagaraSolvers_MAX = 9,
};

enum class EGroomStrandsSize {
    None = 0,
    Size2 = 2,
    Size4 = 4,
    Size8 = 8,
    Size16 = 16,
    Size32 = 32,
    EGroomStrandsSize_MAX = 33,
};

enum class EHairCardsClusterType {
    Low = 0,
    High = 1,
    EHairCardsClusterType_MAX = 2,
};

enum class EHairCardsGenerationType {
    CardsCount = 0,
    UseGuides = 1,
    EHairCardsGenerationType_MAX = 2,
};

enum class EHairCardsSourceType {
    Procedural = 0,
    Imported = 1,
    EHairCardsSourceType_MAX = 2,
};

enum class EHairInterpolationQuality {
    Low = 0,
    Medium = 1,
    High = 2,
    Unknown = 3,
    EHairInterpolationQuality_MAX = 4,
};

enum class EHairInterpolationWeight {
    Parametric = 0,
    Root = 1,
    Index = 2,
    Unknown = 3,
    EHairInterpolationWeight_MAX = 4,
};

enum class EHairLODSelectionType {
    Cpu = 0,
    Gpu = 1,
    EHairLODSelectionType_MAX = 2,
};

enum class EStrandsTexturesMeshType {
    Static = 0,
    Skeletal = 1,
    EStrandsTexturesMeshType_MAX = 2,
};

enum class EStrandsTexturesTraceType {
    TraceInside = 0,
    TraceOuside = 1,
    TraceBidirectional = 2,
    EStrandsTexturesTraceType_MAX = 3,
};

