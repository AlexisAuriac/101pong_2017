/*
** EPITECH PROJECT, 2017
** my_malloc
** File description:
**
*/

#include <stdlib.h>
#include "my.h"

char *my_malloc(int size)
{
	char *result = 0;

	result = malloc(sizeof(char) * size);
	if (result == 0) {
		my_putstr("error");
		exit(0);
	}
	for (int i = 0 ; i < size ; i++) {
		result[i] = 0;
	}
	return (result);
}
