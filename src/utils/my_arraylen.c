/*
** EPITECH PROJECT, 2020
** my_arraylen
** File description:
** counts and returns the number of characters
*/

#include <stdlib.h>

int my_arraylen(char **array)
{
    int j = 0;

    while (array && array[j] != NULL)
        j++;
    return (j);
}