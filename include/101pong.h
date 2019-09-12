/*
** EPITECH PROJECT, 2017
** 101pong
** File description:
** Header of 101pong project.
*/

#ifndef PONG
#define PONG

typedef struct vector {
	double x;
	double y;
	double z;
}vector_t;

#define ABS(value) ((value >= 0) ? (value) : (-value))

int my_paramerror(int ac, char **str);

#endif
