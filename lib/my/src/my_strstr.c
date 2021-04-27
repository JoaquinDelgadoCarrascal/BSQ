/*
** EPITECH PROJECT, 2020
** my_strstr
** File description:
** str str
*/

#include <stdlib.h>
#include "my.h"

char *move_pointers(char *str, char const *to_find)
{
    int i = 0;
    int j = 0;
    int len = my_strlen(to_find);

    while (str[i] == to_find[j] && str[i] != '\0') {
        i++;
        j++;
    }
    if (j == len) {
        i = i - len;
        j = 0;
        while (j < i) {
            str++;
            j++;
        }
        return (str);
    }
    return (NULL);
}

char *my_strstr(char *str , char const *to_find)
{
    int i = 0;

    while (str[i] != '\0') {
        if (move_pointers(str, to_find) != NULL) {
            return (str);
        }
        i++;
    }
    return (NULL);
}
