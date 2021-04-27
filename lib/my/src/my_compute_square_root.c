/*
** EPITECH PROJECT, 2020
** my_compute_square_root
** File description:
** square root
*/

int my_compute_square_root(int nb)
{
    int i;
    int rest;

    i = 0;
    rest = 0;
    while (rest < nb) {
        rest = i * i;
        if (rest == nb)
            return (i);
        if (rest > nb)
            return (0);
        i++;
    }
    return (0);
}
