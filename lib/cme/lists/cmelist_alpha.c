/*
** EPITECH PROJECT, 2023
** cme - lists
** File description:
** alpha file
*/

#include "cme.h"

list               dev_cmelist_create(void *data)
{
    list current = malloc(sizeof(struct _list));
    current->prev = NULL;
    current->data = data;
    current->next = NULL;

    return current;
}

bool                dev_cmelist_append(list liste, void *data)
{
    if (!liste)
        return false;
    list obj = dev_cmelist_create(data);
    list c = liste;
    for (; c->next; c = c->next);
    obj->prev = c;
    c->next = obj;
    return true;
}

bool                dev_cmelist_prepend(list liste, void *data)
{
    if (!liste)
        return false;
    list obj = dev_cmelist_create(data);
    list c = liste;
    for (; c->prev; c = c->prev);
    obj->next = c;
    c->prev = obj;
    return true;
}

bool                dev_cmelist_insert(list liste, void *data)
{
    if (!liste)
        return false;
    list obj = dev_cmelist_create(data);
    list c = liste;
    obj->next = c->next;
    obj->prev = c;
    c->next = obj;
    return true;
}

bool                dev_cmelist_set_before(list liste, void *data)
{
    if (!liste)
        return false;
    list obj = dev_cmelist_create(data);
    list c = liste;
    obj->prev = c->prev;
    obj->next = c;
    c->prev = obj;
    return true;
}
