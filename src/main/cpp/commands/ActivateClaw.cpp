#include "commands/ActivateClaw.h"
// #include "Logging.h"

ActivateClaw::ActivateClaw() : frc::Command()
{
//    Requires(Robot::intake.get());

}

void ActivateClaw::Initialize()
{
    //Logging::Instance()->LogLabelled("CMD", "ActivateClaw", "Init", __FILE__, "Initialize", __LINE__);
}

void ActivateClaw::Execute()
{
    //Robot::intake->ToggleClaw();
}

bool ActivateClaw::IsFinished()
{
    //return !Robot::oi->IsClawSolenoidButtonPressed();
}

void ActivateClaw::End()
{
    //Logging::Instance()->LogLabelled("CMD", "ActivateClaw", "Done", __FILE__, "End", __LINE__);    
}

void ActivateClaw::Interrupted()
{
    End();
    //Logging::Instance()->LogLabelled("CMD", "ActivateClaw", "Interrupted", __FILE__, "Interrupted", __LINE__);
}
