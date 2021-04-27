/*
** EPITECH PROJECT, 2020
** my_strlowcase
** File description:
** puts every letter of every word in it in lowercase
*/

char *my_strlowcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] <= 'Z' && str[i] >= 'A') {
            str[i] = str[i] + 32;
        }
        i++;
    }
    return (str);
}
