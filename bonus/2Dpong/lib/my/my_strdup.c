/*
** EPITECH PROJECT, 2017
** my_strdup
** File description:
** Allocates memory and copies the string given as argument in it.
*/

#include <stdlib.h>
#include "my.h"

char *my_strdup(char const *src)
{
	int len = my_strlen(src);
	char *dest = 0;

	dest = malloc(sizeof(char) * (len + 1));
	my_strcpy(dest, src);
	return (dest);
}
