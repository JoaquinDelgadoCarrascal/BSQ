/*
** EPITECH PROJECT, 2020
** my_strncmp
** File description:
** function strn cmp
*/

int find_length(char const *str, int n)
{
    int i = 0;

    while (str[i] && i < n) {
        i++;
    }
    return (i);
}

int compare_string(char const *s1, char const *s2, int n)
{
    int i = 0;

    while (s1[i] && s2[i] && i < n) {
        if (s1[i] != s2[i]) {
            return (s1[i] - s2[i]);
        }
        i++;
    }
    return (0);
}

int my_strncmp(char const *s1, char const *s2, int n)
{
    int len = compare_string(s1, s2, n);
    int s1_l = find_length(s1, n);
    int s2_l = find_length(s2, n);

    if (len == 0 && s1_l < s2_l) {
        len = 0 - s2[s1_l + 1];
    } else if (len == 0 && s1_l > s2_l) {
        len = s1[s2_l];
    }
    return (len);
}
