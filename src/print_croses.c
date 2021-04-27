/*
** EPITECH PROJECT, 2020
** print_croses
** File description:
** prints croses
*/

#include "bsq.h"

void print_croses(square_t square, char *buf, int **matrix)
{
    int l = 0;
    int c = 0;

    while (l != number_of_lines(buf)) {
        while (c != number_of_columns(buf)) {
            if ((c > (square.c - square.size) && c <= square.c) &&
            (l > (square.l - square.size) && l <= square.l)) {
              my_putchar('x');
            } else if (matrix[l][c] == 0)
                my_putchar('o');
            else
                my_putchar('.');
            c++;
        }
        my_putchar('\n');
        l++;
        c = 0;
    }
}