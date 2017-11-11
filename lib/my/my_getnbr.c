/*
** EPITECH PROJECT, 2017
** my_getnbr
** File description:
** Returns a number, sent to the function as a string.
*/

#include "my.h"

char my_add_digit(int *n, char const *str, int i)
{
	if (*n < 0 || str[i - 1] == '-') {
		*n = *n * 10 - str[i] + '0';
		if (*n > 0) {
			*n = 0;
			return ('T');
		}
	} else {
		*n = *n * 10 + (str[i] - '0');
		if (*n < 0) {
			*n = 0;
			return ('T');
		}
	}
	return ('F');
}

int my_getnbr(char const *str)
{
	char c = '0';
	int n = 0;
	char found = 'F';
	char finish = 'F';

	for (int i = 0 ; c != '\0' && finish == 'F' ; i++) {
		c = str[i];
		if (c >= '0' && c <= '9') {
			finish = my_add_digit(&n, str, i);
			found = 'T';
		}
		else if (found == 'T') {
			finish = 'T';
		}
	}
	return (n);
}
