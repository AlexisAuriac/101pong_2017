/*
** EPITECH PROJECT, 2017
** my_strupcase
** File description:
** Puts every letter of every word in it in uppercase.
*/

#include "my.h"

char *my_strupcase(char *str)
{
	for (int i = 0 ; str[i] != '\0' ; i++) {
		if (str[i] <= 'z' && str[i] >= 'a')
			str[i] = str[i] - 32;
	}
	return (str);
}
