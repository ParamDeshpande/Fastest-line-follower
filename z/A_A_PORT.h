#define MAXPWM 255  //max pwm ie 2^8 = 256
#define TURNPWM 255
#define DRYRUNPWM 0
#define B 1         //Black input for sensor
#define W 0    

/*Ideally B=1 and W=0*/

#define ACHK(X) (X>=450)  //for analog pins

#define AND &&
#define OR ||

#define SWITCHON 1
#define SWITCHOFF 0
#define TRUE 1
#define LEFTMOTOROFFSET 0
#define FALSE 0

#define bot_Right_Of_The_Line_Error -8
#define bot_Left_Of_The_Line_Error 8

//pins on Arduino for sensors
#define A0 14
#define A1 15
#define A2 16
#define A3 12
#define A4 11

//Pins for motors
#define blme 6
#define blmi1 5
#define blmi2 4

#define brme 10
#define brmi1 9
#define brmi2 8


/*PID*/
static unsigned long lastTime=0;     //let the bot start at t=0
static double  newRPM;        //let this be my new rpm
static double  Kp = 30;
static double  Ki = 13;
static double  Kd = 1; //constants
static double  errSum=0, lastErr=0;            //function values for integration and diff
 static double  error = 0;      //proportional

#define victoryLed 2
#define actualRunButton 0

static String Path = "";
static bool DRYRUNFINISH  = 0;

/*BOT_TURNS*/
/*The turning values are for max initial speed and not zero initial speed*/

static bool intersectionDetectedFlag = 0;
static unsigned int turnLeft90Time   = 4500;
static unsigned int turnLeft135Time  = 2250;
static unsigned int turnRight90Time  = 3750;
static unsigned int turnRight135Time = 1875;
static unsigned int turnRight180Time = 8000;/*for st line deadend*/

static unsigned int hardBrakeTime = 0;/*Dont exceed it might start to go in reverse*/
static unsigned int moveExtraInchTime = 3000;

/***********END_OF_FILE*************/
