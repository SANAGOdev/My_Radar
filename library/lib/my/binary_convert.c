/*
** EPITECH PROJECT, 2022
** binary convert
** File description:
** binary convert
*/

#include "../../include/my.h"

char *binary(unsigned n, char buffer[])
{
    char *ptr = buffer + 32;
    do {
        *(--ptr) = (n & 1) + '0';
        n >>= 1;
    } while (n);
    return ptr;
}
