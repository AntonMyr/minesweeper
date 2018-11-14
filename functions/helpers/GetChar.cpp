#include <iostream>
#include "../../Helpers.h"

char getChar(char boxChar, bool squareIsTaken, int positionVal) {
  char returnValue;
  if(squareIsTaken) {
    if(positionVal > -1) {
      returnValue = positionVal + '0';
    }
    else if(positionVal == -1)
      returnValue = 'X';
  } else {
    returnValue = boxChar;
  }

  return returnValue;
}
