 //   junction = "left90";
#define W_W_W_W_W_W_W_B_B_B ((farLS == W) && (ACHK(l2rs0) == W)  && (ACHK(l2rs1) == W) && (ACHK(ACHK(l2rs7) == B) && (ACHK(l2rs7) == B) && (ACHK(l2rs7) == B) && (farRS == (ACHK(l2rs7) == B) && (farRS == B))
#define W_W_W_W_W_W_B_B ((ACHK(l2rs0) == W) && (ACHK(l2rs1) == W) && (ACHK(l2rs2) == W) && (ACHK(l2rs3) == W) && (ACHK(l2rs4) == W) && (ACHK(l2rs5) == W) && (ACHK(l2rs6) == B) && (ACHK(l2rs7) == B))
#define W_W_W_W_W_W_B_B_B_B ((farLS == W) && (ACHK(l2rs0) == W)  && (ACHK(l2rs7) == B) && (farRS == B) )
#define W_W_W_W_W_B_B_B ((ACHK(l2rs0) == W) && (ACHK(l2rs1) == W) && (ACHK(l2rs2) == W) && (ACHK(l2rs3) == W) && (ACHK(l2rs4) == W) &&(ACHK(l2rs5) == B) && (ACHK(l2rs6) == B) && (ACHK(l2rs7) == B))

 // junction = "right90";
#define B_B_B_W_W_W_W_W_W_W ((farLS == B) && (ACHK(l2rs0) == B)  && (ACHK(l2rs7) == W) && (farRS == W) )
#define B_B_W_W_W_W_W_W ((ACHK(l2rs0) == B) && (ACHK(l2rs1) == B) && (ACHK(l2rs2) == W) && (ACHK(l2rs3) == W) && (ACHK(l2rs4) == W) &&(ACHK(l2rs5) == W) && (ACHK(l2rs6) == W) && (ACHK(l2rs7) == W) )
#define B_B_B_B_W_W_W_W_W_W ((farLS == B) && (ACHK(l2rs0) == B) &&(ACHK(l2rs7) == W) && (farRS == W))
#define B_B_B_W_W_W_W_W ((ACHK(l2rs0) == B) && (ACHK(l2rs1) == B) && (ACHK(l2rs2) == B) && (ACHK(l2rs3) == W) && (ACHK(l2rs4) == W) &&(ACHK(l2rs5) == W) && (ACHK(l2rs6) == W) && (ACHK(l2rs7) == W) )
//     junction = "t";
#define W_W_W_W_W_W_W_W ((ACHK(l2rs0) == W) && (ACHK(l2rs1) == W) && (ACHK(l2rs2) == W) && (ACHK(l2rs3) == W)&& (ACHK(l2rs4) == W) &&(ACHK(l2rs5) == W) && (ACHK(l2rs6) == W) && (ACHK(l2rs7) == W))

//   junction = "deadEnd";
#define B_B_B_B_B_B_B_B ((ACHK(l2rs0) == B) && (ACHK(l2rs1) == B) && (ACHK(l2rs2) == B) && (ACHK(l2rs3) == B)&& (ACHK(l2rs4) == B) &&(ACHK(l2rs5) == B) && (ACHK(l2rs6) == B) && (ACHK(l2rs7) == B))


    
/*    |<-->(0)<-->(1)<-->(2)<-->(3)<-->(4)<-->(5)<-->(6)<-->(7)<-->|
  
      1.5         3.1         2.15           2.15         3.1        1.5
      BLACK MAT WHITE VINYL STRIPS */
      
void update_Intersection_Status(void){
  update_Sensor_Status();
  if ( W_W_W_W_W_W_W_B_B_B OR W_W_W_W_W_W_B_B_B_B OR 
      W_W_W_W_W_W_B_B OR W_W_W_W_W_B_B_B
      )
      intersection_Status = left_90_Junction;
  
  else if ( B_B_B_W_W_W_W_W_W_W OR B_B_B_B_W_W_W_W_W_W  OR
            B_B_W_W_W_W_W_W OR B_B_B_W_W_W_W_W)
      intersection_Status = right_90_Junction;        

  else if ( W_W_W_W_W_W_W_W )
     intersection_Status = t_Junction;

  else if ( B_B_B_B_B_B_B_B )
     intersection_Status = dead_End;    
  else
     intersection_Status = none;
}

/**************END_OF_FILE**************/
 
