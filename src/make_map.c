/*
** EPITECH PROJECT, 2021
** make_map
** File description:
** make the map
*/

#include "sokoban.h"

char **make_cpy_map(game_t *g)
{
    int j = 0;
    int i = 0;

    while (g->map.cpy_map[j] != NULL) {
        while (g->map.cpy_map[j][i] != '\0') {
            if (g->map.cpy_map[j][i] == 'P' || g->map.cpy_map[j][i] == 'X')
                g->map.cpy_map[j][i] = ' ';
            i++;
        }
        i = 0;
        j++;
    }
    return (g->map.cpy_map);
}

int make_map(char *buf)
{
    game_t *g = malloc(sizeof(game_t));

    if (g == NULL)
        return (84);
    g->map.map = my_str_to_word_array_mod(buf);
    g->map.width = count_lines(buf);
    g->map.length = my_strlen(g->map.map[0]);
    g->map.start_map = my_arraydup(g->map.map);
    g->map.cpy_map = my_arraydup(g->map.map);
    g->map.cpy_map = make_cpy_map(g);
    get_player_pos(g);
    return (main_loop(g));
}