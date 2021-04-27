/*
** EPITECH PROJECT, 2021
** reset_map
** File description:
** resets the map
*/

#include "sokoban.h"

int reset_map(game_t *g)
{
    free_array(g->map.map);
    g->map.map = my_arraydup(g->map.start_map);
    get_player_pos(g);
    if (!g->map.map){
        my_putstr("NULL map\n");
        return (84);
    }
    return (0);
}