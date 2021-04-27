/*
** EPITECH PROJECT, 2020
** my_is_prime
** File description:
** 1 number prime, 0 number no prime
*/

int my_is_prime(int nb)
{
    int counter = 0;
    int i = 1;

    while (i <= nb) {
        if (nb % i == 0) {
            counter++;
        }
        if (counter > 2) {
            return (0);
        }
        i++;
    }
    if (counter == 2) {
        return (1);
    } else {
        return (0);
    }
}
