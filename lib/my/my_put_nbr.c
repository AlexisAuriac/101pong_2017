 /*
** EPITECH PROJECT, 2017
** my_put_nbr
** File description:
** Displays the number given as a parameter.
*/

#include "my.h"

int my_put_nbr(int n)
{
	if (n < 0) {
		my_putchar('-');
		n = -n;
	}
	if (n >= 10) {
		my_put_nbr(n / 10);
		my_putchar(n % 10 + '0');
	}
	if (n < 10) {
		my_putchar(n % 10 + '0');
	}
	return (n);
}
