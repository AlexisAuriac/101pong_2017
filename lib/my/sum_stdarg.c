/*
** EPITECH PROJECT, 2017
** sum_stdarg
** File description:
** Returns the sum of the last nb arguments if i=0.
*/

#include <stdarg.h>
#include "my.h"

int sum_intarg(int nb, va_list ap)
{
	int sum = 0;

	for (int i = 0 ; i < nb ; i++)
		sum += va_arg(ap, int);
	return (sum);
}

int sum_strarg(int nb, va_list ap)
{
	int sum = 0;

	for (int i = 0 ; i < nb ; i++)
		sum += my_strlen(va_arg(ap, char *));
	return (sum);
}

int sum_stdarg(int i, int nb, ...)
{
	va_list ap;
	int sum = 0;
	
	va_start(ap, nb);
	if (i == 0)
		sum = sum_intarg(nb, ap);
	else if (i == 1)
		sum = sum_strarg(nb, ap);
	else
		sum = 84;
	va_end(ap);
	return (sum);
}
