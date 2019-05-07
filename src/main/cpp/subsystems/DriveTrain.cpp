#include "subsystems/DriveTrain.h"

DriveTrain::DriveTrain() : Subsystem("ExampleSubsystem") {
    this->pFrontLeft = new can::WPI_TalonSRX(1);
    this->pBackLeft = new can::WPI_TalonSRX(2);

    this->pLeft = new frc::SpeedControllerGroup(*pFrontLeft,*pBackLeft);

    this->pFrontRight = new can::WPI_TalonSRX(3);
    this->pBackRight = new can::WPI_TalonSRX(4);

    this->pRight = new frc::SpeedControllerGroup(*pFrontRight,*pBackRight);

    this->pDriveTrain = new frc::DifferentialDrive(*pRight,*pLeft);
}

void DriveTrain::InitDefaultCommand() {
    SetDefaultCommand(new TriggeredDrive());
}

void DriveTrain::MoveRobot(float speed, float rotation) {
    this->pDriveTrain->ArcadeDrive(speed,rotation);
}