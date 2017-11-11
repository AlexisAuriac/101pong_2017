/*
** EPITECH PROJECT, 2017
** my_putstr
** File description:
** Displays, one-by-one, the characters of a string
*/

#include "my.h"

int my_putstr(char const *str)
{
	for (int i = 0 ; str[i] != '\0' ; i++) {
		my_putchar(str[i]);
	}
	return (0);
}
