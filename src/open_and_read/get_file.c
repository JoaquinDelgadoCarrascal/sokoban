/*
** EPITECH PROJECT, 2020
** read_pos
** File description:
** reads position maps
*/

#include "sokoban.h"

int get_file(char *file)
{
    int nbr_bytes = size_of_bytes(file);
    char *buf = malloc(sizeof(char) * (nbr_bytes + 1));
    int fd = 0;

    fd = open (file, O_RDONLY);
    if (buf == NULL || fd == -1)
        return (84);
    if (fd == -1 || read_file(fd, buf, nbr_bytes) == 84 || close(fd) == -1)
        return (84);
    buf[nbr_bytes] = '\0';
    if (error_handling(buf) == 84)
        return (84);
    return (make_map(buf));
}