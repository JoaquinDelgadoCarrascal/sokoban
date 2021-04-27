/*
** EPITECH PROJECT, 2021
** move_up
** File description:
** moves the player up
*/

#include "sokoban.h"

game_t *move_up(game_t *g)
{
    if (g->player.y - 1 <= 0)
        return (g);
    if (g->map.map[g->player.y - 1][g->player.x] == '#'
    || (g->map.map[g->player.y - 2][g->player.x] == 'X'
    && g->map.map[g->player.y - 1][g->player.x] == 'X')
    || (g->map.map[g->player.y - 1][g->player.x] == 'X'
    && g->map.map[g->player.y - 2][g->player.x] == '#')) {
        return (g);
    }
    if (g->map.map[g->player.y][g->player.x + 1] == 'O')
        MAP = g->map.cpy_map[g->player.y][g->player.x];
    if (g->map.map[g->player.y - 1][g->player.x] == 'X') {
        MAP = g->map.cpy_map[g->player.y][g->player.x];
        g->map.map[g->player.y - 1][g->player.x] = 'P';
        g->map.map[g->player.y - 2][g->player.x] = 'X';
        g->player.y--;
    } else {
        MAP = g->map.cpy_map[g->player.y][g->player.x];
        g->map.map[g->player.y - 1][g->player.x] = 'P';
        g->player.y--;
    }
    return (g);
}