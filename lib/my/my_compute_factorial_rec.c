/*
** EPITECH PROJECT, 2017
** my_compute_factorial_rec
** File description:
** Returns the factorial of the number given as a parameter.
*/

#include "my.h"

int my_compute_factorial_rec(int nb)
{
	int result;

	if (nb < 0 || nb > 12)
		return (0);
	else if (nb == 0)
		return (1);
	result = nb * my_compute_factorial_rec(nb - 1);
	return (result);
}
