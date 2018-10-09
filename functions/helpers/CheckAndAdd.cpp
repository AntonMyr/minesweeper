#include <iostream>
#include "../../Helpers.h"

int checkAndAdd(int positionVal) {
  if(positionVal > -1) {
    return positionVal += 1;
  } else {
    return positionVal += 0;
  }
}
