bool enter = 1;
int loopCount = 0; 
 void loop(void){
  
  
  moveBotForward();
  loopCount++;
  Serial.print("the error value is ");
  Serial.print(position_Error());
  Serial.println("");
  
  //else{
   /// stopBot();
//  }//
}
/**************END_OF_FILE************/
