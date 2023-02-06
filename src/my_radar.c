/*
** EPITECH PROJECT, 2023
** my_radar
** File description:
** my_radar
*/

#include "../include/my.h"

int my_radar(int argc, char **argv)
{
    sfSprite *tablo[256];

    if (check_arguments(argc, argv) != 0) {
        return 84;
    }
    if (check_arguments(argc, argv) == 0) {
        create_script_entity(argv, tablo);
        display_area(tablo);
        return 0;
    }
}
