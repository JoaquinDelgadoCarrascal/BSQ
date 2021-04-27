/*
** EPITECH PROJECT, 2020
** my_strcapitalize
** File description:
** capitalizes the first letter of each word
*/

char *my_strcapitalize(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 65 && str[i] <= 89) {
            str[i] = str[i] + 32;
        } else if (str[0] >= 97 && str[0] <= 122) {
            str[0] = str[0] - 32;
        }
        i++;
    }
    i = 1;
    while (str[i] != '\0') {
        if (str[i - 1] >= 32 && str[i - 1] <= 47 && str[i] != ' ') {
            str[i] = str[i] - 32;
        }
        i++;
    }
    return (str);
}
