/*
** EPITECH PROJECT, 2021
** is_check
** File description:
** checks which object is
*/

#include "sokoban.h"

void is_check(game_t *g, int n)
{
    if (n == RIGHT || n == KEY_RIGHT)
        move_right(g);
    if (n == LEFT || n == KEY_LEFT)
        move_left(g);
    if (n == UP || n == KEY_UP)
        move_up(g);
    if (n == DOWN || n == KEY_DOWN)
        move_down(g);
}