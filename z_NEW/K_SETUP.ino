void setup(){
  led_And_Switch_Setup();
  line_Sensor_Setup();
  backLeftMotor.Setup();
  backRightMotor.Setup();
  Serial.begin(9600);
  glow_Led_On();
  glow_Led_Off();
  intersection_Status = none;
  myPID.SetOutputLimits(-75, 75);
  myPID.SetMode(AUTOMATIC);
  
}

/**************END_OF_FILE*****************/
