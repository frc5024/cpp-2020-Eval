#pragma once

#include <frc/commands/Subsystem.h>
#include <ctre/Phoenix.h>
#include <frc/drive/DifferentialDrive.h>
#include <frc/SpeedControllerGroup.h>
#include <commands/TriggeredDrive.h>

class DriveTrain : public frc::Subsystem {
    private:
        can::WPI_TalonSRX* pFrontLeft;
        can::WPI_TalonSRX* pBackLeft;
        frc::SpeedControllerGroup* pLeft;

        can::WPI_TalonSRX* pFrontRight;
        can::WPI_TalonSRX* pBackRight;
        frc::SpeedControllerGroup* pRight;

        frc::DifferentialDrive* pDriveTrain;

    public:
        DriveTrain();
        void InitDefaultCommand() override;

        void MoveRobot(float speed, float rotation);
};