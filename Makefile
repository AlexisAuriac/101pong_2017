##
## EPITECH PROJECT, 2017
## 101pong
## File description:
## Makefile for 101pong.
##

SRC	=	main.c		\
		my_error.c

OBJ	=	$(SRC:.c=.o)

FLAGS	=	-Wall -Wextra -Werror

NAME	=	101pong

all	:	$(NAME)

$(NAME)	:	$(OBJ)
		gcc -o $(NAME) $(OBJ) -lm

clean	:
		rm -f *~ *#* $(OBJ)

fclean	:	clean
		rm -f $(NAME)

re	:	fclean	all

.PHONY	:	all	clean	fclean	re
