/*
** EPITECH PROJECT, 2021
** move_right
** File description:
** moves the player to the right
*/

#include "sokoban.h"

game_t *move_right(game_t *g)
{
    if (g->player.x + 1 >= get_len_line(g, g->player.x))
        return (g);
    if (g->map.map[g->player.y][g->player.x + 1] == '#'
    || (g->map.map[g->player.y][g->player.x + 2] == 'X'
    && g->map.map[g->player.y][g->player.x + 1] == 'X')
    || (g->map.map[g->player.y][g->player.x + 1] == 'X'
    && g->map.map[g->player.y][g->player.x + 2] == '#')
    || (is_player_out_map(g->player, 3) == 84)) {
        return (g);
    }
    if (g->map.map[g->player.y][g->player.x + 1] == 'O')
        MAP = g->map.cpy_map[g->player.y][g->player.x];
    if (g->map.map[g->player.y][g->player.x + 1] == 'X') {
        MAP = g->map.cpy_map[g->player.y][g->player.x];
        g->map.map[g->player.y][g->player.x + 1] = 'P';
        g->map.map[g->player.y][g->player.x + 2] = 'X';
        g->player.x++;
    } else {
        MAP = g->map.cpy_map[g->player.y][g->player.x];
        g->map.map[g->player.y][g->player.x + 1] = 'P';
        g->player.x++;
    }
    return (g);
}