/*
** EPITECH PROJECT, 2017
** graph.h
** File description:
** Contains the prototypes of all the functions in libgraph.a.
*/

#ifndef GRAPH
#define GRAPH

typedef struct framebuffer {
        sfUint8 *pixels;
	unsigned int width;
        unsigned int height;
}framebuffer_t;

void my_put_pixel(framebuffer_t *buffer, unsigned int x, unsigned int y, sfColor color);
framebuffer_t *my_create_frame_buffer(unsigned int width, unsigned int height);
void my_draw_square(framebuffer_t *buffer, sfVector2u position, unsigned int size, sfColor color);
void my_fill_buffer(framebuffer_t *buffer, sfColor color);

#endif
