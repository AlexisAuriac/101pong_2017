/*
** EPITECH PROJECT, 2017
** my_realloc
** File description:
** Reproduces the comportement of the realloc system function.
*/

#include <stdlib.h>
#include "my.h"

void *my_realloc(char *str, int size)
{
	char *cpy = my_strdup(str);
	
	free(str);
	str = my_malloc(size);
	str = my_strcpy(str, cpy);
	free(cpy);
	return (str);
}
