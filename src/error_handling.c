/*
** EPITECH PROJECT, 2020
** fs_understand_return_of_read
** File description:
** checks if the read was okay
*/

#include "bsq.h"

int fs_understand_return_of_read(int fd, char *buf, int size)
{
    int bytes = read(fd, buf, size);

    if (bytes == -1)
        return (84);
    if (bytes < size)
        return(84);
    return (0);
}