/*
** EPITECH PROJECT, 2017
** my_put_pixel
** File description:
** Puts a pixel in a frame buffer.
*/

#include <SFML/Graphics.h>
#include "graph.h"

void my_put_pixel(framebuffer_t *buffer, unsigned int x, unsigned int y, sfColor color)
{
	if (x < buffer->width && y < buffer->height) {
		buffer->pixels[y * buffer->width * 4 + x * 4] = color.r;
		buffer->pixels[y * buffer->width * 4 + x * 4 + 1] = color.g;
		buffer->pixels[y * buffer->width * 4 + x * 4 + 2] = color.b;
		buffer->pixels[y * buffer->width * 4 + x * 4 + 3] = color.a;
	}
}
