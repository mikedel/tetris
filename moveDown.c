#include "tetris.h"

void moveDown()
{
  if(piece->b1->y + 1 >= ROWS || piece->b2->y + 1 >= ROWS || piece->b3->y + 1 >= ROWS || piece->b4->y + 1 >= ROWS || grid[piece->b1->y + 1][piece->b1->x] == 1 || 
  grid[piece->b2->y + 1][piece->b2->x] == 1 || grid[piece->b3->y + 1][piece->b3->x] == 1 || grid[piece->b4->y + 1][piece->b4->x] == 1)
    {
      grid[piece->b1->y][piece->b1->x] = 1;
      grid[piece->b2->y][piece->b2->x] = 1;
      grid[piece->b3->y][piece->b3->x] = 1;
      grid[piece->b4->y][piece->b4->x] = 1;      
      initPiece();
    }
  else
    {
      piece->b1->y++;
      piece->b2->y++;
      piece->b3->y++;
      piece->b4->y++;
    }
}
