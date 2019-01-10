void calcShortestPath(void){
  int index, prevCharIndex , nextCharIndex ;
  String shortestPath = "";

  while(Path.indexOf("B") != -1 ){/*till all B's are not eliminated*/
  index = Path.indexOf("B");
  prevCharIndex = index--;
  nextCharIndex = index++;
    shortestPath = Path.substring(prevCharIndex , nextCharIndex++);

    if(shortestPath.equals("LBR")){
      Path.replace("LBR","B");
    }
    else if(shortestPath.equals("LBS")){
      Path.replace("LBS", "R");
    }
    else if(shortestPath.equals("RBL")){
      Path.replace("RBL", "B");
    }
    else if(shortestPath.equals("SBL")){
      Path.replace("SBL", "R");
    }
    else if(shortestPath.equals("SBS")){
      Path.replace("SBS","B");
    }
    else if(shortestPath.equals("LBL")){
      Path.replace("LBL", "S");
    }
  }
}

/**************END_OF_FILE*****************/
