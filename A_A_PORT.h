#define MAXPWM 255  //max pwm ie 2^8 = 256
#define TURNPWM 0
#define DRYRUNPWM 0
#define B 0         //Black input for sensor
#define W 1         //White input for sensor
#define SWITCHON 1
#define SWITCHOFF 0
#define TRUE 1
#define FALSE 0

//pins on Arduino for sensors
#define A0 0
#define A1 0
#define A2 0 
#define A3 0
#define A4 0

//Pins for motors
#define frme 0
#define frmi1 0
#define frmi2 0

#define flme 0
#define flmi1 0
#define flmi2 0

#define blme 0
#define blmi1 0
#define blmi2 0

#define brme 0
#define brmi1 0
#define brmi2 0

#define victoryLed LED_BUILTIN
#define actualRunButton 0

String Path = "";
bool DRYRUNFINISH  = 0;
/***********END_OF_FILE*************/
