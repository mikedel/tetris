#include "tetris.h"

void initPiece()
{
  char type;
  srand(time(NULL));
	int r = rand()%7;
	char letters[7] = {'I', 'O', 'J', 'L', 'T', 'S', 'Z'};
	type = letters[r];
  switch(type)
    {
    case 'I':
      piece->b1->x = 3;
      piece->b1->y = 0;
      piece->b2->x = 4;
      piece->b2->y = 0;
      piece->b3->x = 5;
      piece->b3->y = 0;
      piece->b4->x = 6;
      piece->b4->y = 0;
      break;
    case 'T':
      piece->b1->x = 3;
      piece->b1->y = 0;
      piece->b2->x = 4;
      piece->b2->y = 0;
      piece->b3->x = 5;
      piece->b3->y = 0;
      piece->b4->x = 4;
      piece->b4->y = 1;
      break;
    case 'O':
      piece->b1->x = 3;
      piece->b1->y = 0;
      piece->b2->x = 4;
      piece->b2->y = 0;
      piece->b3->x = 3;
      piece->b3->y = 1;
      piece->b4->x = 4;
      piece->b4->y = 1;
      break;
    case 'L':
      piece->b1->x = 3;
      piece->b1->y = 0;
      piece->b2->x = 4;
      piece->b2->y = 0;
      piece->b3->x = 5;
      piece->b3->y = 0;
      piece->b4->x = 3;
      piece->b4->y = 1;
      break;
    case 'J':
      piece->b1->x = 3;
      piece->b1->y = 0;
      piece->b2->x = 4;
      piece->b2->y = 0;
      piece->b3->x = 5;
      piece->b3->y = 0;
      piece->b4->x = 5;
      piece->b4->y = 1;
      break;
    case 'Z':
      piece->b1->x = 3;
      piece->b1->y = 0;
      piece->b2->x = 4;
      piece->b2->y = 0;
      piece->b3->x = 4;
      piece->b3->y = 1;
      piece->b4->x = 5;
      piece->b4->y = 1;
      break;
    case 'S':
      piece->b1->x = 3;
      piece->b1->y = 1;
      piece->b2->x = 4;
      piece->b2->y = 1;
      piece->b3->x = 4;
      piece->b3->y = 0;
      piece->b4->x = 5;
      piece->b4->y = 0;
      break;
    }
}
