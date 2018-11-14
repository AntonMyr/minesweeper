#include <iostream>
#include "Functions.h"

int main() {

  int xCoord, yCoord;
  UpdateResult status;
  bool isEnded;

  int map[81] = { 0 };
  bool takenSquares[81] = { false };

  CreateMap(map);

  do {
    PresentMap(map, takenSquares);

    std::cout << "Choose x coordinate: ";
    std::cin >> xCoord;
    while(xCoord > 8 || xCoord < 0 || std::cin.fail()) {
      std::cin.clear();
      std::cin.ignore(10, '\n');
      std::cout << "You need to pick a x coordinate between 0 and 8: ";
      std::cin >> xCoord;
    }

    std::cout << "\nChoose y coordinate: ";
    std::cin >> yCoord;
    while(yCoord > 8 || yCoord < 0 || std::cin.fail()) {
      std::cin.clear();
      std::cin.ignore(10, '\n');
      std::cout << "You need to pick a y coordinate between 0 and 8: ";
      std::cin >> yCoord;
    }

    status = UpdatePosition(map, takenSquares, xCoord, yCoord);
    isEnded = CheckForEnd(map, takenSquares);
    std::cout << "I AM ENDSTATUS: " << isEnded << std::endl;

  } while( !isEnded && (status != positionIsMine));

  if(status == positionIsMine) {
    PresentMap(map, takenSquares);
    std::cout << "\n\t\tYOU LOST" << std::endl;
  } else if(isEnded) {
    PresentMap(map, takenSquares);
    std::cout << "\n\t\tYOU WON" << std::endl;
  }

  std::cout << "\nPress ENTER to quit...";
  std::cin.get();
  std::cin.ignore();

  return 0;

}
