
void turnLeft(unsigned long interval){
  for(int i =0 ; i<interval ; i++){
    moveBotTorqueLeft();
  }
}
void turnRight(unsigned interval){
  for(int i= 0 ; i< interval ; i++){
    moveBotTorqueRight();
  }  
}
void moveExtraInch(void){
  for(int i=0 ; i<moveExtraInchTime ;  i++){
    moveBotForward();
  }
}
void uTurnDeadEnd180(void){
      stopBot();
      turnRight(turnRight180Time);
      moveExtraInch();
}
void hardBrake(void){
for(int i=0 ; i < hardBrakeTime ; i++){
  moveBotReverse();
  }
}
/*****************END_OF_FILE*********************/
