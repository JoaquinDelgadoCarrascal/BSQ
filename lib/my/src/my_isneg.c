/*
** EPITECH PROJECT, 2020
** my_isneg
** File description:
** N negative, P possitive or null
*/

#include "my.h"

int my_isneg(int n)
{
    if (n < 0) {
        my_putchar('N');
    } else {
        my_putchar('P');
    }
    return (0);
}
