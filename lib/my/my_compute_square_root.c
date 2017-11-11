/*
** EPITECH PROJECT, 2017
** my_compute_square_root
** File description:
** Returns the square root of the number given as argument
*/

#include "my.h"

double my_compute_square_root(double nb)
{
	if (nb == 1)
		return (1);
	for (int i = 0 ; i < nb ; i++) {
		if (i * i == nb)
			return (i);
		else if (i * i > nb)
			return (0);
	}
	return (0);
}
