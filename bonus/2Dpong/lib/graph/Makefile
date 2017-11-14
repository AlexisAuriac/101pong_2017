##
## EPITECH PROJECT, 2017
## libgraph.a
## File description:
## Makefile for libgraph.a.
##

SRC	=	$(wildcard *.c)

OBJ	=	$(SRC:.c=.o)

LIB	=	libgraph.a

all	:	$(LIB)

$(LIB)	:	$(OBJ)
		ar rc $(LIB) $(OBJ)

clean	:
		rm -f *~ *#* $(OBJ)

fclean :	clean
		rm -f $(NAME)

re	:	fclean	all

.PHONY	:	all	clean	fclean	re
