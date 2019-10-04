#define MAXPWM 255  //max pwm ie 2^8 = 256
#define TURNPWM 255
#define DRYRUNPWM 0
#define B 0         //Black input for sensor
#define W 1
#define ZERO 0

/*Ideally B=1 and W=0*/

#define ACHK(X) (X>=750)  //for analog pins

#define AND &&
#define OR ||

#define SWITCHON 1
#define SWITCHOFF 0
#define TRUE 1
#define LEFTMOTOROFFSET 0
#define FALSE 0

#define one_Degree 58

#define bot_Right_Of_The_Line_Error -14
#define bot_Left_Of_The_Line_Error 14


enum intersection_Library {none, left_90_Junction, right_90_Junction, t_Junction,
                   y_Junction, dead_End
                   };
enum intersection_Library intersection_Status = none;          

/*/pins on Arduino for sensors
#define A0 14
#define A1 15
#define A2 16
#define A3 17
#define A4 18
#define A5 19*/
#define far_Left_Pin 11
#define far_Right_Pin 12

//Pins for motors
#define blme 9
#define blmi1 8
#define blmi2 7

#define brme 3
#define brmi1 5
#define brmi2 4


/*PID*/
static unsigned long lastTime=0;     //let the bot start at t=0
static double  newRPM;        //let this be my new rpm
static double  Kp = 5;
static double  Ki = 0;
static double  Kd = 0; //constants
static double  errSum=0, lastErr=0;            //function values for integration and diff
 static double  error = 0;      //proportional

#define victory_Led 2
#define actual_Run_Button 0

/*BOT_TURNS*/
/*The turning values are for max initial speed and not zero initial speed*/

static bool intersectionDetectedFlag = 0;
static unsigned int turn_Left_90_Time  = 5200;
static unsigned int turn_Left_60_Time  = 4350;
static unsigned int turn_Right_90_Time = 5200;
static unsigned int turn_Right_72_Time = 4700;
static unsigned int turn_Right_60_Time = 4350;/*for st line deadend*/
static unsigned int turn_Right_30_Time = 8000;

static unsigned int hard_Brake_Time = 0;/*Dont exceed it might start to go in reverse*/
static unsigned int move_Extra_Inch_Time = 3000;
/***********END_OF_FILE*************/
