SRC=*.c
OBJ=$(SRC:.c=.o)
NAME=tetris
RM=rm -f
LIBPATH=../lib
LIBS=-lmy -ltermcap

all: $(OBJ)
	cc -L$(LIBPATH) $(SRC) $(LIBS) -o $(NAME)

clean: 
	$(RM) *.o
	$(RM) *~
	$(RM) *.core
	$(RM) \#*

fclean: clean
	$(RM) $(NAME)

re: fclean all
