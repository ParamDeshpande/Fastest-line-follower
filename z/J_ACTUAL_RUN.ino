static unsigned int previousSwitchTime = 0;
static unsigned int switchInterval = 0;
/*
bool actualRunSwitchStatus(void){
  if(digitalRead(actualRunButton) == SWITCHON){
    return SWITCHON;
  }
  else
    return SWITCHOFF;
}

 static int actualRunIndex = 0 ; 
 static char actualRunPath = NULL;

void beginActualRun(void){

  while(actualRunSwitchStatus() != SWITCHON);
  glowLedOff();
  while(1){
 
  if(intersectionDetected() == TRUE){
    actualRunIndex++;
  }
  
  actualRunPath = Path.charAt(actualRunIndex);
  
  switch(actualRunPath){
    case 'S' :
      moveBotForward();
      break;
    case 'L' :
      stopBot();
      turnLeft(turnLeft90Time);/*gives me a left turn at 90 degrees at full speed*
      moveExtraInch();
      if(intersection() == deadEnd)
        error = botRightOfTheLineError ; /*The value is fed to the PID*
      while(positionError() != 0){
        moveBotForward();
      }
      while(intersectionDetected() != TRUE){
        moveBotForward();  
      }
      break;
      
    case 'R' :
      stopBot();
      turnRight(turnRight90Time);
      moveExtraInch();
      if(intersection() == deadEnd)
          error = botLeftOfTheLineError;   /*to the left of line will *** move right ***   *
      while(positionError() != 0){
          moveBotForward();
        }
      while(intersectionDetected() != TRUE){
          moveBotForward();
        }
        break;
    }
  }
}

/**************END_OF_FILE*****************/
