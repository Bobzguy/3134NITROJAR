#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen.
brain  Brain;
controller Controller1 = controller(primary);
const int32_t InertialPort = vex::PORT10; 

// ----- LEFT MG ----- 
motor LA = motor(PORT16, ratio6_1, true);
motor LB = motor(PORT17, ratio6_1, true);
motor_group LD = motor_group(LA, LB);

// ----- RIGHT MG -----
motor RA = motor(PORT19, ratio6_1, false);
motor RB = motor(PORT20, ratio6_1, false);
motor_group RD = motor_group(RA, RB);

// ----- DT -----
drivetrain Drivetrain = drivetrain(LD, RD);

// ----- INTAKE ROLLERS -----
motor ROLLERA = motor(PORT11, ratio6_1, false);
motor ROLLERB = motor(PORT6, ratio6_1, true);
motor_group ROLLERS = motor_group(ROLLERA, ROLLERB);

// ----- ARM -----
motor ARMR = motor(PORT2, ratio6_1, false);
motor ARML = motor(PORT1, ratio6_1, true);
motor_group ARM = motor_group(ARMR, ARML);

//The motor constructor takes motors as (port, ratio, reversed), so for example
//motor LeftFront = motor(PORT1, ratio6_1, false);

//Add your devices below, and don't forget to do the same in robot-config.h:


void vexcodeInit( void ) 
{
  Brain.Screen.print("Device initialization...");
  Brain.Screen.setCursor(2, 1);
  // calibrate the drivetrain Inertial
  wait(200, msec);
  chassis.Gyro.calibrate();
  Brain.Screen.print("Calibrating Inertial for Drivetrain");
  Brain.Screen.clearScreen();
  // wait for the Inertial calibration process to finish
  while (chassis.Gyro.isCalibrating()) 
  {
    wait(25, msec);
  }
}