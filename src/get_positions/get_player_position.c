/*
** EPITECH PROJECT, 2021
** get_player_position
** File description:
** gets the player position
*/

#include "sokoban.h"

game_t *get_player_pos(game_t *g)
{
    int j = 0;
    int i = 0;

    while (g->map.map[j] != NULL) {
        while (g->map.map[j][i] != '\0') {
            if (g->map.map[j][i] == 'P') {
                g->player.x = i;
                g->player.y = j;
                break;
            } else
                i++;
        }
        i = 0;
        j++;
    }
    return (g);
}