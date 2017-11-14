
/*
** EPITECH PROJECT, 2017
** 101pong, bonus : 2D game
** File description:
** Header for 2D game.
*/

#ifndef PONG
#define PONG

typedef struct ball {
	int angle;
	sfVector2u pos;
}ball_t;

#define WIDTH 800
#define HEIGHT 600
#define BALL_SIZE 10
#define BALL_SPEED 10
#define BALL_POS_INITIAL_X WIDTH / 2 - BALL_SIZE / 2
#define BALL_POS_INITIAL_Y HEIGHT / 2 - BALL_SIZE / 2
#define PI 3.1415592654

#define ABS(value) ((value >= 0) ? (value) : (-value))
#define RAD(value) (value * PI /180)
#define DEGREE(value) (value / PI * 180)

ball_t hit_wall(ball_t ball, int direction);

#endif
