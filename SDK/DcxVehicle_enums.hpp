namespace EDcxVehicleClutchAccuracyMode {
    enum Type {
        Estimate = 0,
        BestPossible = 1,
        EDcxVehicleClutchAccuracyMode_MAX = 2,
    };
}

namespace EDcxVehicleDifferential4W {
    enum Type {
        LS_4WD = 0,
        LS_FrontWD = 1,
        LS_RearWD = 2,
        Open_4WD = 3,
        Open_FrontWD = 4,
        Open_RearWD = 5,
        EDcxVehicleDifferential4W_MAX = 6,
    };
}

namespace EDcxVehicleDriveControl4W {
    enum Type {
        Throttle = 0,
        Brake = 1,
        Handbrake = 2,
        Steer = 3,
        Clutch = 4,
        NumControls = 5,
        EDcxVehicleDriveControl4W_MAX = 6,
    };
}

namespace EDcxVehicleDriveControlModelTank {
    enum Type {
        Standard = 0,
        Special = 1,
        EDcxVehicleDriveControlModelTank_MAX = 2,
    };
}

namespace EDcxVehicleDriveControlNW {
    enum Type {
        Throttle = 0,
        Brake = 1,
        Handbrake = 2,
        Steer = 3,
        Clutch = 4,
        NumControls = 5,
        EDcxVehicleDriveControlNW_MAX = 6,
    };
}

namespace EDcxVehicleDriveControlTank {
    enum Type {
        Throttle = 0,
        BrakeLeft = 1,
        BrakeRight = 2,
        ThrustLeft = 3,
        ThrustRight = 4,
        Clutch = 5,
        NumControls = 6,
        EDcxVehicleDriveControlTank_MAX = 7,
    };
}

namespace EDcxVehicleGearbox {
    enum Type {
        Automatic = 0,
        SemiAutomatic = 1,
        Manual = 2,
        EDcxVehicleGearbox_MAX = 3,
    };
}

namespace EDcxVehicleNoDriveControl {
    enum Type {
        Throttle = 0,
        Brake = 1,
        Steer = 2,
        NumControls = 3,
        EDcxVehicleNoDriveControl_MAX = 4,
    };
}

namespace EDcxVehicleWheelOrder4W {
    enum Type {
        FrontLeft = 0,
        FrontRight = 1,
        RearLeft = 2,
        RearRight = 3,
        EDcxVehicleWheelOrder4W_MAX = 4,
    };
}

namespace EDcxVehicleWheelSweep {
    enum Type {
        Both = 0,
        Simple = 1,
        Complex = 2,
        EDcxVehicleWheelSweep_MAX = 3,
    };
}

