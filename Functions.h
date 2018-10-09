#ifndef FUNCTIONS_H
#define FUNCTIONS_H

/* enum UpdateResult */
/* { */

/* }; */

/**
 * SHOULD:
 *  Place out mines and calculate mines on all positions
 *
 * @param:
 *  int map[],
 *  int width,
 *  int height
 *
 * @return:
 *  
 */
void CreateMap(int map[], int width = 9, int height = 9);

/* UpdateResult UpdatePosition(int map[], bool takenSquares[], int xCoord, int yCoord, int width = 9, int height = 9); */

bool CheckForEnd(int map[], bool takenSquares[], int width = 9, int height = 9);

void PresentMap(int map[], bool takenSquares[], int width = 9, int height = 9);

#endif // !FUNCTIONS_H
