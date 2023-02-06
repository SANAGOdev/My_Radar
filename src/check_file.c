/*
** EPITECH PROJECT, 2023
** my_radar
** File description:
** my_radar
*/

#include "../include/my.h"

int check_file(int argc, char **argv)
{
    if (argc != 2)
        return 84;
    if (my_strcmp(argv[1], "-h") == 0) {
        return 2;
    }
    FILE *fp = fopen(argv[1], "r");
    if (fp == NULL) {
        return 84;
    }
    return 0;
}
