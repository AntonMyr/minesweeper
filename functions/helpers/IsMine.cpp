#include <iostream>
#include "../../Helpers.h"

bool isMine(int position, int map[]) {
  bool returnValue;
  if(map[position] > -1) {
    returnValue = false;
  }
  else {
    returnValue = true;
  }

  return returnValue;
}
