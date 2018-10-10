#include <iostream>
#include "Functions.h"

int main() {

  int xCoord = 7, yCoord = 0;

  int map[80];
  bool takenSquares[80];

  CreateMap(map);
  PresentMap(map, takenSquares);
  UpdateResult status = UpdatePosition(map, takenSquares, xCoord, yCoord);

  std::cout << status << std::endl;
  for(int i = 0; i < 81; i++) {
    if(i % 9 == 0) {
      std::cout << std::endl;
    }
    std::cout << takenSquares[i] << " ";
  }
  return 0;
}
