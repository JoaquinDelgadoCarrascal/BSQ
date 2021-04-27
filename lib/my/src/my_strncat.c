/*
** EPITECH PROJECT, 2020
** my_strncat
** File description:
** loncate n characters of the src string to the end of the dest string
*/

#include "my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int c = my_strlen(dest);

    while (i < nb) {
        dest[c + i] = src[i];
        i++;
    }
    dest[c + i] = '\0';
    return (dest);
}
