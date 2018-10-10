#include <iostream>
#include "../../Helpers.h"

bool isTaken(int position, bool takenSquares[]) {
  if(takenSquares[position]) {
    return true;
  }
  else {
    return false;
  }
}
