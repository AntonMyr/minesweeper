#include <iostream>

bool CheckForEnd(int map[], bool takenSquares[], int width, int height) {
  int mines = 0;
  int freePositions = 0;
  bool returnValue;
  for(int i = 0; i < width*height; i++) {
    if(takenSquares[i] && map[i] != -1)
      freePositions++;
    else if(map[i] == -1)
      mines++;
  }
  if((freePositions+mines) == ((width*height))){
    returnValue = true;
  }
  else {
    returnValue = false;
  }

  return returnValue;
}
