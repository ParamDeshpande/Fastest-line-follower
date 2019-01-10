
#include "A_A_PORT.h"

void glowLedOn(void);
void glowLedOff(void);
void ledAndSwitchSetup(void);

void moveBotForward(void);
void moveBotReverse(void);
void moveBotTorqueLeft(void);
void moveBotTorqueRight(void);
void stopBot(void);

void turnLeft(unsigned long interval);
void turnRight(unsigned interval);
void moveExtraInch(void);
void uTurnDeadEnd180(void);
void hardBrake(void);

void lineSensorSetup(void);
void updateSensorStatus(void);

int position_Error(void);

void intersection_Primary(void);
void out_Of_Path_Error_Check(void);

double refineRPM(void);

void intersection_Secondary(void);
void intersection_Working(void);

void calcShortestPath(void);
bool actualRunSwitchStatus(void);
void beginActualRun(void);
