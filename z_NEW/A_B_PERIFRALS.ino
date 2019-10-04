void glow_Led_On(void){
  digitalWrite(victory_Led , HIGH);
}
void glow_Led_Off(void){
  digitalWrite(victory_Led , LOW);
}
void led_And_Switch_Setup(void){
  pinMode(victory_Led , OUTPUT);
  digitalWrite(victory_Led , LOW);
  pinMode(actual_Run_Button , INPUT);
}
/**************END_OF_FILE*****************/
