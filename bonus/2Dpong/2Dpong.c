/*
** EPITECH PROJECT, 2017
** 101pong
** File description:
** Bonus : 2D pong game.
*/

#include <stdlib.h>
#include <math.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include "include/graph.h"
#include "include/2Dpong.h"

ball_t initialize_ball(void)
{
	ball_t ball = {0, {0, 0}};

	ball.angle = 200;
	ball.pos.x = BALL_POS_INITIAL_X;
	ball.pos.y = BALL_POS_INITIAL_Y;
	return (ball);
}

ball_t move_ball(ball_t ball)
{
	int direction = ABS(ball.angle % 360 / 90);
	double angle = ABS(ball.angle);
	int move_x = cos(RAD(angle)) * BALL_SPEED;
	int move_y = sin(RAD(angle)) * BALL_SPEED;

	ball.pos.x += move_x;
	ball.pos.y -= move_y;
	ball = hit_wall(ball, direction);
	return (ball);
}

void game_loop(sfRenderWindow *window)
{
	sfEvent event;
	sfClock *clock;
	sfTime time;
	sfSprite *sprite = sfSprite_create();
	sfTexture *texture = sfTexture_create(WIDTH, HEIGHT);
	framebuffer_t *buffer = my_create_frame_buffer(WIDTH, HEIGHT);
	ball_t ball = initialize_ball();

	clock = sfClock_create();
	while (sfRenderWindow_isOpen(window)) {
		while (sfRenderWindow_pollEvent(window, &event)) {
			if (event.type == sfEvtClosed)
				sfRenderWindow_close(window);
		}
		time = sfClock_getElapsedTime(clock);
		if (time.microseconds >= 50000) {
			my_fill_buffer(buffer, sfBlack);
			ball = move_ball(ball);
			my_draw_square(buffer, ball.pos, BALL_SIZE, sfWhite);
			sfTexture_updateFromPixels(texture, buffer->pixels, buffer->width, buffer->height, 0, 0);
			sfSprite_setTexture(sprite, texture, 0);
			sfRenderWindow_clear(window, sfWhite);
			sfRenderWindow_drawSprite(window, sprite, 0);
			sfRenderWindow_display(window);
			sfClock_restart(clock);
		}
	}
	free(buffer->pixels);
	free(buffer);
	sfTexture_destroy(texture);
	sfSprite_destroy(sprite);
	sfClock_destroy(clock);
}

int main(void)
{
	sfVideoMode mode = {WIDTH, HEIGHT, 32};
	sfRenderWindow *window = 0;

	window = sfRenderWindow_create(mode, "Pong", sfClose, 0);
	if (window == 0)
		return (1);
	game_loop(window);
	sfRenderWindow_destroy(window);
	return (0);
}
