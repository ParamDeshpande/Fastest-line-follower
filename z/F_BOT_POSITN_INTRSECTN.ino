 //   junction = "left90";
#define W_W_W_W_W_W_B_B ((ACHK(l2rs0) == W) && (ACHK(l2rs1) == W) && (l2rs2 == W) && (l2rs3 == W)&& (l2rs4 == W) &&(l2rs5 == W) && (l2rs6 == B) && (l2rs7 == B))  
#define W_W_W_W_W_B_B_B ((ACHK(l2rs0) == B) && (ACHK(l2rs1) == B) && (l2rs2 == W) && (l2rs3 == W)&& (l2rs4 == W) &&(l2rs5 == W) && (l2rs6 == B) && (l2rs7 == B)) 

 // junction = "right90";
#define B_B_W_W_W_W_W_W ((ACHK(l2rs0) == B) && (ACHK(l2rs1) == B) && (l2rs2 == W) && (l2rs3 == W)&& (l2rs4 == W) &&(l2rs5 == W) && (l2rs6 == W) && (l2rs7 == W))
#define B_B_B_W_W_W_W_W ((ACHK(l2rs0) == B) && (ACHK(l2rs1) == B) && (l2rs2 == B) && (l2rs3 == W)&& (l2rs4 == W) &&(l2rs5 == W) && (l2rs6 == W) && (l2rs7 == W))

//     junction = "t";
#define W_W_W_W_W_W_W_W ((ACHK(l2rs0) == W) && (ACHK(l2rs1) == W) && (l2rs2 == W) && (l2rs3 == W)&& (l2rs4 == W) &&(l2rs5 == W) && (l2rs6 == W) && (l2rs7 == W))

//   junction = "deadEnd";
#define B_B_B_B_B_B_B_B ((ACHK(l2rs0) == B) && (ACHK(l2rs1) == B) && (l2rs2 == B) && (l2rs3 == B)&& (l2rs4 == B) &&(l2rs5 == B) && (l2rs6 == B) && (l2rs7 == B))


enum intersection_Library {none, left_90_Junction, right_90_Junction, t_Junction,
                   y_Junction, dead_End
                   };
enum intersection_Library intersection_Status = none;          
    
/*    |<-->(0)<-->(1)<-->(2)<-->(3)<-->(4)<-->(5)<-->(6)<-->(7)<-->|
  
      1.5         3.1         2.15           2.15         3.1        1.5
      BLACK MAT WHITE VINYL STRIPS */
      
void intersection_Primary(void){
  update_Sensor_Status();
  
  if ( W_W_W_W_W_W_B_B OR W_W_W_W_W_B_B_B )
      intersection_Status = left_90_Junction;
  
  else if (B_B_W_W_W_W_W_W OR B_B_B_W_W_W_W_W)
      intersection_Status = right_90_Junction;        

  else if (W_W_W_W_W_W_W_W)
     intersection_Status = t_Junction;
     
  else if (B_B_B_B_B_B_B_B)
     intersection_Status = dead_End;    
  else
     intersection_Status = none;
}

static int error_Buffer = 0;
 
 void out_Of_Path_Error_Check(void){
  
  if  ((position_Error() == -7) OR (position_Error() == -6))
    error_Buffer = bot_Right_Of_The_Line_Error;

  else if ( (position_Error() == 7) OR (position_Error() == 6))
    error_Buffer = bot_Left_Of_The_Line_Error;
    
  if(intersection_Status == dead_End)
    error = error_Buffer;
}

/**************END_OF_FILE**************/
 
