#include "Robot.h"

#include <frc/commands/Scheduler.h>
#include <frc/smartdashboard/SmartDashboard.h>

DriveTrain *Robot::m_DriveTrain;
OI Robot::m_oi;

void Robot::RobotInit() {
    //m_chooser.SetDefaultOption("Default Auto", &m_defaultAuto);
    //m_chooser.AddOption("My Auto", &m_myAuto);
    //frc::SmartDashboard::PutData("Auto Modes", &m_chooser);
    this->m_DriveTrain = new DriveTrain();

    this->m_TriggeredDrive = new TriggeredDrive();
}
void Robot::RobotPeriodic() {}

void Robot::DisabledInit() {}

void Robot::DisabledPeriodic() { frc::Scheduler::GetInstance()->Run(); }

void Robot::AutonomousInit() {
    m_autonomousCommand = m_chooser.GetSelected();

    if (m_autonomousCommand != nullptr) {
        m_autonomousCommand->Start();
    }
}

void Robot::AutonomousPeriodic() { frc::Scheduler::GetInstance()->Run(); }

void Robot::TeleopInit() {
    if (m_autonomousCommand != nullptr) {
        m_autonomousCommand->Cancel();
        m_autonomousCommand = nullptr;
    }
    this->m_TriggeredDrive->Start();
}

void Robot::TeleopPeriodic() { frc::Scheduler::GetInstance()->Run(); }

void Robot::TestPeriodic() {}

#ifndef RUNNING_FRC_TESTS
int main() { return frc::StartRobot<Robot>(); }
#endif
