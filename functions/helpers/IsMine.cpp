#include <iostream>
#include "../../Helpers.h"

bool isMine(int position, int map[]) {
  if(map[position] > -1) {
    return false;
  }
  else {
    return true;
  }
}
