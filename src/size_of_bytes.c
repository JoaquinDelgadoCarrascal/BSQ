/*
** EPITECH PROJECT, 2020
** size_of_bytes
** File description:
** size of the byts
*/

#include "bsq.h"

int size_of_bytes(char **argv)
{
    struct stat buf;

    stat(argv[1], &buf);
    return (buf.st_size);
}