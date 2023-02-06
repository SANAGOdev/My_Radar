/*
** EPITECH PROJECT, 2023
** my_radar
** File description:
** my_radar
*/

#include "../include/my.h"

void display_background(sfRenderWindow *window)
{
    sfTexture *bg_texture = BG_TEXTURE;
    sfSprite *bg_sprite = sfSprite_create();
    sfSprite_setTexture(bg_sprite, bg_texture, sfTrue);
    sfRenderWindow_drawSprite(window, bg_sprite, NULL);
}
