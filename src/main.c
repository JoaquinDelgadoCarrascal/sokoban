/*
** EPITECH PROJECT, 2021
** main
** File description:
** main function
*/

#include "sokoban.h"

int main(int argc, char **argv)
{
    if (argc != 2) {
        my_putstr("Error: wrong number of arguments, ");
        my_putstr("try -h to see the USAGE\n");
        return (84);
    }
    if (my_strcmp(argv[1], "-h") == 0) {
        do_help();
        return (0);
    }
    return (get_file(argv[1]));
}