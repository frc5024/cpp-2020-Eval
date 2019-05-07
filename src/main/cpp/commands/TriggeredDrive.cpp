#include "commands/TriggeredDrive.h"
#include "Robot.h"

TriggeredDrive::TriggeredDrive() {
    Requires(Robot::m_DriveTrain);
    this->pJoy = new frc::XboxController(0);
}

void TriggeredDrive::Initialize() {}

void TriggeredDrive::Execute() {

    this->turn = this->pJoy->GetX(frc::GenericHID::JoystickHand::kLeftHand);

    this->speed = 0;
    if(this->pJoy->GetTriggerAxis(frc::GenericHID::JoystickHand::kLeftHand)>0.1) { // back up
        this->speed = this->pJoy->GetTriggerAxis(frc::GenericHID::JoystickHand::kLeftHand) * -0.5;
    }
    if(this->pJoy->GetTriggerAxis(frc::GenericHID::JoystickHand::kRightHand)>0.1) { // go forwards
        this->speed = this->pJoy->GetTriggerAxis(frc::GenericHID::JoystickHand::kRightHand) * 0.5;
    }

    Robot::m_DriveTrain->MoveRobot(this->speed,this->turn);
}

bool TriggeredDrive::IsFinished() { return false; }

void TriggeredDrive::End() {}

void TriggeredDrive::Interrupted() {}