#include "tetris.h"

char checkCharacter(char c)
{
  if(!my_strcmp(c, UP))
    ;//rotate();
  if(!my_strcmp(c, DOWN))
    moveDown();
  if(!my_strcmp(c, LEFT))
    moveLeft();
  if(!my_strcmp(c, RIGHT))
    moveRight();
  return c;
}
