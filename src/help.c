/*
** EPITECH PROJECT, 2020
** help
** File description:
** help usage
*/

#include "sokoban.h"

int do_help(void)
{
    my_putstr("USAGE\n");
    my_putstr("\t./my_sokoban map\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("\tmap file representing the warehouse map, ");
    my_putstr("containing ‘#’ for walls, ‘P’ for the player, ");
    my_putstr("‘X’ for boxes and ‘O’ for storage locations.\n");
    return (0);
}