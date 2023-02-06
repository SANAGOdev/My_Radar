/*
** EPITECH PROJECT, 2023
** my_radar
** File description:
** my_radar
*/

#include "../include/my.h"

void get_coord(int *x, int *y, char *line)
{
    char xc[5] = {0}, yc[5] = {0};
    int j = 2, k = 0;
    while (line[j] != ' ') {
        xc[k] = line[j];
        j++;
        k++;
    }
    j++;
    k = 0;
    while (line[j] != ' ') {
        yc[k] = line[j];
            j++;
            k++;
    }
    *x = atoi(xc);
    *y = atoi(yc);
}
