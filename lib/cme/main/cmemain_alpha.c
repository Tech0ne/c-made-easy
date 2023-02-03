/*
** EPITECH PROJECT, 2023
** cme - main
** File description:
** alpha file
*/

#include "cme.h"

int                 cmemain_strlen(char *str)
{
    int size;
    for (size = 0; str[size]; size++);
    return size;
}

char               *cmemain_strcopy(char *str)
{
    char *new_str = malloc(sizeof(char) * (cmemain_strlen(str) + 1));
    int i;
    for (i = 0; str[i]; i++)
        new_str[i] = str[i];
    new_str[i] = '\0';
    return new_str;
}