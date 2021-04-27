/*
** EPITECH PROJECT, 2021
** main loop
** File description:
** main loop of the game
*/

#include "sokoban.h"

void print_map(game_t *g)
{
    int i = 0;
    int x = 0;
    int y = 0;

    getmaxyx(stdscr, y, x);
    clear();
    if (COLS <= g->map.length || LINES <= g->map.width)
        mvprintw(y / 2, (x - my_strlen(ERROR_SIZE)) / 2, ERROR_SIZE);
    else {
        while (g->map.map[i] != NULL) {
            mvprintw(Y, X, g->map.map[i]);
            i++;
        }
    }
    refresh();
}

int main_loop(game_t *g)
{
    int n = 0;
    int is_finished = -1;

    keypad(initscr(), TRUE);
    while (is_finished == -1) {
        print_map(g);
        n = getch();
        if (n == SPACE)
            reset_map(g);
        is_check(g, n);
        is_finished = is_game_finished(g);
        if (n == ENTER)
            is_finished = 0;
        refresh();
    }
    endwin();
    do_free(g);
    return (is_finished);
}