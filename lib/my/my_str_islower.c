/*
** EPITECH PROJECT, 2017
** my_str_islower
** File description:
** Returns 1 if the string passed as parameter only contains lowercase
** alphabetical characters and 0 otherwise.
*/

#include "my.h"

int my_rec_str_islower(char const *str, int i)
{
	if (str[i] == '\0')
		return (1);
	if (str[i] < 'a' || str[i] > 'z')
		return (0);
	my_rec_str_islower(str, i + 1);
}

int my_str_islower(char const *str)
{
	int result;

	result = my_rec_str_islower(str, 0);
	return (result);
}
