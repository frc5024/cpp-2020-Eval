#pragma once

#include <frc/TimedRobot.h>
#include <frc/commands/Command.h>
#include <frc/smartdashboard/SendableChooser.h>

#include "OI.h"
#include "commands/TriggeredDrive.h"
#include "subsystems/DriveTrain.h"
#include <frc/WPILib.h>

class Robot : public frc::TimedRobot {
    public:
        static DriveTrain *m_DriveTrain;
        static OI m_oi;

        TriggeredDrive *m_TriggeredDrive;

        void RobotInit() override;
        void RobotPeriodic() override;
        void DisabledInit() override;
        void DisabledPeriodic() override;
        void AutonomousInit() override;
        void AutonomousPeriodic() override;
        void TeleopInit() override;
        void TeleopPeriodic() override;
        void TestPeriodic() override;

    private:
        // Have it null by default so that if testing teleop it
        // doesn't have undefined behavior and potentially crash.
        frc::Command* m_autonomousCommand = nullptr;
        frc::SendableChooser<frc::Command*> m_chooser;
};
