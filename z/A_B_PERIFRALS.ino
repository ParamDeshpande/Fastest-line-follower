void glowLedOn(void){
  digitalWrite(victoryLed , HIGH);
}
void glowLedOff(void){
  digitalWrite(victoryLed , LOW);
}
void ledAndSwitchSetup(void){
  pinMode(victoryLed , OUTPUT);
  digitalWrite(victoryLed , LOW);
  pinMode(actualRunButton , INPUT);
}
/**************END_OF_FILE*****************/
