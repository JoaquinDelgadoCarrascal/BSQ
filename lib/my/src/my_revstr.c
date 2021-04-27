/*
** EPITECH PROJECT, 2020
** my_revstr
** File description:
** reverses a string
*/

#include "my.h"

char *my_revstr(char *str)
{
    int length = my_strlen(str) - 1;
    int temp;
    int n = 0;

    while (n < length) {
        temp = str[n];
        str[n] = str[length];
        str[length] = temp;
        length--;
        n++;
    }
    return (str);
}
