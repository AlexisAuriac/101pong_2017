##
## EPITECH PROJECT, 2017
## Makefile for day13
## File description:
## 
##

SRC	=	2Dpong.c	\
		hit_wall.c

OBJ	=	$(SRC:.c=.o)

LIB	=	-lm -lc_graph_prog -L./lib/graph -lgraph

NAME	=	pong

all	:	lib	$(NAME)

$(NAME)	:	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(LIB)

lib	:
		make -C lib/graph

clean	:
		rm -f $(OBJ) *~ *#*
		make clean -C lib/graph

fclean	:	clean
		rm -f $(NAME)
		make fclean -C lib/graph

re	:	fclean	all
