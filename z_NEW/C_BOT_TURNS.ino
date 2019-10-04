void move_F(void){
 while(intersection_Status != none){
      update_Intersection_Status();
      move_Extra_Inch();
      }  
}

void turn_Left(unsigned long degree){
  for(int i =0 ; i<degree ; i++){
    /*this much is one degreee*/
    for(int j = 0; j<one_Degree; j++){
    move_Bot_Torque_Left();
    }
  }
}
void turn_Right(unsigned long degree){
  for(int i =0 ; i<degree ; i++){
    /*this much is one degreee*/
    for(int j = 0; j<one_Degree; j++){
      move_Bot_Torque_Right();
    }
  }
}

void move_Extra_Inch(void){
  for(int i=0 ; i<move_Extra_Inch_Time ;  i++){
    backLeftMotor.forward(MAXPWM);
    backRightMotor.forward(MAXPWM);
  }
}
/*****************END_OF_FILE*********************/
