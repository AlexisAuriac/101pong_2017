/*
** EPITECH PROJECT, 2017
** my_is_prime
** File description:
** Returns 1 if the number is prime and 0 if notime
*/

#include "my.h"

int my_is_prime(int nb)
{
	if (nb <= 1)
		return (0);
	for (int i = 2 ; i < nb ; i = i + 1) {
		if (nb % i == 0)
			return (0);
	}
	return (1);
}
