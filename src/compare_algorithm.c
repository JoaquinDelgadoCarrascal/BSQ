/*
** EPITECH PROJECT, 2020
** compare_algorithm
** File description:
** compare the smallest
*/

#include "bsq.h"

int compare_algorithm(int **matrix, int l, int c)
{
    int smallest = matrix[l - 1][c - 1];

    if (matrix[l - 1][c - 1] < matrix[l - 1][c])
        smallest = matrix[l - 1][c - 1];
    if (matrix[l - 1][c] < matrix[l][c - 1])
        smallest = matrix[l - 1][c];
    if (matrix[l][c - 1] < matrix[l - 1][c - 1])
        smallest = matrix[l][c - 1];
    return (smallest);
}