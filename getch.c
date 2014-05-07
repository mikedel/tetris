#include "tetris.h"
char getch()
{
/*
    char buf=0;
    struct termios old={0};
    fflush(stdout);
    if(tcgetattr(0, &old)<0)
        perror("tcsetattr()");
    old.c_lflag&=~ICANON;
    old.c_lflag&=~ECHO;
    old.c_cc[VMIN]=1;
    old.c_cc[VTIME]=0;
    if(tcsetattr(0, TCSANOW, &old)<0)
        perror("tcsetattr ICANON");
    if(read(0,&buf,1)<0)
        perror("read()");
    old.c_lflag|=ICANON;
    old.c_lflag|=ECHO;
    if(tcsetattr(0, TCSADRAIN, &old)<0)
        perror ("tcsetattr ~ICANON");
    printf("%c\n",buf);
    return buf;
   */
   char c = 0;
   struct termios old = {0};
   fflush(stdout);
   tcgetattr(0, &old);
   old.c_lflag&=~ICANON;
	old.c_lflag&=~ECHO;
    old.c_cc[VMIN]=1;
    old.c_cc[VTIME]=0;
    tcsetattr(0, TCSANOW, &old);
    read(0,&c,1);
    old.c_lflag|=ICANON;
    old.c_lflag|=ECHO;
    tcsetattr(0, TCSADRAIN, &old);
    return c;
}
