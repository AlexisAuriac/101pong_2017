##
## EPITECH PROJECT, 2017
## 101pong
## File description:
## Makefile for 101pong.
##

SRC_ACC	=	acc.c

OBJ_ACC	=	$(SRC_ACC:.c=.o)

FLAGS	=	-Wall -Wextra -Werror

ACC	=	acc

all	:	lib	$(ACC)

$(ACC)	:	$(OBJ_ACC)
		gcc -o $(ACC) $(OBJ_ACC) -L../lib/my -lmy -lm

lib	:
		make -C ../lib/my

clean	:
		rm -f *~ *#* $(OBJ_ACC)
		make clean -C ../lib/my

fclean	:	clean
		rm -f $(ACC)
		make fclean -C ../lib/my

re	:	fclean	all

.PHONY	:	all	lib	clean	fclean	re
