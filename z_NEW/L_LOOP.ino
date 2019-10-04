void loop(){//remove comment here
       
  update_Intersection_Status();
  
  if( (intersection_Status != none) AND (intersection_Status != dead_End))
    path_Working();
  else
   move_Bot_Forward();
}

/**************END_OF_FILE***********/
/*
  move_Bot_Forward();
      }
      if (intersectionDetected() == TRUE){
      //intersectionWorking();
      if(DRYRUNFINISH == TRUE){ 
        beginActualRun();
      }
      stopBot();
      enter = 0; 
  }

********/
