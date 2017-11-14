/*
** EPITECH PROJECT, 2017
** my_create_frame_buffer
** File description:
** Creates a frame buffer.
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include "graph.h"

framebuffer_t *my_create_frame_buffer(unsigned int width, unsigned int height)
{
	framebuffer_t *buffer = malloc(sizeof(framebuffer_t));

        buffer->pixels = malloc(sizeof(sfUint8) * width * height * 4);
	for (int i = 0 ; i < width * height * 4 ; i++)
                buffer->pixels[i] = 255;
        buffer->width = width;
        buffer->height = height;
        return (buffer);
}
