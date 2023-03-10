/*
** EPITECH PROJECT, 2023
** cme
** File description:
** sample dictionaries with associated functions
*/

#ifndef INCLUDED_CME_DICTS_H
    #define INCLUDED_CME_DICTS_H

    #define dict _dict *

    #define cmedict_create(key, value) dev_cmedict_create(&key, &value)
    #define cmedict_append(dico, key, value) \
        dev_cmedict_append(dico, &key, &value)
    #define cmedict_set(dico, key, value) dev_cmedict_set(dico, &key, &value)
    #define cmedict_get(dico, key) dev_cmedict_get(dico, key)
    #define cmedict_get_key(dico, value) dev_cmedict_get_key(dico, value)

typedef struct _dict {
    struct _dict *prev;
    void *key;
    void *value;
    struct _dict *next;
} _dict;

dict                dev_cmedict_create(void *key, void *value);
bool                dev_cmedict_append(dict dico, void *key, void *value);
bool                dev_cmedict_set(dict dico, void *key, void *value);
void               *dev_cmedict_get(dict dico, void *key);
void               *dev_cmedict_get_key(dict dico, void *value);

#endif
