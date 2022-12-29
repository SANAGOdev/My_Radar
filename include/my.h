/*
** EPITECH PROJECT, 2022
** my radar
** File description:
** my radar
*/

#ifndef MY_
#define MY_

    #include <stdio.h>
    #include <stdlib.h>
    #include <stddef.h>
    #include <SFML/Graphics.h>
    #include <SFML/Window.h>

    sfRenderWindow *create_renderwindow(unsigned int x, unsigned int y, unsigned int bpp, char *title);
    sfCircleShape *create_circle(sfVector2f pos, float radius);

#endif /* !MY_ */
