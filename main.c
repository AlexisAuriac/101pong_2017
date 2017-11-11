/*
** EPITECH PROJECT, 2017
** 101pong
** File description:
** Main file.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "include/my.h"
#include "include/101pong.h"

static vector_t get_vector_coordinates(char **av)
{
	vector_t speed;

	speed.x = atof(av[4]) - atof(av[1]);
	speed.y	= atof(av[5]) - atof(av[2]);
	speed.z	= atof(av[6]) - atof(av[3]);
	my_putstr("The speed vector coordinates are :\n");
	printf("(%.2f;%.2f;%.2f)\n", speed.x, speed.y, speed.z);
	return (speed);
}

static vector_t get_pos_n(char **av, vector_t speed)
{
	vector_t pos_n;
	int time = atoi(av[7]);

	pos_n.x = atof(av[4]);
	pos_n.y	= atof(av[5]);
	pos_n.z	= atof(av[6]);
	for (int i = 0 ; i < time ; i++) {
		pos_n.x += speed.x;
		pos_n.y	+= speed.y;
		pos_n.z	+= speed.z;
	}
	printf("At time t+%d, ball coordinates will be :\n", time);
	printf("(%.2f;%.2f;%.2f)\n", pos_n.x, pos_n.y, pos_n.z);
	return (pos_n);
}

static double get_norm(vector_t vector)
{
	double power_x = powf(vector.x, 2);
	double power_y = powf(vector.y, 2);
	double power_z = powf(vector.z, 2);
	double norm = sqrt(power_x + power_y + power_z);

	return (norm);
}

static double get_angle_incid(vector_t pos_1, vector_t pos_n, vector_t speed)
{
	double angle = 0;
	double const pi = 3.1415592654;

	if ((pos_1.z > 0 && pos_n.z > 0) || (pos_1.z < 0 && pos_n.z < 0)) {
		my_putstr("The ball won't reach the bat.\n");
		return (-1);
	}
	else {
		angle = 90 - ABS(acos(speed.z / get_norm(speed))) / pi * 180;
		angle = ABS(angle);
		my_putstr("The incidence angle is :\n");
		printf("%.2f degrees\n", angle);
	}
	return (angle);
}

int main(int ac, char **av)
{
	vector_t speed;
	vector_t pos_1;
	vector_t pos_n;

	if (ac != 8 || atof(av[7]) < 0)
		return (1);
	pos_1.x = atoll(av[4]);
	pos_1.y = atoll(av[5]);
	pos_1.z = atoll(av[6]);
	speed = get_vector_coordinates(av);
	pos_n = get_pos_n(av, speed);
	get_angle_incid(pos_1, pos_n, speed);
	return (0);
}
