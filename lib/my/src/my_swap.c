/*
** EPITECH PROJECT, 2020
** my_swap
** File description:
** function that swaps the content of two integers
*/

void my_swap(int *a, int *b)
{
    int my_third_letter = *a;
    *a = *b;
    *b = my_third_letter;
}
