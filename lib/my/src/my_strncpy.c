/*
** EPITECH PROJECT, 2020
** my_strncpy
** File description:
** function copies n characters from a string into another
*/

char *my_strncpy(char *dest, char *src, int n)
{
    int i = 0;

    while (i < n) {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}
