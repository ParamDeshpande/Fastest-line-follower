bool out_Of_Path_Error_Flag = FALSE;
static int error_Buffer = ZERO;

#include <PID_v1.h>

void out_Of_Path_Error_Check(void) {

  /*if deadend is reached and bot was prevoiusly at extreme edges*/
  //if( (intersection_Status == dead_End) AND (error_Buffer != 0)  )
  //  error = error_Buffer;
  //error_Buffer = 0;
  /*DONT CHANGE THE ORDER
     IE LET that else error_buffer = ZERO be the last statement of the function
  */
  // else{

  if  ((position_Error() == -7) OR (position_Error() == -6))
    error_Buffer = bot_Right_Of_The_Line_Error;
  else if ( (position_Error() == 7) OR (position_Error() == 6))
    error_Buffer = bot_Left_Of_The_Line_Error;

  if ( (intersection_Status == dead_End) AND (error_Buffer != 0)) {
    out_Of_Path_Error_Flag = TRUE;
  }
  else {
    out_Of_Path_Error_Flag = FALSE;  //So no dead end
    //error_Buffer = ZERO;
  }

}

unsigned long now = 0;

unsigned long timeChange = 0;

double Setpoint, Input, Output;
double consKpCrit = 8.5;
double aggKpCrit = 12.5;

//double aggKp=8.5, aggKi=10000, aggKd=0;
double aggKp = (aggKpCrit*0.6), aggKi = (aggKpCrit*0.5), aggKd = (aggKpCrit*0.125);
//double consKp=8.5, consKi=10000, consKd=0;
double consKp = (consKpCrit*0.6), consKi = (consKpCrit*0.5), consKd = (consKpCrit*0.125);

PID myPID(&Input, &Output, &Setpoint, consKp, consKi, consKd, DIRECT);

double refine_RPM(void) {
  Input = position_Error();
  out_Of_Path_Error_Check();
  if ( out_Of_Path_Error_Flag == TRUE )
    Input = error_Buffer;
  Serial.print("error is"); Serial.print(Input);
  Serial.println("");
  if ((Input >= -6) AND (Input <= 6))
    myPID.SetTunings(consKp, consKi, consKd);
  else
    myPID.SetTunings(aggKp, aggKi, aggKd);

  myPID.Compute();
  newRPM = Output;
  Serial.print("new RPM is"); Serial.print(newRPM);
  Serial.println("");
  return newRPM;
}
/*
  double refine_RPM(void){
           /*current time*
  now = millis();
  timeChange = (double)(now - lastTime); /* del't' *
  error = position_Error();
  out_Of_Path_Error_Check();
  if( out_Of_Path_Error_Flag == TRUE ){
    error = error_Buffer;
  }
  Serial.print("error is");Serial.print(error);
  Serial.println("");
      if((newRPM <75)&&(newRPM > -75)){
      errSum += (error * timeChange);   /*integral is now assumed to be clamped*
      }
      double dErr = (error - lastErr)/timeChange; /* timeChange derivative*
      newRPM = (Kp * error) + (Ki * errSum) + (Kd * dErr);
      lastErr = error;  /*Remember some variables for next tim*
      lastTime = now;
      /*if(newRPM > 75){
        newRPM = 75;
      }
      if(newRPM < -75){
        newRPM = -75;
      }*
      Serial.print("new RPM is");Serial.print(newRPM);
      Serial.println("");
      return newRPM;

  }

  /**************END_OF_FILE*****************/
