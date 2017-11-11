/*
** EPITECH PROJECT, 2017
** my_strcapitalize
** File description:
** Capitalizes the first letter of each word.
*/

#include "my.h"

char *my_rec(char *str, char capitalize, int i)
{
	if (str[i] == '\0')
		return (str);
	if (str[i] <= 'z' && str[i] >= 'a' && capitalize == 'T') {
		str[i] = str[i] - 32;
		capitalize = 'F';
	}
	else if ((str[i] >= '0' && str[i] <= '9'))
		capitalize = 'F';
	else if (str[i] < 'a' || str[i] > 'z') {
		if (str[i] < '0' || str[i] > '9')
			capitalize = 'T';
	}
	my_rec(str, capitalize, i + 1);
}

char *my_strcapitalize(char *str)
{
	my_strlowcase(str);
	my_rec(str, 'T', 0);
	return (str);
}
