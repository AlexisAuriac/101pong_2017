/*
** EPITECH PROJECT, 2017
** my_revstr
** File description:
** Reverses a string.
*/

#include "my.h"

char *my_revstr(char *str)
{
	int len = my_strlen(str);
	char c = 0;

	for (int i = 0 ; i < len / 2 ; i++) {
		c = str[i];
		str[i] = str[len - 1 - i];
		str[len - i - 1] = c;
	}
	return (str);
}
