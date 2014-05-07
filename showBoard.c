#include "tetris.h"

void showBoard()
{
  int i; 
  int j;
  printf("------------\n");
  for(i = 0; i < ROWS; i++)
  {
  	printf("|");
    for(j = 0; j < COLS; j++)
    {
    	if(grid[i][j])
    		printf("+");
    	else if((i == piece->b1->y && j == piece->b1->x) ||
    			(i == piece->b2->y && j == piece->b2->x) ||
    			(i == piece->b3->y && j == piece->b3->x) ||
    			(i == piece->b4->y && j == piece->b4->x))
    		printf("+");		
    	else
    		printf(" ");
    }
    printf("|\n");
  }
  printf("------------\n");  
      //printf("&#37;2c", board->grid[i][j]);
}
