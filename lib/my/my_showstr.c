/*
** EPITECH PROJECT, 2017
** my_showstr
** File description:
** Prints a string and returns 0. If this string contains non-printable
** characters, they must be printed hexadecimally (in lowercase letters) with
** a backslash before the given value.
*/

#include "my.h"

int my_print_unprintable(int c)
{
	char result[50];
	char base[] = "0123456789abcdef";
	int base_len = 16;
	int i = 0;

	if (c < 16)
		my_putchar('0');
	while (c != 0) {
		result[i] = base[c % base_len];
		result[i + 1] = '\0';
		c = c / base_len;
		i++;
	}
	my_revstr(result);
	return (1);
}

int my_showstr(char const *str)
{
	for (int i = 0 ; str[i] != '\0' ; i++) {
		if (str[i] < ' ') {
			my_putchar('\\');
			my_print_unprintable(str[i]);
		}
		else
			my_putchar(str[i]);
	}
	my_putchar('\n');
	return (0);
}
