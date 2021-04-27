/*
** EPITECH PROJECT, 2020
** inicialize_square
** File description:
** inicialize the square_t
*/

#include "bsq.h"

square_t inicialize_square(square_t square)
{
    square.l = 0;
    square.c = 0;
    square.size = 0;

    return (square);
}