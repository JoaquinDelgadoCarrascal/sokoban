/*
** EPITECH PROJECT, 2020
** sokoban.h
** File description:
** prototypes of all the functions
*/

#ifndef SOKOBAN_H_
#define SOKOBAN_H_

#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <ncurses.h>
#include <stdlib.h>
#include "utils.h"
#include "macros.h"

typedef struct player_s {
    char *player;
    int x;
    int y;
} player_t;

typedef struct box_s {
    char *box;
    int x;
    int y;
} box_t;

typedef struct map_s {
    char **map;
    char **start_map;
    char **cpy_map;
    int length;
    int width;
} map_t;

typedef struct game_s {
    map_t map;
    player_t player;
    box_t box;
} game_t;

int get_file(char *file);
int read_file(int fd, char *buf, int size);
int size_of_bytes(char *file);

int do_help(void);
int error_handling(char *buf);
void free_array(char **map);
void do_free(game_t *g);
int make_map(char *buf);

void print_map(game_t *g);
int reset_map(game_t *g);
void game_loop(game_t *g);
int main_loop(game_t *g);
int is_game_finished(game_t *g);
int is_player_out_map(player_t p, int n);

game_t *get_player_pos(game_t *g);
int get_len_line(game_t *g, int x);
void is_check(game_t *g, int n);
game_t *move_right(game_t *g);
game_t *move_left(game_t *g);
game_t *move_down(game_t *g);
game_t *move_up(game_t *g);

#endif