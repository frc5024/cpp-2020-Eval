#pragma once

#include <frc/commands/Command.h>
#include <frc/XboxController.h>
#include <frc/GenericHID.h>
#include "Robot.h"

class TriggeredDrive : public frc::Command {
    public:
        TriggeredDrive();
        void Initialize() override;
        void Execute() override;
        bool IsFinished() override;
        void End() override;
        void Interrupted() override;
    private:
        frc::XboxController* pJoy;

        float speed;
        float turn;
};