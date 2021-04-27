/*
** EPITECH PROJECT, 2020
** size_of_bytes
** File description:
** size of the byts
*/

#include "sokoban.h"

int size_of_bytes(char *file)
{
    struct stat buf;

    if (stat(file, &buf) == -1)
        return (84);
    return (buf.st_size);
}