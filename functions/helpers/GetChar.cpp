#include <iostream>
#include "../../Helpers.h"

char getChar(char boxChar, bool squareIsTaken, int positionVal) {
  if(squareIsTaken) {
    if(positionVal > -1) {
      return positionVal + '0';
    }
    else if(positionVal == -1)
      return 'X';
  } else {
    return boxChar;
  }
}
