/*
** EPITECH PROJECT, 2020
** my_str_isalpha
** File description:
** 1: alphabetical characters. 0: another type of character
*/

int my_str_isalpha(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            i++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z') {
            i++;
        } else {
            return (0);
        }
    }
    return (1);
}
