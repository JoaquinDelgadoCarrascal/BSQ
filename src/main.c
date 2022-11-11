/*
** EPITECH PROJECT, 2020
** header epitech
** File description:
** header epitech
*/

#include "bsq.h"

int main(int argc, char **argv)
{
    int nbr_bytes = size_of_bytes(argv);
    char *buf = malloc(sizeof(char) * (nbr_bytes + 1));
    int fd = 0;

    if (buf == NULL)
        return (84);
    if (nbr_bytes == 0) {
        my_putstr("Error: empty map\n");
        return (84);
    }
    if (argc != 2)
        return (84);
    fd = open (argv[1], O_RDONLY);
    if (fd == -1)
        return (84);
    if (fs_understand_return_of_read(fd, buf, nbr_bytes) == 84)
        return (84);
    close(fd);
    buf[nbr_bytes] = '\0';
    create_matrix(buf);
    return (0);
}