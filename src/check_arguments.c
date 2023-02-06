/*
** EPITECH PROJECT, 2023
** my_radar
** File description:
** my_radar
*/

#include "../include/my.h"

int check_arguments(int argc, char **argv)
{
    if (check_file(argc, argv) != 0 && check_file(argc, argv) != 2) {
        my_printf("%s: bad arguments: 0 given "
        "but 84 is required retry with -h\n", argv[0]);
        return 84;
    }
    if (check_file(argc, argv) == 2) {
        my_printf("Air traffic simulation panel USAGE\n"
                    "./my_radar [OPTIONS] path_to_script\n"
                    "path_to_script The path to the script file.\n"
                    "OPTIONS\n"
                    "-h print the usage and quit.\n"
                    "USER INTERACTIONS\n"
                    "‘L’ key enable/disable hitboxes and areas.\n"
                    "‘S’ key enable/disable sprites.\n");
        return 84;
    }
    return 0;
}
