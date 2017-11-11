/*
** EPITECH PROJECT, 2017
** my_getstr
** File description:
** Puts the number given as a paremeter in a string.
*/

#include <stdlib.h>
#include "my.h"

int get_nb_size(int n)
{
	int chiffres = 0;

	while (n >= 10 || n <= -10) {
		n = n / 10;
		chiffres++;
	}
	return (chiffres + 1);
}

int my_getstr(int n)
{
	int i = 0;
	char minus = 'F';
	int size = get_nb_size(n);
	char *result = malloc(sizeof(char) * (size + 2));

	if (n == 0)
		result = "0";
	if (n < 0) {
		minus = 'T';
		n = -n;
	}
	for (i ; n != 0 ; i++) {
		result[i] = n % 10 + '0';
		n = n / 10;
	}
	if (minus == 'T')
		result[i] = '-';
	result = my_revstr(result);
	return (*result);
}
