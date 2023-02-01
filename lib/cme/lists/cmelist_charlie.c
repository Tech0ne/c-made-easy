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
