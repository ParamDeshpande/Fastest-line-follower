void moveBotForward(void){
  if(refineRPM()>=0){
  /*
   * bot to the left of line
   * reducing right motor speed
   */
  backRightMotor.forward(MAXPWM - newRPM);
  backLeftMotor.forward(MAXPWM - LEFTMOTOROFFSET);
  }  
  else if(refineRPM()<= 0){
  /*
   * bot to the  right of line
   * reducing left motor speed
   */
    backLeftMotor.forward(MAXPWM - LEFTMOTOROFFSET + newRPM);
    backRightMotor.forward(MAXPWM);
  }
}
void moveBotReverse(void){
  backLeftMotor.backward(MAXPWM);
  backRightMotor.backward(MAXPWM);
}
  
void moveBotTorqueLeft(void){
 backRightMotor.forward(TURNPWM);
 backLeftMotor.backward(TURNPWM);
}
void moveBotTorqueRight(void){
 backLeftMotor.forward(TURNPWM);
 backRightMotor.backward(TURNPWM);
}

 void stopBot(void){
  backRightMotor.brake(0);
  backLeftMotor.brake(0);
 }

 /**************END_OF_FILE*****************/
 
