/*
** EPITECH PROJECT, 2021
** my_print_int_array
** File description:
** prints an array
*/

#include "utils.h"
#include <stdlib.h>

void my_print_array(char **array)
{
    int i = 0;

    while (array[i] != NULL) {
        my_putstr(array[i]);
        my_putchar('\n');
        i++;
    }
}