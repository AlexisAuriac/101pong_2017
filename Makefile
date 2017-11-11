##
## EPITECH PROJECT, 2017
## 101pong
## File description:
## Makefile for 101pong.
##

SRC	=	main.c

OBJ	=	$(SRC:.c=.o)

FLAGS	=	-Wall -Wextra -Werror

NAME	=	101pong

all	:	lib	$(NAME)

$(NAME)	:	$(OBJ)
		gcc -o $(NAME) $(OBJ) -L./lib/my -lmy -lm

lib	:
		make -C lib/my

clean	:
		rm -f *~ *#* $(OBJ)
		make clean -C lib/my

fclean	:	clean
		rm -f $(NAME)
		make fclean -C lib/my

re	:	fclean	all

.PHONY	:	all	lib	clean	fclean	re
