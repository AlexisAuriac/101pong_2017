/*
** EPITECH PROJECT, 2017
** disp_stdarg
** File description:
** Displays the arguments followed by ’\n’.
*/

#include <stdarg.h>
#include "my.h"

int disp_stdarg(char *s, ...)
{
	va_list ap;
	char c = 0;

	va_start(ap, s);
	for (int i = 0 ; s[i] != '\0' ; i++) {
		switch (s[i]) {
		case 'c' :
			my_putchar(va_arg(ap, int));
			break;
		case 's' :
			my_putstr(va_arg(ap, char *));
			break;
		case 'i' :
			my_put_nbr(va_arg(ap, int));
			break;
		}
		my_putchar('\n');
	}
	va_end(ap);
	return (0);
}
