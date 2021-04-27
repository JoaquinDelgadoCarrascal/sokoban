/*
** EPITECH PROJECT, 2020
** bsq.h
** File description:
** prototypes of all the functions
*/

#ifndef UTILS_H_
#define UTILS_H_

void my_putchar(char c);
int my_putstr(char const *str);
int my_strcmp(char const *n1, char const *n2);
int my_strlen(char const *str);
int my_arraylen(char **array);
char **my_str_to_word_array_mod(char *str);
void my_print_array(char **array);
int count_lines(char *str);
char *my_strdup(char const *src);
char **my_arraydup(char **arra_to_cpy);

#endif