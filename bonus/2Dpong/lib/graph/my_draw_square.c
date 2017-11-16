/*
** EPITECH PROJECT, 2017
** my_draw_square
** File description:
** Puts a square of pixel in a frame buffer.
*/

#include <SFML/Graphics.h>
#include "graph.h"

void my_draw_square(framebuffer_t *buffer, sfVector2u position, unsigned int size, sfColor color)
{
        for (int i = position.x ; i < position.x + size && i < buffer->width; i++) {
                for (int j = position.y ; j < position.y + size && i < buffer->height ; j++)
                        my_put_pixel(buffer, i, j, color);
        }
}
