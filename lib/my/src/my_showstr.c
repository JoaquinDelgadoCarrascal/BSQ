/*
** EPITECH PROJECT, 2020
** my_showstr
** File description:
** prints a string and returns 0
*/

#include "my.h"

int my_showstr(char const *str)
{
    int i = 0;
    int n = 1;

    while (str[i] != '\0'){
        if (str[i] < 32 || str[i] == 127)
            now_is_hex(str[i]);
        else
            my_putchar(str[i]);
        i++;
    }
    return (1);
}

int now_is_hex(char j)
{
    int first_digit = 0;
    int second_digit = 0;

    if (j > 9) {
        first_digit = j / 16;
        second_digit = j % 16;
        my_putchar('/');
        my_putchar(first_digit + 48);
        if (second_digit < 10)
            my_putchar(second_digit + 48);
        else
            my_putchar(second_digit + 87);
    } else {
        first_digit = j;
        my_putchar ('/');
        my_putchar ('0');
        my_putchar (first_digit + 48);
    }
    return (0);
}
