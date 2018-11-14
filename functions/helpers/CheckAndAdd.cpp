#include <iostream>
#include "../../Helpers.h"

int checkAndAdd(int positionVal) {
  int returnValue;
  if(positionVal > -1) {
    positionVal += 1;
  } else {
    positionVal += 0;
  }

  returnValue = positionVal;;
  return returnValue;
}
