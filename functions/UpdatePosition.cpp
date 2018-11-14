#include <iostream>
#include "../Functions.h"
#include "../Helpers.h"

UpdateResult UpdatePosition(int map[], bool takenSquares[], int xCoord, int yCoord, int width, int height) {

  int position = getPosition(xCoord, yCoord, width);
  UpdateResult returnValue;

  if(isMine(position, map)) {
    updateStatus(position, takenSquares);
    returnValue = positionIsMine;
  }
  else if(isTaken(position, takenSquares)) {
    returnValue = positionIsTaken;
  }
  else {
    updateStatus(position, takenSquares);
    returnValue = positionIsFree;
  }

  return returnValue;
}
