/*
** EPITECH PROJECT, 2020
** my_str_to_word_array
** File description:
** conver str to words
*/

#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

bool is_next_word(char s)
{
    if (s != '\n' && s != '\0')
        return (true);
    return (false);
}

int get_word_len(char *str, int i)
{
    int len_w = 0;

    while (is_next_word(str[i]) == true) {
        len_w++;
        i++;
    }
    return (len_w);
}

int count_words(char *str)
{
    int i = 0;
    int words = 0;

    if (str == NULL)
        return (0);
    while (str[i]) {
        if (is_next_word(str[i]) == true && is_next_word(str[i + 1]) == false)
            words++;
        i++;
    }
    return (words);
}

char **my_str_to_word_array_mod(char *str)
{
    int i = 0;
    int j = 0;
    int n = 0;
    char **result = malloc(sizeof(char *) * (count_words(str) + 1));

    if (result == NULL)
        return (NULL);
    while (j < count_words(str)) {
        while (is_next_word(str[i]) == false)
            i++;
        result[j] = malloc(sizeof(char) * (get_word_len(str, i) + 1));
        while (is_next_word(str[i]) == true)
            result[j][n++] = str[i++];
        result[j++][n] = '\0';
        n = 0;
    }
    result[j] = NULL;
    return (result);
}