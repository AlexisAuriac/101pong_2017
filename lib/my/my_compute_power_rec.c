/*
** EPITECH PROJECT, 2017
** my_compute_power_rec
** File description:
** Returns the first argument raised to the power p, p is the second argument.
*/

#include "my.h"

int my_compute_power_rec(int nb, int p)
{
	int result;

	if (p < 0)
		return (0);
	else if (p == 0)
		return (1);
	result = nb * my_compute_power_rec(nb, p - 1);
	return (result);
}
