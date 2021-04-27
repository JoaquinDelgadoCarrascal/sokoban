/*
** EPITECH PROJECT, 2021
** count_lines
** File description:
** counts the lines of a string
*/

#include "sokoban.h"

int count_lines(char *str)
{
    int i = 0;
    int num = 0;

    while (str[i] != '\0') {
        if (str[i] == '\n')
            num++;
        i++;
    }
    return (num + 1);
}