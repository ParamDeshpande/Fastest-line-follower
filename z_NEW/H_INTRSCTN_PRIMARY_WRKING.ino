char path_Estimated_Wcet[] = {'l', 'l', 'T', 'R', 'L', //0 to 4
                              'L', '$', '$', 'R', 'L', 'R', //5 to 10  index 8,9 and 9 is MAYBE
                              'L', 'R', 'L', 'R', 'R', //11 to 15
                              'R', '$', 'R', 'R', '$', //16 to 20
                              'R', 'R', 'L', 'T', 'T'
                             };         //21 to 25

int path_Estimated_Count = 0;

void path_Working(void) {

  switch (path_Estimated_Count) {

    case 0:
    case 1:
      move_Extra_Inch();
      move_F();
      break;

    case 2:
      turn_Right(90);
      move_F();
      path_Estimated_Count = 3;
      break;

    case 4:
    case 5:
      turn_Left(72);
      move_F();
      break;

    case 6:
      turn_Right(72);
      move_F();
      break;

    case 7:
      turn_Right(35);
      move_F();
      break;

    case 8:
      turn_Left(60);
      move_F();
      break;

    case 9:
      turn_Left(120);
      move_F();
      break;

    case 10:
      turn_Right(120);
      move_F();
      break;

    case 11:
      move_Extra_Inch();
      move_F();
      break;

    case 12:
      turn_Left(45);
      move_F();
      break;

    case 13:
      turn_Right(90);
      move_F();
      break;

    case 14:
      turn_Right(90);
      move_F();
      break;

    case 15:
      move_Extra_Inch();
      move_F();
      break;

    case 16:
      turn_Left(90);
      move_F();
      break;

    case 17:
      turn_Right(90);
      move_F();
      break;

    case 18:
      turn_Right(90);
      move_F();
      break;

    case 19:
      turn_Left(90);
      move_F();
      break;

    case 20:
      move_Extra_Inch();
      move_F();
      break;

    case 21:
      move_Extra_Inch();
      move_F();
      break;

    case 22:
      move_Extra_Inch();
      move_F();
      break;

    case 23:
      turn_Left(90);
      move_F();
      break;

    case 24:
      turn_Right(150);
      move_F();
      break;

    case 25:
      turn_Left(30);
      move_F();
      break;
  }

  path_Estimated_Count++;
}


void intersection_Primary_Working(void) {

  switch ( intersection_Status ) {

    case left_90_Junction :

      turn_Left(turn_Left_90_Time);/*gives me a left turn at 90 degrees at full speed*/
      move_Extra_Inch();
      if (intersection_Status == dead_End)
        error_Buffer = bot_Right_Of_The_Line_Error; /*The value is fed to the PID*/
      break;

    case right_90_Junction :

      turn_Right(turn_Right_90_Time);/*gives me a left turn at 90 degrees at full speed*/
      move_Extra_Inch();
      if (intersection_Status == dead_End)
        error_Buffer = bot_Left_Of_The_Line_Error; /*The value is fed to the PID*/
      break;

    case t_Junction :    /*VICTORY*/
      Serial.print("inside t junction  ");
      //Serial.print(intersection_Status);
      Serial.println("");

      // move_Extra_Inch();
      //  update_Intersection_Status();
      //if(intersection_Status == t_Junction)
      stop_Bot();
      while (1) {
        glow_Led_On();
        delay(1000);
        glow_Led_Off();
        delay(1000);
      }
      break; //USELESS STATEMENT

    default :
      break;
  }
}
/**************END_OF_FILE*****************/
