/*
** EPITECH PROJECT, 2023
** my_radar
** File description:
** my_radar
*/

#include "../include/my.h"

void display_area(sfSprite **sprite)
{
    int i = 0;
    sfRenderWindow *window = create_renderwindow(1920, 1080, 32, "my_radar");
    sfEvent event;
    sfTexture *bg_texture = BG_TEXTURE;
    sfSprite *bg_sprite = sfSprite_create();
    sfSprite_setTexture(bg_sprite, bg_texture, sfTrue);
    while (sfRenderWindow_isOpen(window)) {
        event_check(window, &event);
        sfRenderWindow_drawSprite(window, bg_sprite, NULL);
        i = 0;
        while (sprite[i]) {
            sfRenderWindow_drawSprite(window, sprite[i], NULL);
            i++;
        }
        sfRenderWindow_display(window);
    }
    sfRenderWindow_destroy(window);
}
