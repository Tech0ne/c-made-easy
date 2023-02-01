/*
** EPITECH PROJECT, 2023
** cme - dict
** File description:
** alpha file
*/

#include "cme.h"
#include <stdarg.h>

dict                dev_cmedict_create(void *key, void *value)
{
    dict c = malloc(sizeof(dict));
    c->prev = NULL;
    c->key = key;
    c->value = value;
    c->next = NULL;

    return c;
}

bool                dev_cmedict_append(dict dico, void *key, void *value)
{
    if (!dico)
        return false;
    dict c = dico;
    for (; c->next; c = c->next);
    dict obj = dev_cmedict_create(key, value);
    obj->prev = c;
    c->next = obj;
}

bool                dev_cmedict_set(dict dico, void *key, void *value)
{
    if (!dico)
        return false;
    dict c = dico;
    for (; c->prev; c = c->prev);
    for (; c; c = c->next) {
        if (c->key == key) {
            c->value = value;
            return true;
        }
    }
    dev_cmedict_append(dico, key, value);
    return true;
}

void               *dev_cmedict_get(dict dico, void *key)
{
    if (!dico)
        return NULL;
    dict c = dico;
    for (; c->prev; c = c->prev);
    for (; c; c = c->next)
        if (c->key == key)
            return c->value;
    return NULL;
}

void               *dev_cmedict_get_key(dict dico, void *value)
{
    if (!dico)
        return NULL;
    dict c = dico;
    for (; c->prev; c = c->prev);
    for (; c; c = c->next)
        if (c->value == value)
            return c->key;
    return NULL;
}
