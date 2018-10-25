#ifndef HELPERS_H
#define HELPERS_H

// Used for CreateMap

/**
 * SHOULD:
 *  randomise numbers 0-80 and set those positions in mines[] array
 *  equal to the random number
 *
 * @params:
 *  int mines[]
 *  int amount
 */
void setMines(int mines[], int amount);

/**
 * SHOULD:
 *  loop through the mines[] array and place out
 *  -1 on each position which is gathered from the mines element
 *  into maps[] array
 *
 * @params:
 *  int map[]
 *  int mines[]
 *  int minesAmount
 */
void initMap(int map[], int mines[], int minesAmount);

/**
 * SHOULD:
 *  calculate the values on the elements around each of the
 *  mines
 *
 * @params:
 *  int map[]
 *  int mines[]
 *  int width
 *  int height
 */
void calcMines(int map[], int mines[], int width, int height);

/**
 * SHOULD:
 *  Make it easier to add 1 to the values
 *  around the mines inside the calcMines() function
 *
 * @params:
 *  int option,
 *  int map[],
 *  int width,
 *  int mine (current mine position)
 */
void positionCase(int option, int map[], int width, int mine);

/**
 * SHOULD:
 *  Check if positionVal is a mine or not, if it is
 *  then add 1 to the current element in map array
 *
 *  Used inside the positionCase() function
 *
 * @param:
 *  int positionVal
 *
 * @returns:
 *  if true returns positionVal++
 *  if false returns positionVal
 */
int checkAndAdd(int positionVal);


// Used in PresentMap

/**
 * SHOULD:
 *  return either return a "position taken" char or
 *  return a "position not taken" char depending on what the
 *  value in the takenSquares[] says.
 *
 * @params:
 *  char boxChar
 *  bool takenSquares[]
 *  int positionVal
 *
 * @returns:
 *  returns boxChar if position is not taken
 *  returns element in map[] array if not taken
 */
char getChar(char boxChar, bool takenSquares, int positionVal);


// Used in UpdatePosition

/**
 * SHOULD:
 *  Get users x and y value translated into position
 *  in a one-dimensional array
 *
 * @param:
 *  int xCoord,
 *  int yCoord,
 *  int width
 *
 * @return:
 *  returns an integer with position of the element in
 *  which then can be used in the map array
 *
 */
int getPosition(int xCoord, int yCoord, int width);

/**
 * SHOULD:
 *  Update the status in the takenSquares array
 *
 * @params:
 *  int position,
 *  bool takenSquares 
 */
void updateStatus(int position, bool takenSquares[]);

/**
 * SHOULD:
 *  check if position is taken or not
 *
 * @params:
 *  int position,
 *  bool takenSquares
 *
 * @returns:
 *  true if taken
 *  false if not
 */
bool isTaken(int position, bool takenSquares[]);

/**
 * SHOULD:
 *  check if position is mine or not
 *
 * @params:
 *  int position,
 *  int map[]
 *
 * @returns:
 *  returns true if the position in the map is equal to -1
 *  returns false otherwise
 */
bool isMine(int position, int map[]);

#endif // !HELPERS_H
