#include <iostream>
#include "../Functions.h"
#include "../Helpers.h"

UpdateResult UpdatePosition(int map[], bool takenSquares[], int xCoord, int yCoord, int width, int height) {

  int position = getPosition(xCoord, yCoord, width);

  if(isMine(position, map)) {
    updateStatus(position, takenSquares);
    return positionIsMine;
  }
  else if(isTaken(position, takenSquares)) {
    return positionIsTaken;
  }
  else {
    updateStatus(position, takenSquares);
    return positionIsFree;
  }
}
