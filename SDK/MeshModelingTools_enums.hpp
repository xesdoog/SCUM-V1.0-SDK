enum class EAlignObjectsAlignToOptions {
    FirstSelected = 0,
    LastSelected = 1,
    Combined = 2,
    EAlignObjectsAlignToOptions_MAX = 3,
};

enum class EAlignObjectsAlignTypes {
    Pivots = 0,
    BoundingBoxes = 1,
    EAlignObjectsAlignTypes_MAX = 2,
};

enum class EAlignObjectsBoxPoint {
    Center = 0,
    Bottom = 1,
    Top = 2,
    Left = 3,
    Right = 4,
    Front = 5,
    Back = 6,
    Min = 7,
    Max = 8,
};

enum class EBakeMapType {
    TangentSpaceNormalMap = 0,
    Occlusion = 1,
    Curvature = 2,
    Texture2DImage = 3,
    NormalImage = 4,
    FaceNormalImage = 5,
    PositionImage = 6,
    EBakeMapType_MAX = 7,
};

enum class EBakeScaleMethod {
    BakeFullScale = 0,
    BakeNonuniformScale = 1,
    DoNotBakeScale = 2,
    EBakeScaleMethod_MAX = 3,
};

enum class EBakeTextureResolution {
    Resolution16 = 16,
    Resolution32 = 32,
    Resolution64 = 64,
    Resolution128 = 128,
    Resolution256 = 256,
    Resolution512 = 512,
    Resolution1024 = 1024,
    Resolution2048 = 2048,
    Resolution4096 = 4096,
    Resolution8192 = 8192,
    EBakeTextureResolution_MAX = 8193,
};

enum class EBakedCurvatureClampMode {
    None = 0,
    Positive = 1,
    Negative = 2,
    EBakedCurvatureClampMode_MAX = 3,
};

enum class EBakedCurvatureColorMode {
    Grayscale = 0,
    RedBlue = 1,
    RedGreenBlue = 2,
    EBakedCurvatureColorMode_MAX = 3,
};

enum class EBakedCurvatureTypeMode {
    MeanAverage = 0,
    Max = 1,
    Min = 2,
    Gaussian = 3,
};

enum class ECollisionGeometryMode {
    Default = 0,
    SimpleAndComplex = 1,
    UseSimpleAsComplex = 2,
    UseComplexAsSimple = 3,
    ECollisionGeometryMode_MAX = 4,
};

enum class ECollisionGeometryType {
    KeepExisting = 0,
    AlignedBoxes = 1,
    OrientedBoxes = 2,
    MinimalSpheres = 3,
    Capsules = 4,
    ConvexHulls = 5,
    SweptHulls = 6,
    MinVolume = 10,
    None = 11,
    ECollisionGeometryType_MAX = 12,
};

enum class ECombineTargetType {
    NewAsset = 0,
    FirstInputAsset = 1,
    LastInputAsset = 2,
    ECombineTargetType_MAX = 3,
};

enum class EConvertToPolygonsMode {
    FaceNormalDeviation = 0,
    FromUVISlands = 1,
    EConvertToPolygonsMode_MAX = 2,
};

enum class EDisplaceMeshToolDisplaceType {
    Constant = 0,
    RandomNoise = 1,
    PerlinNoise = 2,
    DisplacementMap = 3,
    SineWave = 4,
    EDisplaceMeshToolDisplaceType_MAX = 5,
};

enum class EDrawPolyPathExtrudeDirection {
    SelectionNormal = 0,
    WorldX = 1,
    WorldY = 2,
    WorldZ = 3,
    LocalX = 4,
    LocalY = 5,
    LocalZ = 6,
    EDrawPolyPathExtrudeDirection_MAX = 7,
};

enum class EDrawPolyPathHeightMode {
    Interactive = 0,
    Constant = 1,
    EDrawPolyPathHeightMode_MAX = 2,
};

enum class EDrawPolyPathOutputMode {
    Ribbon = 0,
    Extrusion = 1,
    Ramp = 2,
    EDrawPolyPathOutputMode_MAX = 3,
};

enum class EDrawPolyPathWidthMode {
    Interactive = 0,
    Constant = 1,
    EDrawPolyPathWidthMode_MAX = 2,
};

enum class EDrawPolygonDrawMode {
    Freehand = 0,
    Circle = 1,
    Square = 2,
    Rectangle = 3,
    RoundedRectangle = 4,
    HoleyCircle = 5,
    EDrawPolygonDrawMode_MAX = 6,
};

enum class EDrawPolygonOutputMode {
    MeshedPolygon = 0,
    ExtrudedConstant = 1,
    ExtrudedInteractive = 2,
    EDrawPolygonOutputMode_MAX = 3,
};

enum class EDynamicMeshSculptBrushType {
    Move = 0,
    PullKelvin = 1,
    PullSharpKelvin = 2,
    Smooth = 3,
    Offset = 4,
    SculptView = 5,
    SculptMax = 6,
    Inflate = 7,
    ScaleKelvin = 8,
    Pinch = 9,
    TwistKelvin = 10,
    Flatten = 11,
    Plane = 12,
    PlaneViewAligned = 13,
    FixedPlane = 14,
    Resample = 15,
    LastValue = 16,
    EDynamicMeshSculptBrushType_MAX = 17,
};

enum class EEdgeLoopInsertionMode {
    Retriangulate = 0,
    PlaneCut = 1,
    EEdgeLoopInsertionMode_MAX = 2,
};

enum class EEdgeLoopPositioningMode {
    Even = 0,
    ProportionOffset = 1,
    DistanceOffset = 2,
    EEdgeLoopPositioningMode_MAX = 3,
};

enum class EEditMeshPolygonsToolActions {
    NoAction = 0,
    PlaneCut = 1,
    Extrude = 2,
    Offset = 3,
    Inset = 4,
    Outset = 5,
    Merge = 6,
    Delete = 7,
    CutFaces = 8,
    RecalculateNormals = 9,
    FlipNormals = 10,
    Retriangulate = 11,
    Decompose = 12,
    Disconnect = 13,
    CollapseEdge = 14,
    WeldEdges = 15,
    StraightenEdge = 16,
    FillHole = 17,
    PlanarProjectionUV = 18,
    PokeSingleFace = 19,
    SplitSingleEdge = 20,
    FlipSingleEdge = 21,
    CollapseSingleEdge = 22,
    EEditMeshPolygonsToolActions_MAX = 23,
};

enum class EEditPivotSnapDragRotationMode {
    Ignore = 0,
    Align = 1,
    AlignFlipped = 2,
    LastValue = 3,
    EEditPivotSnapDragRotationMode_MAX = 4,
};

enum class EEditPivotToolActions {
    NoAction = 0,
    Center = 1,
    Bottom = 2,
    Top = 3,
    Left = 4,
    Right = 5,
    Front = 6,
    Back = 7,
    EEditPivotToolActions_MAX = 8,
};

enum class EGroupBoundaryConstraint {
    Fixed = 7,
    Refine = 5,
    Free = 1,
    Ignore = 0,
    EGroupBoundaryConstraint_MAX = 8,
};

enum class EGroupEdgeInsertionMode {
    Retriangulate = 0,
    PlaneCut = 1,
    EGroupEdgeInsertionMode_MAX = 2,
};

enum class EGroupTopologyDeformationStrategy {
    Linear = 0,
    Laplacian = 1,
    EGroupTopologyDeformationStrategy_MAX = 2,
};

enum class EHoleFillToolActions {
    NoAction = 0,
    SelectAll = 1,
    ClearSelection = 2,
    EHoleFillToolActions_MAX = 3,
};

enum class ELocalFrameMode {
    FromObject = 0,
    FromGeometry = 1,
    ELocalFrameMode_MAX = 2,
};

enum class EMakeMeshPivotLocation {
    Base = 0,
    Centered = 1,
    Top = 2,
    EMakeMeshPivotLocation_MAX = 3,
};

enum class EMakeMeshPlacementType {
    GroundPlane = 0,
    OnScene = 1,
    EMakeMeshPlacementType_MAX = 2,
};

enum class EMakeMeshPolygroupMode {
    Single = 0,
    PerFace = 1,
    PerQuad = 2,
    EMakeMeshPolygroupMode_MAX = 3,
};

enum class EMaterialBoundaryConstraint {
    Fixed = 7,
    Refine = 5,
    Free = 1,
    Ignore = 0,
    EMaterialBoundaryConstraint_MAX = 8,
};

enum class EMeshAttributePaintToolActions {
    NoAction = 0,
    EMeshAttributePaintToolActions_MAX = 1,
};

enum class EMeshBoundaryConstraint {
    Fixed = 7,
    Refine = 5,
    Free = 1,
    EMeshBoundaryConstraint_MAX = 8,
};

enum class EMeshEditingMaterialModes {
    ExistingMaterial = 0,
    Diffuse = 1,
    Grey = 2,
    Soft = 3,
    TangentNormal = 4,
    Custom = 5,
    EMeshEditingMaterialModes_MAX = 6,
};

enum class EMeshFacesColorMode {
    None = 0,
    ByGroup = 1,
    ByMaterialID = 2,
    ByUVIsland = 3,
    EMeshFacesColorMode_MAX = 4,
};

enum class EMeshSculptFalloffType {
    Smooth = 0,
    Linear = 1,
    Inverse = 2,
    Round = 3,
    BoxSmooth = 4,
    BoxLinear = 5,
    BoxInverse = 6,
    BoxRound = 7,
    LastValue = 8,
    EMeshSculptFalloffType_MAX = 9,
};

enum class EMeshSelectionToolActions {
    NoAction = 0,
    SelectAll = 1,
    ClearSelection = 2,
    InvertSelection = 3,
    GrowSelection = 4,
    ShrinkSelection = 5,
    ExpandToConnected = 6,
    SelectLargestComponentByTriCount = 7,
    SelectLargestComponentByArea = 8,
    OptimizeSelection = 9,
    DeleteSelected = 10,
    DisconnectSelected = 11,
    SeparateSelected = 12,
    FlipSelected = 13,
    CreateGroup = 14,
    CycleSelectionMode = 15,
    CycleViewMode = 16,
    EMeshSelectionToolActions_MAX = 17,
};

enum class EMeshSelectionToolPrimaryMode {
    Brush = 0,
    VolumetricBrush = 1,
    AngleFiltered = 2,
    Visible = 3,
    AllConnected = 4,
    AllInGroup = 5,
    ByMaterial = 6,
    ByUVIsland = 7,
    AllWithinAngle = 8,
    EMeshSelectionToolPrimaryMode_MAX = 9,
};

enum class EMeshVertexSculptBrushType {
    Move = 0,
    PullKelvin = 1,
    PullSharpKelvin = 2,
    Smooth = 3,
    SmoothFill = 4,
    Offset = 5,
    SculptView = 6,
    SculptMax = 7,
    Inflate = 8,
    ScaleKelvin = 9,
    Pinch = 10,
    TwistKelvin = 11,
    Flatten = 12,
    Plane = 13,
    PlaneViewAligned = 14,
    FixedPlane = 15,
    LastValue = 16,
    EMeshVertexSculptBrushType_MAX = 17,
};

enum class EMirrorCtrlClickBehavior {
    Reposition = 0,
    RepositionAndReorient = 1,
    EMirrorCtrlClickBehavior_MAX = 2,
};

enum class EMirrorOperationMode {
    MirrorAndAppend = 0,
    MirrorExisting = 1,
    EMirrorOperationMode_MAX = 2,
};

enum class EMirrorSaveMode {
    UpdateAssets = 0,
    CreateNewAssets = 1,
    EMirrorSaveMode_MAX = 2,
};

enum class EMirrorToolAction {
    NoAction = 0,
    ShiftToCenter = 1,
    Left = 2,
    Right = 3,
    Up = 4,
    Down = 5,
    Forward = 6,
    Backward = 7,
    EMirrorToolAction_MAX = 8,
};

enum class ENonlinearOperationType {
    Bend = 0,
    Flare = 1,
    Twist = 2,
    ENonlinearOperationType_MAX = 3,
};

enum class ENormalMapSpace {
    Tangent = 0,
    Object = 1,
    ENormalMapSpace_MAX = 2,
};

enum class EOcclusionCalculationUIMode {
    GeneralizedWindingNumber = 0,
    RaycastOcclusionSamples = 1,
    EOcclusionCalculationUIMode_MAX = 2,
};

enum class EOcclusionMapDistribution {
    Uniform = 0,
    Cosine = 1,
    EOcclusionMapDistribution_MAX = 2,
};

enum class EOcclusionMapPreview {
    AmbientOcclusion = 0,
    BentNormal = 1,
    EOcclusionMapPreview_MAX = 2,
};

enum class EOcclusionTriangleSamplingUIMode {
    Vertices = 0,
    VerticesAndCentroids = 1,
    EOcclusionTriangleSamplingUIMode_MAX = 2,
};

enum class EOffsetMeshToolOffsetType {
    Iterative = 0,
    Implicit = 1,
    EOffsetMeshToolOffsetType_MAX = 2,
};

enum class EPlaneBrushSideMode {
    BothSides = 0,
    PushDown = 1,
    PullTowards = 2,
    EPlaneBrushSideMode_MAX = 3,
};

enum class EPolyEditCutPlaneOrientation {
    FaceNormals = 0,
    ViewDirection = 1,
    EPolyEditCutPlaneOrientation_MAX = 2,
};

enum class EPolyEditExtrudeDirection {
    SelectionNormal = 0,
    WorldX = 1,
    WorldY = 2,
    WorldZ = 3,
    LocalX = 4,
    LocalY = 5,
    LocalZ = 6,
    EPolyEditExtrudeDirection_MAX = 7,
};

enum class EProjectedHullAxis {
    X = 0,
    Y = 1,
    Z = 2,
    SmallestBoxDimension = 3,
    SmallestVolume = 4,
    EProjectedHullAxis_MAX = 5,
};

enum class EQuickTransformerMode {
    AxisTranslation = 0,
    AxisRotation = 1,
    EQuickTransformerMode_MAX = 2,
};

enum class ERevolvePropertiesCapFillMode {
    None = 0,
    Delaunay = 1,
    EarClipping = 2,
    CenterFan = 3,
    ERevolvePropertiesCapFillMode_MAX = 4,
};

enum class ERevolvePropertiesPolygroupMode {
    Single = 0,
    PerFace = 1,
    PerStep = 2,
    AccordingToProfileCurve = 3,
    ERevolvePropertiesPolygroupMode_MAX = 4,
};

enum class ERevolvePropertiesQuadSplit {
    Uniform = 0,
    ShortestDiagonal = 1,
    ERevolvePropertiesQuadSplit_MAX = 2,
};

enum class ESetCollisionGeometryInputMode {
    CombineAll = 0,
    PerInputObject = 1,
    PerMeshComponent = 2,
    PerMeshGroup = 3,
    ESetCollisionGeometryInputMode_MAX = 4,
};

enum class ESetMeshMaterialMode {
    KeepOriginal = 0,
    Checkerboard = 1,
    Override = 2,
    ESetMeshMaterialMode_MAX = 3,
};

enum class ESmoothMeshToolSmoothType {
    Iterative = 0,
    Implicit = 1,
    Diffusion = 2,
    ESmoothMeshToolSmoothType_MAX = 3,
};

enum class ETransformMeshesSnapDragRotationMode {
    Ignore = 0,
    Align = 1,
    AlignFlipped = 2,
    LastValue = 3,
    ETransformMeshesSnapDragRotationMode_MAX = 4,
};

enum class ETransformMeshesSnapDragSource {
    ClickPoint = 0,
    Pivot = 1,
    LastValue = 2,
    ETransformMeshesSnapDragSource_MAX = 3,
};

enum class ETransformMeshesTransformMode {
    SharedGizmo = 0,
    SharedGizmoLocal = 1,
    PerObjectGizmo = 2,
    LastValue = 3,
    ETransformMeshesTransformMode_MAX = 4,
};

enum class EWeightScheme {
    Uniform = 0,
    Umbrella = 1,
    Valence = 2,
    MeanValue = 3,
    Cotangent = 4,
    ClampedCotangent = 5,
    EWeightScheme_MAX = 6,
};

