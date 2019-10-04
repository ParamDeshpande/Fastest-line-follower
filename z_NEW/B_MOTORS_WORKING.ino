void move_Bot_Forward(void){
  if(refine_RPM()>=0){
  backLeftMotor.forward(MAXPWM - newRPM);
  backRightMotor.forward(MAXPWM - LEFTMOTOROFFSET);
  }  
  else{
    backRightMotor.forward(MAXPWM - LEFTMOTOROFFSET + newRPM);
    backLeftMotor.forward(MAXPWM);
  }
}
void plain_Forward(void){
  backLeftMotor.forward(MAXPWM);
  backRightMotor.forward(MAXPWM);
}
void move_Bot_Reverse(void){
  backLeftMotor.backward(MAXPWM);
  backRightMotor.backward(MAXPWM);
}
  
void move_Bot_Torque_Left(void){
 backRightMotor.forward(TURNPWM);
 backLeftMotor.backward(TURNPWM);
}
void move_Bot_Torque_Right(void){
 backLeftMotor.forward(TURNPWM);
 backRightMotor.backward(TURNPWM);
}

 void stop_Bot(void){
  backRightMotor.brake(0);
  backLeftMotor.brake(0);
 }

 /**************END_OF_FILE*****************/
 
