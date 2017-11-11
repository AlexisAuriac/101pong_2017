/*
** EPITECH PROJECT, 2017
** my_str_isalpha
** File description:
** Returns 1 if the string passed as parameter only contains alphabetical
** characters and 0 if the string contains another type of character.
*/

#include "my.h"

int my_isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

int my_rec_str_isalpha(char const *str, int i)
{
	if (str[i] == '\0')
		return (1);
	if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
		return (0);
	my_rec_str_isalpha(str, i + 1);
}

int my_str_isalpha(char const *str)
{
	int result;

	result = my_rec_str_isalpha(str, 0);
	return (result);
}
