/*
** EPITECH PROJECT, 2022
** my radar
** File description:
** my radar
*/

#include "my.h"

int main(int argc, char const **argv)
{
    sfRenderWindow *window = create_renderwindow(850, 600, 32, "ma fenetre");
    sfVector2f vector1 = {100, 150};
    sfVector2f vector2 = {325, 25};
    sfCircleShape *circle1 = create_circle(vector1, 150);
    sfCircleShape *circle2 = create_circle(vector2, 150);
    sfEvent event;

    if (!window)
        return 84;

    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed) {
                sfRenderWindow_close(window);
            }
        }
        // Window settings
        sfRenderWindow_display(window);
        sfRenderWindow_clear(window, sfBlack);

        // First circle settings
        sfRenderWindow_drawCircleShape(window, circle1, NULL);
        sfCircleShape_setOutlineThickness(circle1, 1);
        sfCircleShape_setOutlineColor(circle1, sfWhite);
        sfCircleShape_setFillColor(circle1, sfTransparent);

        // Second circle settings
        sfRenderWindow_drawCircleShape(window, circle2, NULL);
        sfCircleShape_setOutlineThickness(circle2, 1);
        sfCircleShape_setOutlineColor(circle2, sfWhite);
        sfCircleShape_setFillColor(circle2, sfTransparent);
    }
    sfRenderWindow_destroy(window);
    return 0;
}
