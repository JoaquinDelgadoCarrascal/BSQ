/*
** EPITECH PROJECT, 2020
** my_find_is_prime
** File description:
** returns the smallest prime number greater than, or equal to, the number given
*/

#include "my.h"

int  my_find_prime_sup(int nb)
{
    int evaluate;

    evaluate = my_is_prime(nb);
    if (evaluate == 1)
        return (nb);
    while (my_is_prime(nb) == 0)
        nb++;
    return (nb);
}
