/*
** EPITECH PROJECT, 2023
** my_radar
** File description:
** my_radar
*/

#include "../include/my.h"

void case_a(char *line, int i, sfTexture *plane_texture, sfSprite **sprite)
{
    int x, y;
    get_coord(&x, &y, line);
    sfSprite *plane = sfSprite_create();
    sfVector2f position = {x, y};
    sfVector2f plane_scale = {0.2, 0.2};
    sfSprite_setTexture(plane, plane_texture, sfTrue);
    sfSprite_setPosition(plane, position);
    sfSprite_setScale(plane, plane_scale);
    if (!plane)
        return;
    sprite[i] = plane;
}

void case_t(char *line, int i, sfTexture *tower_texture, sfSprite **sprite)
{
    int x, y;
    get_coord(&x, &y, line);
    sfSprite *tower = sfSprite_create();
    sfVector2f position = {x, y};
    sfVector2f tower_scale = {0.15, 0.15};
    sfSprite_setTexture(tower, tower_texture, sfTrue);
    sfSprite_setPosition(tower, position);
    sfSprite_setScale(tower, tower_scale);
    if (!tower)
        return;
    sprite[i] = tower;
}
