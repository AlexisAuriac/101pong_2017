/*
** EPITECH PROJECT, 2017
** my_strlen
** File description:
** Counts and returns the number of characters found in the string passed as
** parameter.
*/

#include "my.h"

int my_strlen(char const *str)
{
	int i = 0;

	while (str[i] != '\0') {
		i++;
	}
	return (i);
}
