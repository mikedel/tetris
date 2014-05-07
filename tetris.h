#ifndef _TETRIS_H_
#define _TETRIS_H_

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#include <termios.h>

#ifndef TRUE
#define TRUE 1
#endif

#ifndef FALSE
#define FALSE 0
#endif

#ifndef NULL
#define NULL (0)
#endif

#define KU "\E[A"
#define KD "\E[B"
#define KR "\E[C"
#define KL "\E[D"

#define UP 'A'
#define DOWN 'B'
#define RIGHT 'C'
#define LEFT 'D'

#define ROWS 26
#define COLS 10

typedef struct s_block
{
  int x;//COL
  int y;//ROW
} t_block;

typedef struct s_piece
{
  t_block* b1;
  t_block* b2;
  t_block* b3;
  t_block* b4;
} t_piece;

/*
typedef struct s_board
{
  int** grid;
} t_board;

t_board* board;
*/
int grid[ROWS][COLS];
t_piece* piece;

void initBoard();
void initPiece();
void moveLeft();
void moveRight();
void moveDown();
char checkCharacter(char);
void showBoard();
char getch();

#endif
