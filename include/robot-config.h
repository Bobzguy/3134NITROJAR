using namespace vex;

extern brain Brain;

//To set up a motor called LeftFront here, you'd use
//extern motor LeftFront;

//Add your devices below, and don't forget to do the same in robot-config.cpp:

// ----- LEFT MG ----- 
extern motor LA;
extern motor LB;
extern motor_group LD;

// ----- RIGHT MG -----
extern motor RA; 
extern motor RB;
extern motor_group RD;

// ----- INTAKE ROLLERS -----
extern motor ROLLERA;
extern motor ROLLERB;
extern motor_group ROLLERS;

// ----- ARM -----
extern motor ARMR;
extern motor ARML;
extern motor_group ARM;
extern const int32_t InertialPort;

void  vexcodeInit( void );