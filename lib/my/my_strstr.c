/*
** EPITECH PROJECT, 2017
** my_strstr
** File description:
** Reproduce the behavior of the strstr function.
*/

#include "my.h"

int my_comparestr(char const *str, char const *to_find, int start)
{
	for (int i = start ; to_find[i - start] != '\0' ; i++) {
		if (str[i] != to_find[i - start])
			return (0);
	}
	return (1);
}

char *my_strpartcpy(char *dest, char const *str, int start)
{
	int i;

	for (i = start ; dest[i - start] != '\0' ; i++)
		dest[i - start] = str[i];
	dest[i - start] = '\0';
	return(dest);
}

char *my_strstr(char const *str, char const *to_find)
{
	int i;
	char found = 'F';
	char *found_str;

	for (i = 0 ; str[i] != '\0' && found == 'F' ; i++) {
		if (my_comparestr(str, to_find, i) == 1)
			found = 'T';
	}
	if (found == 'F')
		return (0);
	found_str = my_strpartcpy(found_str, str, i - 1);
	return (found_str);
}
