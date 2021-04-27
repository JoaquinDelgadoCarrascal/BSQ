/*
** EPITECH PROJECT, 2020
** lines_and_columns
** File description:
** number of lines and columns
*/

#include "bsq.h"

int number_of_lines(char *buf)
{
    int number = 0;
    int i = 0;
    char *lines = malloc(sizeof(char) * my_strlen(buf));

    if (lines == NULL)
        return (84);
    while (buf[i] != '\n') {
        lines[i] = buf[i];
        i++;
    }
    lines[i] = '\0';
    number = my_getnbr(lines);
    free(lines);
    return (number);
}

int number_of_columns(char *buf)
{
    int count = 0;
    int n = clean_number(buf);

    while (buf[n] != '\n') {
        count++;
        n++;
    }
    return (count);
}