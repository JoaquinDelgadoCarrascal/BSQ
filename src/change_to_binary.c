/*
** EPITECH PROJECT, 2020
** change to binary
** File description:
** changes to binary
*/

#include "bsq.h"

int change_to_binary(char *buf, int i)
{
    if (buf[i] == '.')
        return (1);
    if (buf[i] == 'o')
        return (0);
    return (84);
}