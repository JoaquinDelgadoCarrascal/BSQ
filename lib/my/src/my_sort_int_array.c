/*
** EPITECH PROJECT, 2020
** my_sort_int_array
** File description:
** sorts an integer array in ascending order, pointer and size
*/

void  my_sort_int_array(int *tab, int size)
{
    int i = 0;
    int j = 0;
    int temp;

    while (j <= size - 1) {
        while (i < size - 1) {
            if (tab[i] > tab[i +1]) {
                temp = tab[i];
                tab[i] = tab[i +1];
                tab[i +1] = temp;
            }
            i++;
        }
        i = 0;
        j++;
    }
}
