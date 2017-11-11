/*
** EPITECH PROJECT, 2017
** my_swap
** File description:
** Swaps the content of two integers, whose addresses are given as a parameter
*/

void my_swap(int *a, int *b)
{
	int mem = *a;

	*a = *b;
	*b = mem;
}
