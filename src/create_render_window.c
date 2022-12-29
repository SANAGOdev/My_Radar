/*
** EPITECH PROJECT, 2022
** create render window
** File description:
** create render window
*/

#include "my.h"

sfRenderWindow *create_renderwindow(unsigned int x, unsigned int y, unsigned int bpp, char *title)
{
    sfVideoMode videoMode = {x, y, bpp};
    return (sfRenderWindow_create(videoMode, title, sfClose | sfResize, NULL));
}
