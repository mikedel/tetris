#include "tetris.h"

void moveLeft()
{
  if(piece->b1->x > 0 && piece->b2->x > 0 && piece->b3->x > 0 && piece->b4->x > 0)
    {
      piece->b1->x--;
      piece->b2->x--;
      piece->b3->x--;
      piece->b4->x--;
    }
}
