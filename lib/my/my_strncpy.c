/*
** EPITECH PROJECT, 2017
** my_strncpy
** File description:
** Copies n characters from a string into another.
*/

#include "my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
	int i;

	for (i = 0 ; src[i] != '\0' && i < n ; i++)
		dest[i] = src[i];
	for (i = i ; i < n ; i++)
		dest[i] = '\0';
	return (dest);
}
