/*
** EPITECH PROJECT, 2023
** cme - lists
** File description:
** main header file
*/

#ifndef INCLUDED_CME_LISTS_H
    #define INCLUDED_CME_LISTS_H

    #include <stdio.h>
    #include <stdlib.h>

    #define cmelist_create(data) dev_cmelist_create(&data)
    #define cmelist_append(obj, data) dev_cmelist_append(obj, &data)
    #define cmelist_prepend(obj, data) dev_cmelist_prepend(obj, &data)
    #define cmelist_insert(obj, data) dev_cmelist_insert(obj, &data)
    #define cmelist_set_before(obj, data) dev_cmelist_set_before(obj, &data)
    #define cmelist_getindex(obj, data) dev_cmelist_getindex(obj, &data)
    #define cmelist_poplast(obj) cmelist_pop(obj, -1)
    #define list _list *

typedef struct _list {
    struct _list *prev;
    void *data;
    struct _list *next;
} _list;

list                dev_cmelist_create(void *data);
bool                dev_cmelist_append(list liste, void *data);
bool                dev_cmelist_prepend(list liste, void *data);
bool                dev_cmelist_insert(list liste, void *data);
bool                dev_cmelist_set_before(list liste, void *data);
int                 cmelist_length(list liste);
int                 dev_cmelist_getindex(list liste, void *data);
void               *cmelist_get(list liste, int index);
void               *cmelist_remove(list liste);
void               *cmelist_pop(list liste, int index);

#endif
