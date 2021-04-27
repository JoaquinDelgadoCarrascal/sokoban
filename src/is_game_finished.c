/*
** EPITECH PROJECT, 2021
** is_game_finished
** File description:
** checks if the game is finished
*/

#include "sokoban.h"

int is_box_stuck(game_t *g, int *i, int *j)
{
    if (g->map.map[(*j)][(*i)] == 'X') {
        if (!((g->map.map[(*j)][(*i) + 1] == '#'
        && g->map.map[(*j) - 1][(*i)] == '#')
        || (g->map.map[(*j)][(*i) + 1] == '#'
        && g->map.map[(*j) + 1][(*i)] == '#')
        || (g->map.map[(*j)][(*i) - 1] == '#'
        && g->map.map[(*j) - 1][(*i)] == '#')
        || (g->map.map[(*j)][(*i) - 1] == '#'
        && g->map.map[(*j) + 1][(*i)] == '#'))) {
            return (0);
        }
    }
    return (1);
}

int check_game_finished(game_t *g)
{
    int j = 0;
    int i = 0;

    while (g->map.map[j] != NULL) {
        while (g->map.map[j][i] != '\0') {
            if (is_box_stuck(g, &i, &j) == 0)
                return (0);
            i++;
        }
        i = 0;
        j++;
    }
    return (1);
}

int is_game_finished(game_t *g)
{
    int j = 0;
    int i = 0;

    if (check_game_finished(g) == 1) {
        print_map(g);
        refresh();
        return (1);
    }
    while (g->map.map[j] != NULL) {
        i = 0;
        while (g->map.map[j][i] != '\0') {
            if (g->map.cpy_map[j][i] == 'O' && g->map.map[j][i] != 'X')
                return (-1);
            i++;
        }
        j++;
    }
    print_map(g);
    refresh();
    return (0);
}