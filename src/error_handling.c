/*
** EPITECH PROJECT, 2021
** game_loop
** File description:
** game loop
*/

#include "sokoban.h"

int is_player_out_map(player_t p, int n)
{
    if ((n == 0 && p.y == 0) || (n == 1 && p.x == 0))
        return (84);
    if ((n == 2 && p.x == LINES - 1) || (n == 3 && p.y == COLS - 1))
        return (84);
    if ((p.x >= LINES - 1 || p.x == 0) || (p.y >= COLS - 1 || p.y == 0))
        return (84);
    return (0);
}

int check_number(int player, int box, int circle)
{
    if (player > 1)
        return (84);
    if (box != circle)
        return (84);
    return (0);
}

int check_num_lines(char *buf)
{
    int i = 0;
    int next_line = 0;

    while (buf[i++] != '\0') {
        if (buf[i] == '\n')
            next_line++;
    }
    if (next_line < 3)
        return (84);
    return (0);
}

int error_message(char *buf, int player, int box, int circle)
{
    int i = 0;

    if (check_num_lines(buf) == 84)
        return (84);
    if (check_number(player, box, circle) == 84) {
        my_putstr("Error: wrong map\n");
        return (84);
    }
    while (buf[i++] != '\0') {
        if (buf[i] == 'P' || buf[i] == 'X' || buf[i] == 'O'
        || buf[i] == ' ' || buf[i] == '#'
        || buf[i] == '\n' || buf[i] == '\0') {
            i = i;
        } else {
            my_putstr("Error: wrong map\n");
            return (84);
        }
    }
    return (0);
}

int error_handling(char *buf)
{
    int i = 0;
    int player = 0;
    int box = 0;
    int circle = 0;

    while (buf[i++] != '\0') {
        if (buf[i] == 'P')
            player++;
        if (buf[i] == 'X')
            box++;
        if (buf[i] == 'O')
            circle++;
    }
    if (error_message(buf, player, box, circle) == 84)
        return (84);
    return (0);
}