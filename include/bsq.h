/*
** EPITECH PROJECT, 2020
** bsq.h
** File description:
** prototypes of all the functions
*/

#ifndef BSQ_H_
#define BSQ_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "my.h"

int fs_understand_return_of_read(int fd, char *buf, int size);
int clean_number(char *buf);
int number_of_lines(char *buf);
int number_of_columns(char *buf);
int change_to_binary(char *buf, int i);
int compare_algorithm(int **matrix, int l, int c);
void create_matrix(char *buf);
int size_of_bytes(char **argv);

typedef struct square_s
{
    int l;
    int c;
    int size;

} square_t;

square_t inicialize_square(square_t square);
void print_croses(square_t square, char *buf, int **matrix);

#endif