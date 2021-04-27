/*
** EPITECH PROJECT, 2020
** clean_number
** File description:
** skips the first number
*/

#include "bsq.h"

int clean_number(char *buf)
{
    int n = 0;

    while (buf[n] != '\n') {
        n++;
    }
    n++;
    return (n);
}