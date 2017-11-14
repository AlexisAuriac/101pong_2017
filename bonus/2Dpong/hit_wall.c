/*
** EPITECH PROJECT, 2017
** 101pong, bonus : 2Dpong
** File description:
** Handles interactions between the walls and the ball.
*/

#include <SFML/Graphics.h>
#include "include/2Dpong.h"

ball_t hit_up(ball_t ball, int direction)
{
        if (ball.pos.y <= BALL_SPEED) {
		if (direction == 0)
                        ball.angle -= 2 * (ball.angle % 180);
                else if (direction == 1)
                        ball.angle += 2 * (ball.angle % 180);
        }
        return (ball);
}

ball_t hit_down(ball_t ball, int direction)
{
	if (ball.pos.y + BALL_SPEED >= HEIGHT) {
		if (direction == 2)
			ball.angle -= 2 * (ball.angle % 180);
		else if (direction == 3)
			ball.angle += 2 * (ball.angle % 180);
	}
	return (ball);
}

ball_t hit_left(ball_t ball, int direction)
{
	if (ball.pos.x <= BALL_SPEED) {
                if (direction == 1)
                        ball.angle -= 2 * ((ball.angle - 90) % 360);
                else if (direction == 2)
                        ball.angle += 2 * ((ball.angle - 90) % 360);
        }
        return (ball);
}

ball_t hit_right(ball_t ball, int direction)
{
	if (ball.pos.x + BALL_SPEED >= WIDTH) {
                if (direction == 3)
                        ball.angle += 180;
                else if (direction == 0)
                        ball.angle += 2 * ball.angle;
        }
        return (ball);
}

ball_t hit_wall(ball_t ball, int direction)
{
	ball = hit_down(ball, direction);
	ball = hit_up(ball, direction);
	ball = hit_left(ball, direction);
	ball = hit_right(ball, direction);
	return (ball);
}
