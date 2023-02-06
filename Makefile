##
## EPITECH PROJECT, 2023
## my_radar
## File description:
## my_radar
##

LIB =   library/lib/my/my_putchar.c             \
    	library/lib/my/my_put_float.c           \
    	library/lib/my/my_put_hex_lower.c       \
    	library/lib/my/my_put_hex_upper.c       \
    	library/lib/my/my_putlong_float.c       \
    	library/lib/my/my_put_nbr.c             \
    	library/lib/my/my_put_octal.c           \
    	library/lib/my/my_putstr.c              \
    	library/lib/my/my_put_u.c               \
    	library/lib/my/my_strlen.c              \
    	library/lib/my/my_printf.c              \
    	library/lib/my/my_put_bin.c             \
    	library/lib/my/binary_convert.c         \
		library/lib/my/my_strcmp.c              \

SRC =   src/main.c                              \
		src/check_file.c                        \
		src/create_render_window.c              \
		src/my_radar.c                          \
		src/check_arguments.c                   \
		src/create_script_entity.c              \
		src/display_area.c                      \
		src/event_check.c                       \
		src/display_background.c                \
		src/cases.c                             \
		src/get_coord.c                         \

CC = gcc

OBJ	=	$(SRC:.c=.o) $(LIB:.c=.o)


NAME	=	my_radar

FLAGS	=	-lcsfml-window -lcsfml-graphics -lcsfml-system -lm

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(FLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
