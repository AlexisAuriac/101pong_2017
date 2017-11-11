/*
** EPITECH PROJECT, 2017
** my_isneg
** File description:
** Takes an int for parameter and displays either N if it's negative or P if it
** 's positive
*/

#include "my.h"

int my_isneg(int n)
{
	if (n < 0)
		my_putchar('N');
	else
		my_putchar('P');
	return (0);
}
