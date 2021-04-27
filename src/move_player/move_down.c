/*
** EPITECH PROJECT, 2021
** move_down
** File description:
** moves the player down
*/

#include "sokoban.h"

int get_num_lines(char **matrix)
{
    int i = 0;

    while (matrix[i]) {
        i++;
    }
    return (i);
}

void move_down_hangling(game_t *g)
{
    if (g->map.map[g->player.y][g->player.x + 1] == 'O')
        MAP = g->map.cpy_map[g->player.y][g->player.x];
    if (g->map.map[g->player.y + 1][g->player.x] == 'X') {
        MAP = g->map.cpy_map[g->player.y][g->player.x];
        g->map.map[g->player.y + 1][g->player.x] = 'P';
        g->map.map[g->player.y + 2][g->player.x] = 'X';
        g->player.y++;
    } else {
        MAP = g->map.cpy_map[g->player.y][g->player.x];
        g->map.map[g->player.y + 1][g->player.x] = 'P';
        g->player.y++;
    }
}

game_t *move_down(game_t *g)
{
    if (g->player.y + 1 > get_num_lines(g->map.map) - 2)
        return (g);
    if (g->map.map[g->player.y + 1][g->player.x] == '#'
    || (g->map.map[g->player.y + 2][g->player.x] == 'X'
    && g->map.map[g->player.y + 1][g->player.x] == 'X')
    || (g->map.map[g->player.y + 1][g->player.x] == 'X'
    && g->map.map[g->player.y + 2][g->player.x] == '#')
    || (is_player_out_map(g->player, 2) == 84)) {
        return (g);
    }
    move_down_hangling(g);
    return (g);
}