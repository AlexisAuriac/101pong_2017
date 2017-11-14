##
## EPITECH PROJECT, 2017
## 101pong
## File description:
## Makefile for 101pong.
##

SRC_ACC	=	acc.c

SRC_CPP	=	main.cpp	

OBJ_ACC	=	$(SRC_ACC:.c=.o)

OBJ_CPP	=	$(SRC_CPP:.c=.o)

FLAGS	=	-Wall -Wextra -Werror

ACC	=	acc

CPP	=	cpp

all	:	lib	$(ACC)	$(CPP)

$(ACC)	:	$(OBJ_ACC)
		gcc -o $(ACC) $(OBJ_ACC) -L../lib/my -lmy -lm

$(CPP)	:	$(OBJ_CPP)
		g++ -o $(CPP) $(OBJ_CPP)

lib	:
		make -C ../lib/my

clean	:
		rm -f *~ *#* $(OBJ_ACC) $(OBJ_CPP)
		make clean -C ../lib/my

fclean	:	clean
		rm -f $(ACC) $(CPP)
		make fclean -C ../lib/my

re	:	fclean	all

.PHONY	:	all	lib	clean	fclean	re
