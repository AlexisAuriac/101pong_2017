##
## EPITECH PROJECT, 2017
## Makefile libmy.a
## File description:
## 
##

SRC	=	$(wildcard *.c)

OBJ	=	$(SRC:.c=.o)

LIB	=	libmy.a

all	:	$(LIB)

$(LIB)	:	$(OBJ)
		ar rc $(LIB) $(OBJ)

clean	:
		rm -f $(OBJ) *~ *#*

fclean	:	clean
		rm -f $(LIB)

re	:	fclean	all

.PHONY	:	all	clean	fclean	re
