/*
** EPITECH PROJECT, 2022
** my radar
** File description:
** my radar
*/

#include "my.h"

sfCircleShape *create_circle(sfVector2f pos, float radius)
{
    sfCircleShape *circle = sfCircleShape_create();
    sfCircleShape_setPosition(circle, pos);
    sfCircleShape_setRadius(circle, radius);
    return circle;
}