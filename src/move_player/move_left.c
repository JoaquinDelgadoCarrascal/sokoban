/*
** EPITECH PROJECT, 2021
** move_left
** File description:
** moves the player to the left
*/

#include "sokoban.h"

game_t *move_left(game_t *g)
{
    if (g->player.x - 2 < 0)
        return (g);
    if (g->map.map[g->player.y][g->player.x - 1] == '#'
    || (g->map.map[g->player.y][g->player.x - 2] == 'X'
    && g->map.map[g->player.y][g->player.x - 1] == 'X')
    || (g->map.map[g->player.y][g->player.x - 1] == 'X'
    && g->map.map[g->player.y][g->player.x - 2] == '#')
    || (is_player_out_map(g->player, 1) == 84)) {
        return (g);
    }
    if (g->map.map[g->player.y][g->player.x + 1] == 'O')
        MAP = g->map.cpy_map[g->player.y][g->player.x];
    if (g->map.map[g->player.y][g->player.x - 1] == 'X') {
        MAP = g->map.cpy_map[g->player.y][g->player.x];
        g->map.map[g->player.y][g->player.x - 1] = 'P';
        g->map.map[g->player.y][g->player.x - 2] = 'X';
        g->player.x--;
    } else {
        MAP = g->map.cpy_map[g->player.y][g->player.x];
        g->map.map[g->player.y][g->player.x - 1] = 'P';
        g->player.x--;
    }
    return (g);
}