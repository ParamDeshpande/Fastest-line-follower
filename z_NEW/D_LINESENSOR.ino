
  int sensor_Array_Pins[] = {far_Left_Pin,A0,A1,A2,A3,A4,A5,A6,A7,far_Right_Pin};     //pin nos for each sensor
  /*l2r as in "left to right"*/
  int l2r_sensor_Status[] = {'1','1','1','0','0','0','0','1','1','1'};      //array to display what each sensor outputs
    
    int  farLS = l2r_sensor_Status[0];
    int  l2rs0 = l2r_sensor_Status[1];
    int  l2rs1 = l2r_sensor_Status[2];
    int  l2rs2 = l2r_sensor_Status[3];
    int  l2rs3 = l2r_sensor_Status[4];
    int  l2rs4 = l2r_sensor_Status[5];
    int  l2rs5 = l2r_sensor_Status[6];
    int  l2rs6 = l2r_sensor_Status[7];
    int  l2rs7 = l2r_sensor_Status[8];
    int  farRS = l2r_sensor_Status[9];
    
void line_Sensor_Setup(void){
  //setup of array pins (goes in the setup function)
  for(int i=0; i<10; i++){
  pinMode(sensor_Array_Pins[i], INPUT);
  }
}

void update_Sensor_Status(void){
  
  l2r_sensor_Status[0] = digitalRead(sensor_Array_Pins[0]);
  
  for(int i=1;i<9;i++){
    l2r_sensor_Status[i] = {analogRead(sensor_Array_Pins[9-i])};    //reading the digital value
    }

  l2r_sensor_Status[9] = digitalRead(sensor_Array_Pins[9]);
  
    farLS = l2r_sensor_Status[0];
    l2rs0 = l2r_sensor_Status[1];
    l2rs1 = l2r_sensor_Status[2];
    l2rs2 = l2r_sensor_Status[3];
    l2rs3 = l2r_sensor_Status[4];
    l2rs4 = l2r_sensor_Status[5];
    l2rs5 = l2r_sensor_Status[6];
    l2rs6 = l2r_sensor_Status[7];
    l2rs7 = l2r_sensor_Status[8];
    farRS = l2r_sensor_Status[9];
 }
/********END_OF_FILE********/
