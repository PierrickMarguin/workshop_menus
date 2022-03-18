##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRC			=	src/create/create_clock.c \
				src/create/create_struct.c \
				src/create/create_window.c \
				src/create/create_view.c \
				src/create/create_background.c \
				src/destroy/destroy_clock.c \
				src/destroy/destroy_struct.c \
				src/destroy/destroy_window.c \
				src/destroy/destroy_view.c \
				src/destroy/destroy_background.c \
				src/draw/draw.c \
				src/events/handle_event.c \
				src/events/event_closed.c \
				src/events/event_resized.c \
				src/events/event_mouse_pressed.c \
				src/events/event_mouse_released.c \
				src/events/event_mouse_moved.c \
				src/game_loop.c \
				src/main.c \
				workshop/src/create/create_menu.c \
				workshop/src/create/menu/copy_draw_tab.c \
				workshop/src/create/menu/copy_event_tab.c \
				workshop/src/create/menu/create_menu_1.c \
				workshop/src/create/menu/create_menu_2.c \
				workshop/src/create/menu/create_menu_3.c \
				workshop/src/create/menu/create_menu_4.c \
				workshop/src/draw/draw_menu.c \
				workshop/src/draw/draw_menu_background.c \
				workshop/src/events/handle_menu_event.c \
				workshop/src/events/move_to_menu.c

OBJ			=	$(SRC:.c=.o)

NAME		=	game

CFLAGS	 	=	-Wextra -Wall -Werror -W -Wstrict-prototypes -Wcast-function-type

CPPFLAGS	=	-I./include -I. -g

SFML		=	-lcsfml-graphics -lcsfml-system -lcsfml-window

all:	    $(NAME)

$(NAME):	    $(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS) $(CPPFLAGS) $(SFML)

clean:
	rm -f $(OBJ)
	find -name *~ -delete
	find -name *.o -delete

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

