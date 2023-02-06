/*
** EPITECH PROJECT, 2023
** my_radar
** File description:
** my_radar
*/

#include "../include/my.h"

void create_script_entity(char **argv, sfSprite **sprite)
{
    int i = 0;
    sfTexture *plane_texture = PLANE_TEXTURE;
    sfTexture *tower_texture =
        sfTexture_createFromFile("assets/tower.png", NULL);
    char *file_name = malloc(sizeof(char) * sizeof(argv[1]));
    file_name = argv[1];
    FILE *fp = fopen(file_name, "r");
    char line[256];
    while (fgets(line, sizeof(line), fp)) {
        if (line[0] == 'A') {
            case_a(line, i, plane_texture, sprite);
        }
        if (line[0] == 'T') {
            case_t(line, i, tower_texture, sprite);
        }
        i++;
    }
    fclose(fp);
}
