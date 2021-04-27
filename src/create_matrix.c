/*
** EPITECH PROJECT, 2020
** create_matrix
** File description:
** creates a matrix
*/

#include "bsq.h"

void free_matrix(char *buf, int **matrix)
{
    int i = 0;

    while (i != number_of_lines(buf)) {
        free(matrix[i]);
        i++;
    }
    free(buf);
    free(matrix);
}

void fill_matrix(int ***matrix, square_t *square, int l, int c)
{
    if (!(l == 0 || c == 0 || (*matrix)[l][c] == 0))
        (*matrix)[l][c] += compare_algorithm(*matrix, l, c);
    if ((*matrix)[l][c] > square->size) {
        square->size = (*matrix)[l][c];
        square->l = l;
        square->c = c;
    }
}

void create_matrix(char *buf)
{
    int **matrix = malloc(sizeof(int *) * number_of_lines(buf));
    int n = clean_number(buf);
    int l = 0;
    int c = 0;
    square_t square = inicialize_square(square);

    while (l != number_of_lines(buf)) {
        matrix[l] = malloc(sizeof(int) * number_of_columns(buf));
        while (c != number_of_columns(buf)) {
            matrix[l][c] = change_to_binary(buf, n);
            fill_matrix(&matrix, &square, l, c);
            n++;
            c++;
        }
        l++;
        n++;
        c = 0;
    }
    print_croses(square, buf, matrix);
    free_matrix(buf, matrix);
}