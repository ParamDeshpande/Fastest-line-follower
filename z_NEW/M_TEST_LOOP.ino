//bool enter = 1;
int loopCount = 0; 
 void loop(void){
     Serial.print("  FL  ");Serial.print(farLS);
   
  Serial.print("  A0  ");Serial.print((l2rs0));
  Serial.print("  A1  ");Serial.print((l2rs1));
  Serial.print("  A2  ");Serial.print((l2rs2));
  Serial.print("  A3  ");Serial.print((l2rs3));
  Serial.print("  A4  ");Serial.print((l2rs4));
  Serial.print("  A5  ");Serial.print((l2rs5));
  Serial.print("  A6  ");Serial.print((l2rs6));
  Serial.print("  A7  ");Serial.print((l2rs7));
  
  Serial.print("  RL  ");Serial.print(farRS);
  
  Serial.println("");
  }
/*  update_Sensor_Status();
  
 if(loopCount >= 10000){
  stop_Bot();
 }
else {
  loopCount++;
  update_Intersection_Status();
  /*move_Extra_Inch();
  move_Extra_Inch();
  turn_Right(turn_Right_90_Time);*
  if( (intersection_Status != none) AND (intersection_Status != dead_End) ){
  
    intersection_Primary_Working();
  }
  else
    move_Bot_Forward();
  }
  //delay(250);
}
 
  /*
  
/**************END_OF_FILE************/

/*stop_Bot();

Serial.print("  A0  ");Serial.print(ACHK(l2rs0));
  Serial.print("  A1  ");Serial.print(ACHK(l2rs1));
  Serial.print("  A2  ");Serial.print(ACHK(l2rs2));
  Serial.print("  A3  ");Serial.print(ACHK(l2rs3));
  Serial.print("  A4  ");Serial.print(ACHK(l2rs4));
  Serial.print("  A5  ");Serial.print(ACHK(l2rs5));
  Serial.print("  A6  ");Serial.print(ACHK(l2rs6));
  Serial.print("  A7  ");Serial.print(ACHK(l2rs7));
  
   Serial.print("  FL  ");Serial.print(farLS);
   
  Serial.print("  A0  ");Serial.print((l2rs0));
  Serial.print("  A1  ");Serial.print((l2rs1));
  Serial.print("  A2  ");Serial.print((l2rs2));
  Serial.print("  A3  ");Serial.print((l2rs3));
  Serial.print("  A4  ");Serial.print((l2rs4));
  Serial.print("  A5  ");Serial.print((l2rs5));
  Serial.print("  A6  ");Serial.print((l2rs6));
  Serial.print("  A7  ");Serial.print((l2rs7));
  
  Serial.print("  RL  ");Serial.print(farRS);
  
  Serial.println("");
  }
  */
  