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
    #include <unistd.h>
    #include <dirent.h>
    #include <SFML/Graphics.h>
    #include <SFML/Window.h>

    /* variables */
    #define BG_TEXTURE sfTexture_createFromFile("assets/map.jpg", NULL);
    #define PLANE_TEXTURE sfTexture_createFromFile("assets/plane.png", NULL);

    /* library functions */
    int my_printf(const char* format, ...);
    int my_put_float(double nb);
    int my_putlong_float(long nb1, char *basic);
    int my_put_nbr(int nb1);
    void my_putchar(char c);
    int my_putstr(char const *arr);
    int my_strlen(char const *arr);
    int my_printf(const char* format, ...);
    void my_put_hex_upper(int nb);
    void my_put_hex_lower(int nb);
    int my_put_octal(int nb);
    void my_put_bin(unsigned int n);
    char *binary(unsigned n, char buffer[]);
    void my_put_u(unsigned int nb);
    int conditions01(const char* format, int i, va_list list);
    int conditions02(const char* format, int i, va_list list);
    int my_second_float(double nb, long d2_2, double d2, int i);
    int my_strcmp(char const *s1, char const *s2);

    /* project functions */
    sfRenderWindow *create_renderwindow(unsigned int x, unsigned int y,
                                        unsigned int bpp, char *title);
    int my_radar(int argc, char **path);
    int check_file(int argc, char **argv);
    int check_arguments(int argc, char **argv);
    void create_script_entity(char **argv, sfSprite **sprite);
    void display_area(sfSprite **sprite);
    void event_check(sfRenderWindow *window, sfEvent *event);
    void display_background(sfRenderWindow *window);
    void print(char *str);
    void case_a(char *line, int i, sfTexture *plane_texture, sfSprite **sprite);
    void case_t(char *line, int i, sfTexture *tower_texture, sfSprite **sprite);
    void get_coord(int *x, int *y, char *line);

#endif /* !MY_ */
