/*
** EPITECH PROJECT, 2023
** cme - files
** File description:
** sample files with associated functions
*/

#ifndef INCLUDED_CME_FILES_H
    #define INCLUDED_CME_FILES_H
    #define file _file *

    #define READ 00
    #define READ_WRITE 02

typedef struct _file {
    int fd;
    int size;
    int nb_lines;
    int read_pos;
    char *content;
    char *filename;
} _file;

#endif
