/*
** EPITECH PROJECT, 2023
** cme - lists
** File description:
** bravo file
*/

#include "cme.h"

int                 cmelist_length(list liste)
{
    if (!liste)
        return 0;
    list c = liste;
    for (; c->prev; c = c->prev);
    int t = 1;
    for (; c->next; c = c->next)
        t++;
    return t;
}

int                 dev_cmelist_getindex(list liste, void *data)
{
    if (!liste)
        return -1;
    list c = liste;
    for (; c->prev; c = c->prev);
    int index = 0;
    for (; c->next; c = c->next) {
        if (c->data == data)
            return index;
        index++;
    }
    return -1;
}

void               *cmelist_get(list liste, int index)
{
    if (!liste)
        return NULL;
    int length = cmelist_length(liste);
    while (index < 0)
        index += length;
    index = index % length;
    list c = liste;
    for (; c->prev; c = c->prev);
    for (int i = 0; i < index && c; i++)
        c = c->next;
    if (c)
        return c->data;
    return NULL;
}

void               *cmelist_remove(list liste)
{
    if (!liste)
        return NULL;
    if (liste->prev)
        liste->prev->next = liste->next;
    if (liste->next)
        liste->next->prev = liste->prev;
    void *data = liste->data;
    free(liste);
    return data;
}

void               *cmelist_pop(list liste, int index)
{
    if (!liste)
        return NULL;
    int length = cmelist_length(liste);
    while (index < 0)
        index += length;
    index = index % length;
    list c = liste;
    for (; c->prev; c = c->prev);
    for (int i = 0; i < index && c; i++)
        c = c->next;
    if (!c)
        return NULL;
    return cmelist_remove(c);
}
