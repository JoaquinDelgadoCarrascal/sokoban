/*
** EPITECH PROJECT, 2020
** my_arraydup
** File description:
** allocates memory for an array and copy the one given as argument on it
*/

#include <stdlib.h>

int my_arraylen(char **array);

char *my_strdup(char const *src);

void my_print_array(char **);

char **my_arraydup(char **arra_to_cpy)
{
    int j = 0;
    int array_len = my_arraylen(arra_to_cpy);
    char **new_array = malloc(sizeof(char *) * (array_len + 1));

    if (new_array == NULL || !arra_to_cpy)
        return (NULL);
    while (arra_to_cpy && arra_to_cpy[j] != NULL) {
        new_array[j] = my_strdup(arra_to_cpy[j]);
        if (!new_array[j])
            return (NULL);
        j++;
    }
    new_array[j] = NULL;
    return (new_array);
}