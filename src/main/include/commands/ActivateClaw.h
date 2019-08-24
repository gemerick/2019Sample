#ifndef ACTIVATECLAW_H
#define ACTIVATECLAW_H

#include <frc/commands/Subsystem.h>
#include "Robot.h"

#include <frc/commands/Command.h>

class ActivateClaw: public frc::Command {
private:

public:
ActivateClaw();

    void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;
};

#endif