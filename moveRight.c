#include "tetris.h"

void moveRight()
{
  if(piece->b1->x < 9 && piece->b2->x < 9 && piece->b3->x < 9 && piece->b4->x < 9)
    {
      piece->b1->x++;
      piece->b2->x++;
      piece->b3->x++;
      piece->b4->x++;
    }
}
