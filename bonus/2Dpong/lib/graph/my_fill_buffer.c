/*
** EPITECH PROJECT, 2017
** my_fill_buffer
** File description:
** Fills a buffer with a color.
*/

#include <SFML/Graphics.h>
#include "graph.h"

void my_fill_buffer(framebuffer_t *buffer, sfColor color)
{
	for (int i = 0 ; i < buffer->width * buffer->height * 4 ; i += 4) {
                buffer->pixels[i] = color.r;
		buffer->pixels[i + 1] = color.g;
		buffer->pixels[i + 2] = color.b;
		buffer->pixels[i + 3] = color.a;
	}
}
