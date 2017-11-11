/*
** EPITECH PROJECT, 2017
** my_find_prime_sup
** File description:
** Returns the smallest prime number that is greater than, or equal to, the
** number given as a parameter
*/

#include "my.h"

int my_find_prime_sup(int nb)
{
	if (nb <= 1)
		return (0);
	for (int i = nb ; i < 2147483647 ; i++) {
		if (my_is_prime(i) == 1)
			return (i);
	}
}
