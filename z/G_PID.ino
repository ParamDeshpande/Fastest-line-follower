static unsigned long now = 0;
static double timeChange =0;

double refineRPM(void){
           /*current time*/
  now = millis();          
  timeChange = (double)(now - lastTime); /* del't' */
  error = position_Error();
  out_Of_Path_Error_Check();
      if((newRPM <75)&&(newRPM > -75)){
      errSum += (error * timeChange);   /*integral is now assumed to be clamped*/
      }
      double dErr = (error - lastErr)/timeChange; /* timeChange derivative*/
      newRPM = (Kp * error) + (Ki * errSum) + (Kd * dErr);
      lastErr = error;  /*Remember some variables for next time*/
      lastTime = now;
      if(newRPM > 75){
        newRPM = 75;
      }
      if(newRPM < -75){
        newRPM = -75;
      }
      return newRPM;
}

/**************END_OF_FILE*****************/
