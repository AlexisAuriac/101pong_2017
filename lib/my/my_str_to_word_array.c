/*
** EPITECH PROJECT, 2017
** my_str_to_word_array
** File description:
** Splits a string into words. Separators will all be non-alphanumeric
** characters. The function returns an array in which each cell contains the
** adress of a string (representing a word). The last cell must be null to
** terminate the array.
*/

#include <stdlib.h>
#include "my.h"

int is_endword(char const *str, int n)
{
	if (my_isalpha(str[n]) == 1 && my_isalpha(str[n + 1]) == 0)
		return (1);
	else
		return (0);
}

int count_words(char const *str)
{
	int count = 0;
	char *dest = my_strdup(str);

	dest = my_strlowcase(dest);
	for (int i = 0 ; dest[i] != '\0' ; i++) {
		if (is_endword(dest, i) == 1)
			count++;
	}
	free(dest);
	return (count);
}

int sizeof_word(char const *str, int start)
{
	int w_len = 1;

	for (int i = start ; str[i] != '\0' && is_endword(str, i) == 0 ; i++) {
		w_len++;
	}
	return (w_len);
}

char *strcpy_part(char *dest, char *src, int start, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[start + i];
	dest[i] = '\0';
	return (dest);
}

char **my_str_to_word_array(char *str)
{
	int i;
	int j = 0;
	int w_len;
	int nb_words = count_words(str);
	char **tab;

	tab = malloc(sizeof(char*) * (nb_words + 1));
	for (i = 0 ; str[i] != '\0' ; i++) {
		if (my_isalpha(str[i]) && (i == 0 || !my_isalpha(str[i - 1])))
		{
			w_len = sizeof_word(str, i);
			tab[j] = malloc(sizeof(char) * (w_len + 1));
			strcpy_part(tab[j], str, i, w_len);
			j++;
		}
	}
	tab[j] = 0;
	return (tab);
}
