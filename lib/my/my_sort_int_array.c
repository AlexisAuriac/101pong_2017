/*
** EPITECH PROJECT, 2017
** my_sort_int_array
** File description:
** Sorts an integer array in ascending order, given a pointer to the first
** element of the array and its size.
*/

#include "my.h"

void my_sort_int_array(int *array, int size)
{
	int mem;

	for (int i = 0 ; i < size - 1 ; i++) {
		if (array[i] > array[i + 1]) {
			mem = array[i];
			array[i] = array[i + 1];
			array[i + 1] = mem;
			i = -1;
		}
	}
}
