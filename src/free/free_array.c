/*
** EPITECH PROJECT, 2021
** free_array
** File description:
** frees an array
*/

#include "sokoban.h"

void free_array(char **map)
{
    int i = 0;

    while (map[i] != NULL) {
        free(map[i]);
        i++;
    }
    free(map);
}