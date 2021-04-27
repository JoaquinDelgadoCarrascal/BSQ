/*
** EPITECH PROJECT, 2020
** my_sup_str_word_to_array
** File description:
** my_sup_str_word_to_array improved
*/

#include <stdlib.h>
#include "my.h"

int verify_char(char n)
{
    if ((n > 47 && n < 58) || (n > 64 && n < 91) || (n > 96 && n < 123))
        return (1);
    else
        return (0);
}

int count_words(char *str)
{
    int i = 0;
    int n = 0;

    while (str[i] != '\0') {
        if (verify_char(str[i]) == 1 && verify_char(str[i + 1]) == 0)
            n++;
        i++;
    }
    return (n);
}

int calculate_length(char *str, int i)
{
    int len = 0;

    while (verify_char(str[i]) == 1) {
        i++;
        len++;
    }
    if (verify_char(str[i] == 2)) {
        i++;
        len++;
    }
    return (len);
}

int the_operation(int a, char *result, char *str)
{
    int b = 0;

    if (verify_char(str[a]) == 1) {
        while (verify_char(str[a]) == 1) {
            result[b] = str[a];
            a++;
            b++;
        }
        return (a);
    } else if (verify_char(str[a]) == 2) {
        result[0] = str[a];
        a++;
        return (a);
    }
    return (a);
}

char **my_sup_str_word_to_array(char *str)
{
    int a = 0;
    int c = 0;
    char **result = malloc(sizeof(char *) * (count_words(str) + 1));

    if (result == NULL)
        return (NULL);
    while (c <= count_words(str) && a != my_strlen(str)) {
        while (verify_char(str[a]) == 0) {
            a++;
        }
        result[c] = malloc(sizeof(char) * (calculate_length(str, a) + 2));
        if (result[c] == NULL)
            return (NULL);
        if (verify_char(str[a]) == 1 || verify_char(str[a]) == 2) {
            a = the_operation(a, result[c], str);
            c++;
        }
    }
    c++;
    return (result);
}
