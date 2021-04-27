/*
** EPITECH PROJECT, 2020
** my_strcmp
** File description:
** Reproduce the behavior of the str cmp function
*/

int length_one(char const *n)
{
    int i = 0;

    while (n[i]) {
        i++;
    }
    return (i);
}

int compare_string_one(char const *n1, char const *n2)
{
    int i = 0;

    while (n1[i] && n2[i]) {
        if (n1[i] != n2[i]) {
            return (n1[i] - n2[i]);
        }
        i++;
    }
    return (0);
}

int my_strcmp(char const *n1, char const *n2)
{
    int len = compare_string_one(n1, n2);
    int lenn1 = length_one(n1);
    int lenn2 = length_one(n2);

    if (len == 0 && lenn1 < lenn2) {
        len = 0 - n2[lenn2 + 1];
    } else if (len == 0 && lenn1 > lenn2) {
        len = n1[lenn1 + 1];
    }
    return (len);
}
