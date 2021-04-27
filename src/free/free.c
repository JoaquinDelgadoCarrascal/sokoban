/*
** EPITECH PROJECT, 2021
** free
** File description:
** free every malloc
*/

#include "sokoban.h"

void do_free(game_t *g)
{
    free_array(g->map.map);
    free_array(g->map.cpy_map);
    free_array(g->map.start_map);
    free(g);
}