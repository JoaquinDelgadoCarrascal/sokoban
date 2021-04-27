/*
** EPITECH PROJECT, 2021
** get_len_line
** File description:
** gets the lenght of the line
*/

#include "sokoban.h"

int get_len_line(game_t *g, int x)
{
    int i = 0;

    while (g->map.map[x][i]) {
        i++;
    }
    return (i);
}