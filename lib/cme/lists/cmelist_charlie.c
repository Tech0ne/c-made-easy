/*
** EPITECH PROJECT, 2023
** cme - lists
** File description:
** charlie file
*/

#include "cme.h"

void                cmelist_destroy(list liste)
{
    if (!liste)
        return;
    for (; liste->prev; liste = liste->prev);
    for (; liste->next; liste = liste->next)
        cmelist_remove(liste->prev);
    cmelist_remove(liste->prev);
    cmelist_remove(liste);
}

void                cmelist_free_content(list liste)
{
    if (!liste)
        return;
    list c = liste;
    for (; c->prev; c = c->prev);
    for (; c; c = c->next)
        free(c->data);
}
