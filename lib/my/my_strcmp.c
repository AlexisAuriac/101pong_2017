/*
** EPITECH PROJECT, 2017
** my_strcmp
** File description:
** Reproduce the behavior of the strcmp function.
*/

#include "my.h"

int my_strcmp(char const *s1, char const *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0') {
		i++;
	}
	if (s1[i] < s2[i])
		return (-1);
	else if (s1[i] > s2[i])
		return (1);
	return (0);
}
