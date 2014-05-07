#include "tetris.h"

void initBoard()
{
  int i;
  int j;
  for(i = 0; i < ROWS; i++)
    for(j = 0; j < COLS; j++)
      grid[i][j] = 0;
}
