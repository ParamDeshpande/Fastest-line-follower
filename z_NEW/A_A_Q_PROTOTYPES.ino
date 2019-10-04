
#include "A_A_PORT.h"

void glow_Led_On(void);
void glow_Led_Off(void);
void led_And_Switch_Setup(void);

void move_Bot_Forward(void);
void move_Bot_Reverse(void);
void move_Bot_Torque_Left(void);
void move_Bot_Torque_Right(void);
void stop_Bot(void);

void turn_Left(unsigned long interval);
void turn_Right(unsigned long interval);
void move_Extra_Inch(void);


void line_Sensor_Setup(void);
void update_Sensor_Status(void);

int position_Error(void);
void update_Intersection_Status(void);
void out_Of_Path_Error_Check(void);

double refine_RPM(void);

void intersection_Primary_Working(void);
