/*
** EPITECH PROJECT, 2020
** my_strcat
** File description:
** concatenates two strings
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int c = my_strlen(dest);

    while (src[i] != '\0') {
        dest[c + i] = src[i];
        i++;
    }
    dest[c + i] = '\0';
    return (dest);
}
