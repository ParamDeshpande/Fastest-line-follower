bool right90JunctionFlag =0 ;
bool tJunctionFlag = 0;

/*called after right90 turn OR t junction *
void checkIntersection(void){

  switch(intersection()){ 

    case deadEnd :  /*either all my SENSORS are showing BLACK*
      /*When i have right junction*
      if((right90JunctionFlag == 1 )&&(tJunctionFlag == 0)){  /*previously right turn so now move right*
        turnRight(turnRight90Time);
        moveExtraInch();
        Path =+ "R";
        if(intersection() == deadEnd)
          error = botLeftOfTheLineError;   /*to the left of line will *** move right ***   *
        while(positionError() != 0){
          moveBotForward();
        }
      }
      /*When i have T junction *
      else if((right90JunctionFlag == 0)&&(tJunctionFlag == 1)){/*previously t junction hence turn left*
        turnLeft(turnLeft90Time);
        moveExtraInch();
        Path =+ "L";
        if(intersection() == deadEnd)
          error = botRightOfTheLineError;    /*to the right of line will *** move left ***   *
        while(positionError() != 0){
          moveBotForward();
        }
      }
      break;
      
       case victory :  /* Or all white*
        hardBrake();
        glowLedOn();
        DRYRUNFINISH = 1;
        break;
      
       default :      /*or we have a line*
        moveExtraInch();
        Path =+ "S";
        break;
  }
}

void intersectionWorking(void){
  switch (intersection()){

        case left90Junction :   /*this is a pure left turn , bot should go left*
          turnLeft(turnLeft90Time);/*gives me a left turn at 90 degrees at full speed*
          moveExtraInch();
          if(intersection() == deadEnd)
            error = botRightOfTheLineError ; /*The value is fed to the PID*
          Path =+ "L";
          while(positionError() != 0){
          moveBotForward();
          }
          break;
        
        case right90Junction :  /*a pure right turn bot should go straight and check*
          stopBot();/*drifts forward*
          right90JunctionFlag = 1;
          checkIntersection();
          right90JunctionFlag = 0;
          break;
        
        case tJunction : /*move extra inch to check if victory else take left*
          stopBot();/*drifts forward*
          tJunctionFlag = 1;
          checkIntersection();
          tJunctionFlag = 0;
          break;
          
        case yJunction :  /*move left let 'PID' do the adjustments after extra inch *
           turnLeft(turnLeft135Time);
           moveExtraInch();
           if(intersection() == deadEnd)
            error = botRightOfTheLineError;
           Path =+ "L";
           while(positionError() != 0){
            moveBotForward();
            }
           break ;
         
        case lineDeadEnd :
           uTurnDeadEnd180();
           Path =+ "B";
           break;
         
        default :
           break;     /*should never come here*
           }
}
/**********************END_OF_FILE***************************/
