#ifndef FUNCTIONS_H
#define FUNCTIONS_H

enum UpdateResult {
  positionIsTaken,
  positionIsMine,
  positionIsFree
};

void CreateMap(int map[], int width = 9, int height = 9);

UpdateResult UpdatePosition(int map[], bool takenSquares[], int xCoord, int yCoord, int width = 9, int height = 9);

bool CheckForEnd(int map[], bool takenSquares[], int width = 9, int height = 9);

void PresentMap(int map[], bool takenSquares[], int width = 9, int height = 9);

#endif // !FUNCTIONS_H
