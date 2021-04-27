/*
** EPITECH PROJECT, 2020
** my_str_isprintable
** File description:
** 1: printable characters. 0: otherwise.
*/

int my_str_isprintable(char const *str)
{
    int i = 0;
    int result = 1;

    while (str[i]) {
        if (str[i] < 32 || str[i] > 126)
            result = 0;
        i++;
    }
    return (result);
}
