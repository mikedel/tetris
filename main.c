#include "tetris.h"
int main(int argc, char* argv)
{
  initBoard();
  piece = (t_piece*)malloc(1*sizeof(t_piece));
  piece->b1 = (t_block*)malloc(1*sizeof(t_block));
  piece->b2 = (t_block*)malloc(1*sizeof(t_block));
  piece->b3 = (t_block*)malloc(1*sizeof(t_block));
  piece->b4 = (t_block*)malloc(1*sizeof(t_block));
  initPiece();

  showBoard();
  
	while(1)
	{
		if(getch() != 27 || getch() != 91)
			continue;
		switch(getch())
		{
			case UP: 
				break;
			case DOWN:
				moveDown();
				break;
			case LEFT:
				moveLeft();
				break;
			case RIGHT:
				moveRight();
				break;
		}
		sleep(.1);
		moveDown();
		showBoard();
	}
}
