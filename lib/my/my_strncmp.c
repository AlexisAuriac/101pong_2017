/*
** EPITECH PROJECT, 2017
** my_strncmp
** File description:
** Reproduce the behavior of the strncmp function.
*/

#include "my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
	int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0' && i < n) {
		i++;
	}
	if (s1[i] < s2[i])
		return (-1);
	else if (s1[i] > s2[i])
		return (1);
	return (0);
}
